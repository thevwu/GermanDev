<?php
/**
 * @file
 * julio_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function julio_groups_image_default_styles() {
  $styles = array();

  // Exported image style: julio_additional_img.
  $styles['julio_additional_img'] = array(
    'name' => 'julio_additional_img',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '120',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function julio_groups_node_info() {
  $items = array(
    'julio_group_post' => array(
      'name' => t('Group Post'),
      'base' => 'node_content',
      'description' => t('A static group page, i.e. a page whose content does not change frequently. For example, a "Contact" or "About" page. For dynamic content, consider creating an "Announcement" or "Event" instead.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
