<?php

/**
 * @file
 * midleton_report_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function midleton_report_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college|node|report_1|default';
  $field_group->group_name = 'group_college';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_subjects_courses',
      1 => 'field_observations_coordinator_2',
      2 => 'field__absences',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'School',
    'weight' => '4',
  );
  $field_groups['group_college|node|report_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college|node|report_1|form';
  $field_group->group_name = 'group_college';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_absences',
      1 => 'field_communicates_well_in_en',
      2 => 'field_subjects_courses',
      3 => 'field_observations_coordinator_2',
      4 => 'field__absences',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-college field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'School',
    'weight' => '9',
  );
  $field_groups['group_college|node|report_1|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college|node|report_2|default';
  $field_group->group_name = 'group_college';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field__absences',
      1 => 'field_involved_school_activity2',
      2 => 'field_observations_coordinator_2',
      3 => 'field_subjects_courses',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'School',
    'weight' => '4',
  );
  $field_groups['group_college|node|report_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college|node|report_2|form';
  $field_group->group_name = 'group_college';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field__absences',
      1 => 'field_involved_school_activity2',
      2 => 'field_observations_coordinator_2',
      3 => 'field_subjects_courses',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-college field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'School',
    'weight' => '9',
  );
  $field_groups['group_college|node|report_2|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college|node|report_3|default';
  $field_group->group_name = 'group_college';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_observations_coordinator_2',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'School',
    'weight' => '4',
  );
  $field_groups['group_college|node|report_3|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college|node|report_3|form';
  $field_group->group_name = 'group_college';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_observations_coordinator_2',
      1 => 'field_subjects_courses',
      2 => 'field__absences',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-college field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'School',
    'weight' => '9',
  );
  $field_groups['group_college|node|report_3|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family|node|report_1|default';
  $field_group->group_name = 'group_family';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_integration_into_family_li',
      6 => 'field_it_consumes_what_is',
      7 => 'field_leads_a_balanced_diet',
      8 => 'field_participates_in_the_activ',
      9 => 'field_respects_the_established_s',
      10 => 'field_tidiness_of_the_room',
      11 => 'field_when_you_are_outside',
      12 => 'field_punctuality',
      13 => 'field_punctuality2',
      14 => 'field_english_communication',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'Host',
    'weight' => '3',
  );
  $field_groups['group_family|node|report_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family|node|report_1|form';
  $field_group->group_name = 'group_family';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_integration_into_family_li',
      6 => 'field_it_consumes_what_is',
      7 => 'field_leads_a_balanced_diet',
      8 => 'field_participates_in_the_activ',
      9 => 'field_respects_the_established_s',
      10 => 'field_tidiness_of_the_room',
      11 => 'field_when_you_are_outside',
      12 => 'field_punctuality',
      13 => 'field_punctuality2',
      14 => 'field_english_communication',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-family field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Host',
    'weight' => '8',
  );
  $field_groups['group_family|node|report_1|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family|node|report_2|default';
  $field_group->group_name = 'group_family';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_english_communication',
      6 => 'field_it_consumes_what_is',
      7 => 'field_leads_a_balanced_diet',
      8 => 'field_participates_in_the_activ',
      9 => 'field_participates_in_the_daily',
      10 => 'field_punctuality',
      11 => 'field_punctuality2',
      12 => 'field_respects_the_established_s',
      13 => 'field_tidiness_of_the_room',
      14 => 'field_when_you_are_outside',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'Host family',
    ),
    'format_type' => 'div',
    'label' => 'Host family',
    'weight' => '3',
  );
  $field_groups['group_family|node|report_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family|node|report_2|form';
  $field_group->group_name = 'group_family';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_appropriate_use_of_int',
      1 => 'field_attitude_and_behavior',
      2 => 'field_dialogue_with_family',
      3 => 'field_english_communication',
      4 => 'field_leads_a_balanced_diet',
      5 => 'field_punctuality',
      6 => 'field_punctuality2',
      7 => 'field_respects_the_established_s',
      8 => 'field_tidiness_of_the_room',
      9 => 'field_when_you_are_outside',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-family field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Host family',
    ),
    'format_type' => 'fieldset',
    'label' => 'Host family',
    'weight' => '8',
  );
  $field_groups['group_family|node|report_2|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family|node|report_3|default';
  $field_group->group_name = 'group_family';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_punctuality2',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'Host family',
    ),
    'format_type' => 'div',
    'label' => 'Host family',
    'weight' => '3',
  );
  $field_groups['group_family|node|report_3|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_family|node|report_3|form';
  $field_group->group_name = 'group_family';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_punctuality2',
      1 => 'field_adjustment_family',
      2 => 'field_integration_into_family_li',
      3 => 'field_dialogue_with_family',
      4 => 'field_attitude_and_behavior',
      5 => 'field_participates_in_the_activ',
      6 => 'field_respects_the_established_s',
      7 => 'field_punctuality',
      8 => 'field_when_you_are_outside',
      9 => 'field_asks_permission_to_events',
      10 => 'field_leads_a_balanced_diet',
      11 => 'field_it_consumes_what_is',
      12 => 'field_tidiness_of_the_room',
      13 => 'field_appropriate_use_of_int',
      14 => 'field_english_communication',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-family field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Host family',
    ),
    'format_type' => 'fieldset',
    'label' => 'Host family',
    'weight' => '8',
  );
  $field_groups['group_family|node|report_3|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_free_time|node|report_1|default';
  $field_group->group_name = 'group_free_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_do_you_usually_do',
      2 => 'field_how_are_your_relationships',
      3 => 'field_it_is_motivated',
      4 => 'field_routine_weekend',
      5 => 'field_starts_itself_activities',
      6 => 'field_coordinator_observations_3',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'Free time and after-school activities',
    'weight' => '5',
  );
  $field_groups['group_free_time|node|report_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_free_time|node|report_1|form';
  $field_group->group_name = 'group_free_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_do_you_usually_do',
      2 => 'field_how_are_your_relationships',
      3 => 'field_it_is_motivated',
      4 => 'field_routine_weekend',
      5 => 'field_starts_itself_activities',
      6 => 'field_coordinator_observations_3',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-free-time field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Free time and after-school activities',
    'weight' => '10',
  );
  $field_groups['group_free_time|node|report_1|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_free_time|node|report_2|default';
  $field_group->group_name = 'group_free_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_coordinator_observations_3',
      2 => 'field_do_you_usually_do',
      3 => 'field_friendships_at_school2',
      4 => 'field_how_are_your_relationships',
      5 => 'field_it_is_motivated',
      6 => 'field_routine_weekend',
      7 => 'field_starts_itself_activities',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'Free time and after-school activities',
    'weight' => '5',
  );
  $field_groups['group_free_time|node|report_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_free_time|node|report_2|form';
  $field_group->group_name = 'group_free_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_coordinator_observations_3',
      2 => 'field_how_are_your_relationships',
      3 => 'field_routine_weekend',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-free-time field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Free time',
    ),
    'format_type' => 'fieldset',
    'label' => 'Free time',
    'weight' => '10',
  );
  $field_groups['group_free_time|node|report_2|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_free_time|node|report_3|default';
  $field_group->group_name = 'group_free_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_coordinator_observations_3',
      1 => 'field_it_is_motivated',
      2 => 'field_starts_itself_activities',
      3 => 'field_activities_in_which_it',
      4 => 'field_do_you_usually_do',
      5 => 'field_routine_weekend',
      6 => 'field_how_are_your_relationships',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'Free time and after-school activities',
    'weight' => '5',
  );
  $field_groups['group_free_time|node|report_3|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_free_time|node|report_3|form';
  $field_group->group_name = 'group_free_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_coordinator_observations_3',
      1 => 'field_it_is_motivated',
      2 => 'field_starts_itself_activities',
      3 => 'field_activities_in_which_it',
      4 => 'field_do_you_usually_do',
      5 => 'field_routine_weekend',
      6 => 'field_how_are_your_relationships',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-free-time field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Free time and after-school activities',
    'weight' => '10',
  );
  $field_groups['group_free_time|node|report_3|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_questions|node|report_1|default';
  $field_group->group_name = 'group_general_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_he_communicates_well_in_en',
      1 => 'field_attending_the_coord',
      2 => 'field_attending_the_family',
      3 => 'field_he_had_to_go_to_the_docto2',
      4 => 'field_he_had_to_go_to_the_doctor',
      5 => 'field_respect_the_rules',
      6 => 'field_coordinator_observations_4',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'General',
    'weight' => '6',
  );
  $field_groups['group_general_questions|node|report_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_questions|node|report_1|form';
  $field_group->group_name = 'group_general_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_1';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_he_communicates_well_in_en',
      1 => 'field_attending_the_coord',
      2 => 'field_attending_the_family',
      3 => 'field_he_had_to_go_to_the_docto2',
      4 => 'field_he_had_to_go_to_the_doctor',
      5 => 'field_respect_the_rules',
      6 => 'field_coordinator_observations_4',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-general-questions field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'General',
    'weight' => '11',
  );
  $field_groups['group_general_questions|node|report_1|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_questions|node|report_2|default';
  $field_group->group_name = 'group_general_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_attending_the_coord',
      1 => 'field_attending_the_family',
      2 => 'field_coordinator_observations_4',
      3 => 'field_he_had_to_go_to_the_docto2',
      4 => 'field_he_had_to_go_to_the_doctor',
      5 => 'field_respect_the_rules',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'General',
    'weight' => '6',
  );
  $field_groups['group_general_questions|node|report_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_questions|node|report_2|form';
  $field_group->group_name = 'group_general_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_2';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_attending_the_coord',
      1 => 'field_coordinator_observations_4',
      2 => 'field_he_had_to_go_to_the_docto2',
      3 => 'field_he_had_to_go_to_the_doctor',
      4 => 'field_respect_the_rules',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-general-questions field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'General',
    'weight' => '11',
  );
  $field_groups['group_general_questions|node|report_2|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_questions|node|report_3|default';
  $field_group->group_name = 'group_general_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_coordinator_observations_4',
      1 => 'field_he_communicates_well_in_en',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'General',
    'weight' => '6',
  );
  $field_groups['group_general_questions|node|report_3|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_questions|node|report_3|form';
  $field_group->group_name = 'group_general_questions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_attending_the_coord',
      1 => 'field_attending_the_family',
      2 => 'field_coordinator_observations_4',
      3 => 'field_he_communicates_well_in_en',
      4 => 'field_respect_the_rules',
      5 => 'field_he_had_to_go_to_the_doctor',
      6 => 'field_he_had_to_go_to_the_docto2',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-general-questions field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'General',
    'weight' => '12',
  );
  $field_groups['group_general_questions|node|report_3|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|report_3|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report_3';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_attending_the_family2',
      1 => 'field_respect_the_rules2',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-hidden field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Hidden',
    'weight' => '14',
  );
  $field_groups['group_hidden|node|report_3|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Free time');
  t('Free time and after-school activities');
  t('General');
  t('Hidden');
  t('Host');
  t('Host family');
  t('School');

  return $field_groups;
}
