<?php
/**
 * @file
 * club_attendance.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_attendance_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attendance_detail_by_user';
  $view->description = 'Display an attendance list summarized by user';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attendance Detail by User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendance Details by User';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_chapter',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_uid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_uid' => 'field_uid',
    'uid' => 'uid',
    'field_first_name' => 'field_first_name',
    'field_middle_initial' => 'field_middle_initial',
    'field_last_name' => 'field_last_name',
    'field_suffix' => 'field_suffix',
    'title' => 'title',
    'field_description' => 'field_description',
    'nothing_1' => 'nothing_1',
    'field_date' => 'field_date',
    'field_attendance' => 'field_attendance',
    'nothing' => 'nothing',
    'field_chapter' => 'field_chapter',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_initial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attendance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chapter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Makeup notification */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['ui_name'] = 'Makeup notification';
  $handler->display->display_options['footer']['php']['label'] = 'Makeup notification if not included in total meetings';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
  $config = attendance_get_config();
  if ($config->field_makeupsallowed[\'und\'][0][\'value\'] <> \'Yes\') {
    if (isset($config->field_makeup_notation[\'und\'][0][\'value\'])) {
       $note = $config->field_makeup_notation[\'und\'][0][\'value\'];
       print $note;
    } else {
       print \'* Make ups are not counted toward total attendance\';
    }
  }
?>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_uid_target_id']['id'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['table'] = 'field_data_field_uid';
  $handler->display->display_options['relationships']['field_uid_target_id']['field'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['required'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'attendance' => 'attendance',
    'album_categories' => 0,
    'board' => 0,
    'classification' => 0,
    'dues_application_rule' => 0,
    'event_type' => 0,
    'location' => 0,
    'member_status' => 0,
    'membership_renewal' => 0,
    'newsletter' => 0,
    'officers' => 0,
    'phone_types' => 0,
    'tags' => 0,
    'title' => 0,
  );
  /* Field: Content: Member */
  $handler->display->display_options['fields']['field_uid']['id'] = 'field_uid';
  $handler->display->display_options['fields']['field_uid']['table'] = 'field_data_field_uid';
  $handler->display->display_options['fields']['field_uid']['field'] = 'field_uid';
  $handler->display->display_options['fields']['field_uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uid']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  /* Field: Title (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Extended Description (hidden) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Extended Description (hidden)';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['text'] = '<BR>[field_description]';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = TRUE;
  /* Field: Concatenated Member Name */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Concatenated Member Name';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Member Name';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix] ';
  /* Field: Content: Meeting/Event Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Default Type */
  $handler->display->display_options['fields']['field_attendance']['id'] = 'field_attendance';
  $handler->display->display_options['fields']['field_attendance']['table'] = 'field_data_field_attendance';
  $handler->display->display_options['fields']['field_attendance']['field'] = 'field_attendance';
  $handler->display->display_options['fields']['field_attendance']['label'] = 'Attendance Type';
  $handler->display->display_options['fields']['field_attendance']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] [field_description]';
  /* Field: Chapter/Club (hidden) */
  $handler->display->display_options['fields']['field_chapter']['id'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['fields']['field_chapter']['field'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['ui_name'] = 'Chapter/Club (hidden)';
  $handler->display->display_options['fields']['field_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_chapter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['sorts']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['sorts']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['sorts']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  /* Sort criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'field_uid_target_id';
  /* Sort criterion: Field: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'field_uid_target_id';
  /* Sort criterion: Content: Meeting/Event Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendance' => 'attendance',
  );
  /* Filter criterion: Content: Meeting/Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Range';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (or part)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  /* Filter criterion: PHP inclusion (super user or admin chapter) */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'PHP inclusion (super user or admin chapter)';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '// Display if superuser or if chapter = this user\'s chapter
global $user;
if ($user->uid == 1 || club_base_get_chapter() == $data->field_data_field_chapter_field_chapter_target_id ) {
  return FALSE;
} else {
  return TRUE;
}';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'attendance-detail';
  $export['attendance_detail_by_user'] = $view;

  $view = new view();
  $view->name = 'attendance_editable_';
  $view->description = 'View and update attendance for particular dates';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attendance (editable)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendance (editable)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_uid_target_id']['id'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['table'] = 'field_data_field_uid';
  $handler->display->display_options['relationships']['field_uid_target_id']['field'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['required'] = TRUE;
  /* Relationship: Content: Default Type (field_attendance) */
  $handler->display->display_options['relationships']['field_attendance_tid']['id'] = 'field_attendance_tid';
  $handler->display->display_options['relationships']['field_attendance_tid']['table'] = 'field_data_field_attendance';
  $handler->display->display_options['relationships']['field_attendance_tid']['field'] = 'field_attendance_tid';
  $handler->display->display_options['relationships']['field_attendance_tid']['required'] = TRUE;
  /* Field: Meeting Title (hidden) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Meeting Title (hidden)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  /* Field: Concatenated Member name  */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenated Member name ';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix]<BR>[title]';
  /* Field: Content: Meeting/Event Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date']['type'] = 'editable';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'short',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    ),
  );
  /* Field: Content: Default Type */
  $handler->display->display_options['fields']['field_attendance']['id'] = 'field_attendance';
  $handler->display->display_options['fields']['field_attendance']['table'] = 'field_data_field_attendance';
  $handler->display->display_options['fields']['field_attendance']['field'] = 'field_attendance';
  $handler->display->display_options['fields']['field_attendance']['type'] = 'editable';
  $handler->display->display_options['fields']['field_attendance']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  /* Field: Content: Extended Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Substitute/Note';
  $handler->display->display_options['fields']['field_description']['type'] = 'editable';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Meeting/Event Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_value']['expose']['label'] = 'Meeting/Event Date';
  /* Sort criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendance' => 'attendance',
  );
  /* Filter criterion: Content: Meeting/Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-2:+0';
  /* Filter criterion: Content: Default Type (field_attendance) */
  $handler->display->display_options['filters']['field_attendance_tid']['id'] = 'field_attendance_tid';
  $handler->display->display_options['filters']['field_attendance_tid']['table'] = 'field_data_field_attendance';
  $handler->display->display_options['filters']['field_attendance_tid']['field'] = 'field_attendance_tid';
  $handler->display->display_options['filters']['field_attendance_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attendance_tid']['expose']['operator_id'] = 'field_attendance_tid_op';
  $handler->display->display_options['filters']['field_attendance_tid']['expose']['label'] = 'Attendance';
  $handler->display->display_options['filters']['field_attendance_tid']['expose']['operator'] = 'field_attendance_tid_op';
  $handler->display->display_options['filters']['field_attendance_tid']['expose']['identifier'] = 'field_attendance_tid';
  $handler->display->display_options['filters']['field_attendance_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_attendance_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attendance_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_attendance_tid']['vocabulary'] = 'attendance';
  $handler->display->display_options['filters']['field_attendance_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'attendance-editable';
  $export['attendance_editable_'] = $view;

  $view = new view();
  $view->name = 'attendance_policy';
  $view->description = 'Display attendance policy for Chapter/Club';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attendance Policy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendance Policy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['relationships']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['relationships']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['relationships']['field_chapter_target_id']['required'] = TRUE;
  /* Field: nid (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'nid (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Club/Chapter (hidden) */
  $handler->display->display_options['fields']['field_chapter']['id'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['fields']['field_chapter']['field'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['ui_name'] = 'Club/Chapter (hidden)';
  $handler->display->display_options['fields']['field_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_chapter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_chapter_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Chapter/Club';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Policy Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Policy Date Range */
  $handler->display->display_options['fields']['field_policy_date_range']['id'] = 'field_policy_date_range';
  $handler->display->display_options['fields']['field_policy_date_range']['table'] = 'field_data_field_policy_date_range';
  $handler->display->display_options['fields']['field_policy_date_range']['field'] = 'field_policy_date_range';
  $handler->display->display_options['fields']['field_policy_date_range']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Edit */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Clone */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Clone';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Clone';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/clone';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['sorts']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['sorts']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['sorts']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendance_configuration' => 'attendance_configuration',
  );
  /* Filter criterion: Superuser or Policies for this admin only */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'Superuser or Policies for this admin only';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$usernode = user_load($user->uid);
if ($user->uid == 1) {
  return FALSE;    // display ALL records
} else {
  $node = node_load($data->nid);
  if ($node->field_chapter[\'und\'][0][\'target_id\'] == $usernode->field_chapter[\'und\'][0][\'target_id\']) {
    return FALSE;
  }
}
return TRUE;';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'view-attendance-policy';
  $export['attendance_policy'] = $view;

  $view = new view();
  $view->name = 'attendance_summary_by_user';
  $view->description = 'Display an attendance list summarized by user';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attendance Summary by User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendance Summary by User';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_chapter',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_middle_initial' => 'field_middle_initial',
    'field_last_name' => 'field_last_name',
    'field_suffix' => 'field_suffix',
    'nothing' => 'nothing',
    'field_uid' => 'field_uid',
    'uid' => 'uid',
    'php_5' => 'php_5',
    'php' => 'php',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
    'php_3' => 'php_3',
    'field_chapter' => 'field_chapter',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_initial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_5' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chapter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Makeup notification */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['ui_name'] = 'Makeup notification';
  $handler->display->display_options['footer']['php']['label'] = 'Makeup notification if not included in total meetings';
  $handler->display->display_options['footer']['php']['php_output'] = '  <?php
  $config = attendance_get_config();
  if ($config->field_makeupsallowed[\'und\'][0][\'value\'] <> \'Yes\') {
    if (isset($config->field_makeup_notation[\'und\'][0][\'value\'])) {
       $note = $config->field_makeup_notation[\'und\'][0][\'value\'];
       print $note;
    } else {
       print \'* Make ups are not counted toward total attendance\';
    }
  }
?>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_uid_target_id']['id'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['table'] = 'field_data_field_uid';
  $handler->display->display_options['relationships']['field_uid_target_id']['field'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['required'] = TRUE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  /* Field: Concatenated Member Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenated Member Name';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix] ';
  /* Field: Content: Member */
  $handler->display->display_options['fields']['field_uid']['id'] = 'field_uid';
  $handler->display->display_options['fields']['field_uid']['table'] = 'field_data_field_uid';
  $handler->display->display_options['fields']['field_uid']['field'] = 'field_uid';
  $handler->display->display_options['fields']['field_uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uid']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = 'Excused';
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php
  $ary = $view->get_exposed_input();
  $total = attendance_accumulate($row->uid,\'Do Not Count\',$ary);
  if ($total > 0) {
     print $total;
  }
?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Total number of Meetings */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Total number of Meetings';
  $handler->display->display_options['fields']['php']['label'] = 'Total';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  global $total;
  $ary = $view->get_exposed_input();
  $total = attendance_accumulate($row->uid,\'Total\',$ary);
  print $total;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Present at Meetings */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Present at Meetings';
  $handler->display->display_options['fields']['php_1']['label'] = 'Present';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
  $ary = $view->get_exposed_input();
  $total = attendance_accumulate($row->uid,\'Present\',$ary);
  print $total;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Makeups or Substitutions */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Makeups or Substitutions';
  $handler->display->display_options['fields']['php_2']['label'] = 'Makeups';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
  global $makeup;
  $config = attendance_get_config();
    $ary = $view->get_exposed_input();
    $makeup = attendance_accumulate($row->uid,\'Makeup\',$ary);
    if ($makeup <> 0) {
       print $makeup;
       if ($config->field_makeupsallowed[\'und\'][0][\'value\'] <> \'Yes\') {
         print \' *\';
       }
   }
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Tardy  */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['ui_name'] = 'Tardy ';
  $handler->display->display_options['fields']['php_4']['label'] = 'Tardy';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
  global $total, $tardies, $absents;
  $config = attendance_get_config();    // get config for makeup policy
//  $tardies = $config->field_tardies[\'und\'][0][\'value\'];
  $tardies = 0;
  $ary = $view->get_exposed_input();
  $tardy = attendance_accumulate($row->uid,\'Tardy\',$ary);
  if ($tardy <> 0) {
    print $tardy;
    if ($tardies <> 0 and $tardy <> 0) {          // don\'t adjust total
      print \' (\' . round($tardy/$tardies,0) . \')\';
    }
    if ($total > 0) {
      print " &nbsp; &nbsp;".round(100*($tardy/$total),1) . \'%\';
    }
  }
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Absent from meetings */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'Absent from meetings';
  $handler->display->display_options['fields']['php_3']['label'] = 'Absent';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
  global $total, $makeup;
  $config = attendance_get_config();    // get config for makeup policy
  if ($config->field_makeupsallowed[\'und\'][0][\'value\'] <> \'Yes\') {          // don\'t adjust total
    $makeup == \'No\';
  }
  $ary = $view->get_exposed_input();
  $absent = attendance_accumulate($row->uid,\'Absent\',$ary);
  if ($config->field_makeup_policy[\'und\'][0][\'value\'] == \'Automatic\') {
    $absent = $absent - $makeup;
    if ($absent < 0) {
       $absent = 0;
    }
  }
  if ($absent <> 0) {
     print $absent;
     if ($total > 0) {
       print " &nbsp; &nbsp;".round(100*($absent/$total),1) . \'%\';
     }
  }
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Chapter/Club (hidden) */
  $handler->display->display_options['fields']['field_chapter']['id'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['fields']['field_chapter']['field'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['ui_name'] = 'Chapter/Club (hidden)';
  $handler->display->display_options['fields']['field_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_chapter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['sorts']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['sorts']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['sorts']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  /* Sort criterion: Content: Member (field_uid) */
  $handler->display->display_options['sorts']['field_uid_target_id']['id'] = 'field_uid_target_id';
  $handler->display->display_options['sorts']['field_uid_target_id']['table'] = 'field_data_field_uid';
  $handler->display->display_options['sorts']['field_uid_target_id']['field'] = 'field_uid_target_id';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'attendance' => 'attendance',
  );
  /* Filter criterion: Content: Meeting/Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Range';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';
  /* Filter criterion: PHP inclusion (super user or admin&#039;s chapter) */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'PHP inclusion (super user or admin\'s chapter)';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '// Display if superuser or if chapter = this user\'s chapter
global $user;
if ($user->uid == 1 || club_base_get_chapter() == $data->field_data_field_chapter_field_chapter_target_id ) {
  return FALSE;
} else {
  return TRUE;
}';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'attendance-summary-by-user';
  $export['attendance_summary_by_user'] = $view;

  return $export;
}
