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
        'enable' => 1,
        'plugin' => 'Drupal\\taxonomy_external_sync\\plugin\\source\\VocBenchRDFSource',
        'plugin_config' => array(
          'url' => 'http://informea.org/sites/default/files/export/informea.rdf',
          'id_field' => 'uri',
          'parent_field' => 'broader',
        ),
        'mappings' => array(
          'description_field' => 'definition',
          'field_taxonomy_term_uri' => 'uri',
          'name_field' => 'prefLabel',
        ),
      ),
    ),
  );
}
