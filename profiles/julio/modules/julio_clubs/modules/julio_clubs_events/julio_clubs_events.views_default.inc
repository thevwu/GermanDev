<?php
/**
 * @file
 * julio_clubs_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function julio_clubs_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'julio_clubs_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clubs Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Student Life Calendar';
  $handler->display->display_options['css_class'] = 'event-block';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Calendar';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_julio_event_date']['id'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['table'] = 'field_data_field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['field'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_julio_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_julio_event_date']['element_class'] = 'day';
  $handler->display->display_options['fields']['field_julio_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_event_date']['settings'] = array(
    'format_type' => 'julio_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_julio_event_date_1']['id'] = 'field_julio_event_date_1';
  $handler->display->display_options['fields']['field_julio_event_date_1']['table'] = 'field_data_field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date_1']['field'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_julio_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_julio_event_date_1']['element_class'] = 'month';
  $handler->display->display_options['fields']['field_julio_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_event_date_1']['settings'] = array(
    'format_type' => 'julio_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="event-month">[field_julio_event_date]</span><br/><span class="event-day">[field_julio_event_date_1]</span>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_julio_event_date) */
  $handler->display->display_options['sorts']['field_julio_event_date_value']['id'] = 'field_julio_event_date_value';
  $handler->display->display_options['sorts']['field_julio_event_date_value']['table'] = 'field_data_field_julio_event_date';
  $handler->display->display_options['sorts']['field_julio_event_date_value']['field'] = 'field_julio_event_date_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'julio_event' => 'julio_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_julio_event_date) */
  $handler->display->display_options['filters']['field_julio_event_date_value']['id'] = 'field_julio_event_date_value';
  $handler->display->display_options['filters']['field_julio_event_date_value']['table'] = 'field_data_field_julio_event_date';
  $handler->display->display_options['filters']['field_julio_event_date_value']['field'] = 'field_julio_event_date_value';
  $handler->display->display_options['filters']['field_julio_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_julio_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_julio_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'julio_club' => 'julio_club',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['gid']['value']['value'] = '5';
  $handler->display->display_options['filters']['gid']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['colorbox']['colorbox'] = TRUE;
  $handler->display->display_options['style_options']['colorbox']['colorboxClass'] = '.region-content-wrapper';
  $handler->display->display_options['style_options']['colorbox']['colorboxWidth'] = '';
  $handler->display->display_options['style_options']['colorbox']['colorboxHeight'] = '';
  $handler->display->display_options['style_options']['timeformat'] = 'h(:mm)tt';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_julio_event_date']['id'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['table'] = 'field_data_field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['field'] = 'field_julio_event_date';
  $handler->display->display_options['fields']['field_julio_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_julio_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'clubs/calendar';

  /* Display: Upcoming - All */
  $handler = $view->new_display('block', 'Upcoming - All', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Student Life Events';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'clubs/calendar/rss';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $export['julio_clubs_events'] = $view;

  return $export;
}
