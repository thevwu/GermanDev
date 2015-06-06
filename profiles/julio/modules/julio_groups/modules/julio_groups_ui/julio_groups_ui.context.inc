<?php
/**
 * @file
 * julio_groups_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_groups_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_group_menu';
  $context->description = 'Custom group menus';
  $context->tag = 'group';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'og_menu-og_single_menu_block' => array(
          'module' => 'og_menu',
          'delta' => 'og_single_menu_block',
          'region' => 'sidebar_first',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom group menus');
  t('group');
  $export['julio_group_menu'] = $context;

  return $export;
}
