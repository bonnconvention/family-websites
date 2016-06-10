<?php
/**
 * @file
 * cms_document.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_document_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|document|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'document';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'documents';
  $ds_layout->settings = array(
    'regions' => array(
      'region_1_1_1' => array(
        0 => 'title_field',
        1 => 'field_is_private',
        2 => 'language',
        3 => 'field_document_number',
        4 => 'field_instrument',
        5 => 'field_document_submitted_by',
        6 => 'field_country',
        7 => 'body',
      ),
      'region_1_1_2' => array(
        8 => 'field_document_type',
        9 => 'field_document_status',
        10 => 'field_document_publish_date',
        11 => 'field_cms_tags',
      ),
      'files' => array(
        12 => 'field_document_files',
        13 => 'field_document_private_files',
      ),
      'related_content_1_1' => array(
        14 => 'field_document_species',
        15 => 'field_document_meeting',
        16 => 'field_document_project',
      ),
      'related_content_1_2' => array(
        17 => 'field_threats',
        18 => 'field_document_publication',
      ),
      'hidden' => array(
        19 => 'domain',
        20 => 'domain_path',
        21 => 'path',
        22 => 'redirect',
        23 => 'metatags',
        24 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'region_1_1_1',
      'field_is_private' => 'region_1_1_1',
      'language' => 'region_1_1_1',
      'field_document_number' => 'region_1_1_1',
      'field_instrument' => 'region_1_1_1',
      'field_document_submitted_by' => 'region_1_1_1',
      'field_country' => 'region_1_1_1',
      'body' => 'region_1_1_1',
      'field_document_type' => 'region_1_1_2',
      'field_document_status' => 'region_1_1_2',
      'field_document_publish_date' => 'region_1_1_2',
      'field_cms_tags' => 'region_1_1_2',
      'field_document_files' => 'files',
      'field_document_private_files' => 'files',
      'field_document_species' => 'related_content_1_1',
      'field_document_meeting' => 'related_content_1_1',
      'field_document_project' => 'related_content_1_1',
      'field_threats' => 'related_content_1_2',
      'field_document_publication' => 'related_content_1_2',
      'domain' => 'hidden',
      'domain_path' => 'hidden',
      'path' => 'hidden',
      'redirect' => 'hidden',
      'metatags' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'region_1_1_1' => 'div',
      'region_1_1_2' => 'div',
      'files' => 'div',
      'related_content_1_1' => 'div',
      'related_content_1_2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|document|form'] = $ds_layout;

  return $export;
}
