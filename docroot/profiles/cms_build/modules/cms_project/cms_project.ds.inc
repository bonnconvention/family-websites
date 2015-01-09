<?php
/**
 * @file
 * cms_project.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'projects';
  $ds_layout->settings = array(
    'regions' => array(
      'region_1_1_1' => array(
        0 => 'title_field',
        1 => 'language',
        2 => 'domain',
        3 => 'domain_path',
        4 => 'path',
        5 => 'field_project_type',
        6 => 'field_project_id',
      ),
      'region_1_1_2' => array(
        7 => 'field_project_agency_contact',
        8 => 'field_project_ia_no_id',
        9 => 'field_project_impl_agency',
      ),
      'region_2' => array(
        10 => 'field_project_collab_agency',
      ),
      'region_3_1_1' => array(
        11 => 'field_project_start_date',
        12 => 'field_project_end_date',
      ),
      'region_3_1_2' => array(
        13 => 'field_region',
        14 => 'field_country',
        15 => 'field_instrument',
        16 => 'field_project_taxonomic_group',
        17 => 'field_project_appendix',
      ),
      'region_4' => array(
        18 => 'body',
        19 => 'field_project_summary',
        20 => 'field_project_conservation',
        21 => 'field_project_objective',
      ),
      'region_5_1_1' => array(
        22 => 'field_project_status',
        23 => 'field_project_contract_number',
        24 => 'field_project_contract_type',
      ),
      'region_5_1_2' => array(
        25 => 'field_project_funds_req_amount',
        26 => 'field_project_funds_req_amount_c',
        27 => 'field_project_final_report',
        28 => 'field_project_tech_report',
        29 => 'field_project_sgp',
      ),
      'region_5_1_3' => array(
        30 => 'field_project_signed_date',
        31 => 'field_project_closed_date',
      ),
      'region_6_1_1' => array(
        32 => 'field_project_cofunding',
        33 => 'field_project_encumbrance_number',
        34 => 'field_project_obmo',
        35 => 'field_project_responsible_unit',
      ),
      'region_6_1_2' => array(
        36 => 'field_project_comments',
        37 => 'field_project_folder',
      ),
      'region_7_1_1' => array(
        38 => 'field_project_images',
      ),
      'region_7_1_2' => array(
        39 => 'field_project_file',
      ),
      'budget_line_bac' => array(
        40 => 'field_project_bac',
      ),
      'activity' => array(
        41 => 'field_project_activity',
      ),
      'schedule_of_payments' => array(
        42 => 'field_project_payments',
      ),
      'related_content_1_1' => array(
        43 => 'field_threats',
        44 => 'field_project_document',
        45 => 'field_project_nat_plan',
        46 => 'field_project_national_reports',
      ),
      'related_content_1_2' => array(
        47 => 'field_project_species',
        48 => 'field_project_publication',
        49 => 'field_project_meeting',
      ),
      'hidden' => array(
        50 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'region_1_1_1',
      'language' => 'region_1_1_1',
      'domain' => 'region_1_1_1',
      'domain_path' => 'region_1_1_1',
      'path' => 'region_1_1_1',
      'field_project_type' => 'region_1_1_1',
      'field_project_id' => 'region_1_1_1',
      'field_project_agency_contact' => 'region_1_1_2',
      'field_project_ia_no_id' => 'region_1_1_2',
      'field_project_impl_agency' => 'region_1_1_2',
      'field_project_collab_agency' => 'region_2',
      'field_project_start_date' => 'region_3_1_1',
      'field_project_end_date' => 'region_3_1_1',
      'field_region' => 'region_3_1_2',
      'field_country' => 'region_3_1_2',
      'field_instrument' => 'region_3_1_2',
      'field_project_taxonomic_group' => 'region_3_1_2',
      'field_project_appendix' => 'region_3_1_2',
      'body' => 'region_4',
      'field_project_summary' => 'region_4',
      'field_project_conservation' => 'region_4',
      'field_project_objective' => 'region_4',
      'field_project_status' => 'region_5_1_1',
      'field_project_contract_number' => 'region_5_1_1',
      'field_project_contract_type' => 'region_5_1_1',
      'field_project_funds_req_amount' => 'region_5_1_2',
      'field_project_funds_req_amount_c' => 'region_5_1_2',
      'field_project_final_report' => 'region_5_1_2',
      'field_project_tech_report' => 'region_5_1_2',
      'field_project_sgp' => 'region_5_1_2',
      'field_project_signed_date' => 'region_5_1_3',
      'field_project_closed_date' => 'region_5_1_3',
      'field_project_cofunding' => 'region_6_1_1',
      'field_project_encumbrance_number' => 'region_6_1_1',
      'field_project_obmo' => 'region_6_1_1',
      'field_project_responsible_unit' => 'region_6_1_1',
      'field_project_comments' => 'region_6_1_2',
      'field_project_folder' => 'region_6_1_2',
      'field_project_images' => 'region_7_1_1',
      'field_project_file' => 'region_7_1_2',
      'field_project_bac' => 'budget_line_bac',
      'field_project_activity' => 'activity',
      'field_project_payments' => 'schedule_of_payments',
      'field_threats' => 'related_content_1_1',
      'field_project_document' => 'related_content_1_1',
      'field_project_nat_plan' => 'related_content_1_1',
      'field_project_national_reports' => 'related_content_1_1',
      'field_project_species' => 'related_content_1_2',
      'field_project_publication' => 'related_content_1_2',
      'field_project_meeting' => 'related_content_1_2',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'region_1_1_1' => 'div',
      'region_1_1_2' => 'div',
      'region_2' => 'div',
      'region_3_1_1' => 'div',
      'region_3_1_2' => 'div',
      'region_4' => 'div',
      'region_5_1_1' => 'div',
      'region_5_1_2' => 'div',
      'region_5_1_3' => 'div',
      'region_6_1_1' => 'div',
      'region_6_1_2' => 'div',
      'region_6_1_3' => 'div',
      'region_7_1_1' => 'div',
      'region_7_1_2' => 'div',
      'budget_line_bac' => 'div',
      'activity' => 'div',
      'schedule_of_payments' => 'div',
      'related_content_1_1' => 'div',
      'related_content_1_2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|project|form'] = $ds_layout;

  return $export;
}
