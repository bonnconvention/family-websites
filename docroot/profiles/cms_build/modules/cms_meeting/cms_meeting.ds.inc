<?php
/**
 * @file
 * cms_meeting.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cms_meeting_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|meeting|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'meeting';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'meetings';
  $ds_layout->settings = array(
    'regions' => array(
      'region_1_1_1' => array(
        0 => 'title_field',
        1 => 'field_meeting_abbreviation',
        2 => 'field_instrument',
      ),
      'region_1_1_2' => array(
        3 => 'field_meeting_type',
        4 => 'field_meeting_kind',
        5 => 'field_meeting_status',
      ),
      'region_2' => array(
        6 => 'body',
      ),
      'region_3_1_1' => array(
        7 => 'event_calendar_date',
      ),
      'region_3_1_2' => array(
        8 => 'field_meeting_reg_deadline',
      ),
      'region_4_1_1' => array(
        9 => 'field_meeting_organizer',
        10 => 'field_meeting_coorganizer',
        11 => 'field_meeting_languages',
      ),
      'region_4_1_2' => array(
        12 => 'field_meeting_image',
      ),
      'region_5_1_1' => array(
        13 => 'field_country',
        14 => 'field_meeting_city',
        15 => 'field_meeting_location',
      ),
      'region_5_1_2' => array(
        16 => 'field_meeting_latitude',
        17 => 'field_meeting_longitude',
      ),
      'region_6' => array(
        18 => 'field_meeting_url',
      ),
      'related_content_1_1' => array(
        19 => 'field_meeting_species',
        20 => 'field_meeting_publication',
        21 => 'field_threats',
      ),
      'related_content_1_2' => array(
        22 => 'field_meeting_document',
        23 => 'field_meeting_participants',
        24 => 'field_meeting_project',
      ),
      'hidden' => array(
        25 => 'domain',
        26 => 'language',
        27 => 'field_meeting_start',
        28 => 'field_meeting_start_time',
        29 => 'field_meeting_end',
        30 => 'path',
        31 => 'domain_path',
        32 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'region_1_1_1',
      'field_meeting_abbreviation' => 'region_1_1_1',
      'field_instrument' => 'region_1_1_1',
      'field_meeting_type' => 'region_1_1_2',
      'field_meeting_kind' => 'region_1_1_2',
      'field_meeting_status' => 'region_1_1_2',
      'body' => 'region_2',
      'event_calendar_date' => 'region_3_1_1',
      'field_meeting_reg_deadline' => 'region_3_1_2',
      'field_meeting_organizer' => 'region_4_1_1',
      'field_meeting_coorganizer' => 'region_4_1_1',
      'field_meeting_languages' => 'region_4_1_1',
      'field_meeting_image' => 'region_4_1_2',
      'field_country' => 'region_5_1_1',
      'field_meeting_city' => 'region_5_1_1',
      'field_meeting_location' => 'region_5_1_1',
      'field_meeting_latitude' => 'region_5_1_2',
      'field_meeting_longitude' => 'region_5_1_2',
      'field_meeting_url' => 'region_6',
      'field_meeting_species' => 'related_content_1_1',
      'field_meeting_publication' => 'related_content_1_1',
      'field_threats' => 'related_content_1_1',
      'field_meeting_document' => 'related_content_1_2',
      'field_meeting_participants' => 'related_content_1_2',
      'field_meeting_project' => 'related_content_1_2',
      'domain' => 'hidden',
      'language' => 'hidden',
      'field_meeting_start' => 'hidden',
      'field_meeting_start_time' => 'hidden',
      'field_meeting_end' => 'hidden',
      'path' => 'hidden',
      'domain_path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'region_1_1_1' => 'div',
      'region_1_1_2' => 'div',
      'region_2' => 'div',
      'region_3_1_1' => 'div',
      'region_3_1_2' => 'div',
      'region_3_1_3' => 'div',
      'region_3_1_4' => 'div',
      'region_4_1_1' => 'div',
      'region_4_1_2' => 'div',
      'region_5_1_1' => 'div',
      'region_5_1_2' => 'div',
      'region_6' => 'div',
      'related_content_1_1' => 'div',
      'related_content_1_2' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|meeting|form'] = $ds_layout;

  return $export;
}
