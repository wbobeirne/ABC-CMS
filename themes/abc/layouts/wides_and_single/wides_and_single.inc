<?php

/**
 * Implements hook_panels_layouts()
 */
function abc_wides_and_single_panels_layouts() {
  $items['wides_and_single'] = array(
    'title' => t('Full-Width Wides and Single Column'),
    'category' => t('ABC'),
    'icon' => 'wides_and_single.png',
    'theme' => 'wides_and_single',
    //'admin css' => '../abc_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'middle' => t('Middle'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

