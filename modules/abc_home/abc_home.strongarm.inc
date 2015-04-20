<?php
/**
 * @file
 * abc_home.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function abc_home_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_homepage_block';
  $strongarm->value = 'n/j/y';
  $export['date_format_homepage_block'] = $strongarm;

  return $export;
}
