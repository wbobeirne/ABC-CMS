<?php
/**
 * @file
 * abc_grid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function abc_grid_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function abc_grid_image_default_styles() {
  $styles = array();

  // Exported image style: grid_image.
  $styles['grid_image'] = array(
    'label' => 'Grid Image (305x260)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 305,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function abc_grid_node_info() {
  $items = array(
    'grid' => array(
      'name' => t('Grid'),
      'base' => 'node_content',
      'description' => t('Display photos and information of things in a particular category, with links to more information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
