<?php
/**
 * @file
 * cms_instrument.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_instrument_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legal_instrument|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legal_instrument';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'instruments';
  $ds_layout->settings = array(
    'regions' => array(
      'hidden' => array(
        0 => 'domain',
        1 => 'domain_path',
        2 => 'path',
        15 => 'field_instrument_in_force',
        17 => 'field_instrument_actual_force',
        18 => 'field_instrument_in_effect',
        19 => 'field_instrument_actual_effect',
        32 => '_add_existing_field',
      ),
      'region_1_1_2' => array(
        3 => 'language',
        10 => 'field_instrument_depositary',
        11 => 'field_languages',
        16 => 'field_instrument_secretariat',
      ),
      'region_1_1_1' => array(
        4 => 'title_field',
        5 => 'field_instrument_name',
        7 => 'field_instrument_type',
        8 => 'field_instrument_status',
        9 => 'field_country',
        12 => 'field_sponsors',
      ),
      'region_1_2_1' => array(
        6 => 'field_picture',
        20 => 'body',
        22 => 'field_instrument_coverage',
        23 => 'field_instrument_treaty_text',
      ),
      'region_1_3_1' => array(
        13 => 'field_instrument_final_act',
        14 => 'field_instrument_signature',
      ),
      'region_1_3_3' => array(
        21 => 'field_instrument_website',
      ),
      'region_1_3_2' => array(
        24 => 'field_instrument_financing',
        25 => 'field_instrument_reservations',
      ),
      'region_1_4_1' => array(
        26 => 'field_instrument_species_ex',
        27 => 'field_instrument_other',
        28 => 'field_related_international_init',
      ),
      'region_1_4_2' => array(
        29 => 'field_working_groups',
        30 => 'field_member_of_blg',
        31 => 'field_instrument_amendments',
      ),
    ),
    'fields' => array(
      'domain' => 'hidden',
      'domain_path' => 'hidden',
      'path' => 'hidden',
      'language' => 'region_1_1_2',
      'title_field' => 'region_1_1_1',
      'field_instrument_name' => 'region_1_1_1',
      'field_picture' => 'region_1_2_1',
      'field_instrument_type' => 'region_1_1_1',
      'field_instrument_status' => 'region_1_1_1',
      'field_country' => 'region_1_1_1',
      'field_instrument_depositary' => 'region_1_1_2',
      'field_languages' => 'region_1_1_2',
      'field_sponsors' => 'region_1_1_1',
      'field_instrument_final_act' => 'region_1_3_1',
      'field_instrument_signature' => 'region_1_3_1',
      'field_instrument_in_force' => 'hidden',
      'field_instrument_secretariat' => 'region_1_1_2',
      'field_instrument_actual_force' => 'hidden',
      'field_instrument_in_effect' => 'hidden',
      'field_instrument_actual_effect' => 'hidden',
      'body' => 'region_1_2_1',
      'field_instrument_website' => 'region_1_3_3',
      'field_instrument_coverage' => 'region_1_2_1',
      'field_instrument_treaty_text' => 'region_1_2_1',
      'field_instrument_financing' => 'region_1_3_2',
      'field_instrument_reservations' => 'region_1_3_2',
      'field_instrument_species_ex' => 'region_1_4_1',
      'field_instrument_other' => 'region_1_4_1',
      'field_related_international_init' => 'region_1_4_1',
      'field_working_groups' => 'region_1_4_2',
      'field_member_of_blg' => 'region_1_4_2',
      'field_instrument_amendments' => 'region_1_4_2',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'region_1_1_1' => 'div',
      'region_1_1_2' => 'div',
      'region_1_2_1' => 'div',
      'region_1_3_1' => 'div',
      'region_1_3_2' => 'div',
      'region_1_3_3' => 'div',
      'region_1_4_1' => 'div',
      'region_1_4_2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|legal_instrument|form'] = $ds_layout;

  return $export;
}
