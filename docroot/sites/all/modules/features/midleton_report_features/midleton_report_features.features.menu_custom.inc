<?php
/**
 * @file
 * midleton_report_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function midleton_report_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-user-tools.
  $menus['menu-user-tools'] = array(
    'menu_name' => 'menu-user-tools',
    'title' => 'User tools',
    'description' => 'Student Reports',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Student Reports');
  t('User tools');

  return $menus;
}
