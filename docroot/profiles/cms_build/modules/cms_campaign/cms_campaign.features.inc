<?php
/**
 * @file
 * cms_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_campaign_node_info() {
  $items = array(
    'campaign' => array(
      'name' => t('Campaign'),
      'base' => 'node_content',
      'description' => t('CMS Campaign content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
