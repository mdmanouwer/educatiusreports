<?php

/**
 * @file
 * midleton_email_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function midleton_email_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer reroute email'.
  $permissions['administer reroute email'] = array(
    'name' => 'administer reroute email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'reroute_email',
  );

  // Exported permission: 'create field_email'.
  $permissions['create field_email'] = array(
    'name' => 'create field_email',
    'roles' => array(
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email_reference'.
  $permissions['create field_email_reference'] = array(
    'name' => 'create field_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_email_sent'.
  $permissions['create field_email_sent'] = array(
    'name' => 'create field_email_sent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_student_email_reference'.
  $permissions['create field_student_email_reference'] = array(
    'name' => 'create field_student_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'eck add document bundles'.
  $permissions['eck add document bundles'] = array(
    'name' => 'eck add document bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add document document entities'.
  $permissions['eck add document document entities'] = array(
    'name' => 'eck add document document entities',
    'roles' => array(
      'Chief Coordinator' => 'Chief Coordinator',
      'Coordinator' => 'Coordinator',
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add email bundles'.
  $permissions['eck add email bundles'] = array(
    'name' => 'eck add email bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add email email entities'.
  $permissions['eck add email email entities'] = array(
    'name' => 'eck add email email entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer document bundles'.
  $permissions['eck administer document bundles'] = array(
    'name' => 'eck administer document bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer document document entities'.
  $permissions['eck administer document document entities'] = array(
    'name' => 'eck administer document document entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer email bundles'.
  $permissions['eck administer email bundles'] = array(
    'name' => 'eck administer email bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer email email entities'.
  $permissions['eck administer email email entities'] = array(
    'name' => 'eck administer email email entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete document bundles'.
  $permissions['eck delete document bundles'] = array(
    'name' => 'eck delete document bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete document document entities'.
  $permissions['eck delete document document entities'] = array(
    'name' => 'eck delete document document entities',
    'roles' => array(
      'Chief Coordinator' => 'Chief Coordinator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete email bundles'.
  $permissions['eck delete email bundles'] = array(
    'name' => 'eck delete email bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete email email entities'.
  $permissions['eck delete email email entities'] = array(
    'name' => 'eck delete email email entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit document bundles'.
  $permissions['eck edit document bundles'] = array(
    'name' => 'eck edit document bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit document document entities'.
  $permissions['eck edit document document entities'] = array(
    'name' => 'eck edit document document entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit email bundles'.
  $permissions['eck edit email bundles'] = array(
    'name' => 'eck edit email bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit email email entities'.
  $permissions['eck edit email email entities'] = array(
    'name' => 'eck edit email email entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list document bundles'.
  $permissions['eck list document bundles'] = array(
    'name' => 'eck list document bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list document document entities'.
  $permissions['eck list document document entities'] = array(
    'name' => 'eck list document document entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list email bundles'.
  $permissions['eck list email bundles'] = array(
    'name' => 'eck list email bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list email email entities'.
  $permissions['eck list email email entities'] = array(
    'name' => 'eck list email email entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view document bundles'.
  $permissions['eck view document bundles'] = array(
    'name' => 'eck view document bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view document document entities'.
  $permissions['eck view document document entities'] = array(
    'name' => 'eck view document document entities',
    'roles' => array(
      'Chief Coordinator' => 'Chief Coordinator',
      'Coordinator' => 'Coordinator',
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view email bundles'.
  $permissions['eck view email bundles'] = array(
    'name' => 'eck view email bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view email email entities'.
  $permissions['eck view email email entities'] = array(
    'name' => 'eck view email email entities',
    'roles' => array(
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit field_email'.
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email_reference'.
  $permissions['edit field_email_reference'] = array(
    'name' => 'edit field_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_email_sent'.
  $permissions['edit field_email_sent'] = array(
    'name' => 'edit field_email_sent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_student_email_reference'.
  $permissions['edit field_student_email_reference'] = array(
    'name' => 'edit field_student_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own field_email'.
  $permissions['edit own field_email'] = array(
    'name' => 'edit own field_email',
    'roles' => array(
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email_reference'.
  $permissions['edit own field_email_reference'] = array(
    'name' => 'edit own field_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_email_sent'.
  $permissions['edit own field_email_sent'] = array(
    'name' => 'edit own field_email_sent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_student_email_reference'.
  $permissions['edit own field_student_email_reference'] = array(
    'name' => 'edit own field_student_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'manage document properties'.
  $permissions['manage document properties'] = array(
    'name' => 'manage document properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage email properties'.
  $permissions['manage email properties'] = array(
    'name' => 'manage email properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'send emails'.
  $permissions['send emails'] = array(
    'name' => 'send emails',
    'roles' => array(
      'Midleton School' => 'Midleton School',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view field_email'.
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email_reference'.
  $permissions['view field_email_reference'] = array(
    'name' => 'view field_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_email_sent'.
  $permissions['view field_email_sent'] = array(
    'name' => 'view field_email_sent',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_student_email_reference'.
  $permissions['view field_student_email_reference'] = array(
    'name' => 'view field_student_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own field_email'.
  $permissions['view own field_email'] = array(
    'name' => 'view own field_email',
    'roles' => array(
      'Midleton School' => 'Midleton School',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email_reference'.
  $permissions['view own field_email_reference'] = array(
    'name' => 'view own field_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_email_sent'.
  $permissions['view own field_email_sent'] = array(
    'name' => 'view own field_email_sent',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_student_email_reference'.
  $permissions['view own field_student_email_reference'] = array(
    'name' => 'view own field_student_email_reference',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
