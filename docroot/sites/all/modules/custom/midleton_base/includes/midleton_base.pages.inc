<?php

/**
 * @file
 * Page callbacks.
 */

function midleton_base_send_email_form($student, $report = FALSE) {

  $wrapper = entity_metadata_wrapper('student', $student);

  $email = entity_create('email', ['type' => 'email']);
  $email->field_student_email_reference[LANGUAGE_NONE][0]['target_id'] = $student->id;

  foreach ($wrapper->field_email->value() as $delta => $mail) {
    $email->field_mail_to[LANGUAGE_NONE][$delta]['email'] = $mail;
  }
  $node = node_load($report);
  if (is_object($node) && !empty($node->field_pdf)) {
    $email->field_report_attachments[LANGUAGE_NONE][0]['target_id'] = $node->nid;
  }
  $form = drupal_get_form("eck__entity__form_edit_email_email", $email);
  $form['field_student_email_reference']['#access'] = FALSE;

  // Add instructinos.
  $instructions = '<div class="instructions">';
  $instructions .= t('Send an email to the parents of %student', [
    '%student' => $wrapper->field_name->value() . ' ' . $wrapper->field_last_name->value(),
  ]);
  $instructions .= '</div>';

  $form['instructions'] = [
    '#weight' => -99,
    '#type' => 'markup',
    '#markup' => $instructions,
  ];
  unset($form['#validate']);
  $form['actions']['submit']['#value'] = t('Send email');
  $form['actions']['submit']['#submit'] = ['midleton_base_send_email_form_submit'];
  return render($form);
}

function midleton_base_send_email_form_submit(&$form, &$form_state) {
  $email = $form['#entity'];
  $wrapper = entity_metadata_wrapper('email', $email);

  $attachments = [];

  foreach ($wrapper->field_report_attachments->value() as $report) {
    $report_wrapper = entity_metadata_wrapper('node', $report);
    $attachments[] = ['filepath' => $report_wrapper->field_pdf->value()['uri']];
  }
  foreach ($wrapper->field_document_attachments->value() as $document) {
    $document_wrapper = entity_metadata_wrapper('document', $document);
    $attachments[] = ['filepath' => $document_wrapper->field_file->value()['uri']];
  }

  $module = 'midleton_base';
  $key = $wrapper->field_mail_key->value();
  $to = implode(',', $wrapper->field_mail_to->value());
  $language = language_default();
  $params = [
    'headers' => [
      'Cc' => "",
      'Bcc' => "",
      'Reply-to' => "",
      'List-unsubscribe' => "",
    ],
    'subject' => $wrapper->field_mail_subject->value(),
    'body' => $wrapper->field_mail_body->value()['value'],
    'plain' => "",
    "plaintext" => "",
    'attachments' => $attachments,
  ];

  $result = drupal_mail($module, $key, $to, $language, $params, NULL, TRUE);
  if ($result['result'] == TRUE) {
    drupal_set_message(t('The email has been sent succesfully.'));
    foreach ($wrapper->field_report_attachments->value() as $report) {
      $report_wrapper = entity_metadata_wrapper('node', $report);
      $report_wrapper->field_email_sent->set(TRUE);
      $report_wrapper->field_email_reference[] = $email->id;
      $report_wrapper->field_status->set('sent');
      $report_wrapper->revision->set(TRUE);
      $report_wrapper->log->set(t('Approved >> Sent'));
      $report_wrapper->save();
    }
    foreach ($wrapper->field_document_attachments->value() as $document) {
      $document_wrapper = entity_metadata_wrapper('document', $document);
      $document_wrapper->field_email_sent->set(TRUE);
      $document_wrapper->field_email_reference[] = $email->id;
      $document_wrapper->save();
    }
  }
  else {
    drupal_set_message(t('There was a problem sending your email and it was not sent.'), 'error');
  }
  $form_state['redirect'] = 'student/student/' . $wrapper->field_student_email_reference->raw() . '#emails';

}


/**
 * Confirm form to change the status of a report and send it to the next user.
 */
