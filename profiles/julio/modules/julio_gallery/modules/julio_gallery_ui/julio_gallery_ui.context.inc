<?php
/**
 * @file
 * julio_gallery_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_gallery_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_all_images';
  $context->description = 'All Images block';
  $context->tag = 'gallery';
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
        '~galleries*' => '~galleries*',
        '~user*' => '~user*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_group_images-block_1' => array(
          'module' => 'views',
          'delta' => 'julio_group_images-block_1',
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All Images block');
  t('gallery');
  $export['julio_all_images'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_featured_images';
  $context->description = 'Featured Images Block by Group';
  $context->tag = 'gallery';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-julio_group_images-block' => array(
          'module' => 'views',
          'delta' => 'julio_group_images-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Images Block by Group');
  t('gallery');
  $export['julio_featured_images'] = $context;

  return $export;
}
