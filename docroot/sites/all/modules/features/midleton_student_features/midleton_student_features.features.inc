<?php

/**
 * @file
 * midleton_student_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function midleton_student_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function midleton_student_features_eck_bundle_info() {
  $items = array(
    'student_student' => array(
      'machine_name' => 'student_student',
      'entity_type' => 'student',
      'name' => 'student',
      'label' => 'Student',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function midleton_student_features_eck_entity_type_info() {
  $items = array(
    'student' => array(
      'name' => 'student',
      'label' => 'Student',
      'properties' => array(),
    ),
  );
  return $items;
}
