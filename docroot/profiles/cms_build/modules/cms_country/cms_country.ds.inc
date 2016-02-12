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
      'region_1' => array(
        0 => 'language',
        1 => 'title_field',
        2 => 'field_country_official_name',
        3 => 'body',
        4 => 'field_country_iso2',
        5 => 'field_country_iso3',
        6 => 'field_country_party_number',
        7 => 'field_country_entry_into_force',
        8 => 'field_country_instrument_status',
        9 => 'field_country_member_to_stc',
        10 => 'field_country_date_of_accession',
        11 => 'field_country_date_of_acceptance',
        12 => 'field_country_anual_contribution',
        13 => 'field_country_arrears',
        14 => 'field_country_voluntary_contrib',
        15 => 'field_region',
        16 => 'field_show_map',
      ),
      'hidden' => array(
        17 => 'domain',
        18 => 'domain_path',
        19 => 'path',
        20 => 'redirect',
        21 => 'metatags',
        22 => '_add_existing_field',
      ),
    ),
    'fields' => array(
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
      'field_show_map' => 'region_1',
      'domain' => 'hidden',
      'domain_path' => 'hidden',
      'path' => 'hidden',
      'redirect' => 'hidden',
      'metatags' => 'hidden',
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
