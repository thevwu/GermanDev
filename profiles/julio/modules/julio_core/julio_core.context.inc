<?php
/**
 * @file
 * julio_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_homepage_one_column';
  $context->description = 'Homepage: one column layout';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-julio_quick_links' => array(
          'module' => 'quicktabs',
          'delta' => 'julio_quick_links',
          'region' => 'triptych_first',
          'weight' => '-10',
        ),
        'views-julio_events_calendar-block_3' => array(
          'module' => 'views',
          'delta' => 'julio_events_calendar-block_3',
          'region' => 'triptych_middle',
          'weight' => '-10',
        ),
        'views-julio_announcements-block_2' => array(
          'module' => 'views',
          'delta' => 'julio_announcements-block_2',
          'region' => 'triptych_last',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => '<front>',
    'theme' => array(
      'title' => 'front_1',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'front-1',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage: one column layout');
  t('homepage');
  $export['julio_homepage_one_column'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_homepage_three_column';
  $context->description = 'Homepage: three column layout';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_announcements-block_2' => array(
          'module' => 'views',
          'delta' => 'julio_announcements-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-julio_events_calendar-block_3' => array(
          'module' => 'views',
          'delta' => 'julio_events_calendar-block_3',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'quicktabs-julio_quick_links' => array(
          'module' => 'quicktabs',
          'delta' => 'julio_quick_links',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'front',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'front-3',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage: three column layout');
  t('homepage');
  $export['julio_homepage_three_column'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_homepage_two_column';
  $context->description = 'Homepage: two column layout';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_events_calendar-block_3' => array(
          'module' => 'views',
          'delta' => 'julio_events_calendar-block_3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-julio_announcements-block_2' => array(
          'module' => 'views',
          'delta' => 'julio_announcements-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'quicktabs-julio_quick_links' => array(
          'module' => 'quicktabs',
          'delta' => 'julio_quick_links',
          'region' => 'content',
          'weight' => '-20',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'front_2',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => 'front-2',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage: two column layout');
  t('homepage');
  $export['julio_homepage_two_column'] = $context;

  return $export;
}
