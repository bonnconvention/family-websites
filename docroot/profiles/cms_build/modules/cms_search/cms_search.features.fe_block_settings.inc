<?php
/**
 * @file
 * cms_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cms_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search',
    'roles' => array(),
    'themes' => array(
      'cms_frontend' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'cms_frontend',
        'weight' => -59,
      ),
      'cms_manage' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_manage',
        'weight' => -57,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by type of content',
    'visibility' => 1,
  );

  $export['facetapi-IDwUpKCI2MmouJ0VQc7V0ZY3gbjUv0JI'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'IDwUpKCI2MmouJ0VQc7V0ZY3gbjUv0JI',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search',
    'roles' => array(),
    'themes' => array(
      'cms_frontend' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'cms_frontend',
        'weight' => -57,
      ),
      'cms_manage' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_manage',
        'weight' => -55,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by country',
    'visibility' => 1,
  );

  $export['facetapi-Xk1lvI4dnxk8onsFOHOMPAiPFcGgHF6z'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Xk1lvI4dnxk8onsFOHOMPAiPFcGgHF6z',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search',
    'roles' => array(),
    'themes' => array(
      'cms_frontend' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'cms_frontend',
        'weight' => -58,
      ),
      'cms_manage' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_manage',
        'weight' => -56,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by instrument',
    'visibility' => 1,
  );

  $export['facetapi-sRWK0VvA8eMD1RfsCYLZBGNP6Trx5iys'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'sRWK0VvA8eMD1RfsCYLZBGNP6Trx5iys',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cms_frontend' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'cms_frontend',
        'weight' => -56,
      ),
      'cms_manage' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_manage',
        'weight' => -54,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by geographical region',
    'visibility' => 0,
  );

  return $export;
}
