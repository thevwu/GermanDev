<?php

/**
 * @file page.vars.inc
 * This file processes variables for the "search" theming hook.
*/
$node = $vars['result']['node'];

// load in related group information if available
if (!empty($node->julio_og_group_ref[$node->language])) {
  $gids = array();
  foreach($node->julio_og_group_ref[$node->language] as $group_ref) {
    $gids[] = $group_ref['target_id'];
  }
  $groups = node_load_multiple($gids);
  if (!empty($groups)) {
    $group_links = array('links' => array(), 'attributes' => array(), 'heading' => array());
    foreach($groups as $group) {
      $group_links['links'][] = array(
        'title' => $group->title,
        'href' => 'node/' . $group->nid,
      );
    }
  	$vars['info_split']['groups'] = theme_links($group_links);
  }
}
