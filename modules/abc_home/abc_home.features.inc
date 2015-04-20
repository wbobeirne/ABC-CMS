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
