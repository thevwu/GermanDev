<?php
/**
 * @file
 * julio_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function julio_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'julio_group_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Group Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Galleries';
  $handler->display->display_options['css_class'] = 'img-border clearfix';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Galleries';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid']['label'] = '';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gid']['empty'] = 'all';
  $handler->display->display_options['fields']['gid']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['gid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['gid']['separator'] = '';
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['path'] = 'galleries/[gid]';
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_gallery' => 'media_gallery',
  );
  /* Filter criterion: Content: Gallery media (media_gallery_media:data) */
  $handler->display->display_options['filters']['media_gallery_media_data']['id'] = 'media_gallery_media_data';
  $handler->display->display_options['filters']['media_gallery_media_data']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['filters']['media_gallery_media_data']['field'] = 'media_gallery_media_data';
  $handler->display->display_options['filters']['media_gallery_media_data']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'gallery-overview';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['empty'] = '<img src="/profiles/julio/themes/watt/images/empty_gallery.png">';
  $handler->display->display_options['fields']['media_gallery_media']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'media';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['media_gallery_media']['delta_limit'] = '1';
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 Galleries';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_gallery' => 'media_gallery',
  );
  $handler->display->display_options['path'] = 'galleries';

  /* Display: All Gallery Images */
  $handler = $view->new_display('block', 'All Gallery Images', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $export['julio_group_images'] = $view;

  return $export;
}
