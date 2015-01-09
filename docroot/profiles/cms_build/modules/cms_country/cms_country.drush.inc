<?php

function cms_country_drush_command() {
    $items['import_countries'] = array(
        'description' => 'Import official list of countries provided by this module in cms_country.json file',
        'examples' => array(
            'drush import_default_countries' => 'Import countries into the Drupal instance'
        )
    );

    $items['export_countries'] = array(
        'description' => 'Export official list of countries',
        'arguments' => array(
            'destination' => 'Required',
        ),
        'required-arguments' => 1,
    );

    $items['import_countries_details'] = array(
        'description' => 'Import details for already imported countries',
        'options' => array(
            'source' => 'Optional. Alternative source file to load the data from. If missing, loads from the default file(s)'
        ),
    );
    $items['country_update_regions'] = array(
        'description' => 'Update region field after remake field_region to point to "region" vocabulary',
        'options' => array(
            'source' => 'Optional. Alternative source file to load the data from. If missing, loads from the default file(s)'
        ),
    );
    $items['copy_entry_intoforce_status'] = array(
        'description' => '#1887 - Update all countries ratification status date for current profile Instrument with entry into force date',
        'examples' => array(
            'drush copy_entry_intoforce_status' => '',
        ),
    );

    return $items;
}

function drush_cms_country_import_countries() {
    Country::import_default_countries();
}

/**
 * Export country nodes to a specified JSON file
 *
 * @param   string   $destination_dir
*/
function drush_cms_country_export_countries($destination_dir = '') {
    if (!CMSUtils::is_valid_dir($destination_dir, TRUE)) {
        CMSUtils::println('Invalid export directory %s. Please provide a valid export directory', $destination_dir);
        return;
    }

    CMSUtils::println('Exporting countries to %s', $destination_dir);

    $file = $destination_dir . DIRECTORY_SEPARATOR . 'countries.json';
    $countries = array();
    $nodes = node_load_multiple(array(), array('type' => 'country'));

    CMSUtils::println('Found %s countries', count($nodes));
    $data = array();
    foreach ($nodes as $node) {
        $data[] = Country::node_to_array($node);
        CMSUtils::println('%s exported', $node->title);
    }

    if (CMSUtils::use_pretty_print()) {
        $json = json_encode($data, JSON_PRETTY_PRINT);
    }else {
        $json = json_encode($data);
    }

    $handler = fopen($file, 'w') or die(sprintf('Cannot open file %s', $file));
    CMSUtils::println('%d countries exported to %s', count($nodes), $file);
    fwrite($handler, $json);
    fclose($handler);
}

function drush_cms_country_import_countries_details($source_file = 'countries.json') {
    $current_profile = CMSUtils::get_current_profile();
    $source_dir = drupal_realpath(drupal_get_path('module', 'cms_initial_data')) . DIRECTORY_SEPARATOR . $current_profile;

    if(!empty($source_dir) && !CMSUtils::is_valid_dir($source_dir)) {
        CMSUtils::println('Invalid source directory specified %s', $source_dir);
        return;
    }

    $file_path = $source_dir . DIRECTORY_SEPARATOR . $source_file;

    CMSUtils::println('Importing countries from %s', $file_path);
    $data = CMSUtils::read_json($file_path, TRUE);
    CMSUtils::println('Found %s countries', count($data));

    foreach ($data as $country) {
        Country::node_from_array($country);
        CMSUtils::println("Imported country " . $country['title']);
    }
}
function drush_cms_country_update_regions($file_path) {

    if(drupal_valid_path($file_path, TRUE)) {
        CMSUtils::println('Invalid source file specified %s', $file_path);
        return;
    }

    CMSUtils::println('Importing countries from %s', $file_path);
    $data = CMSUtils::read_json($file_path, TRUE);
    CMSUtils::println('Found %s countries', count($data));

    foreach ($data as $country) {
        $query = new EntityFieldQuery();
        $entities = $query->entityCondition('entity_type', 'node')
            ->propertyCondition('type', 'country')
            ->fieldCondition('field_country_iso2', 'value', $country['field_country_iso2'], '=')
            ->range(0,1)
            ->execute();
        if (!empty($entities['node'])) {
            $country_node = node_load(array_shift(array_keys($entities['node'])));
            $language = field_language('node', $country_node, 'field_region');


            $current_term = taxonomy_get_term_by_name($country['field_country_region'], 'region');
            if (!empty($current_term)) {
                $region_tid = current($current_term)->tid;
                $update_region = TRUE;
                if (!empty($country_node->field_region[$language])) {
                foreach($country_node->field_region[$language] as $region) {
                    if ($region['tid'] == $region_tid) {
                        $update_region = FALSE;
                    }
                }

                }
                $country_node->field_region[$language][]= array('tid' => current($current_term)->tid);
            }
            if ($update_region) {
                node_save($country_node);
                CMSUtils::println("Updated country " . $country['title']);
            } else {
                CMSUtils::println("Country skipped " . $country['title'] .' ...');
            }
        } else {
            CMSUtils::println('Country %s couldn\'t be found by ISO2', $country->title);
        }
    }
}

/**
 * Copy entry into force date in ratification date (where is empty) for current instance Instrument
 * Ticket #1887
 */

function drush_cms_country_copy_entry_intoforce_status() {

    $current_profile = CMSUtils::get_current_profile();

    //Get current instrument
    $query = new EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'legal_instrument')
        ->propertyCondition('title', $current_profile)
        ->propertyCondition('status', 1)
        ->range(0,1)
        ->execute();
    $count_saves = 0;

    if (!empty($entities['node'])) {
        $instrument = node_load(array_shift(array_keys($entities['node'])));
        //Get fieldcollections country status that have refference to current instrument
        $query = new EntityFieldQuery();
        $entities = $query->entityCondition('entity_type', 'field_collection_item')
            ->propertyCondition('field_name', 'field_country_instrument_status')
            ->fieldCondition('field_instrument', 'target_id', $instrument->nid, '=')
            ->execute();

        if (!empty($entities['field_collection_item'])) {
            foreach ($entities['field_collection_item'] as $fc_id => $fc) {
                $field_coll = field_collection_item_load($fc_id);

                //If no ratification date on this fieldcollecton,-> load country
                if (empty($field_coll->field_country_ratification_date[LANGUAGE_NONE][0]['value'])) {
                    $query = new EntityFieldQuery();
                    $countries = $query->entityCondition('entity_type', 'node')
                        ->propertyCondition('type', 'country')
                        ->fieldCondition('field_country_instrument_status', 'value', $fc_id, '=')
                        ->execute();
                    if (!empty($countries['node'])) {
                        $country = node_load(current($countries['node'])->nid);
                        if (!empty($country->field_country_entry_into_force[LANGUAGE_NONE][0]['value'])) {
                            CMSUtils::println('Country %s has ratification status date empty for %s', $country->title, $instrument->title);
                            CMSUtils::println('Populate it with entry into force. Updating.......');
                            $field_coll->field_country_ratification_date[LANGUAGE_NONE][0]['value'] =
                                $country->field_country_entry_into_force[LANGUAGE_NONE][0]['value'];
                            $field_coll->save(TRUE);
                            $count_saves++;
                        }
                    }
                }
            }
        }
    }
    CMSUtils::println('%s Field Collection saved', $count_saves);
}
