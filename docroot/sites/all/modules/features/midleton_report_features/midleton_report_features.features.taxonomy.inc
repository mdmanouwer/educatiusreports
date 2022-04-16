<?php
/**
 * @file
 * midleton_report_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function midleton_report_features_taxonomy_default_vocabularies() {
  return array(
    'ptm_category' => array(
      'name' => 'PTM Category',
      'machine_name' => 'ptm_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
