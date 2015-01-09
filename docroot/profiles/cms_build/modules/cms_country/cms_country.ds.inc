<?php
/**
 * @file
 * cms_country.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_country_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'countries';
  $ds_layout->settings = array(
    'regions' => array(
      'hidden' => array(
        0 => 'domain',
        1 => 'domain_path',
        2 => 'path',
        19 => '_add_existing_field',
      ),
      'region_1' => array(
        3 => 'language',
        4 => 'title_field',
        5 => 'field_country_official_name',
        6 => 'body',
        7 => 'field_country_iso2',
        8 => 'field_country_iso3',
        9 => 'field_country_party_number',
        10 => 'field_country_entry_into_force',
        11 => 'field_country_instrument_status',
        12 => 'field_country_member_to_stc',
        13 => 'field_country_date_of_accession',
        14 => 'field_country_date_of_acceptance',
        15 => 'field_country_anual_contribution',
        16 => 'field_country_arrears',
        17 => 'field_country_voluntary_contrib',
        18 => 'field_region',
      ),
    ),
    'fields' => array(
      'domain' => 'hidden',
      'domain_path' => 'hidden',
      'path' => 'hidden',
      'language' => 'region_1',
      'title_field' => 'region_1',
      'field_country_official_name' => 'region_1',
      'body' => 'region_1',
      'field_country_iso2' => 'region_1',
      'field_country_iso3' => 'region_1',
      'field_country_party_number' => 'region_1',
      'field_country_entry_into_force' => 'region_1',
      'field_country_instrument_status' => 'region_1',
      'field_country_member_to_stc' => 'region_1',
      'field_country_date_of_accession' => 'region_1',
      'field_country_date_of_acceptance' => 'region_1',
      'field_country_anual_contribution' => 'region_1',
      'field_country_arrears' => 'region_1',
      'field_country_voluntary_contrib' => 'region_1',
      'field_region' => 'region_1',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'region_1' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|country|form'] = $ds_layout;

  return $export;
}
