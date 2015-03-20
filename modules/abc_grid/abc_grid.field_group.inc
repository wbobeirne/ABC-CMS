<?php
/**
 * @file
 * abc_grid.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function abc_grid_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_display|node|grid|form';
  $field_group->group_name = 'group_title_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grid';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Display',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'field_header_background',
      2 => 'field_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-title-display field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title_display|node|grid|form'] = $field_group;

  return $export;
}
