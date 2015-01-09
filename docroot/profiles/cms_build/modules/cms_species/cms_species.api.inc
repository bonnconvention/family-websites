<?php

/**
 * Menu callback for species
 *
 * Create an associative array with species UUIDs and title
*/
function cms_species_list_from_cache($website) {
    global $user;
    $response = array();
    $species = array();

    $websites = CMSUtils::get_all_websites();
    if (array_key_exists($website, $websites)) {
        $url = $websites[$website]['url'];
        $cookie_file = CMSUtils::remote_login($url);
        if ($cookie_file && $user->uid) {
            $ch = curl_init();
            $curl_options = array(
                CURLOPT_HEADER => 0,
                CURLOPT_RETURNTRANSFER => 1,
                CURLOPT_COOKIEFILE => $cookie_file,
                CURLOPT_URL => $url . '/api/list/species_from_cache/' . $website,
            );

            curl_setopt_array($ch, $curl_options);
            $species = curl_exec($ch);
            $species = json_decode($species);
            curl_close($ch);
            unset($ch);

            $ch = curl_init();
            $curl_options[CURLOPT_URL] = $url . '/user/logout';
            curl_setopt_array($ch, $curl_options);
            curl_exec($ch);
            unset($ch);

            unlink($cookie_file);
        }

        $response = (array) $species;
    }

    return $response;
}

/**
 * @param $type
 * @param string $profile
 *
 * @return array
 */
function api_species_list($type, $profile = '') {
    if (empty($profile)) {
        $profile = CMSUtils::get_current_profile();
    }

    if ($type == 'species_from_cache') {
        $cache_file = drupal_get_path('module', 'cms') . _DS_ . 'remote_cache' . _DS_ . $profile . _DS_  . SPECIES_CACHE_FILENAME;
        $species = array();
        if (file_exists($cache_file)) {
            $species = file_get_contents($cache_file);
            $species = json_decode($species);
        }

        return (array) $species;
    }else {
        $species = CMSSpecies::map_remote_species(CMSSpecies::$bundle, $profile);
        echo json_encode($species);
        drupal_exit();
    }
}

/**
 * @param string $data
 * @param array $species_options
 * @param string $website
 * @param array $websites_list
 *
 * @return array
 */
function cms_species_remote_options($data = '', $species_options = array(), $website = '', $websites_list = array()) {
    if (is_array($data) && isset($websites_list[$website])) {
        $remote_website_data = $websites_list[$website];
        foreach ($data as $uuid => $species) {
            $species_options[$website . ':' . $uuid] = $species . ' (' . $remote_website_data['title'] . ')';
        }
    }

    return $species_options;
}





/**
 * Function used in Services Views to return the name group
 *
 * @author Dragos Dumitrescu
 */

function api_species_name_group($node) {
    $names = array();

    foreach (API_SPECIES::$name as $field_name => $new_key) {
        $langcode = API_CMS::get_field_language($node, $field_name);
        if ( !empty($node->{$field_name}[$langcode]) ) {
            $names[$new_key]= $node->{$field_name}[$langcode][0]['value'];
        }
    }
    return $names;
}



/**
 * Function used in Services Views to return the taxonomy group of fields
 *
 * @author Dragos Dumitrescu
 */

function api_species_taxonomy_group($node) {
    $taxonomy = array();

    foreach (API_SPECIES::$taxonomy['text'] as $field_name => $new_key) {
        $taxonomy[$new_key] = current(API_CMS::get_api_field_values($field_name, $node));
    }
    foreach (API_SPECIES::$taxonomy['texts'] as $field_name => $new_key) {
        $taxonomy[$new_key] = API_CMS::get_api_field_values($field_name, $node);
    }

    foreach (API_SPECIES::$taxonomy['term'] as $field_name => $new_key) {
        $taxonomy[$new_key] = API_CMS::api_get_taxonomy_term($field_name, $node);
    }
    return $taxonomy;
}



/**
 * Function used in Services Views to return the assesment information group of fields
 *
 * @author Dragos Dumitrescu
 */

function api_species_assessment_info_group($node) {
    return API_CMS::api_get_field_collection_values($node, 'field_species_instruments', API_SPECIES::$species_instruments);
}


