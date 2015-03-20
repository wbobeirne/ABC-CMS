<?php
/**
 * @file
 * abc_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function abc_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function abc_files_node_info() {
  $items = array(
    'files' => array(
      'name' => t('Files'),
      'base' => 'node_content',
      'description' => t('A list page of uploaded files'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
