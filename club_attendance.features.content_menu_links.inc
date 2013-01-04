<?php
/**
 * @file
 * club_attendance.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function club_attendance_content_menu_links_defaults() {
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Attendance');


  return $menu_links;
}
