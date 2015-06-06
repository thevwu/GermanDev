<?php
/**
 * @file
 * julio_clubs_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_clubs_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_clubs';
  $context->description = 'List of school clubs.';
  $context->tag = 'clubs';
  $context->conditions = array(
    'context_og_condition_group_node' => array(
      'values' => array(
        variable_get('julio_clubs_nid', 0) => variable_get('julio_clubs_nid', 0),
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        'julio_club' => 'julio_club',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'clubs*' => 'clubs*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-julio-clubs-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-julio-clubs-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'node/' . variable_get('julio_clubs_nid', 0),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('List of school clubs.');
  t('clubs');
  $export['julio_clubs'] = $context;

  return $export;
}
