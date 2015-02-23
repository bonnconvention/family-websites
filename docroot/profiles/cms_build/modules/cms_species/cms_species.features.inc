<?php
/**
 * @file
 * cms_species.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_species_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cms_species_image_default_styles() {
  $styles = array();

  // Exported image style: species_block.
  $styles['species_block'] = array(
    'name' => 'species_block',
    'label' => 'Species Block',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 225,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cms_species_node_info() {
  $items = array(
    'species' => array(
      'name' => t('Species'),
      'base' => 'node_content',
      'description' => t('Used to store information about Convention\'s species and their relation with other entities'),
      'has_title' => '1',
      'title_label' => t('Scientific name'),
      'help' => '',
    ),
  );
  return $items;
}
