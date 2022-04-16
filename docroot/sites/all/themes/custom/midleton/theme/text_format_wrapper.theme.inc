<?php

/**
* Implements theme_text_format_wrapper().
*/
function midleton_text_format_wrapper($variables) {
$element = $variables['element'];
$output = '<div class="text-format-wrapper form-item">';
  $output .= '<div class="label-wrapper">';
  $output .= '<label>'.$element['#title'].'</label>';
  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . '</div>';
  }
  $output .= '</div>';
  $output .= $element['#children'];

  $output .= "</div>\n";

return $output;
}