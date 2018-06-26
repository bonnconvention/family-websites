<?php
/**
 * @file
 * cms_thesaurus.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cms_thesaurus_taxonomy_default_vocabularies() {
  return array(
    'thesaurus_cms' => array(
      'name' => 'Thesaurus - CMS',
      'machine_name' => 'thesaurus_cms',
      'description' => 'Main CMS thesaurus',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => TRUE,
        'plugin' => 'Drupal\\taxonomy_external_sync\\plugin\\source\\VocBenchRDFSource',
        'plugin_config' => array(
          'url' => 'https://thesaurus.informea.org/export/cms.rdf',
          'id_field' => 'uri',
          'parent_field' => 'broader',
          'delete_deprecated_terms' => 0,
          'delete_missing_terms' => 0,
        ),
        'mappings' => array(
          'description_field' => 'definition',
          'field_related_informea_terms' => '',
          'field_term_reference_url' => 'relatedMatch',
          'name_field' => 'prefLabel',
        ),
      ),
    ),
    'thesaurus_informea' => array(
      'name' => 'Thesaurus - InforMEA',
      'machine_name' => 'thesaurus_informea',
      'description' => 'Main InforMEA thesaurus',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => TRUE,
        'plugin' => 'Drupal\\taxonomy_external_sync\\plugin\\source\\VocBenchRDFSource',
        'plugin_config' => array(
          'url' => 'https://thesaurus.informea.org/export/informea.rdf',
          'id_field' => 'uri',
          'parent_field' => 'broader',
          'delete_deprecated_terms' => 0,
          'delete_missing_terms' => 0,
        ),
        'mappings' => array(
          'description_field' => 'definition',
          'field_taxonomy_term_uri' => 'uri',
          'field_term_reference_url' => 'relatedMatch',
          'name_field' => 'prefLabel',
        ),
      ),
    ),
  );
}
