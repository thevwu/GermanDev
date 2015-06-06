<?php
/**
 * @file
 * julio_core_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_core_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_global';
  $context->description = 'Sitewide context';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'julio_og_utilities-og_admin' => array(
          'module' => 'julio_og_utilities',
          'delta' => 'og_admin',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'menu-menu-julio-contact-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-julio-contact-menu',
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_top',
          'weight' => '-9',
        ),
        'julio_core-footer' => array(
          'module' => 'julio_core',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context');
  t('global');
  $export['julio_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_user';
  $context->description = 'Blocks for user pages.';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_user_og_dashboard-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_user_og_dashboard-block_1',
          'region' => 'sidebar_first',
          'weight' => '-27',
        ),
        'views-julio_user_content-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_user_content-block_1',
          'region' => 'sidebar_first',
          'weight' => '-26',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for user pages.');
  t('user');
  $export['julio_user'] = $context;

  return $export;
}
