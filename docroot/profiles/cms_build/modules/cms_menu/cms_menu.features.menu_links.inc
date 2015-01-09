<?php
/**
 * @file
 * cms_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cms_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_authors-vocabulary:admin/structure/taxonomy/publication_authors
  $menu_links['main-menu_authors-vocabulary:admin/structure/taxonomy/publication_authors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/publication_authors',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Authors vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_authors-vocabulary:admin/structure/taxonomy/publication_authors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_publications:<nolink>',
  );
  // Exported menu link: main-menu_classes-vocabulary:admin/structure/taxonomy/species_class
  $menu_links['main-menu_classes-vocabulary:admin/structure/taxonomy/species_class'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_class',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Classes vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_classes-vocabulary:admin/structure/taxonomy/species_class',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_contacts:<front>
  $menu_links['main-menu_contacts:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => 'List, edit, or add contacts.',
      ),
      'identifier' => 'main-menu_contacts:<front>',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 0,
  );
  // Exported menu link: main-menu_countries:<nolink>
  $menu_links['main-menu_countries:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_countries:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_currency-vocabulary:admin/structure/taxonomy/currency
  $menu_links['main-menu_currency-vocabulary:admin/structure/taxonomy/currency'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/currency',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Currency vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_currency-vocabulary:admin/structure/taxonomy/currency',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:<nolink>',
  );
  // Exported menu link: main-menu_document-statuses-vocabulary:admin/structure/taxonomy/document_status
  $menu_links['main-menu_document-statuses-vocabulary:admin/structure/taxonomy/document_status'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/document_status',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Document statuses vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_document-statuses-vocabulary:admin/structure/taxonomy/document_status',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_documents:<nolink>',
  );
  // Exported menu link: main-menu_document-submitters-vocabulary:admin/structure/taxonomy/document_submitter
  $menu_links['main-menu_document-submitters-vocabulary:admin/structure/taxonomy/document_submitter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/document_submitter',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Document submitters vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_document-submitters-vocabulary:admin/structure/taxonomy/document_submitter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_documents:<nolink>',
  );
  // Exported menu link: main-menu_document-types-vocabulary:admin/structure/taxonomy/document_type
  $menu_links['main-menu_document-types-vocabulary:admin/structure/taxonomy/document_type'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/document_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Document types vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_document-types-vocabulary:admin/structure/taxonomy/document_type',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_documents:<nolink>',
  );
  // Exported menu link: main-menu_documents:<nolink>
  $menu_links['main-menu_documents:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_documents:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_families-vocabulary:admin/structure/taxonomy/species_family
  $menu_links['main-menu_families-vocabulary:admin/structure/taxonomy/species_family'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_family',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Families vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_families-vocabulary:admin/structure/taxonomy/species_family',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_genus-vocabulary:admin/structure/taxonomy/species_genus
  $menu_links['main-menu_genus-vocabulary:admin/structure/taxonomy/species_genus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_genus',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Genus vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_genus-vocabulary:admin/structure/taxonomy/species_genus',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_languages-vocabulary:admin/structure/taxonomy/languages
  $menu_links['main-menu_languages-vocabulary:admin/structure/taxonomy/languages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/languages',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Languages vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_languages-vocabulary:admin/structure/taxonomy/languages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_publications:<nolink>',
  );
  // Exported menu link: main-menu_manage-instrument-statuses:admin/structure/taxonomy/instrument_status
  $menu_links['main-menu_manage-instrument-statuses:admin/structure/taxonomy/instrument_status'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/instrument_status',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage instrument statuses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-instrument-statuses:admin/structure/taxonomy/instrument_status',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_manage-instruments:<nolink>',
  );
  // Exported menu link: main-menu_manage-instrument-types:admin/structure/taxonomy/instrument_type
  $menu_links['main-menu_manage-instrument-types:admin/structure/taxonomy/instrument_type'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/instrument_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage instrument types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-instrument-types:admin/structure/taxonomy/instrument_type',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_manage-instruments:<nolink>',
  );
  // Exported menu link: main-menu_manage-instruments:<nolink>
  $menu_links['main-menu_manage-instruments:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Manage instruments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-instruments:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manage-mailing-lists:admin/structure/taxonomy/contacts_mailing
  $menu_links['main-menu_manage-mailing-lists:admin/structure/taxonomy/contacts_mailing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/contacts_mailing',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage mailing lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-mailing-lists:admin/structure/taxonomy/contacts_mailing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contacts:<front>',
  );
  // Exported menu link: main-menu_manage-official-languages:admin/structure/taxonomy/un_languages
  $menu_links['main-menu_manage-official-languages:admin/structure/taxonomy/un_languages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/un_languages',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage official languages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-official-languages:admin/structure/taxonomy/un_languages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_countries:<nolink>',
  );
  // Exported menu link: main-menu_manage-regions:admin/structure/taxonomy/region
  $menu_links['main-menu_manage-regions:admin/structure/taxonomy/region'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/region',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage regions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-regions:admin/structure/taxonomy/region',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_countries:<nolink>',
  );
  // Exported menu link: main-menu_manage-status-organization:admin/structure/taxonomy/contacts_status_organization
  $menu_links['main-menu_manage-status-organization:admin/structure/taxonomy/contacts_status_organization'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/contacts_status_organization',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage status organization',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-status-organization:admin/structure/taxonomy/contacts_status_organization',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contacts:<front>',
  );
  // Exported menu link: main-menu_manage-status-person:admin/structure/taxonomy/contacts_status_person
  $menu_links['main-menu_manage-status-person:admin/structure/taxonomy/contacts_status_person'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/contacts_status_person',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Manage status person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-status-person:admin/structure/taxonomy/contacts_status_person',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contacts:<front>',
  );
  // Exported menu link: main-menu_meeting-kinds-vocabulary:admin/structure/taxonomy/meeting_kind
  $menu_links['main-menu_meeting-kinds-vocabulary:admin/structure/taxonomy/meeting_kind'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/meeting_kind',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Meeting kinds vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meeting-kinds-vocabulary:admin/structure/taxonomy/meeting_kind',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_meetings:<nolink>',
  );
  // Exported menu link: main-menu_meeting-statuses-vocabulary:admin/structure/taxonomy/meeting_status
  $menu_links['main-menu_meeting-statuses-vocabulary:admin/structure/taxonomy/meeting_status'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/meeting_status',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Meeting statuses vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meeting-statuses-vocabulary:admin/structure/taxonomy/meeting_status',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_meetings:<nolink>',
  );
  // Exported menu link: main-menu_meeting-types-vocabulary:admin/structure/taxonomy/meeting_type
  $menu_links['main-menu_meeting-types-vocabulary:admin/structure/taxonomy/meeting_type'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/meeting_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Meeting types vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meeting-types-vocabulary:admin/structure/taxonomy/meeting_type',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_meetings:<nolink>',
  );
  // Exported menu link: main-menu_meetings:<nolink>
  $menu_links['main-menu_meetings:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meetings:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_orders-vocabulary:admin/structure/taxonomy/species_order
  $menu_links['main-menu_orders-vocabulary:admin/structure/taxonomy/species_order'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_order',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Orders vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_orders-vocabulary:admin/structure/taxonomy/species_order',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_projects:<nolink>
  $menu_links['main-menu_projects:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_projects:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_publication-types-vocabulary:admin/structure/taxonomy/publication_types
  $menu_links['main-menu_publication-types-vocabulary:admin/structure/taxonomy/publication_types'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/publication_types',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Publication types vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_publication-types-vocabulary:admin/structure/taxonomy/publication_types',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_publications:<nolink>',
  );
  // Exported menu link: main-menu_publications:<nolink>
  $menu_links['main-menu_publications:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_publications:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_species-authors-vocabulary:admin/structure/taxonomy/species_author
  $menu_links['main-menu_species-authors-vocabulary:admin/structure/taxonomy/species_author'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_author',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Species Authors vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_species-authors-vocabulary:admin/structure/taxonomy/species_author',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_species-vocabulary:admin/structure/taxonomy/species_species
  $menu_links['main-menu_species-vocabulary:admin/structure/taxonomy/species_species'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_species',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Species vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_species-vocabulary:admin/structure/taxonomy/species_species',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_species:<nolink>
  $menu_links['main-menu_species:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Species',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_species:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_subspecies-vocabulary:admin/structure/taxonomy/species_subspecies
  $menu_links['main-menu_subspecies-vocabulary:admin/structure/taxonomy/species_subspecies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species_subspecies',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Subspecies vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_subspecies-vocabulary:admin/structure/taxonomy/species_subspecies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_taxonomic-groups-vocabulary:admin/structure/taxonomy/project_taxonomic_group
  $menu_links['main-menu_taxonomic-groups-vocabulary:admin/structure/taxonomy/project_taxonomic_group'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/project_taxonomic_group',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Taxonomic groups vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_taxonomic-groups-vocabulary:admin/structure/taxonomy/project_taxonomic_group',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:<nolink>',
  );
  // Exported menu link: main-menu_threats-vocabulary:admin/structure/taxonomy/threats
  $menu_links['main-menu_threats-vocabulary:admin/structure/taxonomy/threats'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/threats',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Threats vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_threats-vocabulary:admin/structure/taxonomy/threats',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: main-menu_view-contacts:manage/contacts/listing
  $menu_links['main-menu_view-contacts:manage/contacts/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/contacts/listing',
    'router_path' => 'manage/contacts/listing',
    'link_title' => 'View contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-contacts:manage/contacts/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contacts:<front>',
  );
  // Exported menu link: main-menu_view-countries:manage/country/listing
  $menu_links['main-menu_view-countries:manage/country/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/country/listing',
    'router_path' => 'manage/country/listing',
    'link_title' => 'View countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-countries:manage/country/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_countries:<nolink>',
  );
  // Exported menu link: main-menu_view-documents:manage/document/listing
  $menu_links['main-menu_view-documents:manage/document/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/document/listing',
    'router_path' => 'manage/document/listing',
    'link_title' => 'View documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-documents:manage/document/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_documents:<nolink>',
  );
  // Exported menu link: main-menu_view-instruments:manage/legal_instrument/listing
  $menu_links['main-menu_view-instruments:manage/legal_instrument/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/legal_instrument/listing',
    'router_path' => 'manage/legal_instrument/listing',
    'link_title' => 'View instruments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-instruments:manage/legal_instrument/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_manage-instruments:<nolink>',
  );
  // Exported menu link: main-menu_view-meetings:manage/meeting/listing
  $menu_links['main-menu_view-meetings:manage/meeting/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/meeting/listing',
    'router_path' => 'manage/meeting/listing',
    'link_title' => 'View meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-meetings:manage/meeting/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_meetings:<nolink>',
  );
  // Exported menu link: main-menu_view-organizations:manage/contacts/organizations/listing
  $menu_links['main-menu_view-organizations:manage/contacts/organizations/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/contacts/organizations/listing',
    'router_path' => 'manage/contacts/organizations/listing',
    'link_title' => 'View organizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-organizations:manage/contacts/organizations/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_contacts:<front>',
  );
  // Exported menu link: main-menu_view-projects:manage/project/listing
  $menu_links['main-menu_view-projects:manage/project/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/project/listing',
    'router_path' => 'manage/project/listing',
    'link_title' => 'View projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-projects:manage/project/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_projects:<nolink>',
  );
  // Exported menu link: main-menu_view-publications:manage/publication/listing
  $menu_links['main-menu_view-publications:manage/publication/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/publication/listing',
    'router_path' => 'manage/publication/listing',
    'link_title' => 'View publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-publications:manage/publication/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_publications:<nolink>',
  );
  // Exported menu link: main-menu_view-species:manage/species/listing
  $menu_links['main-menu_view-species:manage/species/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage/species/listing',
    'router_path' => 'manage/species/listing',
    'link_title' => 'View species',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-species:manage/species/listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_species:<nolink>',
  );
  // Exported menu link: user-menu_administration:admin
  $menu_links['user-menu_administration:admin'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_administration:admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Authors vocabulary');
  t('Classes vocabulary');
  t('Contacts');
  t('Countries');
  t('Currency vocabulary');
  t('Document statuses vocabulary');
  t('Document submitters vocabulary');
  t('Document types vocabulary');
  t('Documents');
  t('Families vocabulary');
  t('Genus vocabulary');
  t('Languages vocabulary');
  t('Log out');
  t('Manage instrument statuses');
  t('Manage instrument types');
  t('Manage instruments');
  t('Manage mailing lists');
  t('Manage official languages');
  t('Manage regions');
  t('Manage status organization');
  t('Manage status person');
  t('Meeting kinds vocabulary');
  t('Meeting statuses vocabulary');
  t('Meeting types vocabulary');
  t('Meetings');
  t('Orders vocabulary');
  t('Projects');
  t('Publication types vocabulary');
  t('Publications');
  t('Species');
  t('Species Authors vocabulary');
  t('Species vocabulary');
  t('Subspecies vocabulary');
  t('Taxonomic groups vocabulary');
  t('Threats vocabulary');
  t('User account');
  t('View contacts');
  t('View countries');
  t('View documents');
  t('View instruments');
  t('View meetings');
  t('View organizations');
  t('View projects');
  t('View publications');
  t('View species');


  return $menu_links;
}
