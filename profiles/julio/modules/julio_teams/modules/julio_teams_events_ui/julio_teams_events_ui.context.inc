<?php
/**
 * @file
 * julio_teams_events_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_teams_events_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_teams_events';
  $context->description = 'teams events block';
  $context->tag = 'teams';
  $context->conditions = array(
    'context_og_condition_group_node' => array(
      'values' => array(
        variable_get('julio_teams_nid', 0) => variable_get('julio_teams_nid', 0),
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'teams' => 'teams',
        'teams/announcements' => 'teams/announcements',
        'teams/calendar' => 'teams/calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_teams_calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_teams_calendar-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('teams');
  t('teams events block');
  $export['julio_teams_events'] = $context;

  return $export;
}
