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
    'label' => 'School',
    'weight' => '3',
    'children' => array(
      0 => 'field_it_is_punctual',
      1 => 'field__care_of_installations',
      2 => 'field_absences',
      3 => 'field_attitude_toward_peers',
      4 => 'field_attitude_towards_teachers',
      5 => 'field_communicates_well_in_en',
      6 => 'field_conduct',
      7 => 'field_material_care',
      8 => 'field_participation_in_the_class',
      9 => 'field_performing_tasks',
      10 => 'field_subjects_courses',
      11 => 'field_observations_coordinator_2',
      12 => 'field__absences',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'School',
    'weight' => '8',
    'children' => array(
      0 => 'field_it_is_punctual',
      1 => 'field__care_of_installations',
      2 => 'field_absences',
      3 => 'field_attitude_toward_peers',
      4 => 'field_attitude_towards_teachers',
      5 => 'field_communicates_well_in_en',
      6 => 'field_conduct',
      7 => 'field_material_care',
      8 => 'field_participation_in_the_class',
      9 => 'field_performing_tasks',
      10 => 'field_subjects_courses',
      11 => 'field_observations_coordinator_2',
      12 => 'field__absences',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-college field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'School',
    'weight' => '3',
    'children' => array(
      0 => 'field__absences',
      1 => 'field__care_of_installations',
      2 => 'field_absences',
      3 => 'field_attitude_toward_peers',
      4 => 'field_attitude_towards_teachers',
      5 => 'field_communicates_well_in_en',
      6 => 'field_conduct',
      7 => 'field_involved_school_activity',
      8 => 'field_involved_school_activity2',
      9 => 'field_it_is_punctual',
      10 => 'field_material_care',
      11 => 'field_observations_coordinator_2',
      12 => 'field_participation_in_the_class',
      13 => 'field_performing_tasks',
      14 => 'field_subjects_courses',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'School',
    'weight' => '8',
    'children' => array(
      0 => 'field__absences',
      1 => 'field_absences',
      2 => 'field_attitude_towards_teachers',
      3 => 'field_communicates_well_in_en',
      4 => 'field_involved_school_activity',
      5 => 'field_involved_school_activity2',
      6 => 'field_it_is_punctual',
      7 => 'field_observations_coordinator_2',
      8 => 'field_participation_in_the_class',
      9 => 'field_performing_tasks',
      10 => 'field_subjects_courses',
      11 => 'field_attitude_towards_fellow_cl',
      12 => 'field_classroom_behaviour',
      13 => 'field_care_of_materials',
      14 => 'field_care_of_school_facilities',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-college field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'School',
    'weight' => '4',
    'children' => array(
      0 => 'field_involved_school_activity2',
      1 => 'field_observations_coordinator_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'School',
    'weight' => '8',
    'children' => array(
      0 => 'field_involved_school_activity2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-college field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'Host',
    'weight' => '2',
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_integration_into_family_li',
      6 => 'field_it_consumes_what_is',
      7 => 'field_it_leads_to_people',
      8 => 'field_leads_a_balanced_diet',
      9 => 'field_participates_in_the_activ',
      10 => 'field_participates_in_the_daily',
      11 => 'field_respect_your_sleep',
      12 => 'field_respects_the_established_s',
      13 => 'field_tidiness_of_the_room',
      14 => 'field_when_you_are_outside',
      15 => 'field_punctuality',
      16 => 'field_punctuality2',
      17 => 'field_english_communication',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'Host',
    'weight' => '7',
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_integration_into_family_li',
      6 => 'field_it_consumes_what_is',
      7 => 'field_it_leads_to_people',
      8 => 'field_leads_a_balanced_diet',
      9 => 'field_participates_in_the_activ',
      10 => 'field_participates_in_the_daily',
      11 => 'field_respect_your_sleep',
      12 => 'field_respects_the_established_s',
      13 => 'field_tidiness_of_the_room',
      14 => 'field_when_you_are_outside',
      15 => 'field_punctuality',
      16 => 'field_punctuality2',
      17 => 'field_english_communication',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-family field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'Host family',
    'weight' => '2',
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_english_communication',
      6 => 'field_integration_into_family_li',
      7 => 'field_it_consumes_what_is',
      8 => 'field_it_leads_to_people',
      9 => 'field_leads_a_balanced_diet',
      10 => 'field_participates_in_the_activ',
      11 => 'field_participates_in_the_daily',
      12 => 'field_punctuality',
      13 => 'field_punctuality2',
      14 => 'field_respect_your_sleep',
      15 => 'field_respects_the_established_s',
      16 => 'field_tidiness_of_the_room',
      17 => 'field_when_you_are_outside',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Host family',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
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
    'label' => 'Host family',
    'weight' => '7',
    'children' => array(
      0 => 'field_adjustment_family',
      1 => 'field_appropriate_use_of_int',
      2 => 'field_asks_permission_to_events',
      3 => 'field_attitude_and_behavior',
      4 => 'field_dialogue_with_family',
      5 => 'field_english_communication',
      6 => 'field_integration_into_family_li',
      7 => 'field_it_consumes_what_is',
      8 => 'field_it_leads_to_people',
      9 => 'field_leads_a_balanced_diet',
      10 => 'field_participates_in_the_activ',
      11 => 'field_participates_in_the_daily',
      12 => 'field_punctuality',
      13 => 'field_punctuality2',
      14 => 'field_respect_your_sleep',
      15 => 'field_respects_the_established_s',
      16 => 'field_tidiness_of_the_room',
      17 => 'field_when_you_are_outside',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Host family',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-family field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
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
    'label' => 'Host family',
    'weight' => '3',
    'children' => array(
      0 => 'field_punctuality2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Host family',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
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
    'label' => 'Host family',
    'weight' => '7',
    'children' => array(
      0 => 'field_punctuality2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Host family',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-family field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
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
    'label' => 'Free time and after-school activities',
    'weight' => '4',
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_do_you_usually_do',
      2 => 'field_how_are_your_relationships',
      3 => 'field_it_is_motivated',
      4 => 'field_routine_weekend',
      5 => 'field_starts_itself_activities',
      6 => 'field_coordinator_observations_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'Free time and after-school activities',
    'weight' => '9',
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_do_you_usually_do',
      2 => 'field_how_are_your_relationships',
      3 => 'field_it_is_motivated',
      4 => 'field_routine_weekend',
      5 => 'field_starts_itself_activities',
      6 => 'field_coordinator_observations_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-free-time field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'Free time and after-school activities',
    'weight' => '4',
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_coordinator_observations_3',
      2 => 'field_do_you_usually_do',
      3 => 'field_friendships_at_school',
      4 => 'field_friendships_at_school2',
      5 => 'field_how_are_your_relationships',
      6 => 'field_it_is_motivated',
      7 => 'field_routine_weekend',
      8 => 'field_starts_itself_activities',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'Free time',
    'weight' => '9',
    'children' => array(
      0 => 'field_activities_in_which_it',
      1 => 'field_coordinator_observations_3',
      2 => 'field_do_you_usually_do',
      3 => 'field_friendships_at_school',
      4 => 'field_friendships_at_school2',
      5 => 'field_how_are_your_relationships',
      6 => 'field_it_is_motivated',
      7 => 'field_routine_weekend',
      8 => 'field_starts_itself_activities',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Free time',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-free-time field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
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
    'label' => 'Free time and after-school activities',
    'weight' => '5',
    'children' => array(
      0 => 'field_coordinator_observations_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'Free time and after-school activities',
    'weight' => '9',
    'children' => array(
      0 => 'field_coordinator_observations_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-free-time field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'General',
    'weight' => '5',
    'children' => array(
      0 => 'field_he_communicates_well_in_en',
      1 => 'field_attending_the_coord',
      2 => 'field_attending_the_family',
      3 => 'field_attending_the_family2',
      4 => 'field_he_had_to_go_to_the_docto2',
      5 => 'field_he_had_to_go_to_the_doctor',
      6 => 'field_respect_the_rules',
      7 => 'field_respect_the_rules2',
      8 => 'field_coordinator_observations_4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'General',
    'weight' => '10',
    'children' => array(
      0 => 'field_he_communicates_well_in_en',
      1 => 'field_attending_the_coord',
      2 => 'field_attending_the_family',
      3 => 'field_attending_the_family2',
      4 => 'field_he_had_to_go_to_the_docto2',
      5 => 'field_he_had_to_go_to_the_doctor',
      6 => 'field_respect_the_rules',
      7 => 'field_respect_the_rules2',
      8 => 'field_coordinator_observations_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-questions field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'General',
    'weight' => '5',
    'children' => array(
      0 => 'field_attending_the_coord',
      1 => 'field_attending_the_family',
      2 => 'field_attending_the_family2',
      3 => 'field_coordinator_observations_4',
      4 => 'field_he_communicates_well_in_en',
      5 => 'field_he_had_to_go_to_the_docto2',
      6 => 'field_he_had_to_go_to_the_doctor',
      7 => 'field_respect_the_rules',
      8 => 'field_respect_the_rules2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'General',
    'weight' => '10',
    'children' => array(
      0 => 'field_attending_the_coord',
      1 => 'field_attending_the_family',
      2 => 'field_attending_the_family2',
      3 => 'field_coordinator_observations_4',
      4 => 'field_he_communicates_well_in_en',
      5 => 'field_he_had_to_go_to_the_docto2',
      6 => 'field_he_had_to_go_to_the_doctor',
      7 => 'field_respect_the_rules',
      8 => 'field_respect_the_rules2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-questions field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'General',
    'weight' => '6',
    'children' => array(
      0 => 'field_coordinator_observations_4',
      1 => 'field_he_communicates_well_in_en',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
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
    'label' => 'General',
    'weight' => '10',
    'children' => array(
      0 => 'field_coordinator_observations_4',
      1 => 'field_he_communicates_well_in_en',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-questions field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'Hidden',
    'weight' => '12',
    'children' => array(
      0 => 'field_attending_the_coord',
      1 => 'field_attending_the_family',
      2 => 'field_attending_the_family2',
      3 => 'field_observations_coordinator_2',
      4 => 'field_respect_the_rules',
      5 => 'field_respect_the_rules2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hidden field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
