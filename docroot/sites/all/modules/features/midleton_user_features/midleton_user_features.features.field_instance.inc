<?php

/**
 * @file
 * midleton_user_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function midleton_user_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_superior'.
  $field_instances['user-user-field_user_superior'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_superior',
    'label' => 'Assigned Manager',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Assigned Manager');

  return $field_instances;
}
