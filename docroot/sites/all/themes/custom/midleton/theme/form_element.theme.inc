<?php

function midleton_form_element($variables) {

  if ('midleton/message-settings' == current_path() || 'send-email' == arg(0)) {
    return theme_form_element($variables);
  }
  elseif (path_is_admin(current_path())) {
    return theme_form_element($variables);
  }
  else {
    $element = &$variables['element'];

    // This function is invoked as theme wrapper, but the rendered form element
    // may not necessarily have been processed by form_builder().
    $element += array(
      '#title_display' => 'before',
    );

    // Add element #id for #type 'item'.
    if (isset($element['#markup']) && !empty($element['#id'])) {
      $attributes['id'] = $element['#id'];
    }
    // Add element's #type and #name as class to aid with JS/CSS selectors.
    $attributes['class'] = array('form-item');
    if (!empty($element['#type'])) {
      $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
    }
    if (!empty($element['#name'])) {
      $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(
          ' ' => '-',
          '_' => '-',
          '[' => '-',
          ']' => ''
        ));
    }
    // Add a class for disabled elements to facilitate cross-browser styling.
    if (!empty($element['#attributes']['disabled'])) {
      $attributes['class'][] = 'form-disabled';
    }
    $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

    // If #title is not set, we don't display any label or required marker.
    if (!isset($element['#title'])) {
      $element['#title_display'] = 'none';
    }
    $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
    $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';


    switch ($element['#title_display']) {
      case 'before':
      case 'invisible':
        if (isset($element['#entity_type']) && $element['#entity_type'] == 'node') {
          if (!isset($element['#theme']) || $element['#theme'] != "textarea") {
            $output .= '<span class="label-wrapper">' . theme('form_element_label', $variables);
          }
          if (!empty($element['#description'])) {
            $output .= '<div class="description">' . $element['#description'] . "</div>\n";
          }
          $output .= '</span>';
          $output .= '<span class="element-wrapper">' . $prefix . $element['#children'] . $suffix . "</span>\n";

        }
        else {
          $output .= ' ' . theme('form_element_label', $variables);
          $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
        }
        break;

      case 'after':
        if (isset($element['#entity_type']) && $element['#entity_type'] == 'node') {
          if ($element['#type'] != "radio") {
            $output .= '<span class="label-wrapper">';
          }
          if ($element['#type'] == "checkbox" && isset($element['#on_value']) && isset($element['#entity_type']) && isset($element['#bundle'])) {
            $field_instance = field_info_instance($element['#entity_type'], $element['#field_name'], $element['#bundle']);
            $output .= '<label>' . $field_instance['label'] . '</label>';
          }
          elseif ($element['#type'] == "radio") {
            // Dont do anything.
          }
          else {
            $output .= ' ' . theme('form_element_label', $variables) . "\n";
          }
          if (!empty($element['#description'])) {
            $output .= '<div class="description">' . $element['#description'] . "</div>\n";
          }
          if ($element['#type'] != "radio") {
            $output .= '</span>';
            $output .= '<span class="element-wrapper">';
          }

          if ($element['#type'] == "checkbox" && isset($element['#on_value']) && isset($element['#entity_type']) && isset($element['#bundle'])) {
            $output .= '<div class="single-checkbox">';
            $output .= $prefix . $element['#children'] . $suffix;
            $output .= ' ' . theme('form_element_label', $variables) . "\n";
            $output .= '</div>';
          }
          elseif ($element['#type'] == "radio") {
            $output .= $prefix . $element['#children'] . $suffix;
            $output .= ' ' . theme('form_element_label', $variables) . "\n";
          }
          else {
            $output .= $prefix . $element['#children'] . $suffix;
          }
          $output .= '</span>';
        }
        else {
          $output .= ' ' . $prefix . $element['#children'] . $suffix;
          $output .= ' ' . theme('form_element_label', $variables) . "\n";

        }
        break;

      case 'none':
      case 'attribute':
        // Output no label and no required marker, only the children.

        $output .= '<span class="element-wrapper">' . $prefix . $element['#children'] . $suffix . "</span>\n";
        if (!empty($element['#description'])) {
          $output .= '<div class="description">' . $element['#description'] . "</div>\n";
        }
        break;
    }

    $output .= "</div>\n";
  }
  return $output;
}