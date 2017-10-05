<?php
/**
 * @file
 * cms_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cms_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cms_views_image_default_styles() {
  $styles = array();

  // Exported image style: newsroom_featured_image.
  $styles['newsroom_featured_image'] = array(
    'label' => 'Newsroom featured image',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 850,
          'height' => 442,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