/**
 * Function used in Services Views to return field_species_pop field collection
 *
 * @author Dragos Dumitrescu
 */

function api_species_population($node) {
    return API_CMS::api_get_field_collection_values($node, 'field_species_pop', API_SPECIES::$population_fields);
}


/**
 * Function used in Services Views to return field_species_pop_size field-collection's fields values
 *
 * @author Dragos Dumitrescu
 */

function api_species_pop_size($node) {
    return API_CMS::api_get_field_collection_values($node, 'field_species_pop_size', API_SPECIES::$pop_size_fields);
}


/**
 * Function used in Services Views to return geographic range group
 *
 * @author Dragos Dumitrescu
 */

function api_species_geographic_range($node) {
    $result = array();
    $result['range_states'] = api_species_range_states($node);
    $result['notes'] = current(API_CMS::get_api_field_values('field_species_range_states_notes', $node));
    return $result;
}


/**
 * Function used by api_geographic_range to get  field_species_range_states field colelction's field values
 *
 * @author Dragos Dumitrescu
 */

function api_species_range_states($node) {
    return API_CMS::api_get_field_collection_values($node, 'field_species_range_states', API_SPECIES::$range_states_fields);
}

function api_species_status_per_country($node) {
    $result = array();
    $result['range_states'] = API_CMS::api_get_field_collection_values($node, 'field_species_status_per_country', API_SPECIES::$status_country_fields);
    return $result;
}


/**
 * Function used in Services views to get  field_species_threats field collection's field values
 *
 * @author Dragos Dumitrescu
 */

function api_species_threats($node) {
    return API_CMS::api_get_field_collection_values($node, 'field_species_threats', API_SPECIES::$threats);
}


/**
 * Class API_SPECIES
 */
class API_SPECIES {
    /**
     * static variables for different groups of fields/ fields collection
     * with field names as keys
     * and api display key as value
     */
    static $pop_size_fields = array(
        "field_species_pop_size_r"      => "population_name",

        "field_species_pop_size_i"      => "size_interval",
        "field_species_pop_size_q"      => "size_quality",
        "field_species_pop_size_e"      => "estimated_size",
        "field_species_pop_size_ref"    => "size_reference",
        "field_species_pop_size_n"      => "size_notes",

        "field_species_pop_trend_i"     => "trend_interval",
        "field_species_rend_size_q"     => "trend_quality",
        "field_species_pop_trend_t"     => "trend",
        "field_species_pop_trend_ref"   => "trend_reference",
        "field_species_pop_trend_n"     => "trend_notes",
    )   ;

    static $population_fields = array(
        "field_instrument"      => "instrument",
        "field_species_pop_v"      => "name",
    );

    static $species_instruments = array(
        "field_instrument"      => "instrument",
        "field_species_instrument_date" => "date_of_entry",
    );

    static $range_states_fields = array (
        "field_country" => "range_state",
        "field_species_territories" => "territories",
        "field_species_range_state_status" => "status",
    );

    static $status_country_fields = array (
        "field_country" => "range_state",
        "field_species_aewa_status" => "status",
    );

    static $threats = array (
        "field_species_threat_notes" => "notes",
        "field_threats" => "threat",
    );

    static $term_reference = array(
        "field_species_class"       => "class"
    );

    static $name = [
        "field_species_name_en"       => "en",
        "field_species_name_fr"       => "fr",
        "field_species_name_es"       => "es",
        "field_species_name_de"       => "de",
        "field_species_former_name"   => "former",
    ];
    /**
     * text - reffers to single value text fields
     * texts -reffers to multiple value text fields
     * term  - reffers to single term value  term-refference fields
     */
    static $taxonomy = array(
        'texts' => array(
           'field_species_synonyms'            => 'synonyms',
           'field_species_experts'             => 'experts',
        ),
        'text' => array(
            'field_species_standard_reference'  => 'standard_reference',
        ),
        'term' => array(
            'field_species_species'         => 'species',
            'field_species_subspecies'      => 'subspecies',
            'field_species_genus'           => 'genus',
            'field_species_class'           => 'class',
            'field_species_family'          => 'family',
            'field_species_author'          => 'author',
        )
    );

}
