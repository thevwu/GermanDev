<?php
/**
 * @file
 * julio_clubs_announcements_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_clubs_announcements_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_clubs_announcements';
  $context->description = 'Clubs news block';
  $context->tag = 'clubs';
  $context->conditions = array(
    'context_og_condition_group_node' => array(
      'values' => array(
        variable_get('julio_clubs_nid', 0) => variable_get('julio_clubs_nid', 0),
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'clubs' => 'clubs',
        'clubs/calendar' => 'clubs/calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_clubs_news-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_clubs_news-block_1',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Clubs news block');
  t('clubs');
  $export['julio_clubs_announcements'] = $context;

  return $export;
}