function midleton_base_change_report_status_form($form, $form_state) {

  $form['#submit'][] = 'midleton_base_change_report_status_form_submit';

  $node = menu_get_object('node', 1);
  $wrapper = entity_metadata_wrapper('node', $node);

  $form['#node'] = $node;
  global $user;

  $status = $wrapper->field_status->raw();
  $student = $wrapper->field_student_reference->value();
  switch ($status) {
    case 'new':
      if (in_array(MIDLETON_BASE_COORDINATOR_ROLE, $user->roles)) {
        $question = 'Are you sure you want to submit this report to the Chief Coordinator?';
        $message = "If you confirm, this report will be pending revision by your chief coordinator. You won't be able to make any further changes.";
      }
      else {
        $question = 'Are you sure you want to submit this report to the Chief Coordinator?';
        $message = 'The report will be available for revision by the 
        Chief Coordinator. The Coordinator won\'t be able to edit the report anymore.';
      }
      break;
    case 'revision_pending':
      if (in_array(MIDLETON_BASE_CHIEF_COORDINATOR_ROLE, $user->roles)) {
        $question = 'Are you sure you want to submit this report to Midleton?';
        $message = "If you confirm, this report will be pending approval by Midleton School. You won't be able to make any further changes.";
      }
      else {
        $question = 'Are you sure you want to change the status from "Pending revision" to "revised"?';
        $message = 'The Chief Coordinator won\'t be able to edit the report anymore.';
      }
      break;
    case 'approval_pending':
      $question = 'Are you sure you to mark this report as <em>Approved</em> and generate the PDF?';
      $message = "If you confirm, this report will be available as PDF and
         ready to be sent by email. It won't be possible to edit the report anymore.<strong>Generating the PDF might take some time. Please be
         patient.</strong>";
      break;
    case 'approved':
      header("Location:" . url('send-email/' . $student->id . '/' . $node->nid));
      drupal_exit();
  }
  return confirm_form($form, t($question), '/node/' . $node->nid, t($message));

}


/**
 * Submit callback for the Change report status form.
 */
function midleton_base_change_report_status_form_submit($form, &$form_state) {
  $node = $form['#node'];

  $states = [
    'new' => 'revision_pending',
    'revision_pending' => 'approval_pending',
    'approval_pending' => 'approved',
  ];

  $log_messages = [
    'new' => t('New >> Pending Revision by a Chief Coordinator'),
    'revision_pending' => t('Pending Revision by a Chief Coordinator >> Pending Approval by Midleton'),
    'approval_pending' => t('Pending Approval by Midleton >> Approved'),
  ];

  $status = $node->field_status[LANGUAGE_NONE][0]['value'];

  // Generate PDF.
  if ('approval_pending' == $status) {
    $pdf = midleton_base_pdf($node);
    $path = 'private://pdf';
    file_prepare_directory($path, FILE_CREATE_DIRECTORY);
    $file = file_save_data($pdf->output(), $path . '/' . $node->nid . '-' . transliteration_clean_filename($node->title) . '.pdf', FILE_EXISTS_REPLACE);
    $node->field_pdf[LANGUAGE_NONE][0] = [
      'display' => TRUE,
      'fid' => $file->fid,
    ];
    drupal_set_message(t('PDF saved succesfully.'));
  }

  if (isset($states[$status])) {
    $node->field_status[LANGUAGE_NONE][0]['value'] = $states[$status];

    $node->revision = 1;
    $node->log = $log_messages[$status];
    node_save($node);

    rules_invoke_event('midleton_after_changing_form_status', $node);
  }

  $form_state['redirect'] = 'node/' . $node->nid;
}



/*
 * Form for message settings.
 */
