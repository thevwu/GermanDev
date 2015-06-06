<?php
/**
 * @file
 * julio_announcements_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_announcements_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_announcements';
  $context->description = 'Announcements block';
  $context->tag = 'announcements';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/' . variable_get('julio_clubs_nid', 0) => '~node/' . variable_get('julio_clubs_nid', 0),
        '~node/' . variable_get('julio_departments_nid', 0) => '~node/' . variable_get('julio_departments_nid', 0),
        '~node/' . variable_get('julio_teams_nid', 0) => '~node/' . variable_get('julio_teams_nid', 0),
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_announcements-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_announcements-block_1',
          'region' => 'sidebar_first',
          'weight' => '-16',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements block');
  t('announcements');
  $export['julio_announcements'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_announcements_all';
  $context->description = 'All announcements';
  $context->tag = 'announcements';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~admin' => '~admin',
        '~announcements/*' => '~announcements/*',
        '~clubs' => '~clubs',
        '~clubs/announcements' => '~clubs/announcements',
        '~clubs/calendar' => '~clubs/calendar',
        '~departments' => '~departments',
        '~departments/announcements' => '~departments/announcements',
        '~departments/calendar' => '~departments/calendar',
        '~teams' => '~teams',
        '~teams/announcements' => '~teams/announcements',
        '~teams/calendar' => '~teams/calendar',
        '~user*' => '~user*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_announcements-block_3' => array(
          'module' => 'views',
          'delta' => 'julio_announcements-block_3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All announcements');
  t('announcements');
  $export['julio_announcements_all'] = $context;

  return $export;
}
