<?php
/**
 * @file
 * cms_species.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_species_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|species|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'species';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'species';
  $ds_layout->settings = array(
    'regions' => array(
      'taxonomy_1_1' => array(
        0 => 'field_species_class',
        1 => 'field_species_genus',
        2 => 'field_species_order',
      ),
      'taxonomy_1_2' => array(
        3 => 'field_species_species',
        4 => 'field_species_family',
        5 => 'field_species_subspecies',
      ),
      'taxonomy_1_3' => array(
        6 => 'field_species_author',
        7 => 'field_species_standard_reference',
      ),
      'taxonomy_2_1' => array(
        8 => 'field_species_experts',
      ),
      'taxonomy_2_2' => array(
        9 => 'field_species_synonyms',
      ),
      'common_names_1_1' => array(
        10 => 'field_species_name_en',
        11 => 'field_species_name_fr',
      ),
      'common_names_1_2' => array(
        12 => 'field_species_name_es',
        13 => 'field_species_name_de',
      ),
      'common_names_1_3' => array(
        14 => 'field_species_former_name',
      ),
      'assessment_information_1_1' => array(
        15 => 'field_species_iucn_web_srv',
        16 => 'field_species_concerted_action',
        17 => 'field_species_cooperative_action',
      ),
      'assessment_information_1_2' => array(
        18 => 'field_species_pop_global',
        19 => 'field_species_pop_global_date',
      ),
      'assessment_information_1_3' => array(
        20 => 'field_species_appendix_1_date',
        21 => 'field_species_appendix_2_date',
      ),
      'assessment_information_2_1' => array(
        22 => 'field_species_instruments',
      ),
      'global_geographic_range' => array(
        23 => 'field_species_range_states',
        24 => 'field_species_range_states_notes',
      ),
      'populations_per_instrument' => array(
        25 => 'field_species_pop',
      ),
      'population_size_and_trend' => array(
        26 => 'field_species_pop_size',
      ),
      'related_content_1_1' => array(
        27 => 'field_species_meeting',
        28 => 'field_species_publication',
        29 => 'field_species_project',
      ),
      'related_content_1_2' => array(
        30 => 'field_species_national_report',
        31 => 'field_species_document',
        32 => 'field_species_plans',
      ),
      'related_content_2_1' => array(
        33 => 'field_species_threats',
      ),
      'region_1' => array(
        34 => 'field_species_critical_sites',
        35 => 'field_species_notes',
        36 => 'body',
        37 => 'field_species_images',
      ),
      'hidden' => array(
        38 => 'title',
        39 => 'domain_path',
        40 => 'domain',
        41 => 'path',
        42 => 'field_species_scientific_order',
        43 => 'field_species_iucn_status',
        44 => 'field_species_status_per_country',
        45 => 'field_aewa_population_status',
        46 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_species_class' => 'taxonomy_1_1',
      'field_species_genus' => 'taxonomy_1_1',
      'field_species_order' => 'taxonomy_1_1',
      'field_species_species' => 'taxonomy_1_2',
      'field_species_family' => 'taxonomy_1_2',
      'field_species_subspecies' => 'taxonomy_1_2',
      'field_species_author' => 'taxonomy_1_3',
      'field_species_standard_reference' => 'taxonomy_1_3',
      'field_species_experts' => 'taxonomy_2_1',
      'field_species_synonyms' => 'taxonomy_2_2',
      'field_species_name_en' => 'common_names_1_1',
      'field_species_name_fr' => 'common_names_1_1',
      'field_species_name_es' => 'common_names_1_2',
      'field_species_name_de' => 'common_names_1_2',
      'field_species_former_name' => 'common_names_1_3',
      'field_species_iucn_web_srv' => 'assessment_information_1_1',
      'field_species_concerted_action' => 'assessment_information_1_1',
      'field_species_cooperative_action' => 'assessment_information_1_1',
      'field_species_pop_global' => 'assessment_information_1_2',
      'field_species_pop_global_date' => 'assessment_information_1_2',
      'field_species_appendix_1_date' => 'assessment_information_1_3',
      'field_species_appendix_2_date' => 'assessment_information_1_3',
      'field_species_instruments' => 'assessment_information_2_1',
      'field_species_range_states' => 'global_geographic_range',
      'field_species_range_states_notes' => 'global_geographic_range',
      'field_species_pop' => 'populations_per_instrument',
      'field_species_pop_size' => 'population_size_and_trend',
      'field_species_meeting' => 'related_content_1_1',
      'field_species_publication' => 'related_content_1_1',
      'field_species_project' => 'related_content_1_1',
      'field_species_national_report' => 'related_content_1_2',
      'field_species_document' => 'related_content_1_2',
      'field_species_plans' => 'related_content_1_2',
      'field_species_threats' => 'related_content_2_1',
      'field_species_critical_sites' => 'region_1',
      'field_species_notes' => 'region_1',
      'body' => 'region_1',
      'field_species_images' => 'region_1',
      'title' => 'hidden',
      'domain_path' => 'hidden',
      'domain' => 'hidden',
      'path' => 'hidden',
      'field_species_scientific_order' => 'hidden',
      'field_species_iucn_status' => 'hidden',
      'field_species_status_per_country' => 'hidden',
      'field_aewa_population_status' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'taxonomy_1_1' => 'div',
      'taxonomy_1_2' => 'div',
      'taxonomy_1_3' => 'div',
      'taxonomy_2_1' => 'div',
      'taxonomy_2_2' => 'div',
      'common_names_1_1' => 'div',
      'common_names_1_2' => 'div',
      'common_names_1_3' => 'div',
      'assessment_information_1_1' => 'div',
      'assessment_information_1_2' => 'div',
      'assessment_information_1_3' => 'div',
      'assessment_information_2_1' => 'div',
      'global_geographic_range' => 'div',
      'populations_per_instrument' => 'div',
      'population_size_and_trend' => 'div',
      'related_content_1_1' => 'div',
      'related_content_1_2' => 'div',
      'related_content_2_1' => 'div',
      'region_1' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|species|form'] = $ds_layout;

  return $export;
}
