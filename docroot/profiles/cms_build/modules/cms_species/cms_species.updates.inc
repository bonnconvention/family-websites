<?php

module_load_include('module', 'cms_species', 'cms_species');
module_load_include('php', 'cms', 'utils');

function _get_species_by_title($species, $title) {
    foreach ($species as $index => $item) {
        if ($item->title == $title) {
            return $item;
        }
    }

    return array();
}

/**
 * Update Species nodes with 'Genus', 'Species' data and fix their appendix dates
*/
function cms_species_update_7004() {
    $initial_data_path = drupal_get_path('module', 'cms_initial_data');

    $JSON_file = $initial_data_path . DIRECTORY_SEPARATOR .
                    CMSUtils::get_current_profile() . DIRECTORY_SEPARATOR .
                    'species' . DIRECTORY_SEPARATOR . 'source' . DIRECTORY_SEPARATOR . 'species.json';

    /**
     * Get JSON data with correct appedix dates
    */
    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data);

    /**
     * Load all existing Species from database
    */
    $species = node_load_multiple(array(), array('type' => 'species'));
    foreach($species as $node) {
        $title_parts = explode(' ', $node->title);
        //if (!empty($node->field_species_subspecies)) {
        //    $node->title = $node->title . ' ' . $node->field_species_subspecies[$node->language][0]['value'];
        //}

        if ((count($title_parts) >= 2)) {
            /**
             * Set Genus and Species fields
            */
            $node->field_species_genus[$node->language][0]['value'] = $title_parts[0];
            $node->field_species_species[$node->language][0]['value'] = ucfirst($title_parts[1]);

            /**
             * Check if there are appendix dates for the specified species and update it
            */
            $existing_data = _get_species_by_title($species_JSON, $node->title);

            if ($node->field_species_appendix_1_date[$node->language][0]['value'] == '1970-01-01T00:00:00') {
                $node->field_species_appendix_1_date[$node->language][0]['value'] = '';
            }

            if ($node->field_species_appendix_2_date[$node->language][0]['value'] == '1970-01-01T00:00:00') {
                $node->field_species_appendix_2_date[$node->language][0]['value'] = '';
            }

            if (!empty($existing_data)) {
                $appendix_1_date = $existing_data->field_species_appendix_1_date;
                $appendix_2_date = $existing_data->field_species_appendix_2_date;

                if (!$node->field_species_appendix_1_date[$node->language][0]['value'] && ($appendix_1_date)) {
                    $node->field_species_appendix_1_date[$node->language][0]['value'] = $appendix_1_date . "-01-01T00:00:00";
                }

                if (!$node->field_species_appendix_2_date[$node->language][0]['value'] && ($appendix_2_date)) {
                    $node->field_species_appendix_2_date[$node->language][0]['value'] = $appendix_2_date . "-01-01T00:00:00";
                }
            }
        }

        node_save($node);
    }
}

function cms_species_update_7007() {
    $role = CMSUtils::get_or_create_role(ROLE_MANAGE_SPECIES);
    $rid = $role->rid;

    $permissions = array(
        'create species content' => TRUE,
        'edit own species content' => TRUE,
        'edit any species content' => TRUE,
        'delete own species content' => TRUE,
        'delete any species content' => TRUE,

        'search content' => TRUE,
        'use advanced search' => TRUE,
    );

    $vocs = array(VOC_THREATS, VOC_SPECIES_CLASS, VOC_SPECIES_GENUS,
            VOC_SPECIES_ORDER, VOC_SPECIES_FAMILY, VOC_SPECIES_SPECIES,
            VOC_SPECIES_SUBSPECIES, VOC_SPECIES_AUTHOR, VOC_SPECIES_POPULATION_NAME);
    foreach($vocs as $machine_name) {
        CMSUtils::set_vocabulary_permissions($permissions, $machine_name, 'species', ROLE_MANAGE_SPECIES);
    }
    user_role_change_permissions($rid, $permissions);
    CMSUtils::role_add_permissions('administrator', $permissions);
    return t('Species permissions updated');
}

/**
 * Update Species instruments
*/
function cms_species_update_7028() {
    $JSON_file = drupal_get_path('module', 'cms_initial_data') . '/' . CMSUtils::get_current_profile() . '/species/species.json';
    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data);
    $species = node_load_multiple(array(), array('type' => 'species'));

    $instruments = CMSLegalInstrument::get_mapped_instruments();
    $instrument_cache = array();
    foreach ($instruments as $title => $id) {
        $instrument_cache[strtolower($title)] = $id;
    }

    foreach($species as $node) {
        $existing_data = _get_species_by_title($species_JSON, $node->title);
        if (!empty($existing_data) && (count($existing_data->field_species_instruments) > 1)) {
            unset($node->field_species_instruments);
            $array['field_species_instruments'] = $existing_data->field_species_instruments;
            CMSSpecies::set_instruments($node, $array, TRUE, $instrument_cache);
            node_save($node);
        }
    }

    return t('Species instruments updated');
}

