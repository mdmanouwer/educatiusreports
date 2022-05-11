<?php

/**
 * @file
 * midleton_user_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function midleton_user_features_user_default_roles() {
  $roles = array();

  // Exported role: Chief Coordinator.
  $roles['Chief Coordinator'] = array(
    'name' => 'Chief Coordinator',
    'weight' => 4,
  );

  // Exported role: Coordinator.
  $roles['Coordinator'] = array(
    'name' => 'Coordinator',
    'weight' => 3,
  );

  // Exported role: Midleton School.
  $roles['Midleton School'] = array(
    'name' => 'Midleton School',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
