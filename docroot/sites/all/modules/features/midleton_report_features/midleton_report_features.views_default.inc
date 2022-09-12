<?php

/**
 * @file
 * midleton_report_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function midleton_report_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coordinators_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_student';
  $view->human_name = 'Midleton Coordinator reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Midleton Coordinator students';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_last_name' => 'field_last_name',
    'field_name' => 'field_name',
    'field_academic_course' => 'field_academic_course',
    'id' => 'id',
    'nid' => 'nid',
    'edit_link' => 'edit_link',
    'delete_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = 'field_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_course' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['id'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['table'] = 'eck_student';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['field'] = 'reverse_field_student_reference_node';
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Contextual filter: Student: Coordinator (field_coordinator) */
  $handler->display->display_options['arguments']['field_coordinator_target_id']['id'] = 'field_coordinator_target_id';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['field'] = 'field_coordinator_target_id';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Student: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';

  /* Display: Students */
  $handler = $view->new_display('page', 'Students', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Students';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Student';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = '[field_name] [field_last_name]';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: School year */
  $handler->display->display_options['fields']['field_academic_course']['id'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['field'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_academic_course']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Total reports';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'student/student/[id]';
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 report';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count reports';
  /* Field: Student: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_student';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = '';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  /* Field: Student: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_student';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['path'] = 'coordinator/student';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Students';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['coordinators_reports'] = $view;

  $view = new view();
  $view->name = 'mail_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'mail_logger';
  $view->human_name = 'Mail log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mail log';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Mail log: Date sent */
  $handler->display->display_options['fields']['date_sent']['id'] = 'date_sent';
  $handler->display->display_options['fields']['date_sent']['table'] = 'mail_logger';
  $handler->display->display_options['fields']['date_sent']['field'] = 'date_sent';
  $handler->display->display_options['fields']['date_sent']['date_format'] = 'long';
  $handler->display->display_options['fields']['date_sent']['second_date_format'] = 'long';
  /* Field: Mail log: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'mail_logger';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['link_to_entry'] = 0;
  /* Field: Mail log: To address */
  $handler->display->display_options['fields']['mailto']['id'] = 'mailto';
  $handler->display->display_options['fields']['mailto']['table'] = 'mail_logger';
  $handler->display->display_options['fields']['mailto']['field'] = 'mailto';
  /* Field: Mail log: Mail id */
  $handler->display->display_options['fields']['mlid']['id'] = 'mlid';
  $handler->display->display_options['fields']['mlid']['table'] = 'mail_logger';
  $handler->display->display_options['fields']['mlid']['field'] = 'mlid';
  $handler->display->display_options['fields']['mlid']['label'] = '';
  $handler->display->display_options['fields']['mlid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mlid']['alter']['text'] = 'Log';
  $handler->display->display_options['fields']['mlid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mlid']['link_to_entry'] = 1;
  /* Sort criterion: Mail log: Date sent */
  $handler->display->display_options['sorts']['date_sent']['id'] = 'date_sent';
  $handler->display->display_options['sorts']['date_sent']['table'] = 'mail_logger';
  $handler->display->display_options['sorts']['date_sent']['field'] = 'date_sent';
  $handler->display->display_options['sorts']['date_sent']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'educatius/mail-log';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mail log';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['mail_log'] = $view;

  $view = new view();
  $view->name = 'midleton_chief_coordinator_coordinators';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'midleton chief coordinator coordinators';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coordinators';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'id' => 'id',
    'access' => 'access',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_coordinator_student']['id'] = 'reverse_field_coordinator_student';
  $handler->display->display_options['relationships']['reverse_field_coordinator_student']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_coordinator_student']['field'] = 'reverse_field_coordinator_student';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: COUNT(Student: Id) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'reverse_field_coordinator_student';
  $handler->display->display_options['fields']['id']['group_type'] = 'count';
  $handler->display->display_options['fields']['id']['label'] = 'Students';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'chief-coordinator/coordinators';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Coordinators';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['midleton_chief_coordinator_coordinators'] = $view;

  $view = new view();
  $view->name = 'midleton_coordinator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Midleton Coordinator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    16 => '16',
    11 => '11',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['label'] = 'student';
  /* Field: Content: Number of absences */
  $handler->display->display_options['fields']['field__absences']['id'] = 'field__absences';
  $handler->display->display_options['fields']['field__absences']['table'] = 'field_data_field__absences';
  $handler->display->display_options['fields']['field__absences']['field'] = 'field__absences';
  $handler->display->display_options['fields']['field__absences']['label'] = '';
  $handler->display->display_options['fields']['field__absences']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Student: Coordinator (field_coordinator) */
  $handler->display->display_options['arguments']['field_coordinator_target_id']['id'] = 'field_coordinator_target_id';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['field'] = 'field_coordinator_target_id';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_coordinator_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Month (field_ptm_month) */
  $handler->display->display_options['filters']['field_ptm_month_value']['id'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['table'] = 'field_data_field_ptm_month';
  $handler->display->display_options['filters']['field_ptm_month_value']['field'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ptm_month_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['operator_id'] = 'field_ptm_month_value_op';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['operator'] = 'field_ptm_month_value_op';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['identifier'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Year (field_ptm_year) */
  $handler->display->display_options['filters']['field_ptm_year_value']['id'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['table'] = 'field_data_field_ptm_year';
  $handler->display->display_options['filters']['field_ptm_year_value']['field'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ptm_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['operator_id'] = 'field_ptm_year_value_op';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['operator'] = 'field_ptm_year_value_op';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['identifier'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';

  /* Display: Reports */
  $handler = $view->new_display('page', 'Reports', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[field_status_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'type' => 'type',
    'field_last_name' => 'field_last_name',
    'field_name' => 'field_name',
    'created' => 'created',
    'field_status' => 'field_status',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'change_status' => 'view_node',
    'field_status_1' => 'field_status_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_name';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'change_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Report';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_name']['label'] = 'Student';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = '[field_name] [field_last_name]';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['type'] = 'text_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j/n';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'midleton_status_formatter';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Change Status */
  $handler->display->display_options['fields']['change_status']['id'] = 'change_status';
  $handler->display->display_options['fields']['change_status']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['change_status']['field'] = 'change_status';
  $handler->display->display_options['fields']['change_status']['link_to_entity'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status_1']['id'] = 'field_status_1';
  $handler->display->display_options['fields']['field_status_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_1']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_status_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['path'] = 'coordinator/reports';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['description'] = 'Coordinators';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Coordinators';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-user-tools';

  /* Display: Previous reports */
  $handler = $view->new_display('page', 'Previous reports', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous reports';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_name' => 'field_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_name']['label'] = 'Estudiante';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Student: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_student';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['id']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['id']['validate']['fail'] = 'access denied';
  $handler->display->display_options['path'] = 'coordinator/record/%';
  $handler->display->display_options['menu']['title'] = 'Previous reports';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = 'Estudiante: [field_name] [field_last_name]';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Student: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_student';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['id']['validate']['type'] = 'numeric';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
  );
  $export['midleton_coordinator'] = $view;

  $view = new view();
  $view->name = 'midleton_coordinator_chief';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Midleton Coordinator Chief Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    11 => '11',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_coordinator_target_id']['id'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['field'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['label'] = 'coordinator';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['id'] = 'reverse_field_user_superior_user';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['field'] = 'reverse_field_user_superior_user';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['label'] = 'chief-coordinator';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Month (field_ptm_month) */
  $handler->display->display_options['filters']['field_ptm_month_value']['id'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['table'] = 'field_data_field_ptm_month';
  $handler->display->display_options['filters']['field_ptm_month_value']['field'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ptm_month_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['operator_id'] = 'field_ptm_month_value_op';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['operator'] = 'field_ptm_month_value_op';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['identifier'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Year (field_ptm_year) */
  $handler->display->display_options['filters']['field_ptm_year_value']['id'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['table'] = 'field_data_field_ptm_year';
  $handler->display->display_options['filters']['field_ptm_year_value']['field'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ptm_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['operator_id'] = 'field_ptm_year_value_op';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['operator'] = 'field_ptm_year_value_op';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['identifier'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';

  /* Display: Reports */
  $handler = $view->new_display('page', 'Reports', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[field_status_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'field_last_name' => 'field_last_name',
    'field_name' => 'field_name',
    'field_coordinator_1' => 'field_coordinator_1',
    'created' => 'created',
    'field_status' => 'field_status',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'change_status' => 'view_node',
    'field_status_1' => 'field_status_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_name';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_coordinator_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'change_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Report';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_name']['label'] = 'Student';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = '[field_name] [field_last_name]';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['type'] = 'text_plain';
  /* Field: Student: Coordinator */
  $handler->display->display_options['fields']['field_coordinator_1']['id'] = 'field_coordinator_1';
  $handler->display->display_options['fields']['field_coordinator_1']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator_1']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator_1']['relationship'] = 'field_student_reference_target_id';
  $handler->display->display_options['fields']['field_coordinator_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinator_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j/n';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'midleton_status_formatter';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Change Status */
  $handler->display->display_options['fields']['change_status']['id'] = 'change_status';
  $handler->display->display_options['fields']['change_status']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['change_status']['field'] = 'change_status';
  $handler->display->display_options['fields']['change_status']['label'] = '';
  $handler->display->display_options['fields']['change_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['change_status']['link_to_entity'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status_1']['id'] = 'field_status_1';
  $handler->display->display_options['fields']['field_status_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_1']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_status_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Assigned Manager (field_user_superior) */
  $handler->display->display_options['arguments']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'chief-coordinator/reports';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['description'] = 'Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Chief coordinators';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-user-tools';
  $export['midleton_coordinator_chief'] = $view;

  $view = new view();
  $view->name = 'midleton_coordinator_chief_coordinators';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_student';
  $view->human_name = 'Midleton Coordinator Chief Coordinators';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coordinators';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    11 => '11',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_last_name' => 'field_last_name',
    'field_name' => 'field_name',
    'field_coordinator' => 'field_coordinator',
    'field_academic_course' => 'field_academic_course',
    'id' => 'id',
    'nid' => 'nid',
    'edit_link' => 'edit_link',
    'delete_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = 'field_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_coordinator' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_course' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['id'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['table'] = 'eck_student';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['field'] = 'reverse_field_student_reference_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_coordinator_target_id']['id'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['field'] = 'field_coordinator_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['id'] = 'reverse_field_user_superior_user';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['field'] = 'reverse_field_user_superior_user';
  $handler->display->display_options['relationships']['reverse_field_user_superior_user']['relationship'] = 'field_coordinator_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['relationship'] = 'reverse_field_student_reference_node';
  /* Field: COUNT(DISTINCT Student: Last Name) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_last_name']['separator'] = ', ';
  /* Sort criterion: MAX(Content: Updated date) */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['sorts']['changed']['group_type'] = 'max';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: User: Assigned Manager (field_user_superior) */
  $handler->display->display_options['arguments']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_superior_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Student: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';

  /* Display: Coordinators */
  $handler = $view->new_display('page', 'Coordinators', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Coordinators';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Student: Coordinator */
  $handler->display->display_options['fields']['field_coordinator']['id'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinator']['settings'] = array(
    'link' => 0,
  );
  /* Field: COUNT(DISTINCT Student: Last Name) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Cantidad de Students';
  $handler->display->display_options['fields']['field_last_name']['separator'] = ', ';
  /* Field: User: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'chief-coordinator/coordinators';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Coordinators';
  $handler->display->display_options['menu']['description'] = 'Coordinators';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Students */
  $handler = $view->new_display('page', 'Students', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Students';
  $handler->display->display_options['display_description'] = 'Students';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Estudiante';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = '[field_name] [field_last_name]';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Field: Student: Coordinator */
  $handler->display->display_options['fields']['field_coordinator']['id'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: School year */
  $handler->display->display_options['fields']['field_academic_course']['id'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['field'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_academic_course']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Reports';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'student/student/[id]';
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 report';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count reports';
  /* Field: Student: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_student';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = '';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  /* Field: Student: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_student';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Student: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';
  $handler->display->display_options['path'] = 'chief-coordinator/students';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Students';
  $handler->display->display_options['menu']['description'] = 'Students';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['midleton_coordinator_chief_coordinators'] = $view;

  $view = new view();
  $view->name = 'midleton_madrid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Midleton Madrid Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Midleton Madrid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['label'] = 'student';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'chief-coordinator';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Report';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_node'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j/n';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'midleton_status_formatter';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link PDF */
  $handler->display->display_options['fields']['pdf_link']['id'] = 'pdf_link';
  $handler->display->display_options['fields']['pdf_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['pdf_link']['field'] = 'pdf_link';
  $handler->display->display_options['fields']['pdf_link']['link_to_entity'] = 0;
  /* Field: Content: Change Status */
  $handler->display->display_options['fields']['change_status']['id'] = 'change_status';
  $handler->display->display_options['fields']['change_status']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['change_status']['field'] = 'change_status';
  $handler->display->display_options['fields']['change_status']['link_to_entity'] = 0;
  /* Field: Content: Link Generate PDF */
  $handler->display->display_options['fields']['pdf_generate_link']['id'] = 'pdf_generate_link';
  $handler->display->display_options['fields']['pdf_generate_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['pdf_generate_link']['field'] = 'pdf_generate_link';
  $handler->display->display_options['fields']['pdf_generate_link']['link_to_entity'] = 0;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status_1']['id'] = 'field_status_1';
  $handler->display->display_options['fields']['field_status_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_1']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_status_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Month (field_ptm_month) */
  $handler->display->display_options['filters']['field_ptm_month_value']['id'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['table'] = 'field_data_field_ptm_month';
  $handler->display->display_options['filters']['field_ptm_month_value']['field'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ptm_month_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['operator_id'] = 'field_ptm_month_value_op';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['label'] = 'Month';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['operator'] = 'field_ptm_month_value_op';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['identifier'] = 'field_ptm_month_value';
  $handler->display->display_options['filters']['field_ptm_month_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Year (field_ptm_year) */
  $handler->display->display_options['filters']['field_ptm_year_value']['id'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['table'] = 'field_data_field_ptm_year';
  $handler->display->display_options['filters']['field_ptm_year_value']['field'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ptm_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['operator_id'] = 'field_ptm_year_value_op';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['operator'] = 'field_ptm_year_value_op';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['identifier'] = 'field_ptm_year_value';
  $handler->display->display_options['filters']['field_ptm_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';

  /* Display: Reports */
  $handler = $view->new_display('page', 'Reports', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[field_status_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'type' => 'type',
    'field_last_name' => 'field_last_name',
    'field_name' => 'field_name',
    'field_coordinator' => 'field_coordinator',
    'created' => 'created',
    'field_status' => 'field_status',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'pdf_link' => 'view_node',
    'change_status' => 'view_node',
    'pdf_generate_link' => 'view_node',
    'field_status_1' => 'field_status_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_name';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_coordinator' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pdf_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'change_status' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pdf_generate_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'educatius/reports';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['description'] = 'Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Reports';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-user-tools';
  $export['midleton_madrid'] = $view;

  $view = new view();
  $view->name = 'midleton_madrid_coordinators_and_students';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_student';
  $view->human_name = 'Midleton Madrid Coordinators and Students';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coordinators';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_last_name' => 'field_last_name',
    'field_name' => 'field_name',
    'field_coordinator' => 'field_coordinator',
    'field_academic_course' => 'field_academic_course',
    'id' => 'id',
    'nid' => 'nid',
    'id_1' => 'id_1',
    'edit_link' => 'edit_link',
    'delete_link' => 'edit_link',
    'id_2' => 'edit_link',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'field_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_coordinator' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_course' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';

  /* Display: Coordinators */
  $handler = $view->new_display('page', 'Coordinators', 'coordinators');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'chief-coordinator';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'Nombre';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['id']['label'] = 'Students';
  /* Field: User: Assigned Manager */
  $handler->display->display_options['fields']['field_user_superior']['id'] = 'field_user_superior';
  $handler->display->display_options['fields']['field_user_superior']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['fields']['field_user_superior']['field'] = 'field_user_superior';
  $handler->display->display_options['fields']['field_user_superior']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['fields']['field_user_superior']['label'] = 'Chief coordinator';
  $handler->display->display_options['fields']['field_user_superior']['settings'] = array(
    'link' => 0,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: User: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['path'] = 'educatius/coordinators';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Coordinators';
  $handler->display->display_options['menu']['description'] = 'Coordinators';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Students */
  $handler = $view->new_display('page', 'Students', 'students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Students';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['id'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['table'] = 'eck_student';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['field'] = 'reverse_field_student_reference_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_coordinator_target_id']['id'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['field'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_coordinator_target_id']['label'] = 'coordinator';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_superior_target_id']['id'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['table'] = 'field_data_field_user_superior';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['field'] = 'field_user_superior_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['relationship'] = 'field_coordinator_target_id';
  $handler->display->display_options['relationships']['field_user_superior_target_id']['label'] = 'chief-coordinator';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['relationship'] = 'reverse_field_student_reference_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_email_reference_target_id']['id'] = 'field_email_reference_target_id';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['table'] = 'field_data_field_email_reference';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['field'] = 'field_email_reference_target_id';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Student: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Student: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Student';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name']['alter']['text'] = '[field_name] [field_last_name]';
  $handler->display->display_options['fields']['field_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Coordinator */
  $handler->display->display_options['fields']['field_coordinator']['id'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['table'] = 'field_data_field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['field'] = 'field_coordinator';
  $handler->display->display_options['fields']['field_coordinator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: School year */
  $handler->display->display_options['fields']['field_academic_course']['id'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['field'] = 'field_academic_course';
  $handler->display->display_options['fields']['field_academic_course']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_academic_course']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Reports';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'student/student/[id]';
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 report';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count reports';
  /* Field: Email: Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'eck_email';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['id_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['id_1']['label'] = 'Emails sent';
  $handler->display->display_options['fields']['id_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id_1']['alter']['path'] = 'student/student/[id]';
  $handler->display->display_options['fields']['id_1']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['id_1']['format_plural_singular'] = '1 email';
  $handler->display->display_options['fields']['id_1']['format_plural_plural'] = '@count emails';
  /* Field: Student: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_student';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  /* Field: Student: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_student';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['label'] = 'Delete';
  /* Field: Student: Id */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'eck_student';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id_2']['alter']['text'] = 'send email';
  $handler->display->display_options['fields']['id_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id_2']['alter']['path'] = 'send-email/[id_2]';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['changed']['group_type'] = 'max';
  $handler->display->display_options['fields']['changed']['label'] = 'Última actualización';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Student: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Student: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: School year (field_academic_course) */
  $handler->display->display_options['filters']['field_academic_course_tid']['id'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['table'] = 'field_data_field_academic_course';
  $handler->display->display_options['filters']['field_academic_course_tid']['field'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator_id'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['label'] = 'School year';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['operator'] = 'field_academic_course_tid_op';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['identifier'] = 'field_academic_course_tid';
  $handler->display->display_options['filters']['field_academic_course_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_academic_course_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_course_tid']['vocabulary'] = 'school_year';
  $handler->display->display_options['path'] = 'midleton/students';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Students';
  $handler->display->display_options['menu']['description'] = 'Students';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-user-tools';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['midleton_madrid_coordinators_and_students'] = $view;

  $view = new view();
  $view->name = 'midleton_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Midleton users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'rid' => 'rid',
    'access' => 'access',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'access';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'educatius/users';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Users';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['midleton_users'] = $view;

  $view = new view();
  $view->name = 'student_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_student';
  $view->human_name = 'student history';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'created' => 'created',
    'changed' => 'changed',
    'field_status' => 'field_status',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'pdf_link' => 'view_node',
    'pdf_generate_link' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'pdf_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'pdf_generate_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No reports available.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['id'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['table'] = 'eck_student';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['field'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['relationships']['reverse_field_student_reference_node']['required'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_student_reference_node';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_student_reference_node';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'view';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Link PDF */
  $handler->display->display_options['fields']['pdf_link']['id'] = 'pdf_link';
  $handler->display->display_options['fields']['pdf_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['pdf_link']['field'] = 'pdf_link';
  $handler->display->display_options['fields']['pdf_link']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['pdf_link']['label'] = 'Download';
  $handler->display->display_options['fields']['pdf_link']['link_to_entity'] = 0;
  /* Field: Content: Link Generate PDF */
  $handler->display->display_options['fields']['pdf_generate_link']['id'] = 'pdf_generate_link';
  $handler->display->display_options['fields']['pdf_generate_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['pdf_generate_link']['field'] = 'pdf_generate_link';
  $handler->display->display_options['fields']['pdf_generate_link']['relationship'] = 'reverse_field_student_reference_node';
  $handler->display->display_options['fields']['pdf_generate_link']['link_to_entity'] = 0;
  /* Contextual filter: Student: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_student';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $export['student_history'] = $view;

  return $export;
}
