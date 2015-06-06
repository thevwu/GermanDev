<?php
/**
 * @file
 * julio_departments_announcements_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_departments_announcements_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_departments_announcements';
  $context->description = 'Departments news block';
  $context->tag = 'departments';
  $context->conditions = array(
    'context_og_condition_group_node' => array(
      'values' => array(
        variable_get('julio_departments_nid', 0) => variable_get('julio_departments_nid', 0),
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'departments' => 'departments',
        'departments/calendar' => 'departments/calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_dept_news-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_dept_news-block_1',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Departments news block');
  t('departments');
  $export['julio_departments_announcements'] = $context;

  return $export;
}
