<?php
/**
 * @file
 * midleton_student_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function midleton_student_features_taxonomy_default_vocabularies() {
  return array(
    'school_year' => array(
      'name' => 'School year',
      'machine_name' => 'school_year',
      'description' => 'Curso académico',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
