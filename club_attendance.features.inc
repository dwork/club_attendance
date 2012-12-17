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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
    'attendance' => array(
      'name' => t('Attendance'),
      'base' => 'node_content',
      'description' => t('Attendance record'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
