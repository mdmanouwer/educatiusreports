<?php
/**
 * @file
 * midleton_email_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function midleton_email_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function midleton_email_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function midleton_email_features_eck_bundle_info() {
  $items = array(
    'document_document' => array(
      'machine_name' => 'document_document',
      'entity_type' => 'document',
      'name' => 'document',
      'label' => 'Document',
      'config' => array(),
    ),
    'email_email' => array(
      'machine_name' => 'email_email',
      'entity_type' => 'email',
      'name' => 'email',
      'label' => 'Email',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function midleton_email_features_eck_entity_type_info() {
  $items = array(
    'document' => array(
      'name' => 'document',
      'label' => 'Document',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'email' => array(
      'name' => 'email',
      'label' => 'Email',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
      ),
    ),
  );
  return $items;
}
