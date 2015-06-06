<?php
/**
 * @file
 * julio_teams_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_teams_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_teams';
  $context->description = 'List of Athletic Teams';
  $context->tag = 'teams';
  $context->conditions = array(
    'context_og_condition_group_node' => array(
      'values' => array(
        variable_get('julio_teams_nid', 0) => variable_get('julio_teams_nid', 0),
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        'julio_team' => 'julio_team',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'teams*' => 'teams*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-julio-teams-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-julio-teams-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'node/' . variable_get('julio_teams_nid', 0),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('List of Athletic Teams');
  t('teams');
  $export['julio_teams'] = $context;

  return $export;
}
