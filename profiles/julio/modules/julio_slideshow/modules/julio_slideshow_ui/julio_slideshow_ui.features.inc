<?php
/**
 * @file
 * julio_slideshow_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_slideshow_ui_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