function cms_species_update_7015() {
    $current_profile = CMSUtils::get_current_profile();
    if ($current_profile != 'aewa') {
        return t('Update script not supported!');
    }

    $JSON_file = drupal_get_path('module', 'cms_initial_data') . '/' . $current_profile . '/species/species.json';
    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data);
    $species = node_load_multiple(array(), array('type' => 'species'));

    foreach($species as $node) {
        $existing_data = _get_species_by_title($species_JSON, $node->title);
        if (!empty($existing_data) && !empty($existing_data->field_species_pop_size)) {
            unset($node->field_species_pop_size);
            $array['field_species_pop_size'] = $existing_data->field_species_pop_size;
            CMSSpecies::set_species_population_size($node, $array);
            node_save($node);
        }
    }

    return t('Species population updated');
}

function cms_species_update_7017() {
    $JSON_file = drupal_get_path('module', 'cms_initial_data') . '/' . CMSUtils::get_current_profile() . '/species/species.json';

    /**
     * Get JSON data with correct appedix dates
    */
    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data);

    /**
     * Load all existing Species from database
    */
    $species = node_load_multiple(array(), array('type' => 'species'));
    foreach($species as $node) {
        $existing_data = _get_species_by_title($species_JSON, $node->title);

        if ($node->field_species_appendix_1_date[$node->language][0]['value'] == '1970-01-01T00:00:00') {
            $node->field_species_appendix_1_date[$node->language][0]['value'] = NULL;
        }

        if ($node->field_species_appendix_2_date[$node->language][0]['value'] == '1970-01-01T00:00:00') {
            $node->field_species_appendix_2_date[$node->language][0]['value'] = NULL;
        }

        if ($node->field_species_pop_global_date[$node->language][0]['value'] == '1970-01-01T00:00:00') {
            $node->field_species_pop_global_date[$node->language][0]['value'] = NULL;
        }

        if (!empty($existing_data)) {
            if (!empty($existing_data->field_species_pop_global)) {
                $node->field_species_pop_global[$node->language][0]['value'] = $existing_data->field_species_pop_global;
            }else {
                $node->field_species_pop_global[$node->language][0]['value'] = '';
            }
        }

        node_save($node);
    }
}

/**
 * Update species IUCN data
*/
function cms_species_update_7018() {
    $species = node_load_multiple(array(), array('type' => 'species'));
    foreach($species as $node) {
        $data = CMSSpecies::get_species_iucn_data($node->title);
        if (!empty($data)) {
            unset($node->field_species_iucn_web_srv, $node->field_species_iucn_status);
            CMSSpecies::set_iucn_status($node, $data);
            CMSSpecies::set_iucn_link($node, $data);
            node_save($node);
        }
    }
}

/**
 * Update Species common name from 'S to 's
*/
function cms_species_update_7029() {
    $species = node_load_multiple(array(), array('type' => 'species'));
    foreach ($species as $node) {
        $common_name = $node->field_species_name_en[$node->language][0]['value'];
        if (preg_match("/'S/", $common_name)) {
            $node->field_species_name_en[$node->language][0]['value'] = preg_replace("/'S/", "'s", $common_name);
        }

        if (isset($node->field_species_genus) && isset($node->field_species_species)) {
            $genus = CMSSpecies::get_taxonomy_term_name($node, 'field_species_genus', 'species_genus');
            $species = CMSSpecies::get_taxonomy_term_name($node, 'field_species_species', 'species_species');
            $subspecies = CMSSpecies::get_taxonomy_term_name($node, 'field_species_subspecies', 'species_subspecies');
            $node->title = $genus . ' ' . $species;

            if (!empty($subspecies)) {
                $node->title .= ' ' . $subspecies;
            }
        }

        node_save($node);
    }
}

/**
 * Import data for AEWA Species status vocabularies
*/
function cms_species_update_7026() {
    $current_profile = CMSUtils::get_current_profile();
    if ($current_profile != 'aewa') {
        return t('Update script not supported!');
    }

    $JSON_file = drupal_get_path('module', 'cms_initial_data') . '/' . $current_profile . '/species_status.json';
    $json_data = file_get_contents($JSON_file);
    $ob = json_decode($json_data, true);

    foreach ($ob as $voc) {
        $voc_machine_name = $voc['machine_name'];
        $voc_name = $voc['name'];
        $vocabulary = CMSUtils::vocabulary_get_or_create($voc_name, $voc_machine_name);

        if ($vocabulary) {
            $vid = $vocabulary->vid;
            if (isset($voc['categories']) && !empty($voc['categories'])) {
                foreach ($voc['categories'] as $category) {
                    $term = CMSUtils::vocabulary_get_or_create_term($category['name'], $vocabulary->machine_name, TRUE, $category['description']);
                    if ($term) {
                        if (isset($category['subcategories']) && !empty($category['subcategories'])) {
                            $tid = $term->tid;
                            foreach ($category['subcategories'] as $subcategory) {
                                $sub_term = CMSUtils::vocabulary_get_or_create_term($subcategory['name'], $vocabulary->machine_name, TRUE, $subcategory['description'], array($tid));
                            }
                        }
                    }
                }
            }
        }
    }
}

