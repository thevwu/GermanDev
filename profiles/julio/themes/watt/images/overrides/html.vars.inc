<?php

/**
 * @file html.vars.inc
 * This file can host variables for the html.tpl.php file.
 *
 * @see HOOK.vars.inc within the examples folder for more details.
 */

// First, we must set up an array
$element = array(
  '#tag' => 'meta', // The #tag is the html tag - <link />
  '#attributes' => array( // Set up an array of attributes inside the tag
    'name' => 'viewport', 
    'content' => 'initial-scale=1.0, width=device-width',
  ),
);
drupal_add_html_head($element, 'media_query_meta');