<?php
/**
 * @file
 * abc_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function abc_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_history:node/1
  $menu_links['main-menu_history:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'History',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_history:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_who-we-are:<nolink>',
  );
  // Exported menu link: menu-footer-menu_careers:<front>
  $menu_links['menu-footer-menu_careers:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_careers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Careers');
  t('History');


  return $menu_links;
}
