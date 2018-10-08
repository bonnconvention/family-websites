<?php
/**
 * @file
 * cms_varnish.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_varnish_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