function midleton_base_message_settings($form, &$form_state) {
  $types = midleton_base_get_report_types();
  $form['#attached']['js'][] = drupal_get_path('module', 'midleton_base') . '/js/midleton_base.message-settings.js';
  $form['#attached']['js'][] = drupal_get_path('module', 'midleton_base') . '/js/moment.js';
  $form['#attached']['js'][] = drupal_get_path('module', 'midleton_base') . '/js/clndr.js';
  drupal_set_title(t('Message settings'));
  $form['add_students_deadline'] = [
    '#type' => 'container',
    '#tree' => TRUE,
    'show_add_students_deadline_message' => [
      '#type' => 'checkbox',
      '#default_value' => variable_get('add_students_deadline', FALSE),
      '#title' => t('Add students'),
      '#attributes' => ['class' => ['show-hide-toggle']],
      '#default_value' => variable_get('midleton_base_show_add_students_deadline_message', FALSE),
    ],
    'deadline_add_students_date' => [
      '#type' => 'date_popup',
      '#date_format' => 'Y-m-d',
      '#date_year_range' => '0:+1',
      '#size' => 10,
      '#default_value' => variable_get('midleton_base_deadline_add_students_date', ''),
    ],
    'deadline_add_students_days' => [
      '#type' => 'textfield',
      '#element_validate' => ['element_validate_integer_positive'],
      '#size' => 3,
      '#attributes' => ['class' => ['days-input']],
      '#description' => t('Nr of days.'),
      '#default_value' => variable_get('midleton_base_deadline_add_students_days', 10),
    ],
    'student_message_single_day' => [
      '#type' => 'textarea',
      '#default_value' => variable_get('midleton_base_student_message_single_day',
        'There is only one day left to add all your students to the platform.'),
      '#description' => t('Message to display'),
    ],
    'student_message_multiple_days' => [
      '#type' => 'textarea',
      '#description' => t('Use @count for number of days left.'),
      '#default_value' => variable_get('midleton_base_student_message_multiple_days',
        'There are @count days left to add all your students to the platform.'),
    ],
  ];
  foreach ($types as $type_name => $type) {
    $form['reports'][$type_name] = [
      '#type' => 'container',
      '#tree' => TRUE,
      'send_reports_deadline' => [
        '#type' => 'container',
        'show_send_reports_deadline_message' => [
          '#type' => 'checkbox',
          '#title' => $type->name,
          '#attributes' => ['class' => ['show-hide-toggle']],
          '#default_value' => variable_get('midleton_base_show_send_reports_deadline_message_' . $type_name, FALSE),
        ],
        'show_deadline_send_reports_date' => [
          '#type' => 'date_popup',
          '#date_format' => 'Y-m-d',
          '#date_year_range' => '0:+1',
          '#size' => 10,
          '#default_value' => variable_get('midleton_base_show_deadline_send_reports_date_' . $type_name, ''),
        ],
        'deadline_send_reports_days' => [
          '#type' => 'textfield',
          '#element_validate' => ['element_validate_integer_positive'],
          '#size' => 3,
          '#attributes' => ['class' => ['days-input']],
          '#description' => t('Nr of days.'),
          '#default_value' => variable_get('midleton_base_deadline_send_reports_days_' . $type_name, 10),
        ],
        'send_reports_message_single_day' => [
          '#type' => 'textarea',
          '#default_value' => variable_get('midleton_base_send_reports_message_single_day_' . $type_name,
            'There is only one day left to send your reports to the platform. Reports of the following students are still pending: @students'),
          '#description' => t('Use @students for students pending.'),
        ],
        'send_reports_message_multiple_days' => [
          '#type' => 'textarea',
          '#default_value' => variable_get('midleton_base_send_reports_message_multiple_days_' . $type_name,
            'There are @count days left to send your reports to the platform. Reports of the following students are still pending: @students.'),
          '#description' => t('Use @count for number of days left. Use @students: students pending.'),
        ],
      ],
    ];
  }
  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];
  $form['#theme'] = ['midleton_message_form'];
  return $form;
}


/**
 * Submit callback for settings.
 */

function midleton_base_message_settings_validate($form, &$form_state) {
  if ($form_state['values']['add_students_deadline']['show_add_students_deadline_message']) {
    foreach ($form_state['values']['add_students_deadline'] as $key => $value) {
      if (empty($value) || $value == NULL) {
        form_set_error($key, t('We found some missing fields.'));
      }
    }
  }
  $types = array_keys(midleton_base_get_report_types());

  foreach ($types as $type) {
    $values = $form_state['values'][$type];
    if ($values['send_reports_deadline']['show_send_reports_deadline_message']) {
      foreach ($values['send_reports_deadline'] as $key => $value) {
        if (empty($value) || $value == NULL) {
          form_set_error($key, t('We found some missing fields.'));
        }
      }
    }
  }
}

/**
 * Submit callback for settings.
 */
function midleton_base_message_settings_submit($form, &$form_state) {
  $types = array_keys(midleton_base_get_report_types());
  if ($form_state['values']['add_students_deadline']['show_add_students_deadline_message']) {
    foreach ($form_state['values']['add_students_deadline'] as $element_key => $element) {
      variable_set('midleton_base_' . $element_key, $element);
    }
  }
  else {
    foreach ($form_state['values']['add_students_deadline'] as $element_key => $element) {
      variable_del('midleton_base_' . $element_key);
    }
  }
  foreach ($types as $type) {
    $values = $form_state['values'][$type];
    if ($values['send_reports_deadline']['show_send_reports_deadline_message']) {
      foreach ($values['send_reports_deadline'] as $element_key => $element) {
        variable_set('midleton_base_' . $element_key . '_' . $type, $element);
      }
    }
    else {
      foreach ($values['send_reports_deadline'] as $element_key => $element) {
        variable_del('midleton_base_' . $element_key . '_' . $type);
      }
    }
  }
  drupal_set_message(t('Settings saved correctly'));
}

/**
 * Page callback to generate a PDF from an approved Report.
 */
function midleton_base_generate_pdf($node) {
  $pdf = midleton_base_pdf($node);
  $path = 'private://pdf';
  file_prepare_directory($path, FILE_CREATE_DIRECTORY);
  $file = file_save_data($pdf->output(), $path . '/' . $node->nid . '-' . transliteration_clean_filename($node->title) . '.pdf', FILE_EXISTS_REPLACE);
  $node->field_pdf[LANGUAGE_NONE][0] = [
    'display' => TRUE,
    'fid' => $file->fid,
  ];
  node_save($node);
  drupal_set_message(t('PDF generated succesfully.'));
  drupal_goto();
}
