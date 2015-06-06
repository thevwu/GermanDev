<?php
/**
 * @file
 * julio_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function julio_gallery_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function julio_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: julio_featured_image_group.
  $styles['julio_featured_image_group'] = array(
    'name' => 'julio_featured_image_group',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '170',
          'height' => '170',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
