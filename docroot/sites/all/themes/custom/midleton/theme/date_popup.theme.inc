<?php
/**
* Format a date popup element.
*
* Use a class that will float date and time next to each other.
*/
function midleton_date_popup($vars) {
$element = $vars['element'];
$attributes = !empty($element['#wrapper_attributes']) ? $element['#wrapper_attributes'] : array('class' => array());
$attributes['class'][] = 'container-inline-date';
// If there is no description, the floating date
// elements need some extra padding below them.
$wrapper_attributes = array('class' => array('date-padding'));
if (empty($element['date']['#description'])) {
  $wrapper_attributes['class'][] = 'clearfix';
}
// Add an wrapper to mimic the way a single value field works,
// for ease in using #states.
if (isset($element['#children'])) {
$element['#children'] = '<div id="' . $element['#id'] . '" ' . drupal_attributes($wrapper_attributes) . '>' . $element['#children'] . '</div>';
}
return '<div ' . drupal_attributes($attributes) . '>' . theme('form_element', $element) . '</div>';
}
