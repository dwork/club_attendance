<?php
/**
 * @file
 * club_attendance.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function club_attendance_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-attendance.
  $menus['menu-attendance'] = array(
    'menu_name' => 'menu-attendance',
    'title' => 'Attendance',
    'description' => 'Attendance related activities',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Attendance');
  t('Attendance related activities');
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
