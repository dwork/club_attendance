<?php
/**
 * @file
 * club_attendance.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function club_attendance_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_makeup_rules|node|attendance_rules|form';
  $field_group->group_name = 'group_makeup_rules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attendance_rules';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Makeup Rules',
    'weight' => '13',
    'children' => array(
      0 => 'field_makeupsallowed',
      1 => 'field_maxmakeups',
      2 => 'field_makeup_policy',
      3 => 'field_makeup_notation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_makeup_rules|node|attendance_rules|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_missed_rules|node|attendance_rules|form';
  $field_group->group_name = 'group_missed_rules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attendance_rules';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Missed Rules',
    'weight' => '16',
    'children' => array(
      0 => 'field_missed_subject',
      1 => 'field_missedyoumessage',
      2 => 'field_appendpolicy',
      3 => 'field_maximum_missed',
      4 => 'field_maximum_consecutive',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_missed_rules|node|attendance_rules|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rule_admin|node|attendance_rules|form';
  $field_group->group_name = 'group_rule_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attendance_rules';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rule Admin',
    'weight' => '22',
    'children' => array(
      0 => 'field_attendanceadmin',
      1 => 'field_test',
      2 => 'field_test_email_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rule_admin|node|attendance_rules|form'] = $field_group;

  return $export;
}
