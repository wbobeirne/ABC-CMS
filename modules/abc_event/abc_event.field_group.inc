<?php
/**
 * @file
 * abc_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function abc_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|event|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '3',
    'children' => array(
      0 => 'field_ticket_link',
      1 => 'field_donate_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_links|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_display|node|event|form';
  $field_group->group_name = 'group_title_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Display',
    'weight' => '0',
    'children' => array(
      0 => 'field_color',
      1 => 'field_header_background',
      2 => 'title',
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
  $export['group_title_display|node|event|form'] = $field_group;

  return $export;
}
