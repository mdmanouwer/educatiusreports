<?php
/**
 * @file
 * midleton_report_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function midleton_report_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_comments_chief_coordinator'.
  $permissions['create field_comments_chief_coordinator'] = array(
    'name' => 'create field_comments_chief_coordinator',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pdf'.
  $permissions['create field_pdf'] = array(
    'name' => 'create field_pdf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_comments_chief_coordinator'.
  $permissions['edit field_comments_chief_coordinator'] = array(
    'name' => 'edit field_comments_chief_coordinator',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pdf'.
  $permissions['edit field_pdf'] = array(
    'name' => 'edit field_pdf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_comments_chief_coordinator'.
  $permissions['edit own field_comments_chief_coordinator'] = array(
    'name' => 'edit own field_comments_chief_coordinator',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pdf'.
  $permissions['edit own field_pdf'] = array(
    'name' => 'edit own field_pdf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_comments_chief_coordinator'.
  $permissions['view field_comments_chief_coordinator'] = array(
    'name' => 'view field_comments_chief_coordinator',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pdf'.
  $permissions['view field_pdf'] = array(
    'name' => 'view field_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_comments_chief_coordinator'.
  $permissions['view own field_comments_chief_coordinator'] = array(
    'name' => 'view own field_comments_chief_coordinator',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pdf'.
  $permissions['view own field_pdf'] = array(
    'name' => 'view own field_pdf',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  return $permissions;
}
