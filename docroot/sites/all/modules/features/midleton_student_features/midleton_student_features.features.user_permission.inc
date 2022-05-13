<?php

/**
 * @file
 * midleton_student_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function midleton_student_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'add school years'.
  $permissions['add school years'] = array(
    'name' => 'add school years',
    'roles' => array(),
    'module' => 'midleton_base',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_student_observaciones'.
  $permissions['create field_student_observaciones'] = array(
    'name' => 'create field_student_observaciones',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'eck add student bundles'.
  $permissions['eck add student bundles'] = array(
    'name' => 'eck add student bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add student student entities'.
  $permissions['eck add student student entities'] = array(
    'name' => 'eck add student student entities',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer student bundles'.
  $permissions['eck administer student bundles'] = array(
    'name' => 'eck administer student bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer student student entities'.
  $permissions['eck administer student student entities'] = array(
    'name' => 'eck administer student student entities',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete student bundles'.
  $permissions['eck delete student bundles'] = array(
    'name' => 'eck delete student bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete student student entities'.
  $permissions['eck delete student student entities'] = array(
    'name' => 'eck delete student student entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit student bundles'.
  $permissions['eck edit student bundles'] = array(
    'name' => 'eck edit student bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit student student entities'.
  $permissions['eck edit student student entities'] = array(
    'name' => 'eck edit student student entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list student bundles'.
  $permissions['eck list student bundles'] = array(
    'name' => 'eck list student bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list student student entities'.
  $permissions['eck list student student entities'] = array(
    'name' => 'eck list student student entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view student bundles'.
  $permissions['eck view student bundles'] = array(
    'name' => 'eck view student bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view student student entities'.
  $permissions['eck view student student entities'] = array(
    'name' => 'eck view student student entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_student_observaciones'.
  $permissions['edit field_student_observaciones'] = array(
    'name' => 'edit field_student_observaciones',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_student_observaciones'.
  $permissions['edit own field_student_observaciones'] = array(
    'name' => 'edit own field_student_observaciones',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'manage student properties'.
  $permissions['manage student properties'] = array(
    'name' => 'manage student properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_student_observaciones'.
  $permissions['view field_student_observaciones'] = array(
    'name' => 'view field_student_observaciones',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_student_observaciones'.
  $permissions['view own field_student_observaciones'] = array(
    'name' => 'view own field_student_observaciones',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
