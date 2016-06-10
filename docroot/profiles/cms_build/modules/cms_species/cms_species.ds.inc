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
      'hidden' => array(
        0 => 'title_field',
        1 => 'domain_path',
        2 => 'domain',
        3 => 'path',
        10 => 'field_species_scientific_order',
        25 => 'field_species_iucn_status',
        29 => 'redirect',
        37 => 'field_species_status_per_country',
        38 => 'field_aewa_population_status',
        41 => 'metatags',
        48 => '_add_existing_field',
      ),
      'taxonomy_1_1' => array(
        4 => 'field_species_class',
        5 => 'field_species_order',
        7 => 'field_species_genus',
      ),
      'taxonomy_1_2' => array(
        6 => 'field_species_family',
        8 => 'field_species_species',
        9 => 'field_species_subspecies',
      ),
      'taxonomy_1_3' => array(
        11 => 'field_species_author',
        33 => 'field_species_standard_reference',
      ),
      'common_names_1_1' => array(
        12 => 'field_species_name_en',
        13 => 'field_species_name_fr',
      ),
      'common_names_1_2' => array(
        14 => 'field_species_name_es',
        15 => 'field_species_name_de',
      ),
      'common_names_1_3' => array(
        16 => 'field_species_former_name',
      ),
      'assessment_information_1_3' => array(
        17 => 'field_species_appendix_1_date',
        18 => 'field_species_appendix_2_date',
      ),
      'region_1' => array(
        19 => 'body',
        24 => 'field_species_critical_sites',
        27 => 'field_species_notes',
        34 => 'field_species_images',
      ),
      'assessment_information_1_1' => array(
        20 => 'field_species_concerted_action',
        21 => 'field_species_cooperative_action',
        26 => 'field_species_iucn_web_srv',
      ),
      'assessment_information_1_2' => array(
        22 => 'field_species_pop_global',
        23 => 'field_species_pop_global_date',
      ),
      'global_geographic_range' => array(
        28 => 'field_species_range_states',
        30 => 'field_species_range_states_notes',
      ),
      'populations_per_instrument' => array(
        31 => 'field_species_pop',
      ),
      'population_size_and_trend' => array(
        32 => 'field_species_pop_size',
      ),
      'related_content_2_1' => array(
        35 => 'field_species_threats',
      ),
      'assessment_information_2_1' => array(
        36 => 'field_species_instruments',
      ),
      'taxonomy_2_1' => array(
        39 => 'field_species_experts',
      ),
      'taxonomy_2_2' => array(
        40 => 'field_species_synonyms',
      ),
      'related_content_1_1' => array(
        42 => 'field_species_meeting',
        43 => 'field_species_publication',
        44 => 'field_species_project',
      ),
      'related_content_1_2' => array(
        45 => 'field_species_national_report',
        46 => 'field_species_document',
        47 => 'field_species_plans',
      ),
    ),
    'fields' => array(
      'title_field' => 'hidden',
      'domain_path' => 'hidden',
      'domain' => 'hidden',
      'path' => 'hidden',
      'field_species_class' => 'taxonomy_1_1',
      'field_species_order' => 'taxonomy_1_1',
      'field_species_family' => 'taxonomy_1_2',
      'field_species_genus' => 'taxonomy_1_1',
      'field_species_species' => 'taxonomy_1_2',
      'field_species_subspecies' => 'taxonomy_1_2',
      'field_species_scientific_order' => 'hidden',
      'field_species_author' => 'taxonomy_1_3',
      'field_species_name_en' => 'common_names_1_1',
      'field_species_name_fr' => 'common_names_1_1',
      'field_species_name_es' => 'common_names_1_2',
      'field_species_name_de' => 'common_names_1_2',
      'field_species_former_name' => 'common_names_1_3',
      'field_species_appendix_1_date' => 'assessment_information_1_3',
      'field_species_appendix_2_date' => 'assessment_information_1_3',
      'body' => 'region_1',
      'field_species_concerted_action' => 'assessment_information_1_1',
      'field_species_cooperative_action' => 'assessment_information_1_1',
      'field_species_pop_global' => 'assessment_information_1_2',
      'field_species_pop_global_date' => 'assessment_information_1_2',
      'field_species_critical_sites' => 'region_1',
      'field_species_iucn_status' => 'hidden',
      'field_species_iucn_web_srv' => 'assessment_information_1_1',
      'field_species_notes' => 'region_1',
      'field_species_range_states' => 'global_geographic_range',
      'redirect' => 'hidden',
      'field_species_range_states_notes' => 'global_geographic_range',
      'field_species_pop' => 'populations_per_instrument',
      'field_species_pop_size' => 'population_size_and_trend',
      'field_species_standard_reference' => 'taxonomy_1_3',
      'field_species_images' => 'region_1',
      'field_species_threats' => 'related_content_2_1',
      'field_species_instruments' => 'assessment_information_2_1',
      'field_species_status_per_country' => 'hidden',
      'field_aewa_population_status' => 'hidden',
      'field_species_experts' => 'taxonomy_2_1',
      'field_species_synonyms' => 'taxonomy_2_2',
      'metatags' => 'hidden',
      'field_species_meeting' => 'related_content_1_1',
      'field_species_publication' => 'related_content_1_1',
      'field_species_project' => 'related_content_1_1',
      'field_species_national_report' => 'related_content_1_2',
      'field_species_document' => 'related_content_1_2',
      'field_species_plans' => 'related_content_1_2',
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
