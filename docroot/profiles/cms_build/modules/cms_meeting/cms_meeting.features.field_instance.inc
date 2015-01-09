<?php
/**
 * @file
 * cms_meeting.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cms_meeting_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-meeting-body'
  $field_instances['node-meeting-body'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-meeting-event_calendar_date'
  $field_instances['node-meeting-event_calendar_date'] = array(
    'bundle' => 'meeting',
    'deleted' => 0,
    'description' => 'Set 00:00 for not displaying time',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cms',
        'settings' => array(
          'format' => 'convention_date',
          'wrapper' => 'tr',
        ),
        'type' => 'cms_date_optional_time_formatter',
        'weight' => 30,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'event_calendar_date',
    'label' => 'Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-meeting-field_country'
  $field_instances['node-meeting-field_country'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(),
        'type' => 'cms_country_table_row_formatter',
        'weight' => 20,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-meeting-field_instrument'
  $field_instances['node-meeting-field_instrument'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(),
        'type' => 'cms_legal_instruments_formatter',
        'weight' => 5,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_instrument',
    'label' => 'CMS Instrument',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_abbreviation'
  $field_instances['node-meeting-field_meeting_abbreviation'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Short description such as COP 11',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_link' => 0,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_field_table_row_formatter',
        'weight' => 11,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_abbreviation',
    'label' => 'Abbreviation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_city'
  $field_instances['node-meeting-field_meeting_city'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_link' => 0,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_field_table_row_formatter',
        'weight' => 9,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_coorganizer'
  $field_instances['node-meeting-field_meeting_coorganizer'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_link' => 0,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_field_table_row_formatter',
        'weight' => 14,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_coorganizer',
    'label' => 'Coorganizer',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_document'
  $field_instances['node-meeting-field_meeting_document'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 26,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_document',
    'label' => 'Documents',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'apply_chosen' => '',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_end'
  $field_instances['node-meeting-field_meeting_end'] = array(
    'bundle' => 'meeting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'format' => 'cms_date',
        ),
        'type' => 'cms_date_formatter',
        'weight' => 12,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_end',
    'label' => 'End date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1970:+3',
      ),
      'type' => 'date_popup',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_image'
  $field_instances['node-meeting-field_meeting_image'] = array(
    'bundle' => 'meeting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_image',
    'label' => 'Poster',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'meetings',
      'file_extensions' => 'bmp tiff jpg jpeg gif png raw svg psd cdr ai dwg',
      'image_field_caption' => 0,
      'image_field_caption_format' => 'plain_text',
      'max_filesize' => '50 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_kind'
  $field_instances['node-meeting-field_meeting_kind'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_plain_text' => 1,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_term_reference_field_table_row_formatter',
        'weight' => 7,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_kind',
    'label' => 'Kind',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_languages'
  $field_instances['node-meeting-field_meeting_languages'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_plain_text' => 1,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_term_reference_field_table_row_formatter',
        'weight' => 15,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_languages',
    'label' => 'Languages',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_latitude'
  $field_instances['node-meeting-field_meeting_latitude'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 18,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_latitude',
    'label' => 'Latitude',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_location'
  $field_instances['node-meeting-field_meeting_location'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_link' => 0,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_field_table_row_formatter',
        'weight' => 17,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_location',
    'label' => 'Venue',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_longitude'
  $field_instances['node-meeting-field_meeting_longitude'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this <a href="http://universimmedia.pagesperso-orange.fr/geo/loc.htm" target="_blank">online tool</a> to find coordinates ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 19,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_longitude',
    'label' => 'Longitude',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_organizer'
  $field_instances['node-meeting-field_meeting_organizer'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_link' => 0,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_field_table_row_formatter',
        'weight' => 13,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_organizer',
    'label' => 'Organizer',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_participants'
  $field_instances['node-meeting-field_meeting_participants'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_participants',
    'label' => 'Participants',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_project'
  $field_instances['node-meeting-field_meeting_project'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_project',
    'label' => 'Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_publication'
  $field_instances['node-meeting-field_meeting_publication'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 23,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_publication',
    'label' => 'Publications',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_reg_deadline'
  $field_instances['node-meeting-field_meeting_reg_deadline'] = array(
    'bundle' => 'meeting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'format' => 'convention_date',
        ),
        'type' => 'cms_date_formatter',
        'weight' => 16,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_reg_deadline',
    'label' => 'Registration Deadline',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+3',
      ),
      'type' => 'date_popup',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_species'
  $field_instances['node-meeting-field_meeting_species'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 21,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_species',
    'label' => 'Species',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_start'
  $field_instances['node-meeting-field_meeting_start'] = array(
    'bundle' => 'meeting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'format' => 'cms_date',
        ),
        'type' => 'cms_date_formatter',
        'weight' => 3,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_start',
    'label' => 'Start date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+1 day',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'j M Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1920:+3',
      ),
      'type' => 'date_popup',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_start_time'
  $field_instances['node-meeting-field_meeting_start_time'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_link' => 0,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_field_table_row_formatter',
        'weight' => 4,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_start_time',
    'label' => 'Start Time',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_status'
  $field_instances['node-meeting-field_meeting_status'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_plain_text' => 1,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_term_reference_field_table_row_formatter',
        'weight' => 8,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_type'
  $field_instances['node-meeting-field_meeting_type'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cms',
        'settings' => array(
          'render_plain_text' => 1,
          'render_tr' => TRUE,
        ),
        'type' => 'cms_term_reference_field_table_row_formatter',
        'weight' => 6,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enterprise_edit_form_display' => '',
    'entity_type' => 'node',
    'field_name' => 'field_meeting_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-meeting-field_meeting_url'
  $field_instances['node-meeting-field_meeting_url'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cms',
        'settings' => array(),
        'type' => 'cms_link_formatter',
        'weight' => 22,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meeting_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-meeting-field_threats'
  $field_instances['node-meeting-field_threats'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 24,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_threats',
    'label' => 'Threats',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-meeting-title_field'
  $field_instances['node-meeting-title_field'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbreviation');
  t('CMS Instrument');
  t('City');
  t('Coorganizer');
  t('Country');
  t('Dates');
  t('Description');
  t('Documents');
  t('End date');
  t('Kind');
  t('Languages');
  t('Latitude');
  t('Longitude');
  t('Organizer');
  t('Participants');
  t('Poster');
  t('Project');
  t('Publications');
  t('Registration Deadline');
  t('Set 00:00 for not displaying time');
  t('Short description such as COP 11');
  t('Species');
  t('Start Time');
  t('Start date');
  t('Status');
  t('Threats');
  t('Title');
  t('Type');
  t('URL');
  t('Use this <a href="http://universimmedia.pagesperso-orange.fr/geo/loc.htm" target="_blank">online tool</a> to find coordinates ');
  t('Venue');

  return $field_instances;
}
