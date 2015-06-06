<?php
/**
 * @file
 * julio_events_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_events_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_calendar_all';
  $context->description = 'Calendar listing all events';
  $context->tag = 'calendar';
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
        '~calendar/*' => '~calendar/*',
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
        'views-julio_events_calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_events_calendar-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar listing all events');
  t('calendar');
  $export['julio_calendar_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_calendar_blocks';
  $context->description = 'Calendar block';
  $context->tag = 'calendar';
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
        'views-julio_events_calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'julio_events_calendar-block_2',
          'region' => 'sidebar_first',
          'weight' => '-14',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar block');
  t('calendar');
  $export['julio_calendar_blocks'] = $context;

  return $export;
}
