<?php

/**
 * @file
 * All the PoolParty API hooks of the Climate Tagger API.
 */

/**
 * Implements hook_poolparty_available_alter().
 */
function climate_tagger_semantic_connector_ppx_available_alter($pp_api, &$availability) {
  $query = array(
    'text' => '_', // Parameter can't be completely empty.
    'locale' => 'en',
    'format' => 'json',
    'token' => variable_get('climate_tagger_reegle_api_token', ''),
  );

  $resource_path = '/service/extract';
  $json_check_result = $pp_api->getConnection()->get($resource_path, array(
    'query' => $query,
  ));
  $check_result = json_decode($json_check_result);
  $is_available = (!is_null($check_result) && property_exists($check_result, 'concepts'));

  // If the service is not available check it with the LEO tagger.
  if (!$is_available) {
    $query['tagger'] = CLIMATE_TAGGER_LEO_VOCAB;
    $json_check_result = $pp_api->getConnection()->get($resource_path, array(
      'query' => $query,
    ));
    $check_result = json_decode($json_check_result);
    $is_available = (!is_null($check_result) && property_exists($check_result, 'concepts'));
  }

  $availability = array(
    'success' => $is_available,
    'message' => ((!$is_available && strpos($json_check_result, 'Invalid API authentication token') !== FALSE) ? t('The entered API authentication token is invalid.') : ''),
  );
}

/**
 * Implements hook_poolparty_getProjects_alter().
 */
function climate_tagger_semantic_connector_ppx_getProjects_alter($pp_api, &$projects) {
  // Get all the available projects from the climate tagger.
  $resource_path = '/service/projects';
  $get_parameters = array(
    'token' => variable_get('climate_tagger_reegle_api_token', ''),
  );

  $result = $pp_api->getConnection()->get($resource_path, array('query' => $get_parameters));

  // If no projects found then create one for the LEO vocabulary.
  if (strpos($result, 'Invalid API token')) {
    $project_label = CLIMATE_TAGGER_LEO_VOCAB;
    $project_key = 'leo';
    $projects[$project_key] = array(
      'label' => $project_label,
      'uuid' => $project_key,
      'id' => $project_label,
      'defaultLanguage' => 'en',
      'languages' => array('en', 'es', 'fr', 'de', 'it'),
    );
  }
  else {
    $climate_tagger_projects = json_decode($result);
    $projects = array();

    if (empty($climate_tagger_projects)) {
      return;
    }

    // Create the project list.
    foreach ($climate_tagger_projects as $project) {
      $key = climate_tagger_get_machine_name_from_label($project);
      $projects[$key] = array(
        'label' => $project,
        'uuid' => $key,
        'id' => $project,
        'defaultLanguage' => 'en',
        'languages' => array('en', 'es', 'fr', 'pt', 'de'),
      );
    }
  }
}

/**
 * Implements hook_semantic_connector_ppx_extractConcepts_alter().
 */
function climate_tagger_semantic_connector_ppx_extractConcepts_alter($pp_api, &$concepts, $input) {
  $data = $input['data'];

  $key = variable_get('climate_tagger_project_selected', CLIMATE_TAGGER_PROJECT_KEY);
  $projects = array();
  if (!empty($key) && $key != CLIMATE_TAGGER_PROJECT_KEY) {
    $projects = $pp_api->getProjects();
  }

  // Extract concepts from text.
  if (is_string($data)) {
    $resource_path = '/service/extract';
    // Build the basis array of data required for the extaction.
    $post_parameters = array(
      // Parameter can't be completely empty.
      'text' => $data,
      'locale' => $input['language'],
      'format' => 'json',
      'token' => variable_get('climate_tagger_reegle_api_token', ''),
    );

    if ($key == 'leo') {
      $post_parameters['tagger'] = CLIMATE_TAGGER_LEO_VOCAB;
    }
    elseif (!empty($projects) && isset($projects[$key])) {
      $post_parameters['tagger'] = $projects[$key]->id;
    }

    // Add additional received parameters.
    if (isset($input['parameters']['numberOfConcepts'])) {
      $post_parameters['countConcepts'] = $input['parameters']['numberOfConcepts'];
    }
    if (isset($input['parameters']['numberOfTerms'])) {
      $post_parameters['countTerms'] = $input['parameters']['numberOfTerms'];
    }

    // Do the extraction.
    $json_check_result = $pp_api->getConnection()->post($resource_path, array('data' => $post_parameters));
  }
  // Extract concepts from file.
  elseif (is_object($data) && property_exists($data, 'fid')) {
    $resource_path = '/service/extractFile';
    // Build the basis array of data required for the extaction.
    $file_name = drupal_realpath($data->uri);
    $file = class_exists('CURLFile') ? new CURLFile($file_name) : '@' . $file_name;
    $post_parameters = array(
      'file' => $file,
      'locale' => $input['language'],
      'format' => 'json',
      'token' => variable_get('climate_tagger_reegle_api_token', ''),
    );

    if ($key == 'leo') {
      $post_parameters['tagger'] = CLIMATE_TAGGER_LEO_VOCAB;
    }
    elseif (!empty($projects) && isset($projects[$key])) {
      $post_parameters['tagger'] = $projects[$key]->id;
    }

    // Add additional received parameters.
    if (isset($input['parameters']['numberOfConcepts'])) {
      $post_parameters['countConcepts'] = $input['parameters']['numberOfConcepts'];
    }
    if (isset($input['parameters']['numberOfTerms'])) {
      $post_parameters['countTerms'] = $input['parameters']['numberOfTerms'];
    }

    // Do the extraction.
    $json_check_result = $pp_api->getConnection()->post($resource_path, array('data' => $post_parameters));
  }
  else {
    // Not supported --> Throw error.
  }

  // Error or no result.
  if (!isset($json_check_result) || empty($json_check_result)) {
    $concepts = array();
  }
  // Good result.
  else {
    $concepts = json_decode($json_check_result);

    // Remap to the result of the PP Extractor.
    if (isset($concepts->terms)) {
      $concepts->freeTerms = $concepts->terms;
      unset($concepts->terms);

      foreach ($concepts->freeTerms as &$freeterm) {
        $freeterm->textValue = $freeterm->label;
        unset($freeterm->label);
      }
    }
  }
}

