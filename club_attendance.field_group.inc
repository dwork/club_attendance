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
  $field_group->identifier = 'group_admin|node|attendance_configuration|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attendance_configuration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '9',
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
  $export['group_admin|node|attendance_configuration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_makeups|node|attendance_configuration|form';
  $field_group->group_name = 'group_makeups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attendance_configuration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Make Ups',
    'weight' => '7',
    'children' => array(
      0 => 'field_makeup_notation',
      1 => 'field_makeup_policy',
      2 => 'field_makeupsallowed',
      3 => 'field_maxmakeups',
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
  $export['group_makeups|node|attendance_configuration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_missed|node|attendance_configuration|form';
  $field_group->group_name = 'group_missed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attendance_configuration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Missed Meetings',
    'weight' => '8',
    'children' => array(
      0 => 'field_appendpolicy',
      1 => 'field_maximum_consecutive',
      2 => 'field_maximum_missed',
      3 => 'field_missed_subject',
      4 => 'field_missedyoumessage',
      5 => 'field_tardies',
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
  $export['group_missed|node|attendance_configuration|form'] = $field_group;

  return $export;
}
