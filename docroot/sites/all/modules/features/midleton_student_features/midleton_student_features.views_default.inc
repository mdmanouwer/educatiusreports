<?php

/**
 * @file
 * midleton_student_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function midleton_student_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_student';
  $view->human_name = 'Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_target_id']['id'] = 'field_documents_target_id';
  $handler->display->display_options['relationships']['field_documents_target_id']['table'] = 'field_data_field_documents';
  $handler->display->display_options['relationships']['field_documents_target_id']['field'] = 'field_documents_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['id'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['table'] = 'eck_student';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['field'] = 'reverse_field_student_reference_node';
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'First name';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Coordinator */
  $handler->display->display_options['fields']['field_coordinator']['id'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['settings'] = array(
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Agent Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Student: School */
  $handler->display->display_options['fields']['field_school_name']['id'] = 'field_school_name';
  $handler->display->display_options['fields']['field_school_name']['table'] = 'field_data_field_school_name';
  $handler->display->display_options['fields']['field_school_name']['field'] = 'field_school_name';
  $handler->display->display_options['fields']['field_school_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: School year */
  $handler->display->display_options['fields']['field_academic_course']['id'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['field'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Comments */
  $handler->display->display_options['fields']['field_student_observaciones']['id'] = 'field_student_observaciones';
  $handler->display->display_options['fields']['field_student_observaciones']['table'] = 'field_data_field_student_observaciones';
  $handler->display->display_options['fields']['field_student_observaciones']['field'] = 'field_student_observaciones';
  $handler->display->display_options['fields']['field_student_observaciones']['label'] = 'Observations';
  $handler->display->display_options['fields']['field_student_observaciones']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Documents */
  $handler->display->display_options['fields']['field_documents']['id'] = 'field_documents';
  $handler->display->display_options['fields']['field_documents']['table'] = 'field_data_field_documents';
  $handler->display->display_options['fields']['field_documents']['field'] = 'field_documents';
  $handler->display->display_options['fields']['field_documents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documents']['settings'] = array(
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_documents']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_documents']['delta_offset'] = '0';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'Reports';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'export';
  $export['export'] = $view;

  $view = new view();
  $view->name = 'list_of_coordinator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'List of coordinator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of Coordinator';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'uid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'uid' => 'uid',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['list_of_coordinator'] = $view;

  $view = new view();
  $view->name = 'list_of_students';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_student';
  $view->human_name = 'List of Students';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Filter criterion: Student: student type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_student';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student' => 'student',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of Students';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['list_of_students'] = $view;

  $view = new view();
  $view->name = 'school_year';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'School year';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School year';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Draggableviews: Taxonomy term */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Taxonomy term: Weight */
  $handler->display->display_options['fields']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['fields']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['weight_1']['field'] = 'weight';
  $handler->display->display_options['fields']['weight_1']['label'] = '';
  $handler->display->display_options['fields']['weight_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['weight_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight_1']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'School year';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'midleton/school-year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'School years';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['school_year'] = $view;

  return $export;
}
