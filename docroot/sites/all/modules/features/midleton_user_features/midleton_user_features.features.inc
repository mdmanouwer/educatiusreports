<?php
/**
 * @file
 * midleton_user_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midleton_user_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function midleton_user_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
