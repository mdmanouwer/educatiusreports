<?php

/**
 * @file
 * midleton_email_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function midleton_email_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'email_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_email';
  $view->human_name = 'Email history';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_mail_key' => 'field_mail_key',
    'created' => 'created',
    'field_mail_to' => 'field_mail_to',
    'field_mail_subject' => 'field_mail_subject',
    'field_mail_body' => 'field_mail_body',
    'field_report_attachments' => 'field_report_attachments',
    'field_document_attachments' => 'field_document_attachments',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'field_mail_key' => array(
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
    'field_mail_to' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mail_subject' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mail_body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_report_attachments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_document_attachments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Email: Email description */
  $handler->display->display_options['fields']['field_mail_key']['id'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['table'] = 'field_data_field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['field'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['label'] = 'Description';
  $handler->display->display_options['fields']['field_mail_key']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Email: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_email';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Sent';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Email: To */
  $handler->display->display_options['fields']['field_mail_to']['id'] = 'field_mail_to';
  $handler->display->display_options['fields']['field_mail_to']['table'] = 'field_data_field_mail_to';
  $handler->display->display_options['fields']['field_mail_to']['field'] = 'field_mail_to';
  $handler->display->display_options['fields']['field_mail_to']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Email: Subject */
  $handler->display->display_options['fields']['field_mail_subject']['id'] = 'field_mail_subject';
  $handler->display->display_options['fields']['field_mail_subject']['table'] = 'field_data_field_mail_subject';
  $handler->display->display_options['fields']['field_mail_subject']['field'] = 'field_mail_subject';
  $handler->display->display_options['fields']['field_mail_subject']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Email: Body */
  $handler->display->display_options['fields']['field_mail_body']['id'] = 'field_mail_body';
  $handler->display->display_options['fields']['field_mail_body']['table'] = 'field_data_field_mail_body';
  $handler->display->display_options['fields']['field_mail_body']['field'] = 'field_mail_body';
  $handler->display->display_options['fields']['field_mail_body']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Email: Report attachments */
  $handler->display->display_options['fields']['field_report_attachments']['id'] = 'field_report_attachments';
  $handler->display->display_options['fields']['field_report_attachments']['table'] = 'field_data_field_report_attachments';
  $handler->display->display_options['fields']['field_report_attachments']['field'] = 'field_report_attachments';
  $handler->display->display_options['fields']['field_report_attachments']['label'] = 'Attached reports';
  $handler->display->display_options['fields']['field_report_attachments']['settings'] = array(
    'link' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_report_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_report_attachments']['multi_type'] = 'ul';
  /* Field: Email: Document attachments */
  $handler->display->display_options['fields']['field_document_attachments']['id'] = 'field_document_attachments';
  $handler->display->display_options['fields']['field_document_attachments']['table'] = 'field_data_field_document_attachments';
  $handler->display->display_options['fields']['field_document_attachments']['field'] = 'field_document_attachments';
  $handler->display->display_options['fields']['field_document_attachments']['label'] = 'Attached documents';
  $handler->display->display_options['fields']['field_document_attachments']['settings'] = array(
    'link' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_document_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_attachments']['multi_type'] = 'ul';
  /* Contextual filter: Email: Student email reference (field_student_email_reference) */
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['id'] = 'field_student_email_reference_target_id';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['table'] = 'field_data_field_student_email_reference';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['field'] = 'field_student_email_reference_target_id';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_student_email_reference_target_id']['summary_options']['items_per_page'] = '25';
  $export['email_history'] = $view;

  $view = new view();
  $view->name = 'midleton_add_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_document';
  $view->human_name = 'Add documents';
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
  /* Relationship: Document: File (field_file:fid) */
  $handler->display->display_options['relationships']['field_file_fid']['id'] = 'field_file_fid';
  $handler->display->display_options['relationships']['field_file_fid']['table'] = 'field_data_field_file';
  $handler->display->display_options['relationships']['field_file_fid']['field'] = 'field_file_fid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_documents_student']['id'] = 'reverse_field_documents_student';
  $handler->display->display_options['relationships']['reverse_field_documents_student']['table'] = 'eck_document';
  $handler->display->display_options['relationships']['reverse_field_documents_student']['field'] = 'reverse_field_documents_student';
  $handler->display->display_options['relationships']['reverse_field_documents_student']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_email_reference_target_id']['id'] = 'field_email_reference_target_id';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['table'] = 'field_data_field_email_reference';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['field'] = 'field_email_reference_target_id';
  /* Field: Entity Reference View Widget Checkbox: Document */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'eck_document';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Document: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_document';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Document: Description */
  $handler->display->display_options['fields']['field_file_description']['id'] = 'field_file_description';
  $handler->display->display_options['fields']['field_file_description']['table'] = 'field_data_field_file_description';
  $handler->display->display_options['fields']['field_file_description']['field'] = 'field_file_description';
  $handler->display->display_options['fields']['field_file_description']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Sent by email */
  $handler->display->display_options['fields']['field_email_sent']['id'] = 'field_email_sent';
  $handler->display->display_options['fields']['field_email_sent']['table'] = 'field_data_field_email_sent';
  $handler->display->display_options['fields']['field_email_sent']['field'] = 'field_email_sent';
  $handler->display->display_options['fields']['field_email_sent']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Document: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_file']['settings'] = array(
    'file_view_mode' => 'teaser',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: File: Download link */
  $handler->display->display_options['fields']['download']['id'] = 'download';
  $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  $handler->display->display_options['fields']['download']['field'] = 'download';
  $handler->display->display_options['fields']['download']['relationship'] = 'field_file_fid';
  $handler->display->display_options['fields']['download']['label'] = 'Download';
  /* Field: Email: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_email';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '([created])';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Email: Email description */
  $handler->display->display_options['fields']['field_mail_key']['id'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['table'] = 'field_data_field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['field'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['field_mail_key']['label'] = 'Sent in';
  $handler->display->display_options['fields']['field_mail_key']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mail_key']['alter']['text'] = '- [field_mail_key] [created]';
  $handler->display->display_options['fields']['field_mail_key']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Contextual filter: Student: Id */
  $handler->display->display_options['arguments']['id_1']['id'] = 'id_1';
  $handler->display->display_options['arguments']['id_1']['table'] = 'eck_student';
  $handler->display->display_options['arguments']['id_1']['field'] = 'id';
  $handler->display->display_options['arguments']['id_1']['relationship'] = 'reverse_field_documents_student';
  $handler->display->display_options['arguments']['id_1']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['id_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Document: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_document';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['id']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['id']['not'] = TRUE;
  /* Filter criterion: Field: Sent by email (field_email_sent) */
  $handler->display->display_options['filters']['field_email_sent_value']['id'] = 'field_email_sent_value';
  $handler->display->display_options['filters']['field_email_sent_value']['table'] = 'field_data_field_email_sent';
  $handler->display->display_options['filters']['field_email_sent_value']['field'] = 'field_email_sent_value';
  $handler->display->display_options['filters']['field_email_sent_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_email_sent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['operator_id'] = 'field_email_sent_value_op';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['label'] = 'Previously sent?';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['operator'] = 'field_email_sent_value_op';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['identifier'] = 'field_email_sent_value';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'field_file_description' => 'field_file_description',
    'title' => 'title',
    'field_email_sent' => 'field_email_sent',
    'field_email_reference' => 'field_email_reference',
    'download' => 'download',
    'created' => 'created',
    'field_mail_key' => 'field_mail_key',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_sent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'download' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mail_key' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'entityreference_view_widget' => array(
      'merge_option' => 'first_value',
      'separator' => '<br>',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => '<br>',
    ),
    'field_file_description' => array(
      'merge_option' => 'filter',
      'separator' => '<br>',
    ),
    'field_email_sent' => array(
      'merge_option' => 'filter',
      'separator' => '<br>',
    ),
    'download' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'created' => array(
      'merge_option' => 'first_value',
      'separator' => '<br>',
    ),
    'field_mail_key' => array(
      'merge_option' => 'merge_unique',
      'separator' => '<br>',
    ),
    'field_file' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );
  $export['midleton_add_documents'] = $view;

  $view = new view();
  $view->name = 'midleton_add_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_student_reference_target_id']['id'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['table'] = 'field_data_field_student_reference';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['field'] = 'field_student_reference_target_id';
  $handler->display->display_options['relationships']['field_student_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_email_reference_target_id']['id'] = 'field_email_reference_target_id';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['table'] = 'field_data_field_email_reference';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['field'] = 'field_email_reference_target_id';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Link PDF */
  $handler->display->display_options['fields']['pdf_link']['id'] = 'pdf_link';
  $handler->display->display_options['fields']['pdf_link']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['pdf_link']['field'] = 'pdf_link';
  $handler->display->display_options['fields']['pdf_link']['label'] = 'Download';
  $handler->display->display_options['fields']['pdf_link']['link_to_entity'] = 0;
  /* Field: Email: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_email';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '([created])';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Email: Email description */
  $handler->display->display_options['fields']['field_mail_key']['id'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['table'] = 'field_data_field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['field'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['field_mail_key']['label'] = 'Sent';
  $handler->display->display_options['fields']['field_mail_key']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mail_key']['alter']['text'] = '- [field_mail_key] [created]';
  $handler->display->display_options['fields']['field_mail_key']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Field: Sent by email (field_email_sent) */
  $handler->display->display_options['filters']['field_email_sent_value']['id'] = 'field_email_sent_value';
  $handler->display->display_options['filters']['field_email_sent_value']['table'] = 'field_data_field_email_sent';
  $handler->display->display_options['filters']['field_email_sent_value']['field'] = 'field_email_sent_value';
  $handler->display->display_options['filters']['field_email_sent_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_email_sent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['operator_id'] = 'field_email_sent_value_op';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['label'] = 'Sent by email';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['operator'] = 'field_email_sent_value_op';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['identifier'] = 'field_email_sent_value';
  $handler->display->display_options['filters']['field_email_sent_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: PDF (field_pdf:fid) */
  $handler->display->display_options['filters']['field_pdf_fid']['id'] = 'field_pdf_fid';
  $handler->display->display_options['filters']['field_pdf_fid']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['filters']['field_pdf_fid']['field'] = 'field_pdf_fid';
  $handler->display->display_options['filters']['field_pdf_fid']['operator'] = 'not empty';

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'type' => 'type',
    'field_status' => 'field_status',
    'pdf_link' => 'pdf_link',
    'created' => 'created',
    'field_mail_key' => 'field_mail_key',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pdf_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_mail_key' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'entityreference_view_widget' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'title' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'type' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'field_status' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'pdf_link' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'created' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_mail_key' => array(
      'merge_option' => 'merge_unique',
      'separator' => '<br>',
    ),
    'nid' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
  );
  $export['midleton_add_reports'] = $view;

  $view = new view();
  $view->name = 'midleton_documents';
  $view->description = '';
  $view->tag = 'views_field_formatter';
  $view->base_table = 'eck_document';
  $view->human_name = 'midleton documents';
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
    'title' => 'title',
    'field_file_description' => 'field_file_description',
    'field_file' => 'field_file',
    'field_email_sent' => 'field_email_sent',
    'created' => 'created',
    'field_mail_key' => 'field_mail_key',
    'id' => 'id',
    'field_file_1' => 'field_file_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_file_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_email_sent' => array(
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
    'field_mail_key' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_file_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_documents_student']['id'] = 'reverse_field_documents_student';
  $handler->display->display_options['relationships']['reverse_field_documents_student']['table'] = 'eck_document';
  $handler->display->display_options['relationships']['reverse_field_documents_student']['field'] = 'reverse_field_documents_student';
  $handler->display->display_options['relationships']['reverse_field_documents_student']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_email_reference_target_id']['id'] = 'field_email_reference_target_id';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['table'] = 'field_data_field_email_reference';
  $handler->display->display_options['relationships']['field_email_reference_target_id']['field'] = 'field_email_reference_target_id';
  /* Field: Document: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_document';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Document: Description */
  $handler->display->display_options['fields']['field_file_description']['id'] = 'field_file_description';
  $handler->display->display_options['fields']['field_file_description']['table'] = 'field_data_field_file_description';
  $handler->display->display_options['fields']['field_file_description']['field'] = 'field_file_description';
  $handler->display->display_options['fields']['field_file_description']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Document: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_file']['settings'] = array(
    'file_view_mode' => 'teaser',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Sent by email */
  $handler->display->display_options['fields']['field_email_sent']['id'] = 'field_email_sent';
  $handler->display->display_options['fields']['field_email_sent']['table'] = 'field_data_field_email_sent';
  $handler->display->display_options['fields']['field_email_sent']['field'] = 'field_email_sent';
  $handler->display->display_options['fields']['field_email_sent']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Email: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_email';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Email: Email description */
  $handler->display->display_options['fields']['field_mail_key']['id'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['table'] = 'field_data_field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['field'] = 'field_mail_key';
  $handler->display->display_options['fields']['field_mail_key']['relationship'] = 'field_email_reference_target_id';
  $handler->display->display_options['fields']['field_mail_key']['label'] = 'Sent';
  $handler->display->display_options['fields']['field_mail_key']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mail_key']['alter']['text'] = '[field_mail_key] ([created])';
  $handler->display->display_options['fields']['field_mail_key']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Document: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_document';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Document: File */
  $handler->display->display_options['fields']['field_file_1']['id'] = 'field_file_1';
  $handler->display->display_options['fields']['field_file_1']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file_1']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file_1']['label'] = 'Download';
  $handler->display->display_options['fields']['field_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_1']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_file_1']['settings'] = array(
    'text' => 'Download',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Student: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_student';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'reverse_field_documents_student';
  $handler->display->display_options['arguments']['id']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_file_description' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_file' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_email_sent' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'created' => array(
      'merge_option' => 'merge',
      'separator' => '<br>',
    ),
    'field_mail_key' => array(
      'merge_option' => 'merge',
      'separator' => '<br>',
    ),
    'id' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );
  $export['midleton_documents'] = $view;

  return $export;
}
