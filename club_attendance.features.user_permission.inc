<?php
/**
 * @file
 * club_attendance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function club_attendance_user_default_permissions() {
  $permissions = array();

  // Exported permission: create action_trigger_attendance content.
  $permissions['create action_trigger_attendance content'] = array(
    'name' => 'create action_trigger_attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create attendance content.
  $permissions['create attendance content'] = array(
    'name' => 'create attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any action_trigger_attendance content.
  $permissions['delete any action_trigger_attendance content'] = array(
    'name' => 'delete any action_trigger_attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any attendance content.
  $permissions['delete any attendance content'] = array(
    'name' => 'delete any attendance content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own action_trigger_attendance content.
  $permissions['delete own action_trigger_attendance content'] = array(
    'name' => 'delete own action_trigger_attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own attendance content.
  $permissions['delete own attendance content'] = array(
    'name' => 'delete own attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any action_trigger_attendance content.
  $permissions['edit any action_trigger_attendance content'] = array(
    'name' => 'edit any action_trigger_attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any attendance content.
  $permissions['edit any attendance content'] = array(
    'name' => 'edit any attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own action_trigger_attendance content.
  $permissions['edit own action_trigger_attendance content'] = array(
    'name' => 'edit own action_trigger_attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own attendance content.
  $permissions['edit own attendance content'] = array(
    'name' => 'edit own attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
