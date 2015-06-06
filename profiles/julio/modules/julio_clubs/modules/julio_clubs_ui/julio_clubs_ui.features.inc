<?php
/**
 * @file
 * julio_clubs_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_clubs_ui_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
