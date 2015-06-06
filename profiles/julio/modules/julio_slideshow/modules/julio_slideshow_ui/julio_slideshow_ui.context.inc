<?php
/**
 * @file
 * julio_slideshow_ui.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function julio_slideshow_ui_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'julio_homepage_slideshow';
  $context->description = 'Media Nivo Slider block for the homepage';
  $context->tag = 'slideshow';
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
        'media_nivo_slider-' . variable_get('julio_homepage_slideshow_node_nid', 0) => array(
        'module' => 'media_nivo_slider',
        'delta' => variable_get('julio_homepage_slideshow_node_nid', 0),
        'region' => 'featured',
        'weight' => '-24',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media Nivo Slider block for the homepage');
  t('slideshow');
  $export['julio_homepage_slideshow'] = $context;

  return $export;
}

