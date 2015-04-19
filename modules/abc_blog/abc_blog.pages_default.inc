<?php
/**
 * @file
 * abc_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function abc_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Blog Post',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog_post',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'wides_and_narrow';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e37239de-7063-4d1d-9d19-3ee9ac4d7a66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36c744a7-0b76-408e-9406-0fe93ab9c69a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_byline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36c744a7-0b76-408e-9406-0fe93ab9c69a';
    $display->content['new-36c744a7-0b76-408e-9406-0fe93ab9c69a'] = $pane;
    $display->panels['middle'][0] = 'new-36c744a7-0b76-408e-9406-0fe93ab9c69a';
    $pane = new stdClass();
    $pane->pid = 'new-a0aef910-e9e0-415b-b211-b639d0a75c6d';
    $pane->panel = 'middle';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'blog_post',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a0aef910-e9e0-415b-b211-b639d0a75c6d';
    $display->content['new-a0aef910-e9e0-415b-b211-b639d0a75c6d'] = $pane;
    $display->panels['middle'][1] = 'new-a0aef910-e9e0-415b-b211-b639d0a75c6d';
    $pane = new stdClass();
    $pane->pid = 'new-e0237521-55e8-4dca-8df2-0486514203fc';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e0237521-55e8-4dca-8df2-0486514203fc';
    $display->content['new-e0237521-55e8-4dca-8df2-0486514203fc'] = $pane;
    $display->panels['middle'][2] = 'new-e0237521-55e8-4dca-8df2-0486514203fc';
    $pane = new stdClass();
    $pane->pid = 'new-2cc4cd0c-bf7f-4d1c-b775-287be63c72da';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2cc4cd0c-bf7f-4d1c-b775-287be63c72da';
    $display->content['new-2cc4cd0c-bf7f-4d1c-b775-287be63c72da'] = $pane;
    $display->panels['top'][0] = 'new-2cc4cd0c-bf7f-4d1c-b775-287be63c72da';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2cc4cd0c-bf7f-4d1c-b775-287be63c72da';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post'] = $handler;

  return $export;
}