/**
 * Update species authors and standard references
*/
function cms_species_update_7031() {
    $initial_data_path = drupal_get_path('module', 'cms_initial_data');

    $JSON_file = $initial_data_path . '/' . CMSUtils::get_current_profile() . '/species/updates/' . 'authors.json';

    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data, TRUE);

    foreach ($species_JSON as $scientific_name => $species) {
        $result = db_query("SELECT n.nid FROM {node} n WHERE n.title = :title AND n.type = :type", array(":title"=> $scientific_name, ":type"=> 'species'));
        $nid = $result->fetchField();
        if ($nid) {
            $node = node_load($nid);
            CMSSpecies::set_field_taxonomic_term($node, 'field_species_author', VOC_SPECIES_AUTHOR, $species);
            CMSSpecies::set_field_single_value($node, 'field_species_standard_reference', $species);

            node_save($node);
        }
    }

    return t('Species authors updated');
}

/**
 * Update species appendices
*/
function cms_species_update_7032() {
    $initial_data_path = drupal_get_path('module', 'cms_initial_data');

    $JSON_file = $initial_data_path . '/' . CMSUtils::get_current_profile() . '/species/updates/' . 'app.json';

    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data, TRUE);

    foreach ($species_JSON as $scientific_name => $species) {
        $result = db_query("SELECT n.nid FROM {node} n WHERE n.title = :title AND n.type = :type", array(":title"=> $scientific_name, ":type"=> 'species'));
        $nid = $result->fetchField();
        if ($nid) {
            $node = node_load($nid);
            CMSSpecies::set_appendix($node, $species);
            $instruments = CMSLegalInstrument::get_mapped_instruments();
            $instrument_cache = array();
            foreach ($instruments as $title => $id) {
                $instrument_cache[strtolower($title)] = $id;
            }

            $species_instruments = array();
            if (!empty($node->field_species_instruments[$node->language])) {
                foreach($node->field_species_instruments[$node->language] as  $row) {
                    $fc_array = array();
                    $fc = entity_load('field_collection_item', array($row['value']));
                    reset($fc);
                    $fc = current($fc);
                    $species_instruments[] = CMSSpecies::get_field_instrument_name($fc, 'field_species_instrument');
                }
            }

            $instruments_to_add['field_species_instruments'] = array();
            if (array_key_exists('field_species_instruments', $species)) {
                foreach ($species['field_species_instruments'] as $key => $value) {
                    if (!in_array($value['field_instrument'], $species_instruments)) {
                        $instruments_to_add['field_species_instruments'][] = array('field_instrument' => $value['field_instrument']);
                    }
                }
            }

            CMSSpecies::set_instruments($node, $instruments_to_add, TRUE, $instrument_cache);
            CMSSpecies::set_field_single_value($node, 'field_species_notes', $species);

            node_save($node);
        }
    }

    return t('Species appendices updated');
}

/**
 * Update species range states
*/
function cms_species_update_7033() {
    $initial_data_path = drupal_get_path('module', 'cms_initial_data');

    $JSON_file = $initial_data_path . '/' . CMSUtils::get_current_profile() . '/species/updates/' . 'range_states.json';

    $f = fopen($JSON_file, 'r');
    $JSON_data = fread($f, filesize($JSON_file));
    fclose($f);
    $species_JSON = json_decode($JSON_data, TRUE);

    foreach ($species_JSON as $common_name => $species) {
        # Check whether there are nodes with the given common name (name of the species in english)
        $query = new EntityFieldQuery();
        $query = $query->entityCondition('entity_type', 'node')
            ->fieldCondition('field_species_name_en', 'value', $common_name, '=')
            ->execute();

        if (!empty($query['node'])) {
            # There should always be only one node with the given common name
            $node = node_load(key($query['node']));

            $species_range_states = array();
            if (!empty($node->field_species_range_states[$node->language])) {
                foreach($node->field_species_range_states[$node->language] as $row) {
                    $field_collection = entity_load('field_collection_item', array($row['value']));
                    reset($field_collection);
                    $field_collection = current($field_collection);
                    $species_range_states[] =  CMSSpecies::get_field_country_code($field_collection, 'field_species_range_state');
                }
            }

            $add = FALSE;
            $range_states_to_add['field_species_range_states'] = array();
            $added_range_states_iso2 = array();
            foreach ($species['field_species_range_states'] as $key => $value) {
                $iso2 = $value['field_country'];
                if (!in_array($iso2, $species_range_states)) {
                    $add = TRUE;
                    $added_range_states_iso2[] = $iso2;
                    $range_states_to_add['field_species_range_states'][] = array('field_country' => $iso2);
                }
            }

            $species['field_species_range_states'] = $range_states_to_add['field_species_range_states'];
            $species['title'] = $common_name;

            if ($add) {
                CMSSpecies::set_species_range_states($node, $species);
                node_save($node);
            }
        }
    }

    return t('Species range states updated');
}
