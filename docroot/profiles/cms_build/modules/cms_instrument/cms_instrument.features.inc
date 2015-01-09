<?php
/**
 * @file
 * cms_instrument.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_instrument_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_instrument_node_info() {
  $items = array(
    'legal_instrument' => array(
      'name' => t('CMS Instrument'),
      'base' => 'node_content',
      'description' => t('CMS Instrument content type'),
      'has_title' => '1',
      'title_label' => t('Instrument Title (Abbreviation)'),
      'help' => '',
    ),
  );
  return $items;
}
