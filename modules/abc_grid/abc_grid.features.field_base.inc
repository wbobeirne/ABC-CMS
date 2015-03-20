<?php
/**
 * @file
 * abc_grid.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function abc_grid_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_grid_item'
  $field_bases['field_grid_item'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_grid_item',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
