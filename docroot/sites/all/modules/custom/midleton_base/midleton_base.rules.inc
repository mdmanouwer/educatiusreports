<?php

/**
 * Implements hook_rules_event_info().
 */
function midleton_base_rules_event_info() {
  $events = array(
    'midleton_after_changing_form_status' => array(
      'label' => t('Report status changed'),
      'group' => t('Midleton'),
      'variables' => rules_events_node_variables(t('updated content')),
    ),
  );

  return $events;
}
