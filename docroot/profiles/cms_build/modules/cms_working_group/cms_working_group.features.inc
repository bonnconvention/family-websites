<?php
/**
 * @file
 * cms_working_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_working_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_working_group_node_info() {
  $items = array(
    'working_group' => array(
      'name' => t('Working group'),
      'base' => 'node_content',
      'description' => t('Define a new working group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
