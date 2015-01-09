<?php
/**
 * @file
 * cms_award.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_award_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_award_node_info() {
  $items = array(
    'award' => array(
      'name' => t('Award'),
      'base' => 'node_content',
      'description' => t('Awards content type for CMS'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
