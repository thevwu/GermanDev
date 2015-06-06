<?php
/**
 * Implements hook_process_page().
 */
function color_module_process_page(&$variables) {

  // Hook into color.module
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

/**
 * Implements hook_process_html().
 */
function color_module_process_html(&$variables) {
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}
