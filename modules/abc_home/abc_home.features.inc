<?php
/**
 * @file
 * abc_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function abc_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function abc_home_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_thumbnail.
  $styles['homepage_thumbnail'] = array(
    'label' => 'Homepage Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
