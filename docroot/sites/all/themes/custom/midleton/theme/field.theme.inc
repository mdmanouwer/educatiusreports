<?php

/**
 * @file
 * Contains the theme function override for 'field'.
 */

/**
 * Returns HTML for a field.
 *
 * @ingroup themeable
 */
function midleton_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  $instance = field_info_instance($variables['element']['#entity_type'], $variables['element']['#field_name'], $variables['element']['#bundle']);

  if (!$variables['label_hidden']) {
    $output .= '<div class="field__label"' . $variables['title_attributes'] . '>';
    $output .= '<div class="label">'. $variables['label'] . '</div>';
    $output .= '<div class="description">'.$instance['description'].'</div>';
    $output .= '</div>';
  }

  // Render the items.
  $output .= '<div class="field__items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field__item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}
