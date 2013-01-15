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

  // Exported permission: create action_trigger_mass_makeup content.
  $permissions['create action_trigger_mass_makeup content'] = array(
    'name' => 'create action_trigger_mass_makeup content',
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

  // Exported permission: create attendance_configuration content.
  $permissions['create attendance_configuration content'] = array(
    'name' => 'create attendance_configuration content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create mass_makeup content.
  $permissions['create mass_makeup content'] = array(
    'name' => 'create mass_makeup content',
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

  // Exported permission: delete any action_trigger_mass_makeup content.
  $permissions['delete any action_trigger_mass_makeup content'] = array(
    'name' => 'delete any action_trigger_mass_makeup content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any attendance content.
  $permissions['delete any attendance content'] = array(
    'name' => 'delete any attendance content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any attendance_configuration content.
  $permissions['delete any attendance_configuration content'] = array(
    'name' => 'delete any attendance_configuration content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any mass_makeup content.
  $permissions['delete any mass_makeup content'] = array(
    'name' => 'delete any mass_makeup content',
    'roles' => array(),
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

  // Exported permission: delete own action_trigger_mass_makeup content.
  $permissions['delete own action_trigger_mass_makeup content'] = array(
    'name' => 'delete own action_trigger_mass_makeup content',
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

  // Exported permission: delete own attendance_configuration content.
  $permissions['delete own attendance_configuration content'] = array(
    'name' => 'delete own attendance_configuration content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own mass_makeup content.
  $permissions['delete own mass_makeup content'] = array(
    'name' => 'delete own mass_makeup content',
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

  // Exported permission: edit any action_trigger_mass_makeup content.
  $permissions['edit any action_trigger_mass_makeup content'] = array(
    'name' => 'edit any action_trigger_mass_makeup content',
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

  // Exported permission: edit any attendance_configuration content.
  $permissions['edit any attendance_configuration content'] = array(
    'name' => 'edit any attendance_configuration content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any mass_makeup content.
  $permissions['edit any mass_makeup content'] = array(
    'name' => 'edit any mass_makeup content',
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

  // Exported permission: edit own action_trigger_mass_makeup content.
  $permissions['edit own action_trigger_mass_makeup content'] = array(
    'name' => 'edit own action_trigger_mass_makeup content',
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

  // Exported permission: edit own attendance_configuration content.
  $permissions['edit own attendance_configuration content'] = array(
    'name' => 'edit own attendance_configuration content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own mass_makeup content.
  $permissions['edit own mass_makeup content'] = array(
    'name' => 'edit own mass_makeup content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
