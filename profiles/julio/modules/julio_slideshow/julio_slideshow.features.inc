<?php
/**
 * @file
 * julio_slideshow.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function julio_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: julio_slideshow.
  $styles['julio_slideshow'] = array(
    'name' => 'julio_slideshow',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'height' => '350',
          'width' => '1250',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
