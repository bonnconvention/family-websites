<?php
/**
 * @file
 * cms_odata.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cms_odata_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'odata_focal_points_api';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'odata_focal_point';
  $view->human_name = 'OData focal points API';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OData focal points API';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Focal point (OData): Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Focal point (OData): First_name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = 'first_name';
  /* Field: Focal point (OData): Last_name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['label'] = 'last_name';
  /* Field: Focal point (OData): Position */
  $handler->display->display_options['fields']['position']['id'] = 'position';
  $handler->display->display_options['fields']['position']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['position']['field'] = 'position';
  $handler->display->display_options['fields']['position']['label'] = 'position';
  /* Field: Focal point (OData): Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = 'address';
  /* Field: Focal point (OData): Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = 'country';
  /* Field: Focal point (OData): Country_iso2 */
  $handler->display->display_options['fields']['country_iso2']['id'] = 'country_iso2';
  $handler->display->display_options['fields']['country_iso2']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country_iso2']['field'] = 'country_iso2';
  $handler->display->display_options['fields']['country_iso2']['label'] = 'country_iso2';
  /* Field: Focal point (OData): Organization */
  $handler->display->display_options['fields']['organization']['id'] = 'organization';
  $handler->display->display_options['fields']['organization']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['organization']['field'] = 'organization';
  $handler->display->display_options['fields']['organization']['label'] = 'organization';
  /* Field: Focal point (OData): Country_post */
  $handler->display->display_options['fields']['country_post']['id'] = 'country_post';
  $handler->display->display_options['fields']['country_post']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country_post']['field'] = 'country_post';
  $handler->display->display_options['fields']['country_post']['label'] = 'country_post';
  /* Field: Focal point (OData): Country_post_iso2 */
  $handler->display->display_options['fields']['country_post_iso2']['id'] = 'country_post_iso2';
  $handler->display->display_options['fields']['country_post_iso2']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country_post_iso2']['field'] = 'country_post_iso2';
  $handler->display->display_options['fields']['country_post_iso2']['label'] = 'country_post_iso2';
  /* Field: Focal point (OData): Work_email */
  $handler->display->display_options['fields']['work_email']['id'] = 'work_email';
  $handler->display->display_options['fields']['work_email']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['work_email']['field'] = 'work_email';
  $handler->display->display_options['fields']['work_email']['label'] = 'work_email';
  /* Field: Focal point (OData): Telephone */
  $handler->display->display_options['fields']['telephone']['id'] = 'telephone';
  $handler->display->display_options['fields']['telephone']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['telephone']['field'] = 'telephone';
  $handler->display->display_options['fields']['telephone']['label'] = 'telephone';
  /* Field: Focal point (OData): Fax */
  $handler->display->display_options['fields']['fax']['id'] = 'fax';
  $handler->display->display_options['fields']['fax']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['fax']['field'] = 'fax';
  $handler->display->display_options['fields']['fax']['label'] = 'fax';
  /* Field: Focal point (OData): Instruments */
  $handler->display->display_options['fields']['instruments']['id'] = 'instruments';
  $handler->display->display_options['fields']['instruments']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['instruments']['field'] = 'instruments';
  $handler->display->display_options['fields']['instruments']['label'] = 'instruments';
  /* Field: Focal point (OData): Status_person */
  $handler->display->display_options['fields']['status_person']['id'] = 'status_person';
  $handler->display->display_options['fields']['status_person']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['status_person']['field'] = 'status_person';
  $handler->display->display_options['fields']['status_person']['label'] = 'status_person';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'focal-point-api';

  /* Display: NFP */
  $handler = $view->new_display('block', 'NFP', 'block_cms');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The list of national focal points';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time_per_domain';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'position' => 'position',
    'address' => 'address',
    'country' => 'country',
    'country_iso2' => 'country_iso2',
    'organization' => 'organization',
    'country_post' => 'country_post',
    'country_post_iso2' => 'country_post_iso2',
    'work_email' => 'work_email',
    'telephone' => 'telephone',
    'fax' => 'fax',
    'instruments' => 'instruments',
    'status_person' => 'status_person',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country_iso2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'organization' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country_post' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country_post_iso2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'work_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'instruments' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_person' => array(
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
  /* Field: Focal point (OData): Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Focal point (OData): Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Focal point (OData): First_name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = 'First name';
  $handler->display->display_options['fields']['first_name']['exclude'] = TRUE;
  /* Field: Focal point (OData): Last_name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['last_name']['alter']['text'] = '[first_name] [last_name]';
  /* Field: Focal point (OData): Position */
  $handler->display->display_options['fields']['position']['id'] = 'position';
  $handler->display->display_options['fields']['position']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['position']['field'] = 'position';
  $handler->display->display_options['fields']['position']['label'] = 'position';
  $handler->display->display_options['fields']['position']['exclude'] = TRUE;
  /* Field: Focal point (OData): Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  /* Field: Focal point (OData): Country_iso2 */
  $handler->display->display_options['fields']['country_iso2']['id'] = 'country_iso2';
  $handler->display->display_options['fields']['country_iso2']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country_iso2']['field'] = 'country_iso2';
  $handler->display->display_options['fields']['country_iso2']['label'] = 'country_iso2';
  $handler->display->display_options['fields']['country_iso2']['exclude'] = TRUE;
  /* Field: Focal point (OData): Organization */
  $handler->display->display_options['fields']['organization']['id'] = 'organization';
  $handler->display->display_options['fields']['organization']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['organization']['field'] = 'organization';
  $handler->display->display_options['fields']['organization']['label'] = 'Position / Organization';
  $handler->display->display_options['fields']['organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['organization']['alter']['text'] = '[position]
<br>
[organization]';
  /* Field: Focal point (OData): Country_post_iso2 */
  $handler->display->display_options['fields']['country_post_iso2']['id'] = 'country_post_iso2';
  $handler->display->display_options['fields']['country_post_iso2']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['country_post_iso2']['field'] = 'country_post_iso2';
  $handler->display->display_options['fields']['country_post_iso2']['label'] = 'country_post_iso2';
  $handler->display->display_options['fields']['country_post_iso2']['exclude'] = TRUE;
  /* Field: Focal point (OData): Work_email */
  $handler->display->display_options['fields']['work_email']['id'] = 'work_email';
  $handler->display->display_options['fields']['work_email']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['work_email']['field'] = 'work_email';
  $handler->display->display_options['fields']['work_email']['label'] = 'Email';
  /* Field: Focal point (OData): Telephone */
  $handler->display->display_options['fields']['telephone']['id'] = 'telephone';
  $handler->display->display_options['fields']['telephone']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['telephone']['field'] = 'telephone';
  /* Field: Focal point (OData): Fax */
  $handler->display->display_options['fields']['fax']['id'] = 'fax';
  $handler->display->display_options['fields']['fax']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['fax']['field'] = 'fax';
  $handler->display->display_options['fields']['fax']['label'] = 'fax';
  $handler->display->display_options['fields']['fax']['exclude'] = TRUE;
  /* Field: Focal point (OData): Instruments */
  $handler->display->display_options['fields']['instruments']['id'] = 'instruments';
  $handler->display->display_options['fields']['instruments']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['instruments']['field'] = 'instruments';
  $handler->display->display_options['fields']['instruments']['label'] = 'instruments';
  $handler->display->display_options['fields']['instruments']['exclude'] = TRUE;
  /* Field: Focal point (OData): Status_person */
  $handler->display->display_options['fields']['status_person']['id'] = 'status_person';
  $handler->display->display_options['fields']['status_person']['table'] = 'odata_focal_point';
  $handler->display->display_options['fields']['status_person']['field'] = 'status_person';
  $handler->display->display_options['fields']['status_person']['label'] = 'status_person';
  $handler->display->display_options['fields']['status_person']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Focal point (OData): Country */
  $handler->display->display_options['sorts']['country']['id'] = 'country';
  $handler->display->display_options['sorts']['country']['table'] = 'odata_focal_point';
  $handler->display->display_options['sorts']['country']['field'] = 'country';
  $translatables['odata_focal_points_api'] = array(
    t('Master'),
    t('OData focal points API'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('first_name'),
    t('last_name'),
    t('position'),
    t('address'),
    t('country'),
    t('country_iso2'),
    t('organization'),
    t('country_post'),
    t('country_post_iso2'),
    t('work_email'),
    t('telephone'),
    t('fax'),
    t('instruments'),
    t('status_person'),
    t('Services'),
    t('NFP'),
    t('The list of national focal points'),
    t('Country'),
    t('First name'),
    t('Name'),
    t('[first_name] [last_name]'),
    t('Address'),
    t('Position / Organization'),
    t('[position]
<br>
[organization]'),
    t('Email'),
    t('Telephone'),
  );
  $export['odata_focal_points_api'] = $view;

  return $export;
}
