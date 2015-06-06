<?php

/**
 * Outputs the link for Facebook account connecting.
 */
function theme_fb_post_connect($variables) {
  $connection_path = $variables['connection_path'];
  $output = '<h1 class="title">' . t('Facebook Account Connection') . '</h1>';
  $output .= l(t('Connect to Facebook account'), $connection_path, array('attributes' => array('class' => 'fb-post-connect')));
  $output .= '<p>' . t('It will allow you to repost your comments and replies to your Facebook news feed.') . '</p>';
  $output .= '<p>' . t('Please note that your connection will stay valid for 60 days and you will need to renew it after that.') . '</p>';
  return $output;
}

/**
 * Outputs connected Facebook account info.
 */
function theme_fb_post_user_info($variables) {
  $user_info = $variables['user_info'];
  $remove_connection_button = $variables['remove_connection_button'];
  $picture = '<img src="' . $user_info->picture . '" title="' . $user_info->name . '" />';
  $name = (!empty($user_info->link)) ? l($user_info->name, $user_info->link) : $user_info->name;
  $valid_till = t('Connection is valid till: ') . format_date($user_info->access_token_expires);
  $rows = array(
    array(
      array('data' => $picture, 'align' => 'center'),
      array('data' => $name, 'align' => 'center'),
      array('data' => $valid_till, 'align' => 'center'),
      array('data' => $remove_connection_button, 'align' => 'center'),
    ),
  );
  
  drupal_set_title($user_info->name);
  $output = '<h1 class="title">' . t('Facebook Account Connection - Connected') . '</h1>';
  $output .= theme('table', array('header' => array(), 'rows' => $rows));
  return $output;
}
