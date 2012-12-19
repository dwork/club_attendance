<?php
/**
 * @file
 * club_attendance.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function club_attendance_taxonomy_default_vocabularies() {
  return array(
    'attendance' => array(
      'name' => 'Attendance',
      'machine_name' => 'attendance',
      'description' => 'Attendance types',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
