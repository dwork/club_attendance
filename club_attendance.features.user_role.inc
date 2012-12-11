<?php
/**
 * @file
 * club_attendance.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function club_attendance_user_default_roles() {
  $roles = array();

  // Exported role: Attendance.
  $roles['Attendance'] = array(
    'name' => 'Attendance',
    'weight' => '7',
  );

  return $roles;
}
