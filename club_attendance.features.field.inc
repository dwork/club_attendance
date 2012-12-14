<?php
/**
 * @file
 * club_attendance.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function club_attendance_field_default_fields() {
  $fields = array();

  // Exported field: 'taxonomy_term-attendance-field_statistic'.
  $fields['taxonomy_term-attendance-field_statistic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_statistic',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Absent' => 'Absent',
          'Present' => 'Present',
          'Makeup' => 'Makeup',
          'Do Not Count' => 'Do Not Count',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'attendance',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Determines the attendance statistic for reporting purposes - Absent, Present or Not Counted.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_statistic',
      'label' => 'Statistic',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Determines the attendance statistic for reporting purposes - Absent, Present or Not Counted.');
  t('Statistic');

  return $fields;
}