/**
 * Implements hook_semantic_connector_ppx_suggest_alter().
 */
function climate_tagger_semantic_connector_ppx_suggest_alter($pp_api, &$suggestion, $input) {
  $suggestion = new stdClass();
  $suggestion->suggestedConcepts = array();

  $config = climate_tagger_get_config();
  $project = variable_get('climate_tagger_project_selected', CLIMATE_TAGGER_PROJECT_KEY);
  $vid = $config->config['projects'][$project]['taxonomy_id'];

  $translation_required = ($input['language'] != LANGUAGE_NONE && $input['language'] != language_default('language') && powertagging_translation_possible());

  // No translation needed --> Get all matching term names of concepts.
  if (!$translation_required) {
    // Get the normal term name.
    $query = db_select('taxonomy_term_data', 't')
      ->fields('t', array('tid', 'name'))
      ->fields('f', array('field_uri_value'))
      ->condition('vid', $vid, '=')
      ->condition('name', '%' . db_like($input['string']) . '%', 'LIKE')
      // Remove the line below to also receive free terms.
      ->condition('field_uri_value', '', '!=')
      ->range(0, 10);
    $query->leftJoin('field_data_field_uri', 'f', 'f.entity_id = t.tid AND f.entity_type = \'taxonomy_term\'');
    $result = $query->execute()
      ->fetchAll();

    // Add the concepts and freeterms.
    foreach ($result as $term) {
      // If there is a translation available, skip untranslated concepts.
      if ($translation_required && !is_null($term->field_uri_value)) {
        continue;
      }

      $suggestion->suggestedConcepts[] = (object) array(
        'tid' => $term->tid,
        'uri' => is_null($term->field_uri_value) ? '' : $term->field_uri_value,
        'prefLabel' => $term->name,
      );
    }
  }
  // Translation required --> Get a list of translated taxonomy term names.
  else {
    $query = db_select('taxonomy_term_data', 't')
      ->fields('t', array('tid'))
      ->fields('f', array('field_uri_value'))
      ->condition('t.vid', $vid, '=')
      ->condition('l.language', $input['language'])
      ->condition('l.translation', '%' . db_like($input['string']) . '%', 'LIKE')
      // Remove the line below to also receive free terms.
      ->condition('field_uri_value', '', '!=')
      ->range(0, 10);
    $query->leftJoin('field_data_field_uri', 'f', 'f.entity_id = t.tid AND f.entity_type = \'taxonomy_term\'');
    $query->leftJoin('i18n_string', 'i', 'i.objectid = t.tid AND i.type = \'term\' AND i.property = \'name\'');
    $query->leftJoin('locales_target', 'l', 'l.lid = i.lid');
    $query->addField('l', 'translation', 'name');
    $translated_result = $query->execute()
      ->fetchAll();

    // Add the translated concepts.
    foreach ($translated_result as $term) {
      $suggestion->suggestedConcepts[] = (object) array(
        'tid' => $term->tid,
        'uri' => is_null($term->field_uri_value) ? '' : $term->field_uri_value,
        'prefLabel' => $term->name,
      );
    }
  }
}
