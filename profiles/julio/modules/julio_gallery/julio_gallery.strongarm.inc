<?php
/**
 * @file
 * julio_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function julio_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_media_gallery';
  $strongarm->value = '1';
  $export['comment_media_gallery'] = $strongarm;

  return $export;
}
