<?php
/**
 * @file
 * club_attendance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_attendance_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function club_attendance_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function club_attendance_node_info() {
  $items = array(
    'action_trigger_attendance' => array(
      'name' => t('Action Trigger - Attendance'),
      'base' => 'node_content',
      'description' => t('The form that triggers the creation of attendance nodes for the current set of active members'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'action_trigger_mass_makeup' => array(
      'name' => t('Action Trigger - Mass Makeup'),
      'base' => 'node_content',
      'description' => t('Allows the entry of multiple members on one form -- faster than individual entry, and not as inclusive as the regular attendance trigger.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'attendance' => array(
      'name' => t('Attendance'),
      'base' => 'node_content',
      'description' => t('Attendance record'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'attendance_configuration' => array(
      'name' => t('Attendance Policy'),
      'base' => 'node_content',
      'description' => t('Configuration parameters for attendance reporting'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mass_makeup' => array(
      'name' => t('Mass Makeup'),
      'base' => 'node_content',
      'description' => t('Allows the entry of multiple makeups on one form rather than requiring individual entry, which is time consuming, or mass entry, which is overly inclusive.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
