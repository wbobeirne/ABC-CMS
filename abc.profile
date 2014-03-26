<?php

/**
 * Implements hook_install().
 */
function abc_install() {
  theme_enable(array('abc'));
  variable_set('theme_default', 'abc'); 
  variable_set('admin_theme', 'ember');
  variable_set('jquery_update_jquery_version', '1.7');
}