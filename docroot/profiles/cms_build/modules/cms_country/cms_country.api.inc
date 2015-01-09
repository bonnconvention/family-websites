<?php

function api_country_get_ratification_status($node){
    return API_CMS::api_get_field_collection_values($node, 'field_country_instrument_status', API_COUNTRY::$ratification_status_fields);
}

function api_country_get_entity_ratification_status($nid){
    return API_CMS::api_get_entity_field_collection_values($nid, 'country', 'field_country_instrument_status', API_COUNTRY::$ratification_status_fields);
}

function api_country_get_anual_contribution($node){
    return API_CMS::api_get_field_collection_values($node, 'field_country_anual_contribution', API_COUNTRY::$anual_contribution);
}

function api_country_get_voluntary_contribution($node){
    return API_CMS::api_get_field_collection_values($node, 'field_country_voluntary_contrib', API_COUNTRY::$voluntary_contribution);
}

function api_country_get_arrears_contribution($node){
    return API_CMS::api_get_field_collection_values($node, 'field_country_arrears', API_COUNTRY::$arrears_contribution);
}

/**
 * Class API_COUNTRY
 */
class API_COUNTRY {
    /**
     * static variables for different groups of fields/ fields collection
     * with field names as keys
     * and api display key as value
     */

    static $ratification_status_fields = array (
        "field_instrument" => "instrument",
        "field_country_status" => "status",
        "field_country_ratification_date" => "ratification_date",
        "field_country_notes" => "notes",
    );

    static $anual_contribution = array (
        "field_country_ac_year" => "year",
        "field_country_ac_value" => "value",
        "field_country_ac_currency" => "currency",
    );

    static $voluntary_contribution = array (
        "field_country_vc_year" => "year",
        "field_country_vc_value" => "value",
        "field_country_vc_currency" => "currency",
    );

    static $arrears_contribution = array (
        "field_country_arrears_year" => "year",
        "field_country_arrears_value" => "value",
        "field_country_arrears_currency" => "currency",
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