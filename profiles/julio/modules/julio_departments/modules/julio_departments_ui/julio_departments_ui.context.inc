<?php
/**
 * @file
 * julio_departments_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_departments_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_departments';
  $context->description = 'Departments block';
  $context->tag = 'departments';
  $context->conditions = array(
    'context_og_condition_group_node' => array(
      'values' => array(
        variable_get('julio_departments_nid', 0) => variable_get('julio_departments_nid', 0),
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        'julio_department' => 'julio_department',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'departments*' => 'departments*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-julio-departments-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-julio-departments-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'node/' . variable_get('julio_departments_nid', 0),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Departments block');
  t('departments');
  $export['julio_departments'] = $context;

  return $export;
}
