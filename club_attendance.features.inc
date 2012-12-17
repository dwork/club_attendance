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
