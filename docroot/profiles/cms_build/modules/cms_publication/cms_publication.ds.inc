<?php
/**
 * @file
 * cms_publication.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_publication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'publications';
  $ds_layout->settings = array(
    'regions' => array(
      'bibliographic_information_1_1' => array(
        0 => 'title',
      ),
      'bibliographic_information_1_2' => array(
        1 => 'field_publication_language',
      ),
      'bibliographic_information_2_1' => array(
        2 => 'body',
      ),
      'bibliographic_information_3_1' => array(
        3 => 'field_publication_author',
        4 => 'field_publication_co_authors',
      ),
      'bibliographic_information_3_2' => array(
        5 => 'field_publication_edition',
        6 => 'field_publication_publisher',
      ),
      'files' => array(
        7 => 'field_publication_attachment',
        8 => 'field_publication_image',
      ),
      'details_1_1' => array(
        9 => 'field_publication_published_date',
        10 => 'field_publication_city',
        11 => 'field_country',
      ),
      'details_1_2' => array(
        12 => 'field_publication_type',
        13 => 'field_instrument',
        14 => 'field_publication_source',
      ),
      'details_1_3' => array(
        15 => 'field_publication_order_code',
      ),
      'related_content_1_1' => array(
        16 => 'field_publication_species',
        17 => 'field_threats',
        18 => 'field_publication_meeting',
        19 => 'field_publication_project',
      ),
      'related_content_1_2' => array(
        20 => 'field_publication_plans',
        21 => 'field_publication_nat_report',
        22 => 'field_region',
      ),
      'hidden' => array(
        23 => 'domain_path',
        24 => 'domain',
        25 => 'path',
        26 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'bibliographic_information_1_1',
      'field_publication_language' => 'bibliographic_information_1_2',
      'body' => 'bibliographic_information_2_1',
      'field_publication_author' => 'bibliographic_information_3_1',
      'field_publication_co_authors' => 'bibliographic_information_3_1',
      'field_publication_edition' => 'bibliographic_information_3_2',
      'field_publication_publisher' => 'bibliographic_information_3_2',
      'field_publication_attachment' => 'files',
      'field_publication_image' => 'files',
      'field_publication_published_date' => 'details_1_1',
      'field_publication_city' => 'details_1_1',
      'field_country' => 'details_1_1',
      'field_publication_type' => 'details_1_2',
      'field_instrument' => 'details_1_2',
      'field_publication_source' => 'details_1_2',
      'field_publication_order_code' => 'details_1_3',
      'field_publication_species' => 'related_content_1_1',
      'field_threats' => 'related_content_1_1',
      'field_publication_meeting' => 'related_content_1_1',
      'field_publication_project' => 'related_content_1_1',
      'field_publication_plans' => 'related_content_1_2',
      'field_publication_nat_report' => 'related_content_1_2',
      'field_region' => 'related_content_1_2',
      'domain_path' => 'hidden',
      'domain' => 'hidden',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'bibliographic_information_1_1' => 'div',
      'bibliographic_information_1_2' => 'div',
      'bibliographic_information_2_1' => 'div',
      'bibliographic_information_3_1' => 'div',
      'bibliographic_information_3_2' => 'div',
      'files' => 'div',
      'details_1_1' => 'div',
      'details_1_2' => 'div',
      'details_1_3' => 'div',
      'related_content_1_1' => 'div',
      'related_content_1_2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|publication|form'] = $ds_layout;

  return $export;
}
