<?php

/**
 * @file
 * midleton_report_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midleton_report_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function midleton_report_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function midleton_report_features_node_info() {
  $items = array(
    'parent_teacher_meeting' => array(
      'name' => t('PTM'),
      'base' => 'node_content',
      'description' => t('Parent Teacher Meeting'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'report_1' => array(
      'name' => t('Report #1'),
      'base' => 'node_content',
      'description' => t('First report'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'report_2' => array(
      'name' => t('Report #2'),
      'base' => 'node_content',
      'description' => t('Second report'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'report_3' => array(
      'name' => t('Report #3'),
      'base' => 'node_content',
      'description' => t('Third report'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
