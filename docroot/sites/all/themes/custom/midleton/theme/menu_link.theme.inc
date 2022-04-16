<?php
/**
 * @file Theme menu link to add class.
 */

function midleton_menu_link($variables){
  $element = $variables['element'];
  $sub_menu = '';

  $class = drupal_clean_css_identifier($element['#href']);
  $element['##localized_options']['attributes']['class'][] = $class;
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}