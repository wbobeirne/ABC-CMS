<?php

/**
 * Implements hook_panels_layouts()
 */
function abc_wides_and_three_panels_layouts() {
  $items['wides_and_three'] = array(
    'title' => t('Full-Width Wides and Three Columns'),
    'category' => t('ABC'),
    'icon' => 'wides_and_three.png',
    'theme' => 'wides_and_three',
    //'admin css' => '../abc_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'middle_left' => t('Middle-Left'),
      'middle_center' => t('Middle-Center'),
      'middle_right' => t('Middle-Right'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

