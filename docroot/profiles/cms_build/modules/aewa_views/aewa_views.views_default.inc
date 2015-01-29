<?php
/**
 * @file
 * aewa_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aewa_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_species';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API Resource';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API Species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'uuid' => 'uuid',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'scientific_name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'species' => 'species',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Scientific Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'scientific_name';
  $handler->display->display_options['filters']['title']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Species List */
  $handler = $view->new_display('services', 'Species List', 'services_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'scientific_name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_species_order']['id'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['fields']['field_species_order']['field'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['label'] = 'order';
  $handler->display->display_options['fields']['field_species_order']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class']['id'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['label'] = 'class';
  $handler->display->display_options['fields']['field_species_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_species_family']['id'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['fields']['field_species_family']['field'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['label'] = 'family';
  $handler->display->display_options['fields']['field_species_family']['type'] = 'taxonomy_term_reference_plain';
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
    'species' => 'species',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'species';

  /* Display: Species Node */
  $handler = $view->new_display('services', 'Species Node', 'services_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'scientific_name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'node';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php_2']['alter']['text'] = '<span>-</span>';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php_2']['php_setup'] = '$view->used_node = "";';
  $handler->display->display_options['fields']['php_2']['php_value'] = '$view->used_node = node_load($row->nid);
return "";';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'name';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_value'] = 'return api_species_name_group($view->used_node);';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_15']['id'] = 'php_15';
  $handler->display->display_options['fields']['php_15']['table'] = 'views';
  $handler->display->display_options['fields']['php_15']['field'] = 'php';
  $handler->display->display_options['fields']['php_15']['label'] = 'taxonomy';
  $handler->display->display_options['fields']['php_15']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_15']['php_value'] = 'return api_species_taxonomy_group($view->used_node);';
  $handler->display->display_options['fields']['php_15']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_15']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'assessment_information';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return api_species_assessment_info_group($view->used_node);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'population';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return  api_species_population($view->used_node);';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'population_size_trend';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_value'] = 'return api_species_pop_size($view->used_node);';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'geographic_range';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_value'] = 'return api_species_status_per_country($view->used_node);';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'threats';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_value'] = 'return api_species_threats($view->used_node);';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'critical_sites';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_value'] = 'return api_field_single_value(\'field_species_critical_sites\', $view->used_node);';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_9']['id'] = 'php_9';
  $handler->display->display_options['fields']['php_9']['table'] = 'views';
  $handler->display->display_options['fields']['php_9']['field'] = 'php';
  $handler->display->display_options['fields']['php_9']['label'] = 'additional_notes';
  $handler->display->display_options['fields']['php_9']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_9']['php_value'] = 'return api_field_single_value(\'field_species_notes\', $view->used_node);';
  $handler->display->display_options['fields']['php_9']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_9']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_10']['id'] = 'php_10';
  $handler->display->display_options['fields']['php_10']['table'] = 'views';
  $handler->display->display_options['fields']['php_10']['field'] = 'php';
  $handler->display->display_options['fields']['php_10']['label'] = 'appendix_1_date';
  $handler->display->display_options['fields']['php_10']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_10']['php_value'] = 'return api_field_single_value(\'field_species_appendix_1_date\', $view->used_node);';
  $handler->display->display_options['fields']['php_10']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_10']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_11']['id'] = 'php_11';
  $handler->display->display_options['fields']['php_11']['table'] = 'views';
  $handler->display->display_options['fields']['php_11']['field'] = 'php';
  $handler->display->display_options['fields']['php_11']['label'] = 'appendix_2_date';
  $handler->display->display_options['fields']['php_11']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_11']['php_value'] = 'return api_field_single_value(\'field_species_appendix_2_date\', $view->used_node);';
  $handler->display->display_options['fields']['php_11']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_11']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_12']['id'] = 'php_12';
  $handler->display->display_options['fields']['php_12']['table'] = 'views';
  $handler->display->display_options['fields']['php_12']['field'] = 'php';
  $handler->display->display_options['fields']['php_12']['label'] = 'concerted_action';
  $handler->display->display_options['fields']['php_12']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_12']['php_value'] = 'return api_field_single_value(\'field_species_concerted_action\', $view->used_node);';
  $handler->display->display_options['fields']['php_12']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_12']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_13']['id'] = 'php_13';
  $handler->display->display_options['fields']['php_13']['table'] = 'views';
  $handler->display->display_options['fields']['php_13']['field'] = 'php';
  $handler->display->display_options['fields']['php_13']['label'] = 'cooperative_action';
  $handler->display->display_options['fields']['php_13']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_13']['php_value'] = 'return api_field_single_value(\'field_species_cooperative_action\', $view->used_node);';
  $handler->display->display_options['fields']['php_13']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_13']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_14']['id'] = 'php_14';
  $handler->display->display_options['fields']['php_14']['table'] = 'views';
  $handler->display->display_options['fields']['php_14']['field'] = 'php';
  $handler->display->display_options['fields']['php_14']['label'] = 'population_global_size';
  $handler->display->display_options['fields']['php_14']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_14']['php_value'] = 'return api_field_single_value(\'field_species_pop_global\', $view->used_node);';
  $handler->display->display_options['fields']['php_14']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_14']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_16']['id'] = 'php_16';
  $handler->display->display_options['fields']['php_16']['table'] = 'views';
  $handler->display->display_options['fields']['php_16']['field'] = 'php';
  $handler->display->display_options['fields']['php_16']['label'] = 'population_global_date';
  $handler->display->display_options['fields']['php_16']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_16']['php_value'] = 'return api_field_single_value(\'field_species_pop_global_date\', $view->used_node);';
  $handler->display->display_options['fields']['php_16']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_16']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'species_node';

  /* Display: Country List */
  $handler = $view->new_display('services', 'Country List', 'services_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country List';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'uuid' => 'uuid',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = 'iso2';
  $handler->display->display_options['fields']['field_country_iso2']['alter']['text'] = '[field_country_iso2]';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'node_uuid';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'region';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return cms_api_entity_get_term_($row->nid, \'field_region\', \'country\', 1);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'countries';

  /* Display: Country Node */
  $handler = $view->new_display('services', 'Country Node', 'services_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country Node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = 'iso2';
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_country_official_name']['id'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['table'] = 'field_data_field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['field'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['label'] = 'official_name';
  /* Field: Content: Party number */
  $handler->display->display_options['fields']['field_country_party_number']['id'] = 'field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['table'] = 'field_data_field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['field'] = 'field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['label'] = 'party_number';
  /* Field: Content: Entry into force */
  $handler->display->display_options['fields']['field_country_entry_into_force']['id'] = 'field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['table'] = 'field_data_field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['field'] = 'field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['label'] = 'entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['alter']['text'] = '[field_country_entry_into_force-value]';
  $handler->display->display_options['fields']['field_country_entry_into_force']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_country_entry_into_force']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'node';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '$view->used_node = "";';
  $handler->display->display_options['fields']['php']['php_value'] = '$view->used_node = node_load($row->nid);
return "";';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'url';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return cms_api_get_url($view->used_node);';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'ratification_statuses';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_value'] = 'return api_country_get_ratification_status($view->used_node);';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'date_acceptance';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_value'] = 'return api_field_single_value(\'field_country_date_of_acceptance\', $view->used_node);';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'date_accession';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_value'] = 'return api_field_single_value(\'field_country_date_of_accession\', $view->used_node);';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'anual_contribution';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_value'] = 'return api_country_get_anual_contribution($view->used_node);';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'voluntary_contribution';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_value'] = 'return api_country_get_voluntary_contribution($view->used_node);';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = 'arrears_contribution';
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_value'] = 'return api_country_get_arrears_contribution($view->used_node);';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'region';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_value'] = 'return cms_api_get_term($view->used_node, \'field_region\');';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: ISO 3166-2 code (field_country_iso2) */
  $handler->display->display_options['filters']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['filters']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['filters']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['filters']['field_country_iso2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['operator_id'] = 'field_country_iso2_value_op';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['label'] = 'ISO2';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['operator'] = 'field_country_iso2_value_op';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['identifier'] = 'iso2';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['autocomplete_field'] = 'field_country_iso2';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'country';

  /* Display: Publication List */
  $handler = $view->new_display('services', 'Publication List', 'ws_publication_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of publications';
  $handler->display->display_options['display_description'] = 'List of publications';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_publication_published_date']['id'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['field'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['label'] = 'published';
  $handler->display->display_options['fields']['field_publication_published_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_publication_published_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'custom',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'date_only',
        'month' => 'none',
        'day' => 'none',
        'hour' => 'none',
        'minute' => 'none',
        'second' => 'none',
        'timezone' => 'none',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['label'] = 'type';
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_type']['delta_offset'] = '0';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_publication_author']['id'] = 'field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['table'] = 'field_data_field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['field'] = 'field_publication_author';
  $handler->display->display_options['fields']['field_publication_author']['label'] = 'author';
  $handler->display->display_options['fields']['field_publication_author']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_author']['delta_offset'] = '0';
  /* Field: Content: Co-authors */
  $handler->display->display_options['fields']['field_publication_co_authors']['id'] = 'field_publication_co_authors';
  $handler->display->display_options['fields']['field_publication_co_authors']['table'] = 'field_data_field_publication_co_authors';
  $handler->display->display_options['fields']['field_publication_co_authors']['field'] = 'field_publication_co_authors';
  $handler->display->display_options['fields']['field_publication_co_authors']['label'] = 'coauthor';
  $handler->display->display_options['fields']['field_publication_co_authors']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_co_authors']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_publication_image']['delta_offset'] = '0';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image_1']['id'] = 'field_publication_image_1';
  $handler->display->display_options['fields']['field_publication_image_1']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image_1']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image_1']['label'] = 'thumbnail';
  $handler->display->display_options['fields']['field_publication_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_publication_image_1']['delta_offset'] = '0';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Field: Threats */
  $handler->display->display_options['fields']['field_threats']['id'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['table'] = 'field_data_field_threats';
  $handler->display->display_options['fields']['field_threats']['field'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['label'] = 'threats';
  $handler->display->display_options['fields']['field_threats']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_threats']['delta_offset'] = '0';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_publication_species']['id'] = 'field_publication_species';
  $handler->display->display_options['fields']['field_publication_species']['table'] = 'field_data_field_publication_species';
  $handler->display->display_options['fields']['field_publication_species']['field'] = 'field_publication_species';
  $handler->display->display_options['fields']['field_publication_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_publication_species']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_publication_species']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['path'] = 'publications';

  /* Display: Project List */
  $handler = $view->new_display('services', 'Project List', 'ws_project_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of projects';
  $handler->display->display_options['display_description'] = 'List of projects';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = 'type';
  $handler->display->display_options['fields']['field_project_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Field: Threats */
  $handler->display->display_options['fields']['field_threats']['id'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['table'] = 'field_data_field_threats';
  $handler->display->display_options['fields']['field_threats']['field'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['label'] = 'threats';
  $handler->display->display_options['fields']['field_threats']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_threats']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'region';
  $handler->display->display_options['fields']['field_region']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Objective */
  $handler->display->display_options['fields']['field_project_objective']['id'] = 'field_project_objective';
  $handler->display->display_options['fields']['field_project_objective']['table'] = 'field_data_field_project_objective';
  $handler->display->display_options['fields']['field_project_objective']['field'] = 'field_project_objective';
  $handler->display->display_options['fields']['field_project_objective']['label'] = 'objective';
  $handler->display->display_options['fields']['field_project_objective']['delta_offset'] = '0';
  /* Field: Content: Executive summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['label'] = 'executive_summary';
  /* Field: Content: Activity */
  $handler->display->display_options['fields']['field_project_activity']['id'] = 'field_project_activity';
  $handler->display->display_options['fields']['field_project_activity']['table'] = 'field_data_field_project_activity';
  $handler->display->display_options['fields']['field_project_activity']['field'] = 'field_project_activity';
  $handler->display->display_options['fields']['field_project_activity']['label'] = 'activity';
  $handler->display->display_options['fields']['field_project_activity']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_project_activity']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_project_activity']['delta_offset'] = '0';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_project_species']['id'] = 'field_project_species';
  $handler->display->display_options['fields']['field_project_species']['table'] = 'field_data_field_project_species';
  $handler->display->display_options['fields']['field_project_species']['field'] = 'field_project_species';
  $handler->display->display_options['fields']['field_project_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_project_species']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_species']['delta_offset'] = '0';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'projects';

  /* Display: Working Group List */
  $handler = $view->new_display('services', 'Working Group List', 'ws_working_group_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of working groups';
  $handler->display->display_options['display_description'] = 'List of working groups';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'region';
  $handler->display->display_options['fields']['field_region']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Members */
  $handler->display->display_options['fields']['field_wg_members']['id'] = 'field_wg_members';
  $handler->display->display_options['fields']['field_wg_members']['table'] = 'field_data_field_wg_members';
  $handler->display->display_options['fields']['field_wg_members']['field'] = 'field_wg_members';
  $handler->display->display_options['fields']['field_wg_members']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_wg_members']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_wg_members']['delta_offset'] = '0';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'working_group' => 'working_group',
  );
  $handler->display->display_options['path'] = 'working-groups';

  /* Display: Upcoming meetings */
  $handler = $view->new_display('services', 'Upcoming meetings', 'ws_upcoming_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming meetings';
  $handler->display->display_options['display_description'] = 'The two upcoming meetings';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_publication_published_date']['id'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['field'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['label'] = 'published';
  $handler->display->display_options['fields']['field_publication_published_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_publication_published_date']['settings'] = array(
    'use_override' => 'long',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
  /* Field: Content: End date */
  $handler->display->display_options['fields']['field_meeting_end']['id'] = 'field_meeting_end';
  $handler->display->display_options['fields']['field_meeting_end']['table'] = 'field_data_field_meeting_end';
  $handler->display->display_options['fields']['field_meeting_end']['field'] = 'field_meeting_end';
  $handler->display->display_options['fields']['field_meeting_end']['label'] = 'end_date';
  $handler->display->display_options['fields']['field_meeting_end']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_meeting_end']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_meeting_start']['id'] = 'field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['table'] = 'field_data_field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['field'] = 'field_meeting_start';
  $handler->display->display_options['fields']['field_meeting_start']['label'] = 'start_date';
  $handler->display->display_options['fields']['field_meeting_start']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_meeting_start']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_meeting_species']['id'] = 'field_meeting_species';
  $handler->display->display_options['fields']['field_meeting_species']['table'] = 'field_data_field_meeting_species';
  $handler->display->display_options['fields']['field_meeting_species']['field'] = 'field_meeting_species';
  $handler->display->display_options['fields']['field_meeting_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_meeting_species']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_meeting_species']['delta_offset'] = '0';
  /* Field: Field: Threats */
  $handler->display->display_options['fields']['field_threats']['id'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['table'] = 'field_data_field_threats';
  $handler->display->display_options['fields']['field_threats']['field'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['label'] = 'threats';
  $handler->display->display_options['fields']['field_threats']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_threats']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start date (field_meeting_start) */
  $handler->display->display_options['sorts']['field_meeting_start_value']['id'] = 'field_meeting_start_value';
  $handler->display->display_options['sorts']['field_meeting_start_value']['table'] = 'field_data_field_meeting_start';
  $handler->display->display_options['sorts']['field_meeting_start_value']['field'] = 'field_meeting_start_value';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Start date (field_meeting_start) */
  $handler->display->display_options['filters']['field_meeting_start_value']['id'] = 'field_meeting_start_value';
  $handler->display->display_options['filters']['field_meeting_start_value']['table'] = 'field_data_field_meeting_start';
  $handler->display->display_options['filters']['field_meeting_start_value']['field'] = 'field_meeting_start_value';
  $handler->display->display_options['filters']['field_meeting_start_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_meeting_start_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '211',
    1 => '1398',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'upcoming-meetings';

  /* Display: Awards list */
  $handler = $view->new_display('services', 'Awards list', 'ws_awards_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of awards';
  $handler->display->display_options['display_description'] = 'List of awards';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
  /* Field: Content: Recipient */
  $handler->display->display_options['fields']['field_award_recipient']['id'] = 'field_award_recipient';
  $handler->display->display_options['fields']['field_award_recipient']['table'] = 'field_data_field_award_recipient';
  $handler->display->display_options['fields']['field_award_recipient']['field'] = 'field_award_recipient';
  $handler->display->display_options['fields']['field_award_recipient']['label'] = 'recipient';
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_award_sponsor']['id'] = 'field_award_sponsor';
  $handler->display->display_options['fields']['field_award_sponsor']['table'] = 'field_data_field_award_sponsor';
  $handler->display->display_options['fields']['field_award_sponsor']['field'] = 'field_award_sponsor';
  $handler->display->display_options['fields']['field_award_sponsor']['label'] = 'sponsor';
  $handler->display->display_options['fields']['field_award_sponsor']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_award_sponsor']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'award' => 'award',
  );
  $handler->display->display_options['path'] = 'awards';

  /* Display: Campaigns list */
  $handler = $view->new_display('services', 'Campaigns list', 'ws_campaigns_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of campaigns';
  $handler->display->display_options['display_description'] = 'List of campaigns';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_campaign_picture']['id'] = 'field_campaign_picture';
  $handler->display->display_options['fields']['field_campaign_picture']['table'] = 'field_data_field_campaign_picture';
  $handler->display->display_options['fields']['field_campaign_picture']['field'] = 'field_campaign_picture';
  $handler->display->display_options['fields']['field_campaign_picture']['label'] = 'image';
  $handler->display->display_options['fields']['field_campaign_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_campaign_picture_1']['id'] = 'field_campaign_picture_1';
  $handler->display->display_options['fields']['field_campaign_picture_1']['table'] = 'field_data_field_campaign_picture';
  $handler->display->display_options['fields']['field_campaign_picture_1']['field'] = 'field_campaign_picture';
  $handler->display->display_options['fields']['field_campaign_picture_1']['label'] = 'thumbnail';
  $handler->display->display_options['fields']['field_campaign_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_campaign_picture_1']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_campaign_sponsor']['id'] = 'field_campaign_sponsor';
  $handler->display->display_options['fields']['field_campaign_sponsor']['table'] = 'field_data_field_campaign_sponsor';
  $handler->display->display_options['fields']['field_campaign_sponsor']['field'] = 'field_campaign_sponsor';
  $handler->display->display_options['fields']['field_campaign_sponsor']['label'] = 'sponsor';
  $handler->display->display_options['fields']['field_campaign_sponsor']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_campaign_sponsor']['delta_offset'] = '0';
  /* Field: Content: Patron */
  $handler->display->display_options['fields']['field_campaign_patron']['id'] = 'field_campaign_patron';
  $handler->display->display_options['fields']['field_campaign_patron']['table'] = 'field_data_field_campaign_patron';
  $handler->display->display_options['fields']['field_campaign_patron']['field'] = 'field_campaign_patron';
  $handler->display->display_options['fields']['field_campaign_patron']['label'] = 'patron';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_campaign_type']['id'] = 'field_campaign_type';
  $handler->display->display_options['fields']['field_campaign_type']['table'] = 'field_data_field_campaign_type';
  $handler->display->display_options['fields']['field_campaign_type']['field'] = 'field_campaign_type';
  $handler->display->display_options['fields']['field_campaign_type']['label'] = 'type';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_campaign_duration']['id'] = 'field_campaign_duration';
  $handler->display->display_options['fields']['field_campaign_duration']['table'] = 'field_data_field_campaign_duration';
  $handler->display->display_options['fields']['field_campaign_duration']['field'] = 'field_campaign_duration';
  $handler->display->display_options['fields']['field_campaign_duration']['label'] = 'duration';
  $handler->display->display_options['fields']['field_campaign_duration']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_campaign_link']['id'] = 'field_campaign_link';
  $handler->display->display_options['fields']['field_campaign_link']['table'] = 'field_data_field_campaign_link';
  $handler->display->display_options['fields']['field_campaign_link']['field'] = 'field_campaign_link';
  $handler->display->display_options['fields']['field_campaign_link']['label'] = 'campaign_link';
  $handler->display->display_options['fields']['field_campaign_link']['click_sort_column'] = 'url';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Content: Related species */
  $handler->display->display_options['fields']['field_campaign_species']['id'] = 'field_campaign_species';
  $handler->display->display_options['fields']['field_campaign_species']['table'] = 'field_data_field_campaign_species';
  $handler->display->display_options['fields']['field_campaign_species']['field'] = 'field_campaign_species';
  $handler->display->display_options['fields']['field_campaign_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_campaign_species']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_campaign_species']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'campaign' => 'campaign',
  );
  $handler->display->display_options['path'] = 'campaigns';

  /* Display: News */
  $handler = $view->new_display('services', 'News', 'news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['display_description'] = 'All news';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'convention_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'region';
  $handler->display->display_options['fields']['field_region']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument_1']['id'] = 'field_instrument_1';
  $handler->display->display_options['fields']['field_instrument_1']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument_1']['label'] = 'instrument_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['type'] = 'cms_entityreference_entity_uuid';
  $handler->display->display_options['fields']['field_instrument_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument_1']['delta_offset'] = '0';
  /* Field: Content: Species */
  $handler->display->display_options['fields']['field_species']['id'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['table'] = 'field_data_field_species';
  $handler->display->display_options['fields']['field_species']['field'] = 'field_species';
  $handler->display->display_options['fields']['field_species']['label'] = 'species';
  $handler->display->display_options['fields']['field_species']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_species']['delta_offset'] = '0';
  /* Field: Field: Threats */
  $handler->display->display_options['fields']['field_threats']['id'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['table'] = 'field_data_field_threats';
  $handler->display->display_options['fields']['field_threats']['field'] = 'field_threats';
  $handler->display->display_options['fields']['field_threats']['label'] = 'threats';
  $handler->display->display_options['fields']['field_threats']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_threats']['delta_offset'] = '0';
  /* Field: Content: Featured image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = 'thumbnail';
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Expiration date (field_news_expiration_date) */
  $handler->display->display_options['filters']['field_news_expiration_date_value']['id'] = 'field_news_expiration_date_value';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['table'] = 'field_data_field_news_expiration_date';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['field'] = 'field_news_expiration_date_value';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'news';

  /* Display: Latest News */
  $handler = $view->new_display('services', 'Latest News', 'ws_latest_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['display_description'] = 'Latest 2 news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'convention_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'summary';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = 'instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Expiration date (field_news_expiration_date) */
  $handler->display->display_options['filters']['field_news_expiration_date_value']['id'] = 'field_news_expiration_date_value';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['table'] = 'field_data_field_news_expiration_date';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['field'] = 'field_news_expiration_date_value';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_news_expiration_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'latest-news';
  $translatables['api_species'] = array(
    t('Master'),
    t('API Species'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('scientific_name'),
    t('nid'),
    t('UUID'),
    t('updated'),
    t('Scientific Name'),
    t('Species List'),
    t('order'),
    t('class'),
    t('family'),
    t('Species Node'),
    t('uuid'),
    t('node'),
    t('<span>-</span>'),
    t('name'),
    t('taxonomy'),
    t('assessment_information'),
    t('population'),
    t('population_size_trend'),
    t('geographic_range'),
    t('threats'),
    t('critical_sites'),
    t('additional_notes'),
    t('appendix_1_date'),
    t('appendix_2_date'),
    t('concerted_action'),
    t('cooperative_action'),
    t('population_global_size'),
    t('population_global_date'),
    t('Country List'),
    t('iso2'),
    t('[field_country_iso2]'),
    t('node_uuid'),
    t('region'),
    t('Country Node'),
    t('official_name'),
    t('party_number'),
    t('entry_into_force'),
    t('[field_country_entry_into_force-value]'),
    t('url'),
    t('ratification_statuses'),
    t('date_acceptance'),
    t('date_accession'),
    t('anual_contribution'),
    t('voluntary_contribution'),
    t('arrears_contribution'),
    t('ISO2'),
    t('Publication List'),
    t('List of publications'),
    t('published'),
    t('title'),
    t('type'),
    t('author'),
    t('coauthor'),
    t('description'),
    t('summary'),
    t('image'),
    t('thumbnail'),
    t('instrument'),
    t('species'),
    t('created'),
    t('instrument_uuid'),
    t('Project List'),
    t('List of projects'),
    t('country'),
    t('objective'),
    t('executive_summary'),
    t('activity'),
    t('Working Group List'),
    t('List of working groups'),
    t('Members'),
    t('Upcoming meetings'),
    t('The two upcoming meetings'),
    t('end_date'),
    t('start_date'),
    t('Awards list'),
    t('List of awards'),
    t('recipient'),
    t('sponsor'),
    t('Campaigns list'),
    t('List of campaigns'),
    t('patron'),
    t('duration'),
    t('campaign_link'),
    t('News'),
    t('All news'),
    t('Latest News'),
    t('Latest 2 news'),
  );
  $export['api_species'] = $view;

  $view = new view();
  $view->name = 'available_countries';
  $view->description = 'List of decisions with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'country' => 'country',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_countries'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['available_countries'] = $view;

  $view = new view();
  $view->name = 'available_decisions';
  $view->description = 'List of decisions with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Decisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1335',
    1 => '1332',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_decisions'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Has taxonomy term'),
    t('Entity Reference'),
  );
  $export['available_decisions'] = $view;

  $view = new view();
  $view->name = 'available_documents';
  $view->description = 'List of documents with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = '';
  $handler->display->display_options['fields']['field_instrument']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['label'] = '';
  $handler->display->display_options['fields']['field_document_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_instrument] - [field_document_number] - [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'document' => 'document',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_documents'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[field_instrument] - [field_document_number] - [title]'),
    t('Entity Reference'),
  );
  $export['available_documents'] = $view;

  $view = new view();
  $view->name = 'available_instruments';
  $view->description = 'List of decisions with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Instruments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'legal_instrument' => 'legal_instrument',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_instruments'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['available_instruments'] = $view;

  $view = new view();
  $view->name = 'available_national_reports';
  $view->description = 'List of documents with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available National Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['required'] = TRUE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['label'] = '';
  $handler->display->display_options['fields']['field_document_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_number']['element_label_colon'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = '';
  $handler->display->display_options['fields']['field_instrument']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrument']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_instrument] - [field_document_number] - [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1336',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_national_reports'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_document_type'),
    t('[field_instrument] - [field_document_number] - [title]'),
    t('Has taxonomy term'),
    t('Entity Reference'),
  );
  $export['available_national_reports'] = $view;

  $view = new view();
  $view->name = 'available_other_documents';
  $view->description = 'List of documents with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Other Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['required'] = TRUE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['label'] = '';
  $handler->display->display_options['fields']['field_document_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_number']['element_label_colon'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = '';
  $handler->display->display_options['fields']['field_instrument']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_instrument']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_instrument] - [field_document_number] - [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1335',
    1 => '1336',
    2 => '1407',
    3 => '1332',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_other_documents'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_document_type'),
    t('[field_instrument] - [field_document_number] - [title]'),
    t('Has taxonomy term'),
    t('Entity Reference'),
  );
  $export['available_other_documents'] = $view;

  $view = new view();
  $view->name = 'available_plans';
  $view->description = 'List of documents with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Plans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['required'] = TRUE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = '';
  $handler->display->display_options['fields']['field_instrument']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['label'] = '';
  $handler->display->display_options['fields']['field_document_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_instrument] - [field_document_number] - [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1407',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_plans'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_document_type'),
    t('[field_instrument] - [field_document_number] - [title]'),
    t('Has taxonomy term'),
    t('Entity Reference'),
  );
  $export['available_plans'] = $view;

  $view = new view();
  $view->name = 'available_projects';
  $view->description = 'List of projects with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = '';
  $handler->display->display_options['fields']['field_instrument']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'project' => 'project',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_projects'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['available_projects'] = $view;

  $view = new view();
  $view->name = 'available_publications';
  $view->description = 'List of publications with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'publication' => 'publication',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_publications'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['available_publications'] = $view;

  $view = new view();
  $view->name = 'available_species';
  $view->description = 'List of species with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Species';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['available_species'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Entity Reference'),
  );
  $export['available_species'] = $view;

  $view = new view();
  $view->name = 'cop_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'COP Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '208',
    1 => '211',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['cop_meetings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['cop_meetings'] = $view;

  $view = new view();
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_number' => 'field_document_number',
    'title' => 'title',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="text-warning">No related plans for this publication</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator_id'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['identifier'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['error_message'] = FALSE;

  /* Display: Documents List */
  $handler = $view->new_display('page', 'Documents List', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_number' => 'field_document_number',
    'title' => 'title',
    'field_document_publish_date' => 'field_document_publish_date',
    'field_instrument' => 'field_instrument',
    'field_document_type' => 'field_document_type',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '25',
    'processing' => 0,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['settings'] = array(
    'render_tr' => 0,
    'render_plain_text' => 0,
  );
  $handler->display->display_options['fields']['field_document_type']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator_id'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['identifier'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: CMS Instrument (field_instrument) (entityreference filter) */
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['id'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['field'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator_id'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['identifier'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['reference_display'] = 'available_instruments:entityreference_1';
  $handler->display->display_options['path'] = 'document/listing';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'document_export');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'document/export';

  /* Display: Publication's Plans */
  $handler = $view->new_display('page', 'Publication\'s Plans', 'publication_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s plans';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_publication_target_id']['id'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['table'] = 'field_data_field_document_publication';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['field'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator_id'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['label'] = 'Type (field_document_type)';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['identifier'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'publication_plans/%';

  /* Display: Publication's National Reports */
  $handler = $view->new_display('page', 'Publication\'s National Reports', 'publication_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s national reports';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="text-warning">No related national reports for this publication</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_publication_target_id']['id'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['table'] = 'field_data_field_document_publication';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['field'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'publication_national_reports/%';

  /* Display: Instrument national reports */
  $handler = $view->new_display('page', 'Instrument national reports', 'instrument_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument National Reports';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'instrument_national_reports/%';

  /* Display: Instrument plans */
  $handler = $view->new_display('page', 'Instrument plans', 'instrument_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument plans';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'instrument_plans/%';

  /* Display: Country National Reports */
  $handler = $view->new_display('page', 'Country National Reports', 'country_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country national reports';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Submitted by (field_document_submitted_by) */
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['id'] = 'field_document_submitted_by_tid';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['table'] = 'field_data_field_document_submitted_by';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['field'] = 'field_document_submitted_by_tid';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'country_national_reports/%';

  /* Display: Project other documents */
  $handler = $view->new_display('page', 'Project other documents', 'project_other_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project others documents';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_project_target_id']['id'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['table'] = 'field_data_field_document_project';
  $handler->display->display_options['relationships']['field_document_project_target_id']['field'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1335',
    1 => '1336',
    2 => '1407',
    3 => '1332',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'project_other_documents/%';

  /* Display: Project national plans */
  $handler = $view->new_display('page', 'Project national plans', 'project_national_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project national plans';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_project_target_id']['id'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['table'] = 'field_data_field_document_project';
  $handler->display->display_options['relationships']['field_document_project_target_id']['field'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'project_national_plans/%';

  /* Display: Project national reports */
  $handler = $view->new_display('page', 'Project national reports', 'project_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project national reports';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_project_target_id']['id'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['table'] = 'field_data_field_document_project';
  $handler->display->display_options['relationships']['field_document_project_target_id']['field'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'project_national_reports/%';

  /* Display: Meeting documents */
  $handler = $view->new_display('page', 'Meeting documents', 'meeting_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting documents';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['id'] = 'field_document_meeting_target_id';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['table'] = 'field_data_field_document_meeting';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['field'] = 'field_document_meeting_target_id';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'meeting_documents/%';

  /* Display: Species plans */
  $handler = $view->new_display('page', 'Species plans', 'species_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species plans';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_number' => 'field_document_number',
    'title' => 'title',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = 'field_document_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_species_target_id']['id'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['table'] = 'field_data_field_document_species';
  $handler->display->display_options['relationships']['field_document_species_target_id']['field'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'species_plans/%';

  /* Display: Species national reports */
  $handler = $view->new_display('page', 'Species national reports', 'species_national_reports');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_species_target_id']['id'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['table'] = 'field_data_field_document_species';
  $handler->display->display_options['relationships']['field_document_species_target_id']['field'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'species_national_reports/%';

  /* Display: Species other documents */
  $handler = $view->new_display('page', 'Species other documents', 'species_other_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species other documents';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_species_target_id']['id'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['table'] = 'field_data_field_document_species';
  $handler->display->display_options['relationships']['field_document_species_target_id']['field'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1335',
    1 => '1336',
    2 => '1407',
    3 => '1332',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'species_other_documents/%';
  $translatables['documents'] = array(
    t('Master'),
    t('Documents'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p class="text-warning">No related plans for this publication</p>'),
    t('term from field_document_type'),
    t('Content entity referenced from field_instrument'),
    t('Number'),
    t('Title'),
    t('Publish date'),
    t('Status'),
    t('All'),
    t('Type'),
    t('Documents List'),
    t('CMS Instrument'),
    t('Data export'),
    t('Publication\'s Plans'),
    t('Publication\'s plans'),
    t('Content entity referenced from field_document_publication'),
    t('Type (field_document_type)'),
    t('Publication\'s National Reports'),
    t('Publication\'s national reports'),
    t('<p class="text-warning">No related national reports for this publication</p>'),
    t('Instrument national reports'),
    t('Instrument National Reports'),
    t('Instrument plans'),
    t('Country National Reports'),
    t('Country national reports'),
    t('term from field_document_submitted_by'),
    t('Project other documents'),
    t('Project others documents'),
    t('Content entity referenced from field_document_project'),
    t('Project national plans'),
    t('Project national reports'),
    t('Meeting documents'),
    t('Content entity referenced from field_document_meeting'),
    t('Species plans'),
    t('Content entity referenced from field_document_species'),
    t('Species national reports'),
    t('Species other documents'),
  );
  $export['documents'] = $view;

  $view = new view();
  $view->name = 'front_end_awards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Awards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Awards';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'award' => 'award',
  );

  /* Display: Awards */
  $handler = $view->new_display('page', 'Awards', 'page');
  $handler->display->display_options['path'] = 'awards';
  $handler->display->display_options['menu']['title'] = 'Awards';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['front_end_awards'] = array(
    t('Master'),
    t('Awards'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['front_end_awards'] = $view;

  $view = new view();
  $view->name = 'front_end_campaigns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Campaigns';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Campaigns';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Duration -  start date (field_campaign_duration) */
  $handler->display->display_options['sorts']['field_campaign_duration_value']['id'] = 'field_campaign_duration_value';
  $handler->display->display_options['sorts']['field_campaign_duration_value']['table'] = 'field_data_field_campaign_duration';
  $handler->display->display_options['sorts']['field_campaign_duration_value']['field'] = 'field_campaign_duration_value';
  $handler->display->display_options['sorts']['field_campaign_duration_value']['order'] = 'DESC';
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
    'campaign' => 'campaign',
  );

  /* Display: Campaigns */
  $handler = $view->new_display('page', 'Campaigns', 'campaigns');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Duration -  start date (field_campaign_duration) */
  $handler->display->display_options['sorts']['field_campaign_duration_value']['id'] = 'field_campaign_duration_value';
  $handler->display->display_options['sorts']['field_campaign_duration_value']['table'] = 'field_data_field_campaign_duration';
  $handler->display->display_options['sorts']['field_campaign_duration_value']['field'] = 'field_campaign_duration_value';
  $handler->display->display_options['sorts']['field_campaign_duration_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'campaigns';
  $handler->display->display_options['menu']['title'] = 'Campaigns';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['front_end_campaigns'] = array(
    t('Master'),
    t('Campaigns'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['front_end_campaigns'] = $view;

  $view = new view();
  $view->name = 'front_end_countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Parties and Range States';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country_status' => 'field_country_status',
    'field_country_ratification_date' => 'field_country_ratification_date',
    'field_country_iso2' => 'field_country_iso2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_ratification_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_iso2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Ratification status (field_country_instrument_status) */
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['id'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['table'] = 'field_data_field_country_instrument_status';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['field'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_country_status']['id'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['fields']['field_country_status']['field'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_status']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Field collection item: Status date */
  $handler->display->display_options['fields']['field_country_ratification_date']['id'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['field'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_ratification_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['type'] = 'text_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Field collection item: Status date (field_country_ratification_date) */
  $handler->display->display_options['sorts']['field_country_ratification_date_value']['id'] = 'field_country_ratification_date_value';
  $handler->display->display_options['sorts']['field_country_ratification_date_value']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['sorts']['field_country_ratification_date_value']['field'] = 'field_country_ratification_date_value';
  $handler->display->display_options['sorts']['field_country_ratification_date_value']['relationship'] = 'field_country_instrument_status_value';
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field collection item: Status (field_country_status) */
  $handler->display->display_options['filters']['field_country_status_tid']['id'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['filters']['field_country_status_tid']['field'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator_id'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['identifier'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_status_tid']['vocabulary'] = 'party_status';

  /* Display: Parties and Range States */
  $handler = $view->new_display('page', 'Parties and Range States', 'party_range_states_page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'domain';
  $handler->display->display_options['access']['domains'] = array(
    1 => '1',
    19 => '19',
    2 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    20 => 0,
    21 => 0,
  );
  $handler->display->display_options['access']['domain_strict'] = 0;
  $handler->display->display_options['access']['domain_member'] = 0;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Status date (field_country_ratification_date) */
  $handler->display->display_options['filters']['field_country_ratification_date_value']['id'] = 'field_country_ratification_date_value';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['field'] = 'field_country_ratification_date_value';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_country_ratification_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_ratification_date_value']['expose']['operator_id'] = 'field_country_ratification_date_value_op';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['expose']['label'] = 'Status date';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['expose']['operator'] = 'field_country_ratification_date_value_op';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_country_ratification_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group_info']['label'] = 'Status date (field_country_ratification_date)';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group_info']['identifier'] = 'field_country_ratification_date_value';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group_info']['default_group_multiple'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_country_ratification_date_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Status date',
      'operator' => '<=',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => NULL,
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
    2 => array(
      'title' => 'Date',
      'operator' => 'empty',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => NULL,
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['filters']['field_country_ratification_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_country_ratification_date_value']['year_range'] = '1970:+1';
  /* Filter criterion: Field collection item: Status date (field_country_ratification_date) */
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['id'] = 'field_country_ratification_date_value_1';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['field'] = 'field_country_ratification_date_value';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['expose']['operator_id'] = 'field_country_ratification_date_value_1_op';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['expose']['label'] = 'Status date';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['expose']['operator'] = 'field_country_ratification_date_value_1_op';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['expose']['identifier'] = 'year2';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_country_ratification_date_value_1']['year_range'] = '1970:+1';
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '2';
  $handler->display->display_options['path'] = 'parties-range-states';
  $handler->display->display_options['menu']['title'] = 'Parties and Range States';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = '810f12118bc3b060d5e1bf8c18c7725f';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'party_range_states_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country_status' => 'field_country_status',
    'field_country_ratification_date' => 'field_country_ratification_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_ratification_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Ratification status (field_country_instrument_status) */
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['id'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['table'] = 'field_data_field_country_instrument_status';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['field'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['delta'] = '-1';
  /* Relationship: Field collection item: Status (field_country_status) */
  $handler->display->display_options['relationships']['field_country_status_tid']['id'] = 'field_country_status_tid';
  $handler->display->display_options['relationships']['field_country_status_tid']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['relationships']['field_country_status_tid']['field'] = 'field_country_status_tid';
  $handler->display->display_options['relationships']['field_country_status_tid']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_status_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Country';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_country_status']['id'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['fields']['field_country_status']['field'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_status']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Field collection item: Status date */
  $handler->display->display_options['fields']['field_country_ratification_date']['id'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['field'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_ratification_date']['label'] = 'Year of accession';
  $handler->display->display_options['fields']['field_country_ratification_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field collection item: Status (field_country_status) */
  $handler->display->display_options['filters']['field_country_status_tid']['id'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['filters']['field_country_status_tid']['field'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator_id'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['identifier'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_status_tid']['vocabulary'] = 'party_status';
  $handler->display->display_options['filters']['field_country_status_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '2';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '264';
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['operator'] = '!=';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '240';
  $handler->display->display_options['path'] = 'parties_range_states_list';

  /* Display: Instrument List */
  $handler = $view->new_display('page', 'Instrument List', 'instrument_list');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field collection item: Status */
  $handler->display->display_options['fields']['field_country_status']['id'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['fields']['field_country_status']['field'] = 'field_country_status';
  $handler->display->display_options['fields']['field_country_status']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_status']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Field collection item: Status date */
  $handler->display->display_options['fields']['field_country_ratification_date']['id'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['table'] = 'field_data_field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['field'] = 'field_country_ratification_date';
  $handler->display->display_options['fields']['field_country_ratification_date']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['fields']['field_country_ratification_date']['label'] = 'Year of accession';
  $handler->display->display_options['fields']['field_country_ratification_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field collection item: Status (field_country_status) */
  $handler->display->display_options['filters']['field_country_status_tid']['id'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['filters']['field_country_status_tid']['field'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_country_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator_id'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['identifier'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_country_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_status_tid']['vocabulary'] = 'party_status';
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '2';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '264';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['operator'] = '!=';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '240';
  $handler->display->display_options['path'] = 'instrument-country-list/%';

  /* Display: Instrument Map */
  $handler = $view->new_display('page', 'Instrument Map', 'instrument_map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '2';
  $handler->display->display_options['path'] = 'instrument-countries-map';
  $translatables['front_end_countries'] = array(
    t('Master'),
    t('Parties and Range States'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field collection item from field_country_instrument_status'),
    t('Title'),
    t('Status'),
    t('Status date'),
    t('ISO 3166-2 code'),
    t('Status date (field_country_ratification_date)'),
    t('List'),
    t('term from field_country_status'),
    t('Country'),
    t('Year of accession'),
    t('Region'),
    t('Nid'),
    t('Instrument List'),
    t('Instrument Map'),
  );
  $export['front_end_countries'] = $view;

  $view = new view();
  $view->name = 'front_end_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Action Plans';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_number' => 'field_document_number',
    'title' => 'title',
    'field_instrument' => 'field_instrument',
    'field_document_publish_date' => 'field_document_publish_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_document_publish_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['label'] = 'Document Number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Publish date (field_document_publish_date) */
  $handler->display->display_options['sorts']['field_document_publish_date_value_1']['id'] = 'field_document_publish_date_value_1';
  $handler->display->display_options['sorts']['field_document_publish_date_value_1']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['sorts']['field_document_publish_date_value_1']['field'] = 'field_document_publish_date_value';
  $handler->display->display_options['sorts']['field_document_publish_date_value_1']['order'] = 'DESC';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';

  /* Display: National Reports */
  $handler = $view->new_display('page', 'National Reports', 'national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'National Reports';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_document_publish_date' => 'field_document_publish_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_document_publish_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['arguments']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['arguments']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '2';
  /* Filter criterion: Field: Country (field_country) (entityreference filter) */
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['id'] = 'field_country_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['field'] = 'field_country_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['expose']['operator_id'] = 'field_country_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['expose']['operator'] = 'field_country_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['expose']['identifier'] = 'field_country_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_country_target_id_entityreference_filter']['reference_display'] = 'available_countries:entityreference_1';
  $handler->display->display_options['path'] = 'documents/national-reports';
  $handler->display->display_options['menu']['title'] = 'National Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Action Plans */
  $handler = $view->new_display('page', 'Action Plans', 'action_plans');
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    0 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'documents/action-plans';
  $handler->display->display_options['menu']['title'] = 'Action Plans';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Country's Nat Rep */
  $handler = $view->new_display('page', 'Country\'s Nat Rep', 'country_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country\'s Nat. Rep';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-country-nat-reports';

  /* Display: Instrument's Nat Rep */
  $handler = $view->new_display('page', 'Instrument\'s Nat Rep', 'instrument_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument\'s Nat. Rep';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-instrument-nat-reports';

  /* Display: Instrument's Plans */
  $handler = $view->new_display('page', 'Instrument\'s Plans', 'instrument_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument\'s Plans';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1407 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-instrument-plans';

  /* Display: Meeting's Nat Rep */
  $handler = $view->new_display('page', 'Meeting\'s Nat Rep', 'meeting_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting\'s Nat rep';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['id'] = 'field_document_meeting_target_id';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['table'] = 'field_data_field_document_meeting';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['field'] = 'field_document_meeting_target_id';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-meeting-nat-rep';

  /* Display: Meeting's Plans */
  $handler = $view->new_display('page', 'Meeting\'s Plans', 'meeting_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting\'s Plans';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['id'] = 'field_document_meeting_target_id';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['table'] = 'field_data_field_document_meeting';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['field'] = 'field_document_meeting_target_id';
  $handler->display->display_options['relationships']['field_document_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1407 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-meeting-plans';

  /* Display: Project's Nat Rep */
  $handler = $view->new_display('page', 'Project\'s Nat Rep', 'project_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project\'s Nat rep';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_project_target_id']['id'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['table'] = 'field_data_field_document_project';
  $handler->display->display_options['relationships']['field_document_project_target_id']['field'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-project-nat-rep';

  /* Display: Project's Plans */
  $handler = $view->new_display('page', 'Project\'s Plans', 'project_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project\'s Plans';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_project_target_id']['id'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['table'] = 'field_data_field_document_project';
  $handler->display->display_options['relationships']['field_document_project_target_id']['field'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1407 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-project-plans';

  /* Display: Project's Other Documents */
  $handler = $view->new_display('page', 'Project\'s Other Documents', 'project_other_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project\'s Other Documents';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_project_target_id']['id'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['table'] = 'field_data_field_document_project';
  $handler->display->display_options['relationships']['field_document_project_target_id']['field'] = 'field_document_project_target_id';
  $handler->display->display_options['relationships']['field_document_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
    1407 => '1407',
    1332 => '1332',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-project-other-documents';

  /* Display: Publication's Nat Rep */
  $handler = $view->new_display('page', 'Publication\'s Nat Rep', 'publication_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s Nat rep';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_publication_target_id']['id'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['table'] = 'field_data_field_document_publication';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['field'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-publication-nat-rep';

  /* Display: Publication's Plans */
  $handler = $view->new_display('page', 'Publication\'s Plans', 'publication_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s Plans';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_publication_target_id']['id'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['table'] = 'field_data_field_document_publication';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['field'] = 'field_document_publication_target_id';
  $handler->display->display_options['relationships']['field_document_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1407 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-publication-plans';

  /* Display: Species' Plans */
  $handler = $view->new_display('page', 'Species\' Plans', 'species_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species\' Plans';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_species_target_id']['id'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['table'] = 'field_data_field_document_species';
  $handler->display->display_options['relationships']['field_document_species_target_id']['field'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1407 => '1407',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-species-plans';

  /* Display: Species' Nat Rep */
  $handler = $view->new_display('page', 'Species\' Nat Rep', 'species_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species\' Nat Rep';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_species_target_id']['id'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['table'] = 'field_data_field_document_species';
  $handler->display->display_options['relationships']['field_document_species_target_id']['field'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-species-nat-rep';

  /* Display: Species' Other Documents */
  $handler = $view->new_display('page', 'Species\' Other Documents', 'species_other_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species\' Other Documents';
  $handler->display->display_options['display_description'] = 'used for related content tabs';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_species_target_id']['id'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['table'] = 'field_data_field_document_species';
  $handler->display->display_options['relationships']['field_document_species_target_id']['field'] = 'field_document_species_target_id';
  $handler->display->display_options['relationships']['field_document_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_document_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_document_type_tid']['value'] = array(
    1336 => '1336',
    1407 => '1407',
    1332 => '1332',
  );
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['path'] = 'fe-species-other-documents';
  $translatables['front_end_documents'] = array(
    t('Master'),
    t('Action Plans'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Document Number'),
    t('Title'),
    t('CMS Instrument'),
    t('Publish date'),
    t('National Reports'),
    t('Country'),
    t('All'),
    t('Country\'s Nat Rep'),
    t('Country\'s Nat. Rep'),
    t('used for related content tabs'),
    t('Content entity referenced from field_country'),
    t('Instrument\'s Nat Rep'),
    t('Instrument\'s Nat. Rep'),
    t('Content entity referenced from field_instrument'),
    t('Instrument\'s Plans'),
    t('Meeting\'s Nat Rep'),
    t('Meeting\'s Nat rep'),
    t('Content entity referenced from field_document_meeting'),
    t('Meeting\'s Plans'),
    t('Project\'s Nat Rep'),
    t('Project\'s Nat rep'),
    t('Content entity referenced from field_document_project'),
    t('Project\'s Plans'),
    t('Project\'s Other Documents'),
    t('Publication\'s Nat Rep'),
    t('Publication\'s Nat rep'),
    t('Content entity referenced from field_document_publication'),
    t('Publication\'s Plans'),
    t('Species\' Plans'),
    t('Content entity referenced from field_document_species'),
    t('Species\' Nat Rep'),
    t('Species\' Other Documents'),
  );
  $export['front_end_documents'] = $view;

  $view = new view();
  $view->name = 'front_end_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['css_class'] = 'table table-striped';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '25',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Meeting';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Dates -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['order'] = 'DESC';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '653',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  /* Filter criterion: Content: Status (field_meeting_status) */
  $handler->display->display_options['filters']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator_id'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['label'] = 'Status (field_meeting_status)';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['identifier'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    12 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_meeting_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_status_tid']['vocabulary'] = 'meeting_status';

  /* Display: Meetings of Parties */
  $handler = $view->new_display('page', 'Meetings of Parties', 'meetings_of_parties');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meetings of Parties';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    208 => '208',
    211 => '211',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'meetings/meetings-of-parties';
  $handler->display->display_options['menu']['title'] = 'Meetings of Parties';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Standing Committee */
  $handler = $view->new_display('page', 'Standing Committee', 'standing_committee');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Standing Committee';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '1396',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'meetings/standing-committee';
  $handler->display->display_options['menu']['title'] = 'Standing Committee';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CMS Advisory Committee */
  $handler = $view->new_display('page', 'CMS Advisory Committee', 'advisory_committee');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technical Committee';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    1398 => '1398',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type (field_meeting_type)';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'meetings/technical-committee';
  $handler->display->display_options['menu']['title'] = 'Technical Committee';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Working Group */
  $handler = $view->new_display('page', 'Working Group', 'working_group');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Working Group';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '215',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'meetings/working-group';
  $handler->display->display_options['menu']['title'] = 'Working Group';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Workshops */
  $handler = $view->new_display('page', 'Workshops', 'workshops');
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    0 => '216',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'meetings/workshops';
  $handler->display->display_options['menu']['title'] = 'Workshops';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Related Meetings */
  $handler = $view->new_display('page', 'Related Meetings', 'related_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other meetings';
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
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['value'] = array(
    1404 => '1404',
    207 => '207',
    209 => '209',
    210 => '210',
    1401 => '1401',
    1403 => '1403',
    1405 => '1405',
    1406 => '1406',
    1421 => '1421',
    1400 => '1400',
    1402 => '1402',
    1424 => '1424',
    213 => '213',
    214 => '214',
    1399 => '1399',
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['path'] = 'meetings/related-meetings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All other meetings & events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Publication's meetings */
  $handler = $view->new_display('page', 'Publication\'s meetings', 'publication_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s meetings';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['id'] = 'field_meeting_publication_target_id';
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['table'] = 'field_data_field_meeting_publication';
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['field'] = 'field_meeting_publication_target_id';
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-publications-meetings';

  /* Display: Instrument's meeting */
  $handler = $view->new_display('page', 'Instrument\'s meeting', 'instrument_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument\'s meeting';
  $handler->display->display_options['display_description'] = 'rendered in related content tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-intruments-meetings';

  /* Display: Country's meeting */
  $handler = $view->new_display('page', 'Country\'s meeting', 'country_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country\'s meeting';
  $handler->display->display_options['display_description'] = 'rendered in related content tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-country-meetings';

  /* Display: Project's meeting */
  $handler = $view->new_display('page', 'Project\'s meeting', 'project_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project\'s meeting';
  $handler->display->display_options['display_description'] = 'rendered in related content tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['id'] = 'field_meeting_project_target_id';
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['table'] = 'field_data_field_meeting_project';
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['field'] = 'field_meeting_project_target_id';
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-projects-meetings';

  /* Display: Document's meeting */
  $handler = $view->new_display('page', 'Document\'s meeting', 'document_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\'s meeting';
  $handler->display->display_options['display_description'] = 'rendered in related content tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['id'] = 'field_meeting_document_target_id';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['table'] = 'field_data_field_meeting_document';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['field'] = 'field_meeting_document_target_id';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_document_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-documents-meetings';

  /* Display: Species' meeting */
  $handler = $view->new_display('page', 'Species\' meeting', 'species_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species\' meeting';
  $handler->display->display_options['display_description'] = 'rendered in related content tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['id'] = 'field_meeting_species_target_id';
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['table'] = 'field_data_field_meeting_species';
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['field'] = 'field_meeting_species_target_id';
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-documents-meetings';
  $translatables['front_end_meetings'] = array(
    t('Master'),
    t('Workshops'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Meeting'),
    t('Start date'),
    t('Status'),
    t('Country'),
    t('CMS Instrument'),
    t('Type'),
    t('Status (field_meeting_status)'),
    t('Meetings of Parties'),
    t('Standing Committee'),
    t('CMS Advisory Committee'),
    t('Technical Committee'),
    t('Type (field_meeting_type)'),
    t('Working Group'),
    t('Related Meetings'),
    t('Other meetings'),
    t('Publication\'s meetings'),
    t('Content entity referenced from field_meeting_publication'),
    t('All'),
    t('Instrument\'s meeting'),
    t('rendered in related content tabs'),
    t('Content entity referenced from field_instrument'),
    t('Country\'s meeting'),
    t('Content entity referenced from field_country'),
    t('Project\'s meeting'),
    t('Content entity referenced from field_meeting_project'),
    t('Document\'s meeting'),
    t('Content entity referenced from field_meeting_document'),
    t('Species\' meeting'),
    t('Content entity referenced from field_meeting_species'),
  );
  $export['front_end_meetings'] = $view;

  $view = new view();
  $view->name = 'front_end_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AEWA News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, All',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    1412 => '1412',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';

  /* Display: News */
  $handler = $view->new_display('page', 'News', 'news');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Press releases */
  $handler = $view->new_display('page', 'Press releases', 'press_releases');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press releases';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    1415 => '1415',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['path'] = 'news/press-releases';
  $handler->display->display_options['menu']['title'] = 'Press releases';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Op ed */
  $handler = $view->new_display('page', 'Op ed', 'op_ed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Op ed';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    1414 => '1414',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['path'] = 'news/op-ed';
  $handler->display->display_options['menu']['title'] = 'Op ed';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Notifications */
  $handler = $view->new_display('page', 'Notifications', 'notifications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Notifications';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, All',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    1413 => '1413',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['path'] = 'news/notifications';
  $handler->display->display_options['menu']['title'] = 'Notifications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Media Watch */
  $handler = $view->new_display('page', 'Media Watch', 'media_watch');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media Watch';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_source_url' => 'field_source_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, All',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'cms_date';
  /* Field: Content: Source URL */
  $handler->display->display_options['fields']['field_source_url']['id'] = 'field_source_url';
  $handler->display->display_options['fields']['field_source_url']['table'] = 'field_data_field_source_url';
  $handler->display->display_options['fields']['field_source_url']['field'] = 'field_source_url';
  $handler->display->display_options['fields']['field_source_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_url']['click_sort_column'] = 'url';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    1411 => '1411',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['path'] = 'news/media-watch';
  $handler->display->display_options['menu']['title'] = 'Media Watch';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-front-end-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'AEWA News Feed';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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
    'news' => 'news',
  );
  $handler->display->display_options['path'] = 'news/feed';

  /* Display: InforMEA RSS News */
  $handler = $view->new_display('feed', 'InforMEA RSS News', 'feed_informea');
  $handler->display->display_options['display_description'] = 'News for InforMEA website';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'AEWA News Feed';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    0 => '1412',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'news/informea/feed';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['front_end_news'] = array(
    t('Master'),
    t('AEWA News'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('News'),
    t('Press releases'),
    t('Op ed'),
    t('Notifications'),
    t('Title'),
    t('Media Watch'),
    t('Date'),
    t('Source URL'),
    t('RSS Feed'),
    t('InforMEA RSS News'),
    t('News for InforMEA website'),
  );
  $export['front_end_news'] = $view;

  $view = new view();
  $view->name = 'front_end_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_status' => 'field_project_status',
    'field_region' => 'field_region',
  );
  $handler->display->display_options['style_options']['default'] = 'field_project_end_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert alert-block alert-info">
    <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Activity start date */
  $handler->display->display_options['fields']['field_project_start_date']['id'] = 'field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['field'] = 'field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['field_project_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Activity end date */
  $handler->display->display_options['fields']['field_project_end_date']['id'] = 'field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['table'] = 'field_data_field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['field'] = 'field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['label'] = 'End date';
  $handler->display->display_options['fields']['field_project_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Implementing Agency */
  $handler->display->display_options['fields']['field_project_impl_agency']['id'] = 'field_project_impl_agency';
  $handler->display->display_options['fields']['field_project_impl_agency']['table'] = 'field_data_field_project_impl_agency';
  $handler->display->display_options['fields']['field_project_impl_agency']['field'] = 'field_project_impl_agency';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Sort criterion: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['sorts']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['sorts']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['order'] = 'DESC';
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
    'project' => 'project',
  );
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '8';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['operator_id'] = 'field_instrument_target_id_op';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['label'] = 'CMS Instrument (field_instrument)';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['operator'] = 'field_instrument_target_id_op';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['identifier'] = 'field_instrument_target_id';
  /* Filter criterion: Content: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator_id'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['identifier'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_project_status_value']['reduce_duplicates'] = TRUE;

  /* Display: Projects */
  $handler = $view->new_display('page', 'Projects', 'projects');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Status (field_project_status) */
  $handler->display->display_options['filters']['field_project_status_value']['id'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['filters']['field_project_status_value']['field'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator_id'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['operator'] = 'field_project_status_value_op';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['identifier'] = 'field_project_status_value';
  $handler->display->display_options['filters']['field_project_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_project_status_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Field: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Target region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  $handler->display->display_options['filters']['field_region_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Type (field_project_type) */
  $handler->display->display_options['filters']['field_project_type_tid']['id'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['filters']['field_project_type_tid']['field'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator_id'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['identifier'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Small Grants */
  $handler = $view->new_display('page', 'Small Grants', 'small_grants');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Small grants';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['arguments']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['arguments']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['arguments']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['arguments']['field_project_start_date_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project_start_date_value']['title'] = 'Small Grants %1';
  $handler->display->display_options['arguments']['field_project_start_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_project_start_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_start_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_start_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_start_date_value']['year_range'] = '1980:+9';
  $handler->display->display_options['arguments']['field_project_start_date_value']['granularity'] = 'year';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Small Grants Programme (SGP) (field_project_sgp) */
  $handler->display->display_options['filters']['field_project_sgp_value']['id'] = 'field_project_sgp_value';
  $handler->display->display_options['filters']['field_project_sgp_value']['table'] = 'field_data_field_project_sgp';
  $handler->display->display_options['filters']['field_project_sgp_value']['field'] = 'field_project_sgp_value';
  $handler->display->display_options['filters']['field_project_sgp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_project_sgp_value']['group'] = 1;
  $handler->display->display_options['filters']['field_project_sgp_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'projects/small-grants/%';

  /* Display: Publication's Projects */
  $handler = $view->new_display('page', 'Publication\'s Projects', 'publication_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s projects';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_status' => 'field_project_status',
    'field_region' => 'field_region',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_publication_target_id']['id'] = 'field_project_publication_target_id';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['table'] = 'field_data_field_project_publication';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['field'] = 'field_project_publication_target_id';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['sorts']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['sorts']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-publication-projects';

  /* Display: Country's Projects */
  $handler = $view->new_display('page', 'Country\'s Projects', 'country_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country\'s projects';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_status' => 'field_project_status',
    'field_region' => 'field_region',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['sorts']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['sorts']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-country-projects';

  /* Display: Species' Projects */
  $handler = $view->new_display('page', 'Species\' Projects', 'species_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species\' projects';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_status' => 'field_project_status',
    'field_region' => 'field_region',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_species_target_id']['id'] = 'field_project_species_target_id';
  $handler->display->display_options['relationships']['field_project_species_target_id']['table'] = 'field_data_field_project_species';
  $handler->display->display_options['relationships']['field_project_species_target_id']['field'] = 'field_project_species_target_id';
  $handler->display->display_options['relationships']['field_project_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['sorts']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['sorts']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-species-projects';

  /* Display: Instrument's Projects */
  $handler = $view->new_display('page', 'Instrument\'s Projects', 'instrument_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument\'s projects';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_status' => 'field_project_status',
    'field_region' => 'field_region',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['sorts']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['sorts']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-instrument-projects';

  /* Display: Document's Projects */
  $handler = $view->new_display('page', 'Document\'s Projects', 'document_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\'s projects';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_status' => 'field_project_status',
    'field_region' => 'field_region',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['id'] = 'reverse_field_document_project_node';
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['field'] = 'reverse_field_document_project_node';
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Activity start date (field_project_start_date) */
  $handler->display->display_options['sorts']['field_project_start_date_value']['id'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['sorts']['field_project_start_date_value']['field'] = 'field_project_start_date_value';
  $handler->display->display_options['sorts']['field_project_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_document_project_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-document-projects';
  $translatables['front_end_projects'] = array(
    t('Master'),
    t('Projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<br />
<div class="alert alert-block alert-info">
    <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t('Title'),
    t('Start date'),
    t('End date'),
    t('Implementing Agency'),
    t('Status'),
    t('Region'),
    t('CMS Instrument (field_instrument)'),
    t('Target region'),
    t('Type'),
    t('Small Grants'),
    t('Small grants'),
    t('All'),
    t('Small Grants %1'),
    t('Publication\'s Projects'),
    t('Publication\'s projects'),
    t('Content entity referenced from field_project_publication'),
    t('Country\'s Projects'),
    t('Country\'s projects'),
    t('Content entity referenced from field_country'),
    t('Species\' Projects'),
    t('Species\' projects'),
    t('Content entity referenced from field_project_species'),
    t('Instrument\'s Projects'),
    t('Instrument\'s projects'),
    t('Content entity referenced from field_instrument'),
    t('Document\'s Projects'),
    t('Document\'s projects'),
    t('Content referencing Content from field_document_project'),
  );
  $export['front_end_projects'] = $view;

  $view = new view();
  $view->name = 'front_end_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Scientific';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_publication_type' => 'field_publication_type',
    'field_publication_published_date' => 'field_publication_published_date',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_published_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_type']['delta_offset'] = '0';
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_publication_published_date']['id'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['field'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_publication_published_date']['settings'] = array(
    'use_override' => 'short',
    'format' => 'custom',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'm',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-10',
        ),
      ),
    ),
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
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['value'] = array(
    0 => '226',
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_types';

  /* Display: Newsletter */
  $handler = $view->new_display('page', 'Newsletter', 'newsletter');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Newsletter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'day_date_type';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'cms_date';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'simplenews' => 'simplenews',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'publications/newsletter';
  $handler->display->display_options['menu']['title'] = 'Newsletter';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Scientific */
  $handler = $view->new_display('page', 'Scientific', 'scientific');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technical Publications';
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
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['value'] = array(
    223 => '223',
    369 => '369',
    1417 => '1417',
    224 => '224',
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator_id'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['identifier'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_types';
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid_1']['id'] = 'field_publication_type_tid_1';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['value'] = array(
    1425 => '1425',
    376 => '376',
    222 => '222',
    227 => '227',
    225 => '225',
    370 => '370',
    232 => '232',
    226 => '226',
    228 => '228',
    377 => '377',
  );
  $handler->display->display_options['filters']['field_publication_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['vocabulary'] = 'publication_types';
  $handler->display->display_options['path'] = 'publications/technical-publications';
  $handler->display->display_options['menu']['title'] = 'Scientific';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Leaflets and Brochures */
  $handler = $view->new_display('page', 'Leaflets and Brochures', 'leaflets_brochures');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Outreach Materials';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_type']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publication_publisher']['id'] = 'field_publication_publisher';
  $handler->display->display_options['fields']['field_publication_publisher']['table'] = 'field_data_field_publication_publisher';
  $handler->display->display_options['fields']['field_publication_publisher']['field'] = 'field_publication_publisher';
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
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['value'] = array(
    227 => '227',
    225 => '225',
    226 => '226',
    228 => '228',
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator_id'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['identifier'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_types';
  $handler->display->display_options['filters']['field_publication_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid_1']['id'] = 'field_publication_type_tid_1';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['value'] = array(
    1425 => '1425',
    223 => '223',
    376 => '376',
    222 => '222',
    369 => '369',
    370 => '370',
    232 => '232',
    1417 => '1417',
    224 => '224',
    377 => '377',
  );
  $handler->display->display_options['filters']['field_publication_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid_1']['vocabulary'] = 'publication_types';
  $handler->display->display_options['path'] = 'publications/outreach-materials';
  $handler->display->display_options['menu']['title'] = 'Leaflets and Brochures';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Instrument's Publications */
  $handler = $view->new_display('page', 'Instrument\'s Publications', 'instrument_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument\'s Publications';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_publisher' => 'field_publication_publisher',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-instrument-publications';

  /* Display: Project's Publications */
  $handler = $view->new_display('page', 'Project\'s Publications', 'project_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project\'s Publications';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_publisher' => 'field_publication_publisher',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_project_target_id']['id'] = 'field_publication_project_target_id';
  $handler->display->display_options['relationships']['field_publication_project_target_id']['table'] = 'field_data_field_publication_project';
  $handler->display->display_options['relationships']['field_publication_project_target_id']['field'] = 'field_publication_project_target_id';
  $handler->display->display_options['relationships']['field_publication_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publication_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-project-publications';

  /* Display: Meeting's Publications */
  $handler = $view->new_display('page', 'Meeting\'s Publications', 'meeting_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting\'s Publications';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_publisher' => 'field_publication_publisher',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['id'] = 'field_publication_meeting_target_id';
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['table'] = 'field_data_field_publication_meeting';
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['field'] = 'field_publication_meeting_target_id';
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publication_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-meeting-publications';

  /* Display: Species' Publications */
  $handler = $view->new_display('page', 'Species\' Publications', 'species_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species\' Publications';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_publisher' => 'field_publication_publisher',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_species_target_id']['id'] = 'field_publication_species_target_id';
  $handler->display->display_options['relationships']['field_publication_species_target_id']['table'] = 'field_data_field_publication_species';
  $handler->display->display_options['relationships']['field_publication_species_target_id']['field'] = 'field_publication_species_target_id';
  $handler->display->display_options['relationships']['field_publication_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publication_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-species-publications';

  /* Display: Document' Publications */
  $handler = $view->new_display('page', 'Document\' Publications', 'document_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\' Publications';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_publisher' => 'field_publication_publisher',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_publisher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['id'] = 'reverse_field_document_publication_node';
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['field'] = 'reverse_field_document_publication_node';
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_document_publication_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'fe-document-publications';

  /* Display: Proceedings */
  $handler = $view->new_display('page', 'Proceedings', 'proceedings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proceedings';
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
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['value'] = array(
    0 => '222',
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_types';
  $handler->display->display_options['path'] = 'publications/proceedings';
  $handler->display->display_options['menu']['title'] = 'Proceedings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['front_end_publications'] = array(
    t('Master'),
    t('Scientific'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Type'),
    t('Published Date'),
    t('Newsletter'),
    t('Translations'),
    t('Post date'),
    t('Technical Publications'),
    t('Leaflets and Brochures'),
    t('Outreach Materials'),
    t('Publisher'),
    t('Instrument\'s Publications'),
    t('Content entity referenced from field_instrument'),
    t('All'),
    t('Project\'s Publications'),
    t('Content entity referenced from field_publication_project'),
    t('Meeting\'s Publications'),
    t('Content entity referenced from field_publication_meeting'),
    t('Species\' Publications'),
    t('Content entity referenced from field_publication_species'),
    t('Document\' Publications'),
    t('Content referencing Content from field_document_publication'),
    t('Proceedings'),
  );
  $export['front_end_publications'] = $view;

  $view = new view();
  $view->name = 'front_end_species';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Species';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Species';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_instruments' => 'field_species_instruments',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 1,
    'display_length' => '25',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert alert-block alert-info">
    <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_value']['id'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['relationships']['field_species_instruments_value']['field'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class']['id'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_species_order']['id'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['fields']['field_species_order']['field'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_species_family']['id'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['fields']['field_species_family']['field'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date of entry in Appendix I */
  $handler->display->display_options['fields']['field_species_appendix_1_date']['id'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['table'] = 'field_data_field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['field'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['label'] = 'Appendix I';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_1_date']['empty'] = '-';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date of entry in Appendix II */
  $handler->display->display_options['fields']['field_species_appendix_2_date']['id'] = 'field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['table'] = 'field_data_field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['field'] = 'field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['label'] = 'Appendix II';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['alter']['text'] = ' / [field_species_appendix_2_date]';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['empty'] = '/ -';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Appendix (App. I / App. II)';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_species_appendix_1_date] [field_species_appendix_2_date]';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Order (field_species_order) */
  $handler->display->display_options['filters']['field_species_order_tid']['id'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['filters']['field_species_order_tid']['field'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['operator_id'] = 'field_species_order_tid_op';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['label'] = 'Order';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['operator'] = 'field_species_order_tid_op';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['identifier'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    12 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['label'] = 'Order (field_species_order)';
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['identifier'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_species_order_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_species_order_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_species_order_tid']['vocabulary'] = 'species_order';
  /* Filter criterion: Content: Family (field_species_family) */
  $handler->display->display_options['filters']['field_species_family_tid']['id'] = 'field_species_family_tid';
  $handler->display->display_options['filters']['field_species_family_tid']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['filters']['field_species_family_tid']['field'] = 'field_species_family_tid';
  $handler->display->display_options['filters']['field_species_family_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['operator_id'] = 'field_species_family_tid_op';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['operator'] = 'field_species_family_tid_op';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['identifier'] = 'field_species_family_tid';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    12 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_species_family_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_species_family_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_species_family_tid']['vocabulary'] = 'species_family';
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['filters']['field_instrument_target_id']['value']['value'] = '24';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['operator_id'] = 'field_instrument_target_id_op';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['label'] = 'CMS Instrument (field_instrument)';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['operator'] = 'field_instrument_target_id_op';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['identifier'] = 'field_instrument_target_id';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'species_list');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class']['id'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_species_order']['id'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['fields']['field_species_order']['field'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_species_family']['id'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['fields']['field_species_family']['field'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_species_instruments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Class (field_species_class) */
  $handler->display->display_options['filters']['field_species_class_tid']['id'] = 'field_species_class_tid';
  $handler->display->display_options['filters']['field_species_class_tid']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['filters']['field_species_class_tid']['field'] = 'field_species_class_tid';
  $handler->display->display_options['filters']['field_species_class_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_species_class_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_species_class_tid']['expose']['operator_id'] = 'field_species_class_tid_op';
  $handler->display->display_options['filters']['field_species_class_tid']['expose']['label'] = 'Class';
  $handler->display->display_options['filters']['field_species_class_tid']['expose']['operator'] = 'field_species_class_tid_op';
  $handler->display->display_options['filters']['field_species_class_tid']['expose']['identifier'] = 'field_species_class_tid';
  $handler->display->display_options['filters']['field_species_class_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  $handler->display->display_options['filters']['field_species_class_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_species_class_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_species_class_tid']['vocabulary'] = 'species_class';
  /* Filter criterion: Content: Order (field_species_order) */
  $handler->display->display_options['filters']['field_species_order_tid']['id'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['filters']['field_species_order_tid']['field'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_species_order_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['operator_id'] = 'field_species_order_tid_op';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['label'] = 'Order';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['operator'] = 'field_species_order_tid_op';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['identifier'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    12 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['label'] = 'Order (field_species_order)';
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['identifier'] = 'field_species_order_tid';
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_species_order_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_species_order_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_species_order_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_species_order_tid']['vocabulary'] = 'species_order';
  /* Filter criterion: Content: Family (field_species_family) */
  $handler->display->display_options['filters']['field_species_family_tid']['id'] = 'field_species_family_tid';
  $handler->display->display_options['filters']['field_species_family_tid']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['filters']['field_species_family_tid']['field'] = 'field_species_family_tid';
  $handler->display->display_options['filters']['field_species_family_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_species_family_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['operator_id'] = 'field_species_family_tid_op';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['operator'] = 'field_species_family_tid_op';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['identifier'] = 'field_species_family_tid';
  $handler->display->display_options['filters']['field_species_family_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    12 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_species_family_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_species_family_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_species_family_tid']['vocabulary'] = 'species_family';
  /* Filter criterion: Field: CMS Instrument (field_instrument) (entityreference filter) */
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['id'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['field'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator_id'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['identifier'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['reference_display'] = 'available_instruments:entityreference_1';
  $handler->display->display_options['path'] = 'species';
  $handler->display->display_options['menu']['title'] = 'Species';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Publication's Species */
  $handler = $view->new_display('page', 'Publication\'s Species', 'publication_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication\'s Species';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class_1' => 'field_species_class_1',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_publication_target_id']['id'] = 'field_species_publication_target_id';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['table'] = 'field_data_field_species_publication';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['field'] = 'field_species_publication_target_id';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'fe-publication-speceis';

  /* Display: Instrument's Species */
  $handler = $view->new_display('page', 'Instrument\'s Species', 'instrument_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument\'s Species';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class_1' => 'field_species_class_1',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_value']['id'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['relationships']['field_species_instruments_value']['field'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_species_instruments_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'fe-intrument-speceis';

  /* Display: Country's Species */
  $handler = $view->new_display('page', 'Country\'s Species', 'country_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country\'s Species';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class_1' => 'field_species_class_1',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Range states (field_species_range_states) */
  $handler->display->display_options['relationships']['field_species_range_states_value']['id'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_states_value']['table'] = 'field_data_field_species_range_states';
  $handler->display->display_options['relationships']['field_species_range_states_value']['field'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_states_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_species_range_states_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['relationship'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'fe-counstry-species';

  /* Display: Project's Species */
  $handler = $view->new_display('page', 'Project\'s Species', 'project_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project\'s Species';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class_1' => 'field_species_class_1',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_project_target_id']['id'] = 'field_species_project_target_id';
  $handler->display->display_options['relationships']['field_species_project_target_id']['table'] = 'field_data_field_species_project';
  $handler->display->display_options['relationships']['field_species_project_target_id']['field'] = 'field_species_project_target_id';
  $handler->display->display_options['relationships']['field_species_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'fe-project-species';

  /* Display: Meeting's Species */
  $handler = $view->new_display('page', 'Meeting\'s Species', 'meeting_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting\'s Species';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class_1' => 'field_species_class_1',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['id'] = 'field_species_meeting_target_id';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['table'] = 'field_data_field_species_meeting';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['field'] = 'field_species_meeting_target_id';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'fe-meeting-species';

  /* Display: Document's Species */
  $handler = $view->new_display('page', 'Document\'s Species', 'document_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\'s Species';
  $handler->display->display_options['display_description'] = 'related content tabs';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_class' => 'field_species_class',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class_1' => 'field_species_class_1',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_author' => 'field_species_author',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_author' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['id'] = 'reverse_field_document_species_node';
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['field'] = 'reverse_field_document_species_node';
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_document_species_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'fe-document-species';

  /* Display: Random species */
  $handler = $view->new_display('page', 'Random species', 'random_species');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_species_images']['id'] = 'field_species_images';
  $handler->display->display_options['fields']['field_species_images']['table'] = 'field_data_field_species_images';
  $handler->display->display_options['fields']['field_species_images']['field'] = 'field_species_images';
  $handler->display->display_options['fields']['field_species_images']['label'] = '';
  $handler->display->display_options['fields']['field_species_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_species_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['arguments']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['arguments']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'random_species';

  /* Display: Random Species With Images */
  $handler = $view->new_display('page', 'Random Species With Images', 'random_species_with_images');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_species_images']['id'] = 'field_species_images';
  $handler->display->display_options['fields']['field_species_images']['table'] = 'field_data_field_species_images';
  $handler->display->display_options['fields']['field_species_images']['field'] = 'field_species_images';
  $handler->display->display_options['fields']['field_species_images']['label'] = '';
  $handler->display->display_options['fields']['field_species_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_species_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['arguments']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['arguments']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Images (field_species_images:fid) */
  $handler->display->display_options['filters']['field_species_images_fid']['id'] = 'field_species_images_fid';
  $handler->display->display_options['filters']['field_species_images_fid']['table'] = 'field_data_field_species_images';
  $handler->display->display_options['filters']['field_species_images_fid']['field'] = 'field_species_images_fid';
  $handler->display->display_options['filters']['field_species_images_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'random_img_species/%';
  $translatables['front_end_species'] = array(
    t('Master'),
    t('Species'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<br />
<div class="alert alert-block alert-info">
    <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t('field collection item from field_species_instruments'),
    t('Scientific name'),
    t('Common name'),
    t('Class'),
    t('Order'),
    t('Family'),
    t('Appendix I'),
    t('-'),
    t('Appendix II'),
    t(' / [field_species_appendix_2_date]'),
    t('/ -'),
    t('Appendix (App. I / App. II)'),
    t('[field_species_appendix_1_date] [field_species_appendix_2_date]'),
    t('Order (field_species_order)'),
    t('CMS Instrument (field_instrument)'),
    t('List'),
    t('CMS Instruments'),
    t('CMS Instrument'),
    t('Publication\'s Species'),
    t('Content entity referenced from field_species_publication'),
    t('All'),
    t('Instrument\'s Species'),
    t('Content entity referenced from field_instrument'),
    t('Country\'s Species'),
    t('field collection item from field_species_range_states'),
    t('Content entity referenced from field_country'),
    t('Project\'s Species'),
    t('Content entity referenced from field_species_project'),
    t('Meeting\'s Species'),
    t('Content entity referenced from field_species_meeting'),
    t('Document\'s Species'),
    t('related content tabs'),
    t('Content referencing Content from field_document_species'),
    t('Random species'),
    t('Random Species With Images'),
  );
  $export['front_end_species'] = $view;

  $view = new view();
  $view->name = 'front_end_working_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front-end Working Groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Working Groups';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
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
    'working_group' => 'working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;

  /* Display: Working Groups */
  $handler = $view->new_display('page', 'Working Groups', 'working_groups');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'working-groups';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-frontend-main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['front_end_working_groups'] = array(
    t('Master'),
    t('Working Groups'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Translations'),
  );
  $export['front_end_working_groups'] = $view;

  $view = new view();
  $view->name = 'legal_instrument_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Legal instruments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CMS Instruments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_instrument_status',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instrument_status' => 'field_instrument_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Relationship: Content: Status (field_instrument_status) */
  $handler->display->display_options['relationships']['field_instrument_status_tid']['id'] = 'field_instrument_status_tid';
  $handler->display->display_options['relationships']['field_instrument_status_tid']['table'] = 'field_data_field_instrument_status';
  $handler->display->display_options['relationships']['field_instrument_status_tid']['field'] = 'field_instrument_status_tid';
  $handler->display->display_options['relationships']['field_instrument_status_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Instrument name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_instrument_status']['id'] = 'field_instrument_status';
  $handler->display->display_options['fields']['field_instrument_status']['table'] = 'field_data_field_instrument_status';
  $handler->display->display_options['fields']['field_instrument_status']['field'] = 'field_instrument_status';
  $handler->display->display_options['fields']['field_instrument_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_instrument_status_tid';
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
    'legal_instrument' => 'legal_instrument',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'legal_instrument_listing');
  $handler->display->display_options['path'] = 'legal_instrument/listing';
  $handler->display->display_options['menu']['title'] = 'CMS Instruments';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'legal_instrument_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'CMS Instruments - %timestamp-yyyy%timestamp-mm%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'legal_instrument/export';
  $translatables['legal_instrument_listing'] = array(
    t('Master'),
    t('CMS Instruments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_instrument_status'),
    t('Instrument name'),
    t('Status'),
    t('List'),
    t('Data export'),
  );
  $export['legal_instrument_listing'] = $view;

  $view = new view();
  $view->name = 'meeting_documents_list_reorder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting Documents List Reorder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Documents Reorder';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_document_type' => 'field_document_type',
    'field_document_publish_date' => 'field_document_publish_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['id'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['field'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['required'] = TRUE;
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['required'] = TRUE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'meeting_documents_list_reorder:m_d_reorder';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type (field_document_type) */
  $handler->display->display_options['arguments']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['arguments']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['arguments']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['arguments']['field_document_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_document_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_document_type_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_document_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_document_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_document_type_tid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );

  /* Display: Reorder */
  $handler = $view->new_display('page', 'Reorder', 'm_d_reorder');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any meeting content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['path'] = 'meeting-documents-reorder/%/%/%';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'm_d_list');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any meeting content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['path'] = 'meeting-documents-list/%/%';

  /* Display: List Front-end */
  $handler = $view->new_display('page', 'List Front-end', 'm_d_list_fe');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="#collapse!2">Back to top</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_files']['type'] = 'cms_document_files_formatter';
  $handler->display->display_options['fields']['field_document_files']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['multi_type'] = 'ul';
  /* Field: Content: Private Files */
  $handler->display->display_options['fields']['field_document_private_files']['id'] = 'field_document_private_files';
  $handler->display->display_options['fields']['field_document_private_files']['table'] = 'field_data_field_document_private_files';
  $handler->display->display_options['fields']['field_document_private_files']['field'] = 'field_document_private_files';
  $handler->display->display_options['fields']['field_document_private_files']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_private_files']['type'] = 'cms_document_files_formatter';
  $handler->display->display_options['fields']['field_document_private_files']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_private_files']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Files';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_document_files]
[field_document_private_files]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Is Private (field_is_private) */
  $handler->display->display_options['filters']['field_is_private_value']['id'] = 'field_is_private_value';
  $handler->display->display_options['filters']['field_is_private_value']['table'] = 'field_data_field_is_private';
  $handler->display->display_options['filters']['field_is_private_value']['field'] = 'field_is_private_value';
  $handler->display->display_options['filters']['field_is_private_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_private_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'meeting-documents-list/%/%';

  /* Display: Download Docs */
  $handler = $view->new_display('page', 'Download Docs', 'download_meeting_doc');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['id'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['field'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_document_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_meeting_document_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'meeting-documents-list-download/%';
  $translatables['meeting_documents_list_reorder'] = array(
    t('Master'),
    t('Meeting Documents Reorder'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content referencing Content from field_meeting_document'),
    t('term from field_document_type'),
    t('Number'),
    t('Title'),
    t('Nid'),
    t('Publish date'),
    t('All'),
    t('%1'),
    t('Reorder'),
    t('Content'),
    t('List'),
    t('List Front-end'),
    t('<a href="#collapse!2">Back to top</a>'),
    t('Files'),
    t('Private Files'),
    t('[field_document_files]
[field_document_private_files]'),
    t('Download Docs'),
  );
  $export['meeting_documents_list_reorder'] = $view;

  $view = new view();
  $view->name = 'meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meetings';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instrument' => 'field_instrument',
    'field_meeting_type' => 'field_meeting_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="text-warning">No related content</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Type (field_meeting_type) */
  $handler->display->display_options['relationships']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['relationships']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['relationships']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  /* Relationship: Content: Status (field_meeting_status) */
  $handler->display->display_options['relationships']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['relationships']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_meeting_city']['id'] = 'field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['table'] = 'field_data_field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['field'] = 'field_meeting_city';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['filters']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['filters']['field_instrument_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['operator_id'] = 'field_instrument_target_id_op';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['operator'] = 'field_instrument_target_id_op';
  $handler->display->display_options['filters']['field_instrument_target_id']['expose']['identifier'] = 'field_instrument_target_id';
  /* Filter criterion: Content: Status (field_meeting_status) */
  $handler->display->display_options['filters']['field_meeting_status_tid']['id'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['field'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator_id'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['operator'] = 'field_meeting_status_tid_op';
  $handler->display->display_options['filters']['field_meeting_status_tid']['expose']['identifier'] = 'field_meeting_status_tid';
  $handler->display->display_options['filters']['field_meeting_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_status_tid']['vocabulary'] = 'meeting_status';
  $handler->display->display_options['filters']['field_meeting_status_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Type (field_meeting_type) */
  $handler->display->display_options['filters']['field_meeting_type_tid']['id'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['field'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator_id'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['operator'] = 'field_meeting_type_tid_op';
  $handler->display->display_options['filters']['field_meeting_type_tid']['expose']['identifier'] = 'field_meeting_type_tid';
  $handler->display->display_options['filters']['field_meeting_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_meeting_type_tid']['vocabulary'] = 'meeting_type';
  $handler->display->display_options['filters']['field_meeting_type_tid']['hierarchy'] = 1;

  /* Display: Meetings listing */
  $handler = $view->new_display('page', 'Meetings listing', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meeting_start' => 'field_meeting_start',
    'field_instrument' => 'field_instrument',
    'field_meeting_type' => 'field_meeting_type',
    'field_meeting_status' => 'field_meeting_status',
    'field_country' => 'field_country',
    'field_meeting_city' => 'field_meeting_city',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_start' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />

<div class="alert">
  <strong>No existing entries for current filtering!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_meeting_city']['id'] = 'field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['table'] = 'field_data_field_meeting_city';
  $handler->display->display_options['fields']['field_meeting_city']['field'] = 'field_meeting_city';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['path'] = 'meeting/listing';

  /* Display: Publication meetings */
  $handler = $view->new_display('page', 'Publication meetings', 'publication_meetings');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['id'] = 'field_meeting_publication_target_id';
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['table'] = 'field_data_field_meeting_publication';
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['field'] = 'field_meeting_publication_target_id';
  $handler->display->display_options['relationships']['field_meeting_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'publication_meetings/%';

  /* Display: Instrument meetings */
  $handler = $view->new_display('page', 'Instrument meetings', 'instrument_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument meetings';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'instrument_meetings/%';

  /* Display: Country meetings */
  $handler = $view->new_display('page', 'Country meetings', 'country_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country meetings';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'country_meetings/%';

  /* Display: Project meetings */
  $handler = $view->new_display('page', 'Project meetings', 'project_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project meetings';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['id'] = 'field_meeting_project_target_id';
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['table'] = 'field_data_field_meeting_project';
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['field'] = 'field_meeting_project_target_id';
  $handler->display->display_options['relationships']['field_meeting_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'project_meetings/%';

  /* Display: Document meetings */
  $handler = $view->new_display('page', 'Document meetings', 'document_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document meetings';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['id'] = 'field_meeting_document_target_id';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['table'] = 'field_data_field_meeting_document';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['field'] = 'field_meeting_document_target_id';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_document_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'document_meetings/%';

  /* Display: Species meetings */
  $handler = $view->new_display('page', 'Species meetings', 'species_meetings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species meetings';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['id'] = 'field_meeting_species_target_id';
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['table'] = 'field_data_field_meeting_species';
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['field'] = 'field_meeting_species_target_id';
  $handler->display->display_options['relationships']['field_meeting_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_meeting_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'species_meetings/%';
  $translatables['meetings'] = array(
    t('Master'),
    t('Meetings'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p class="text-warning">No related content</p>'),
    t('term from field_meeting_type'),
    t('term from field_meeting_status'),
    t('Content entity referenced from field_country'),
    t('Title'),
    t('Start date'),
    t('Type'),
    t('Status'),
    t('Country'),
    t('City'),
    t('Published'),
    t('CMS Instrument'),
    t('Meetings listing'),
    t('<br />

<div class="alert">
  <strong>No existing entries for current filtering!</strong>
</div>'),
    t('Publication meetings'),
    t('Content entity referenced from field_meeting_publication'),
    t('All'),
    t('Instrument meetings'),
    t('Content entity referenced from field_instrument'),
    t('Country meetings'),
    t('Project meetings'),
    t('Content entity referenced from field_meeting_project'),
    t('Document meetings'),
    t('Content entity referenced from field_meeting_document'),
    t('Species meetings'),
    t('Content entity referenced from field_meeting_species'),
  );
  $export['meetings'] = $view;

  $view = new view();
  $view->name = 'news_feeds_for_other_instances';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Feeds for other instances';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Feeds for other instances';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'cms_date';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'title_field';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_value'] = 'return cms_api_get_field($row->nid, \'news\', \'title_field\');';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'language';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'body';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return cms_api_get_field($row->nid, \'news\', \'body\');';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'field_instrument';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_value'] = 'return cms_api_get_field_eref($row->nid, \'news\', \'field_instrument\'); ';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'field_country';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_value'] = 'return cms_api_get_field_eref($row->nid, \'news\', \'field_country\');';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_9']['id'] = 'php_9';
  $handler->display->display_options['fields']['php_9']['table'] = 'views';
  $handler->display->display_options['fields']['php_9']['field'] = 'php';
  $handler->display->display_options['fields']['php_9']['label'] = 'field_species';
  $handler->display->display_options['fields']['php_9']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_9']['php_value'] = 'return cms_api_get_field_eref($row->nid, \'news\', \'field_species\'); ';
  $handler->display->display_options['fields']['php_9']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_9']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = 'field_region';
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_value'] = 'return cms_api_get_field_term_ref($row->nid, \'news\', \'field_region\');';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'field_news_type';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_value'] = 'return cms_api_get_field_term_ref($row->nid, \'news\', \'field_news_type\');';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'field_featured_image';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return cms_api_get_field_image($row->nid, \'news\', \'field_featured_image\');
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_14']['id'] = 'php_14';
  $handler->display->display_options['fields']['php_14']['table'] = 'views';
  $handler->display->display_options['fields']['php_14']['field'] = 'php';
  $handler->display->display_options['fields']['php_14']['label'] = 'field_news_attachments';
  $handler->display->display_options['fields']['php_14']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_14']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_14']['php_value'] = 'return cms_api_get_field_file($row->nid, \'news\', \'field_news_attachments\');
';
  $handler->display->display_options['fields']['php_14']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_14']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'field_news_expiration_date';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_value'] = 'return cms_api_get_field($row->nid, \'news\', \'field_news_expiration_date\');';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'field_source_url';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_value'] = 'return cms_api_get_field($row->nid, \'news\', \'field_source_url\');';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_10']['id'] = 'php_10';
  $handler->display->display_options['fields']['php_10']['table'] = 'views';
  $handler->display->display_options['fields']['php_10']['field'] = 'php';
  $handler->display->display_options['fields']['php_10']['label'] = 'field_threats';
  $handler->display->display_options['fields']['php_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_10']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_10']['php_value'] = 'return cms_api_get_field_term_ref($row->nid, \'news\', \'field_threats\');';
  $handler->display->display_options['fields']['php_10']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_10']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_11']['id'] = 'php_11';
  $handler->display->display_options['fields']['php_11']['table'] = 'views';
  $handler->display->display_options['fields']['php_11']['field'] = 'php';
  $handler->display->display_options['fields']['php_11']['label'] = 'field_species_group';
  $handler->display->display_options['fields']['php_11']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_11']['php_value'] = 'return cms_api_get_field_term_ref($row->nid, \'news\', \'field_species_group\');';
  $handler->display->display_options['fields']['php_11']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_11']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_12']['id'] = 'php_12';
  $handler->display->display_options['fields']['php_12']['table'] = 'views';
  $handler->display->display_options['fields']['php_12']['field'] = 'php';
  $handler->display->display_options['fields']['php_12']['label'] = 'field_keywords';
  $handler->display->display_options['fields']['php_12']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_12']['php_value'] = 'return cms_api_get_field($row->nid, \'news\', \'field_keywords\');';
  $handler->display->display_options['fields']['php_12']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_12']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_13']['id'] = 'php_13';
  $handler->display->display_options['fields']['php_13']['table'] = 'views';
  $handler->display->display_options['fields']['php_13']['field'] = 'php';
  $handler->display->display_options['fields']['php_13']['label'] = 'field_news_further_resources';
  $handler->display->display_options['fields']['php_13']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_13']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_13']['php_value'] = 'return cms_api_get_field($row->nid, \'news\', \'field_news_further_resources\');';
  $handler->display->display_options['fields']['php_13']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_13']['php_click_sortable'] = '';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  /* Filter criterion: Content: Featured in (field_featured_in_instances) */
  $handler->display->display_options['filters']['field_featured_in_instances_value']['id'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['table'] = 'field_data_field_featured_in_instances';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['field'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['value'] = array(
    'AEWA' => 'AEWA',
  );
  $handler->display->display_options['filters']['field_featured_in_instances_value']['reduce_duplicates'] = TRUE;

  /* Display: News CMS */
  $handler = $view->new_display('services', 'News CMS', 'services_1');
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  /* Filter criterion: Content: Featured in (field_featured_in_instances) */
  $handler->display->display_options['filters']['field_featured_in_instances_value']['id'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['table'] = 'field_data_field_featured_in_instances';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['field'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['value'] = array(
    'CMS' => 'CMS',
  );
  $handler->display->display_options['filters']['field_featured_in_instances_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'cms-news';

  /* Display: News Ascobans */
  $handler = $view->new_display('services', 'News Ascobans', 'services_2');
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  /* Filter criterion: Content: Featured in (field_featured_in_instances) */
  $handler->display->display_options['filters']['field_featured_in_instances_value']['id'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['table'] = 'field_data_field_featured_in_instances';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['field'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['value'] = array(
    'ASCOBANS' => 'ASCOBANS',
  );
  $handler->display->display_options['filters']['field_featured_in_instances_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'ascobans-news';

  /* Display: News Eurobats */
  $handler = $view->new_display('services', 'News Eurobats', 'services_3');
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>=';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  /* Filter criterion: Content: Featured in (field_featured_in_instances) */
  $handler->display->display_options['filters']['field_featured_in_instances_value']['id'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['table'] = 'field_data_field_featured_in_instances';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['field'] = 'field_featured_in_instances_value';
  $handler->display->display_options['filters']['field_featured_in_instances_value']['value'] = array(
    'EUROBATS' => 'EUROBATS',
  );
  $handler->display->display_options['filters']['field_featured_in_instances_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'eurobats-news';
  $translatables['news_feeds_for_other_instances'] = array(
    t('Master'),
    t('News Feeds for other instances'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('changed'),
    t('uuid'),
    t('nid'),
    t('title'),
    t('title_field'),
    t('language'),
    t('body'),
    t('field_instrument'),
    t('field_country'),
    t('field_species'),
    t('field_region'),
    t('field_news_type'),
    t('field_featured_image'),
    t('field_news_attachments'),
    t('field_news_expiration_date'),
    t('field_source_url'),
    t('field_threats'),
    t('field_species_group'),
    t('field_keywords'),
    t('field_news_further_resources'),
    t('News CMS'),
    t('News Ascobans'),
    t('News Eurobats'),
  );
  $export['news_feeds_for_other_instances'] = $view;

  $view = new view();
  $view->name = 'news_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'last';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '5';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['navigation'] = 'after';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_field' => 'title_field',
  );
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<a href="news"><?php print t(\'More news\'); ?></a>
';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Featured image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'news_slideshow',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['arguments']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['arguments']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_argument_options']['argument'] = '2';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary_options']['items_per_page'] = '25';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['value'] = array(
    1412 => '1412',
    1414 => '1414',
    1415 => '1415',
  );
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  /* Filter criterion: Content: Show in Slideshow (field_in_slideshow) */
  $handler->display->display_options['filters']['field_in_slideshow_value']['id'] = 'field_in_slideshow_value';
  $handler->display->display_options['filters']['field_in_slideshow_value']['table'] = 'field_data_field_in_slideshow';
  $handler->display->display_options['filters']['field_in_slideshow_value']['field'] = 'field_in_slideshow_value';
  $handler->display->display_options['filters']['field_in_slideshow_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['news_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['news_slideshow'] = $view;

  $view = new view();
  $view->name = 'project_admin';
  $view->description = 'Project administration overview';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View projects';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="text-warning">No related content</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_publication_target_id']['id'] = 'field_project_publication_target_id';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['table'] = 'field_data_field_project_publication';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['field'] = 'field_project_publication_target_id';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Activity start date */
  $handler->display->display_options['fields']['field_project_start_date']['id'] = 'field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['field'] = 'field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Activity end date */
  $handler->display->display_options['fields']['field_project_end_date']['id'] = 'field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['table'] = 'field_data_field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['field'] = 'field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Implementing Agency */
  $handler->display->display_options['fields']['field_project_impl_agency']['id'] = 'field_project_impl_agency';
  $handler->display->display_options['fields']['field_project_impl_agency']['table'] = 'field_data_field_project_impl_agency';
  $handler->display->display_options['fields']['field_project_impl_agency']['field'] = 'field_project_impl_agency';
  /* Field: Content: Taxonomic group */
  $handler->display->display_options['fields']['field_project_taxonomic_group']['id'] = 'field_project_taxonomic_group';
  $handler->display->display_options['fields']['field_project_taxonomic_group']['table'] = 'field_data_field_project_taxonomic_group';
  $handler->display->display_options['fields']['field_project_taxonomic_group']['field'] = 'field_project_taxonomic_group';
  $handler->display->display_options['fields']['field_project_taxonomic_group']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_project_taxonomic_group']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Taxonomic group (field_project_taxonomic_group) */
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['id'] = 'field_project_taxonomic_group_tid';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['table'] = 'field_data_field_project_taxonomic_group';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['field'] = 'field_project_taxonomic_group_tid';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['operator_id'] = 'field_project_taxonomic_group_tid_op';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['label'] = 'Taxonomic group';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['operator'] = 'field_project_taxonomic_group_tid_op';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['identifier'] = 'field_project_taxonomic_group_tid';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['vocabulary'] = 'project_taxonomic_group';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['error_message'] = FALSE;

  /* Display: Projects List */
  $handler = $view->new_display('page', 'Projects List', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_start_date' => 'field_project_start_date',
    'field_project_end_date' => 'field_project_end_date',
    'field_instrument' => 'field_instrument',
    'field_project_impl_agency' => 'field_project_impl_agency',
    'field_project_taxonomic_group' => 'field_project_taxonomic_group',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_impl_agency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_taxonomic_group' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Taxonomic group (field_project_taxonomic_group) */
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['id'] = 'field_project_taxonomic_group_tid';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['table'] = 'field_data_field_project_taxonomic_group';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['field'] = 'field_project_taxonomic_group_tid';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['operator_id'] = 'field_project_taxonomic_group_tid_op';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['label'] = 'Taxonomic group';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['operator'] = 'field_project_taxonomic_group_tid_op';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['expose']['identifier'] = 'field_project_taxonomic_group_tid';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['vocabulary'] = 'project_taxonomic_group';
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_project_taxonomic_group_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: CMS Instrument (field_instrument) (entityreference filter) */
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['id'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['field'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator_id'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['identifier'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['reference_display'] = 'available_instruments:entityreference_1';
  $handler->display->display_options['path'] = 'project/listing';

  /* Display: Publication's projects */
  $handler = $view->new_display('page', 'Publication\'s projects', 'publication_projects');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="text-warning">No related projects for this publication</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_publication_target_id']['id'] = 'field_project_publication_target_id';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['table'] = 'field_data_field_project_publication';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['field'] = 'field_project_publication_target_id';
  $handler->display->display_options['relationships']['field_project_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'publication_projects/%';

  /* Display: Instrument's projects */
  $handler = $view->new_display('page', 'Instrument\'s projects', 'instrument_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument projects';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'instrument_projects/%';

  /* Display: Countries's projects */
  $handler = $view->new_display('page', 'Countries\'s projects', 'country_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country projects';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'country_projects';

  /* Display: Plan projects */
  $handler = $view->new_display('page', 'Plan projects', 'document_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\'s Projects';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['id'] = 'reverse_field_document_project_node';
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['field'] = 'reverse_field_document_project_node';
  $handler->display->display_options['relationships']['reverse_field_document_project_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_document_project_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'plan_projects/%';

  /* Display: Species projects */
  $handler = $view->new_display('page', 'Species projects', 'species_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species projects';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_species_target_id']['id'] = 'field_project_species_target_id';
  $handler->display->display_options['relationships']['field_project_species_target_id']['table'] = 'field_data_field_project_species';
  $handler->display->display_options['relationships']['field_project_species_target_id']['field'] = 'field_project_species_target_id';
  $handler->display->display_options['relationships']['field_project_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'species_projects/%';

  /* Display: Meeting's Projects */
  $handler = $view->new_display('page', 'Meeting\'s Projects', 'meeting_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting\'s Projects';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_meeting_project_node']['id'] = 'reverse_field_meeting_project_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_meeting_project_node']['field'] = 'reverse_field_meeting_project_node';
  $handler->display->display_options['relationships']['reverse_field_meeting_project_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_meeting_project_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'meeting_projects/%';
  $translatables['project_admin'] = array(
    t('Master'),
    t('View projects'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p class="text-warning">No related content</p>'),
    t('Content entity referenced from field_project_publication'),
    t('Title'),
    t('Activity start date'),
    t('Activity end date'),
    t('CMS Instrument'),
    t('Implementing Agency'),
    t('Taxonomic group'),
    t('Published'),
    t('All'),
    t('Projects List'),
    t('<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t('Publication\'s projects'),
    t('<p class="text-warning">No related projects for this publication</p>'),
    t('Instrument\'s projects'),
    t('Instrument projects'),
    t('Content entity referenced from field_instrument'),
    t('Countries\'s projects'),
    t('Country projects'),
    t('Content entity referenced from field_country'),
    t('Plan projects'),
    t('Document\'s Projects'),
    t('Content referencing Content from field_document_project'),
    t('Species projects'),
    t('Content entity referenced from field_project_species'),
    t('Meeting\'s Projects'),
    t('Content referencing Content from field_meeting_project'),
  );
  $export['project_admin'] = $view;

  $view = new view();
  $view->name = 'publications_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Type (field_publication_type) */
  $handler->display->display_options['relationships']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['relationships']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['relationships']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_type']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Published Date */
  $handler->display->display_options['sorts']['field_publication_published_date']['id'] = 'field_publication_published_date';
  $handler->display->display_options['sorts']['field_publication_published_date']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['sorts']['field_publication_published_date']['field'] = 'field_publication_published_date';
  $handler->display->display_options['sorts']['field_publication_published_date']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator_id'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['operator'] = 'field_publication_type_tid_op';
  $handler->display->display_options['filters']['field_publication_type_tid']['expose']['identifier'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_types';
  $handler->display->display_options['filters']['field_publication_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_publication_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: CMS Instrument (field_instrument) (entityreference filter) */
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['id'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['field'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator_id'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['identifier'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['reference_display'] = 'available_instruments:entityreference_1';

  /* Display: Publications List */
  $handler = $view->new_display('page', 'Publications List', 'publication_listing');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_publisher' => 'field_publication_publisher',
    'field_instrument' => 'field_instrument',
    'field_publication_type' => 'field_publication_type',
    'field_publication_published_date' => 'field_publication_published_date',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_publisher' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_published_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '<\'row\'<\'span6\'l><\'span6\'f>r>t<\'row\'<\'span6\'i><\'span6\'p>>',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publication_publisher']['id'] = 'field_publication_publisher';
  $handler->display->display_options['fields']['field_publication_publisher']['table'] = 'field_data_field_publication_publisher';
  $handler->display->display_options['fields']['field_publication_publisher']['field'] = 'field_publication_publisher';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_instrument']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_publication_type']['delta_offset'] = '0';
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_publication_published_date']['id'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['field'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['alter']['text'] = '[field_publication_published_date-year]';
  $handler->display->display_options['fields']['field_publication_published_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_publication_published_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'custom',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'none',
        'day' => 'none',
        'hour' => 'none',
        'minute' => 'none',
        'second' => 'none',
        'timezone' => 'none',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $handler->display->display_options['fields']['field_publication_published_date']['group_column'] = 'entity_id';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'publication/listing';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Instrument publications */
  $handler = $view->new_display('page', 'Instrument publications', 'instrument_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument publications';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'instrument_publications/%';

  /* Display: Project publications */
  $handler = $view->new_display('page', 'Project publications', 'project_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project publications';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_project_target_id']['id'] = 'field_publication_project_target_id';
  $handler->display->display_options['relationships']['field_publication_project_target_id']['table'] = 'field_data_field_publication_project';
  $handler->display->display_options['relationships']['field_publication_project_target_id']['field'] = 'field_publication_project_target_id';
  $handler->display->display_options['relationships']['field_publication_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publication_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'project_publications/%';

  /* Display: Meeting publications */
  $handler = $view->new_display('page', 'Meeting publications', 'meeting_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting publications';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['id'] = 'field_publication_meeting_target_id';
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['table'] = 'field_data_field_publication_meeting';
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['field'] = 'field_publication_meeting_target_id';
  $handler->display->display_options['relationships']['field_publication_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publication_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'meeting_publications/%';

  /* Display: Species publications */
  $handler = $view->new_display('page', 'Species publications', 'species_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Species publications';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instrument' => 'field_instrument',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instrument' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_species_target_id']['id'] = 'field_publication_species_target_id';
  $handler->display->display_options['relationships']['field_publication_species_target_id']['table'] = 'field_data_field_publication_species';
  $handler->display->display_options['relationships']['field_publication_species_target_id']['field'] = 'field_publication_species_target_id';
  $handler->display->display_options['relationships']['field_publication_species_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_publication_species_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'species_publications/%';

  /* Display: Document's publications */
  $handler = $view->new_display('page', 'Document\'s publications', 'document_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\'s publications';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['id'] = 'reverse_field_document_publication_node';
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['field'] = 'reverse_field_document_publication_node';
  $handler->display->display_options['relationships']['reverse_field_document_publication_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_document_publication_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'document_publications/%';
  $translatables['publications_admin'] = array(
    t('Master'),
    t('Publications'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_publication_type'),
    t('Title'),
    t('CMS Instrument'),
    t('Type'),
    t('Published'),
    t('Publications List'),
    t('<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t('Publisher'),
    t('Published Date'),
    t('[field_publication_published_date-year]'),
    t('Instrument publications'),
    t('Content entity referenced from field_instrument'),
    t('All'),
    t('Project publications'),
    t('Content entity referenced from field_publication_project'),
    t('Meeting publications'),
    t('Content entity referenced from field_publication_meeting'),
    t('Species publications'),
    t('Content entity referenced from field_publication_species'),
    t('Document\'s publications'),
    t('Content referencing Content from field_document_publication'),
  );
  $export['publications_admin'] = $view;

  $view = new view();
  $view->name = 'published_meetings';
  $view->description = 'List of meetings with status published';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Available Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: CMS Instrument */
  $handler->display->display_options['fields']['field_instrument']['id'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['fields']['field_instrument']['field'] = 'field_instrument';
  $handler->display->display_options['fields']['field_instrument']['label'] = '';
  $handler->display->display_options['fields']['field_instrument']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_instrument']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'meeting' => 'meeting',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['published_meetings'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entity Reference'),
  );
  $export['published_meetings'] = $view;

  $view = new view();
  $view->name = 'quicktab_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontend Quicktab Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Scientific';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_publication_image']['id'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['table'] = 'field_data_field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['field'] = 'field_publication_image';
  $handler->display->display_options['fields']['field_publication_image']['label'] = '';
  $handler->display->display_options['fields']['field_publication_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_publication_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published Date */
  $handler->display->display_options['fields']['field_publication_published_date']['id'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['field'] = 'field_publication_published_date';
  $handler->display->display_options['fields']['field_publication_published_date']['label'] = 'Published';
  $handler->display->display_options['fields']['field_publication_published_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_publication_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_published_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_publication_published_date']['type'] = 'cms_partial_date_tr_formatter';
  $handler->display->display_options['fields']['field_publication_published_date']['settings'] = array(
    'render_tr' => 1,
  );
  /* Sort criterion: Content: Published Date (field_publication_published_date:year) */
  $handler->display->display_options['sorts']['field_publication_published_date_year']['id'] = 'field_publication_published_date_year';
  $handler->display->display_options['sorts']['field_publication_published_date_year']['table'] = 'field_data_field_publication_published_date';
  $handler->display->display_options['sorts']['field_publication_published_date_year']['field'] = 'field_publication_published_date_year';
  $handler->display->display_options['sorts']['field_publication_published_date_year']['order'] = 'DESC';
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
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_tid']['id'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_tid']['field'] = 'field_publication_type_tid';
  $handler->display->display_options['filters']['field_publication_type_tid']['value'] = array(
    0 => '226',
  );
  $handler->display->display_options['filters']['field_publication_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_publication_type_tid']['vocabulary'] = 'publication_types';

  /* Display: MoUs Publications */
  $handler = $view->new_display('page', 'MoUs Publications', 'mous_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<p style="text-align: right"><a href="/publications/scientific-publications"><?php echo t("View more"); ?></a></p>
';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: CMS Instrument (field_instrument) */
  $handler->display->display_options['arguments']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['arguments']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['field_instrument_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_instrument_target_id']['summary_options']['items_per_page'] = '25';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'publications/%';
  $translatables['quicktab_publications'] = array(
    t('Master'),
    t('Scientific'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Published'),
    t('MoUs Publications'),
    t('Publications'),
    t('All'),
  );
  $export['quicktab_publications'] = $view;

  $view = new view();
  $view->name = 'related_national_reports_country';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related National reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related National reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Submitted by (field_document_submitted_by) */
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['id'] = 'field_document_submitted_by_tid';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['table'] = 'field_data_field_document_submitted_by';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['field'] = 'field_document_submitted_by_tid';
  $handler->display->display_options['relationships']['field_document_submitted_by_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  /* Sort criterion: Content: Number (field_document_number) */
  $handler->display->display_options['sorts']['field_document_number_value']['id'] = 'field_document_number_value';
  $handler->display->display_options['sorts']['field_document_number_value']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['sorts']['field_document_number_value']['field'] = 'field_document_number_value';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'related-national-reports/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['related_national_reports_country'] = array(
    t('Master'),
    t('Related National reports'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_document_submitted_by'),
    t('Title'),
    t('Number'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['related_national_reports_country'] = $view;

  $view = new view();
  $view->name = 'species_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Species Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Species';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_value']['id'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['relationships']['field_species_instruments_value']['field'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['delta'] = '-1';
  /* Relationship: Content: Class (field_species_class) */
  $handler->display->display_options['relationships']['field_species_class_tid']['id'] = 'field_species_class_tid';
  $handler->display->display_options['relationships']['field_species_class_tid']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['relationships']['field_species_class_tid']['field'] = 'field_species_class_tid';
  /* Relationship: Content: Order (field_species_order) */
  $handler->display->display_options['relationships']['field_species_order_tid']['id'] = 'field_species_order_tid';
  $handler->display->display_options['relationships']['field_species_order_tid']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['relationships']['field_species_order_tid']['field'] = 'field_species_order_tid';
  /* Relationship: Content: Family (field_species_family) */
  $handler->display->display_options['relationships']['field_species_family_tid']['id'] = 'field_species_family_tid';
  $handler->display->display_options['relationships']['field_species_family_tid']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['relationships']['field_species_family_tid']['field'] = 'field_species_family_tid';
  /* Relationship: Field collection item: Entity with the CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_node']['id'] = 'field_species_instruments_node';
  $handler->display->display_options['relationships']['field_species_instruments_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_species_instruments_node']['field'] = 'field_species_instruments_node';
  $handler->display->display_options['relationships']['field_species_instruments_node']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_node']['label'] = 'species_instrument';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class']['id'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_species_order']['id'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['fields']['field_species_order']['field'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_order']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_species_family']['id'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['fields']['field_species_family']['field'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_family']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Class';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'species_class';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Order';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'species_order';
  $handler->display->display_options['filters']['tid_1']['error_message'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['group'] = 1;
  $handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'species_family';
  $handler->display->display_options['filters']['tid_2']['error_message'] = FALSE;

  /* Display: Species listing */
  $handler = $view->new_display('page', 'Species listing', 'species_listing');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '518400';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'species' => 'species',
      'legal_instrument' => 0,
      'country' => 0,
      'document' => 0,
      'event_calendar' => 0,
      'meeting' => 0,
      'project' => 0,
      'publication' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class' => 'field_species_class',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_instruments' => 'field_species_instruments',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_class_1' => 'field_species_class_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Scientific name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: English */
  $handler->display->display_options['fields']['field_species_name_en']['id'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['table'] = 'field_data_field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['field'] = 'field_species_name_en';
  $handler->display->display_options['fields']['field_species_name_en']['label'] = 'Common name';
  $handler->display->display_options['fields']['field_species_name_en']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_species_name_en']['settings'] = array(
    'render_tr' => 1,
    'render_link' => '0',
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class']['id'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_class']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Order */
  $handler->display->display_options['fields']['field_species_order']['id'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['table'] = 'field_data_field_species_order';
  $handler->display->display_options['fields']['field_species_order']['field'] = 'field_species_order';
  $handler->display->display_options['fields']['field_species_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_order']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_species_family']['id'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['table'] = 'field_data_field_species_family';
  $handler->display->display_options['fields']['field_species_family']['field'] = 'field_species_family';
  $handler->display->display_options['fields']['field_species_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_family']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CMS Instruments */
  $handler->display->display_options['fields']['field_species_instruments']['id'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['field'] = 'field_species_instruments';
  $handler->display->display_options['fields']['field_species_instruments']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_species_instruments']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_species_instruments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_species_instruments']['separator'] = '';
  /* Field: Content: Date of entry in Appendix I */
  $handler->display->display_options['fields']['field_species_appendix_1_date']['id'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['table'] = 'field_data_field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['field'] = 'field_species_appendix_1_date';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['label'] = '';
  $handler->display->display_options['fields']['field_species_appendix_1_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_1_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_appendix_1_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date of entry in Appendix II */
  $handler->display->display_options['fields']['field_species_appendix_2_date']['id'] = 'field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['table'] = 'field_data_field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['field'] = 'field_species_appendix_2_date';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['label'] = '';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['alter']['text'] = ' / [field_species_appendix_2_date]';
  $handler->display->display_options['fields']['field_species_appendix_2_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_appendix_2_date']['settings'] = array(
    'format_type' => 'year_date_type',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_species_class_1']['id'] = 'field_species_class_1';
  $handler->display->display_options['fields']['field_species_class_1']['table'] = 'field_data_field_species_class';
  $handler->display->display_options['fields']['field_species_class_1']['field'] = 'field_species_class';
  $handler->display->display_options['fields']['field_species_class_1']['label'] = 'Appendix (App. I / App. II)';
  $handler->display->display_options['fields']['field_species_class_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_species_class_1']['alter']['text'] = '[field_species_appendix_1_date][field_species_appendix_2_date]';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Class';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'species_class';
  $handler->display->display_options['filters']['tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Order';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'species_order';
  $handler->display->display_options['filters']['tid_1']['error_message'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['group'] = 1;
  $handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'species_family';
  $handler->display->display_options['filters']['tid_2']['error_message'] = FALSE;
  /* Filter criterion: Field: CMS Instrument (field_instrument) (entityreference filter) */
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['id'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['field'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator_id'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['identifier'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['reference_display'] = 'available_instruments:entityreference_1';
  $handler->display->display_options['path'] = 'species/listing';
  $handler->display->display_options['menu']['title'] = 'Scientific name';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Publication's species */
  $handler = $view->new_display('page', 'Publication\'s species', 'publication_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publication species';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_publication_target_id']['id'] = 'field_species_publication_target_id';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['table'] = 'field_data_field_species_publication';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['field'] = 'field_species_publication_target_id';
  $handler->display->display_options['relationships']['field_species_publication_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_publication_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'publication_species/%';

  /* Display: Instrument species */
  $handler = $view->new_display('page', 'Instrument species', 'instrument_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Instrument species';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: CMS Instruments (field_species_instruments) */
  $handler->display->display_options['relationships']['field_species_instruments_value']['id'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['table'] = 'field_data_field_species_instruments';
  $handler->display->display_options['relationships']['field_species_instruments_value']['field'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_species_instruments_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_species_instruments_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_instrument_target_id']['id'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['relationships']['field_instrument_target_id']['field'] = 'field_instrument_target_id';
  $handler->display->display_options['relationships']['field_instrument_target_id']['relationship'] = 'field_species_instruments_value';
  $handler->display->display_options['relationships']['field_instrument_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_instrument_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'instrument_species/%';

  /* Display: Country species */
  $handler = $view->new_display('page', 'Country species', 'country_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country species';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_class' => 'field_species_class',
    'field_species_order' => 'field_species_order',
    'field_species_family' => 'field_species_family',
    'field_species_instruments' => 'field_species_instruments',
    'field_species_appendix_1_date' => 'field_species_appendix_1_date',
    'field_species_appendix_2_date' => 'field_species_appendix_2_date',
    'field_species_appendix_1_date_1' => 'field_species_appendix_1_date_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_family' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_2_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_appendix_1_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Range states (field_species_range_states) */
  $handler->display->display_options['relationships']['field_species_range_states_value']['id'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_states_value']['table'] = 'field_data_field_species_range_states';
  $handler->display->display_options['relationships']['field_species_range_states_value']['field'] = 'field_species_range_states_value';
  $handler->display->display_options['relationships']['field_species_range_states_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_species_range_states_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_range_state_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'country_species/%';

  /* Display: Project species */
  $handler = $view->new_display('page', 'Project species', 'project_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project species';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_project_target_id']['id'] = 'field_species_project_target_id';
  $handler->display->display_options['relationships']['field_species_project_target_id']['table'] = 'field_data_field_species_project';
  $handler->display->display_options['relationships']['field_species_project_target_id']['field'] = 'field_species_project_target_id';
  $handler->display->display_options['relationships']['field_species_project_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'project_species/%';

  /* Display: Meetings species */
  $handler = $view->new_display('page', 'Meetings species', 'meeting_species');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meetings species';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_species_name_en' => 'field_species_name_en',
    'field_species_instruments' => 'field_species_instruments',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_name_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_instruments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['id'] = 'field_species_meeting_target_id';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['table'] = 'field_data_field_species_meeting';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['field'] = 'field_species_meeting_target_id';
  $handler->display->display_options['relationships']['field_species_meeting_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_species_meeting_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'meeting_species/%';

  /* Display: Document's species */
  $handler = $view->new_display('page', 'Document\'s species', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document\'s species';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['id'] = 'reverse_field_document_species_node';
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['field'] = 'reverse_field_document_species_node';
  $handler->display->display_options['relationships']['reverse_field_document_species_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_document_species_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'species' => 'species',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'meeting_species/%';
  $translatables['species_admin'] = array(
    t('Master'),
    t('Species'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field collection item from field_species_instruments'),
    t('term from field_species_class'),
    t('term from field_species_order'),
    t('term from field_species_family'),
    t('species_instrument'),
    t('Scientific name'),
    t('Common name'),
    t('Class'),
    t('Order'),
    t('Family'),
    t('CMS Instruments'),
    t('Published'),
    t('Species listing'),
    t('<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t(' / [field_species_appendix_2_date]'),
    t('Appendix (App. I / App. II)'),
    t('[field_species_appendix_1_date][field_species_appendix_2_date]'),
    t('CMS Instrument'),
    t('Publication\'s species'),
    t('Publication species'),
    t('Content entity referenced from field_species_publication'),
    t('All'),
    t('Instrument species'),
    t('Content entity referenced from field_instrument'),
    t('Country species'),
    t('field collection item from field_species_range_states'),
    t('Project species'),
    t('Content entity referenced from field_species_project'),
    t('Meetings species'),
    t('Content entity referenced from field_species_meeting'),
    t('Document\'s species'),
    t('Content referencing Content from field_document_species'),
  );
  $export['species_admin'] = $view;

  $view = new view();
  $view->name = 'view_countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View all countries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_country_official_name' => 'field_country_official_name',
    'field_region' => 'field_region',
    'field_country_entry_into_force' => 'field_country_entry_into_force',
    'field_country_party_number' => 'field_country_party_number',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_official_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_entry_into_force' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_party_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'enable_tabletools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 1,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 0,
    'server_side' => 0,
    'items_per_page_options' => '10, 25, 50, All',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Ratification status (field_country_instrument_status) */
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['id'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['table'] = 'field_data_field_country_instrument_status';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['field'] = 'field_country_instrument_status_value';
  $handler->display->display_options['relationships']['field_country_instrument_status_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_country_official_name']['id'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['table'] = 'field_data_field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['field'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_country_official_name']['hide_alter_empty'] = FALSE;
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Entry into force */
  $handler->display->display_options['fields']['field_country_entry_into_force']['id'] = 'field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['table'] = 'field_data_field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['field'] = 'field_country_entry_into_force';
  $handler->display->display_options['fields']['field_country_entry_into_force']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Party number */
  $handler->display->display_options['fields']['field_country_party_number']['id'] = 'field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['table'] = 'field_data_field_country_party_number';
  $handler->display->display_options['fields']['field_country_party_number']['field'] = 'field_country_party_number';
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
    'country' => 'country',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Status (field_country_status) */
  $handler->display->display_options['filters']['field_country_status_tid']['id'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['table'] = 'field_data_field_country_status';
  $handler->display->display_options['filters']['field_country_status_tid']['field'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_country_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator_id'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['operator'] = 'field_country_status_tid_op';
  $handler->display->display_options['filters']['field_country_status_tid']['expose']['identifier'] = 'field_country_status_tid';
  $handler->display->display_options['filters']['field_country_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_country_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_status_tid']['vocabulary'] = 'party_status';
  $handler->display->display_options['filters']['field_country_status_tid']['error_message'] = FALSE;
  /* Filter criterion: Field: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  /* Filter criterion: Field: CMS Instrument (field_instrument) (entityreference filter) */
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['id'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['table'] = 'field_data_field_instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['field'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['relationship'] = 'field_country_instrument_status_value';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator_id'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['operator'] = 'field_instrument_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['identifier'] = 'field_instrument_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_instrument_target_id_entityreference_filter']['reference_display'] = 'available_instruments:entityreference_1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'country/listing';
  $translatables['view_countries'] = array(
    t('Master'),
    t('View all countries'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<br />
<div class="alert">
  <strong>There are no entries matching the selected criteria!</strong>
</div>'),
    t('field collection item from field_country_instrument_status'),
    t('Title'),
    t('Official name'),
    t('Region'),
    t('Entry into force'),
    t('Party number'),
    t('Status'),
    t('CMS Instrument'),
    t('Page'),
  );
  $export['view_countries'] = $view;

  $view = new view();
  $view->name = 'working_group_documents_reorder';
  $view->description = 'Pages for reordering documents for some content types';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Working Group Documents Reorder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Working Group - Documents Reorder';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'update working_group content on assigned domains';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_number' => 'field_document_number',
    'title' => 'title',
    'nid' => 'nid',
    'field_document_publish_date' => 'field_document_publish_date',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_wg_document_node']['id'] = 'reverse_field_wg_document_node';
  $handler->display->display_options['relationships']['reverse_field_wg_document_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_wg_document_node']['field'] = 'reverse_field_wg_document_node';
  $handler->display->display_options['relationships']['reverse_field_wg_document_node']['required'] = TRUE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'meeting_documents_list_reorder:m_d_reorder';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_wg_document_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Reordering Documents for %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'document' => 'document',
  );

  /* Display: WG - Doc Reorder */
  $handler = $view->new_display('page', 'WG - Doc Reorder', 'wg_doc_reorder');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'convention_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['path'] = 'node/%/wg-documents-reorder';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Documents Reorder';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Front-end List */
  $handler = $view->new_display('page', 'Front-end List', 'fe_list');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['path'] = 'fe_wg_doc_list';
  $translatables['working_group_documents_reorder'] = array(
    t('Master'),
    t('Working Group - Documents Reorder'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content referencing Content from field_wg_document'),
    t('Number'),
    t('Title'),
    t('Nid'),
    t('Publish date'),
    t('All'),
    t('Reordering Documents for %1'),
    t('WG - Doc Reorder'),
    t('Content'),
    t('Front-end List'),
  );
  $export['working_group_documents_reorder'] = $view;

  $view = new view();
  $view->name = 'working_group_members';
  $view->description = 'Format the display for Working group membership';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Working Group Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_wg_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'nothing_2' => 'nothing_2',
    'field_wg_category' => 'field_wg_category',
    'field_region' => 'field_region',
    'field_country' => 'field_country',
    'field_wg_member_person' => 'field_wg_member_person',
    'field_wg_member_role' => 'field_wg_member_role',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_wg_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_wg_member_person' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_wg_member_role' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'Members';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Category */
  $handler->display->display_options['fields']['field_wg_category']['id'] = 'field_wg_category';
  $handler->display->display_options['fields']['field_wg_category']['table'] = 'field_data_field_wg_category';
  $handler->display->display_options['fields']['field_wg_category']['field'] = 'field_wg_category';
  $handler->display->display_options['fields']['field_wg_category']['label'] = '';
  $handler->display->display_options['fields']['field_wg_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_wg_category']['element_label_colon'] = FALSE;
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_wg_member_person']['id'] = 'field_wg_member_person';
  $handler->display->display_options['fields']['field_wg_member_person']['table'] = 'field_data_field_wg_member_person';
  $handler->display->display_options['fields']['field_wg_member_person']['field'] = 'field_wg_member_person';
  /* Field: Field collection item: Role */
  $handler->display->display_options['fields']['field_wg_member_role']['id'] = 'field_wg_member_role';
  $handler->display->display_options['fields']['field_wg_member_role']['table'] = 'field_data_field_wg_member_role';
  $handler->display->display_options['fields']['field_wg_member_role']['field'] = 'field_wg_member_role';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $translatables['working_group_members'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Field collection item ID'),
    t('.'),
    t('Region'),
    t('Country'),
    t('Name'),
    t('Role'),
    t('All'),
  );
  $export['working_group_members'] = $view;

  return $export;
}
