<?php
/**
 * @file
 * cms_meeting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_meeting_ctools_plugin_api($module = NULL, $api = NULL) {
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
function cms_meeting_node_info() {
  $items = array(
    'meeting' => array(
      'name' => t('Meeting'),
      'base' => 'node_content',
      'description' => t('Convention related events such as COP meetings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
