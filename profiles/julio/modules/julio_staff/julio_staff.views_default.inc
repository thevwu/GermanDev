<?php
/**
 * @file
 * julio_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function julio_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'julio_faculty_staff';
  $view->description = 'Faculty and Staff Directory';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Faculty and Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty and Staff';
  $handler->display->display_options['css_class'] = 'staff';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_julio_first_name' => 'field_julio_first_name',
    'field_julio_last_name' => 'field_julio_last_name',
  );
  /* Relationship: Flags: julio_staff */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'julio_staff';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_julio_first_name']['id'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['table'] = 'field_data_field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['field'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_first_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_julio_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_first_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_julio_last_name']['id'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['table'] = 'field_data_field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['field'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_last_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_julio_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_last_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_julio_job_title']['id'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['table'] = 'field_data_field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['field'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_julio_job_title']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_julio_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_job_title']['hide_alter_empty'] = FALSE;
  /* Field: User: Department(s) */
  $handler->display->display_options['fields']['field_julio_department']['id'] = 'field_julio_department';
  $handler->display->display_options['fields']['field_julio_department']['table'] = 'field_data_field_julio_department';
  $handler->display->display_options['fields']['field_julio_department']['field'] = 'field_julio_department';
  $handler->display->display_options['fields']['field_julio_department']['label'] = '';
  $handler->display->display_options['fields']['field_julio_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_department']['delta_offset'] = '0';
  /* Field: User: Email */
  $handler->display->display_options['fields']['field_julio_email']['id'] = 'field_julio_email';
  $handler->display->display_options['fields']['field_julio_email']['table'] = 'field_data_field_julio_email';
  $handler->display->display_options['fields']['field_julio_email']['field'] = 'field_julio_email';
  $handler->display->display_options['fields']['field_julio_email']['label'] = '';
  $handler->display->display_options['fields']['field_julio_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_email']['hide_alter_empty'] = FALSE;
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_julio_phone']['id'] = 'field_julio_phone';
  $handler->display->display_options['fields']['field_julio_phone']['table'] = 'field_data_field_julio_phone';
  $handler->display->display_options['fields']['field_julio_phone']['field'] = 'field_julio_phone';
  $handler->display->display_options['fields']['field_julio_phone']['label'] = '';
  $handler->display->display_options['fields']['field_julio_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_phone']['hide_alter_empty'] = FALSE;
  /* Sort criterion: User: Last Name (field_julio_last_name) */
  $handler->display->display_options['sorts']['field_julio_last_name_value']['id'] = 'field_julio_last_name_value';
  $handler->display->display_options['sorts']['field_julio_last_name_value']['table'] = 'field_data_field_julio_last_name';
  $handler->display->display_options['sorts']['field_julio_last_name_value']['field'] = 'field_julio_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faculty and Staff';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_julio_first_name']['id'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['table'] = 'field_data_field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['field'] = 'field_julio_first_name';
  $handler->display->display_options['fields']['field_julio_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_first_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_julio_last_name']['id'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['table'] = 'field_data_field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['field'] = 'field_julio_last_name';
  $handler->display->display_options['fields']['field_julio_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_julio_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_last_name']['hide_alter_empty'] = FALSE;
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_julio_job_title']['id'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['table'] = 'field_data_field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['field'] = 'field_julio_job_title';
  $handler->display->display_options['fields']['field_julio_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_julio_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_julio_job_title']['hide_alter_empty'] = FALSE;
  $export['julio_faculty_staff'] = $view;

  return $export;
}
