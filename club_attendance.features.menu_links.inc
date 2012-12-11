<?php
/**
 * @file
 * club_attendance.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function club_attendance_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/structure/menu/manage/menu-attendance
  $menu_links['management:admin/structure/menu/manage/menu-attendance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-attendance',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Attendance',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-attendance:attendance-detail
  $menu_links['menu-attendance:attendance-detail'] = array(
    'menu_name' => 'menu-attendance',
    'link_path' => 'attendance-detail',
    'router_path' => 'attendance-detail',
    'link_title' => 'Attendance Details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => '1668',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-attendance:attendance-editable
  $menu_links['menu-attendance:attendance-editable'] = array(
    'menu_name' => 'menu-attendance',
    'link_path' => 'attendance-editable',
    'router_path' => 'attendance-editable',
    'link_title' => 'Attendance Entry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => '1666',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-attendance:attendance-summary-by-user
  $menu_links['menu-attendance:attendance-summary-by-user'] = array(
    'menu_name' => 'menu-attendance',
    'link_path' => 'attendance-summary-by-user',
    'router_path' => 'attendance-summary-by-user',
    'link_title' => 'Attendance Summary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => '1667',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-attendance:node/add/action-trigger-attendance
  $menu_links['menu-attendance:node/add/action-trigger-attendance'] = array(
    'menu_name' => 'menu-attendance',
    'link_path' => 'node/add/action-trigger-attendance',
    'router_path' => 'node/add/action-trigger-attendance',
    'link_title' => 'Action Trigger - Attendance',
    'options' => array(
      'attributes' => array(
        'title' => 'The form that triggers the creation of attendance nodes for the current set of active members',
      ),
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => '1662',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Action Trigger - Attendance');
  t('Attendance');
  t('Attendance Details');
  t('Attendance Entry');
  t('Attendance Summary');


  return $menu_links;
}
