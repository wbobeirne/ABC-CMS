<?php

/**
 * Implements hook_panels_layouts()
 */
function abc_wides_and_narrow_panels_layouts() {
  $items['wides_and_narrow'] = array(
    'title' => t('Full-Width Wides and Narrow Single Column'),
    'category' => t('ABC'),
    'icon' => 'wides_and_narrow.png',
    'theme' => 'wides_and_narrow',
    //'admin css' => '../abc_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'middle' => t('Middle'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

