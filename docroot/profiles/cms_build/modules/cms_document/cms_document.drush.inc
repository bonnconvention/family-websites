<?php

function cms_document_drush_command() {
    $items['doc_change_published_date'] = array(
        'description' => 'Changes all the documents published date with earliest date from attachments',
        'examples' => array('drush doc_change_published_date' => 'Changes all the documents published date with earliest date from attachments'),
    );
    $items['document-csv-import'] = array(
        'description' => 'Import documents from CSV',
        'examples' => array('drush document-csv-import documents.csv' => 'Import documents from the documents.csv file'),
        'callback' => 'cms_document_csv_import',
    );
    return $items;
}

function drush_document_doc_change_published_date()
{
    $documents = node_load_multiple(array(), array( "type" => "document"));
    $count = 0;
    foreach ($documents as $index => $node) {
        CMSUtils::println("Checking %s", $node->title);
        $modified = CMSDocument::set_pub_date($node);
        if ($modified) {
            node_save($node);
            CMSUtils::println("Document %s updated", $node->title);
            $count++;
        }
    }

    CMSUtils::println("Document %s updated", $count);
}

function cms_document_csv_import() {
  $args = func_get_args();
  $path = $args[0];

  if (empty($path)) {
    drush_log("Missing path parameter. Correct usage: drush document-csv-import /path/to/documents.csv", 'error');
    return;
  }

  $extension = pathinfo($path, PATHINFO_EXTENSION);
  if ($extension !== 'csv') {
    drush_log("Invalid file format.", 'error');
  }

  if (($h = fopen($path, "r")) === FALSE) {
    return;
  }

  $headers = fgetcsv($h, null, ',');
  $rows = [];
  while (($data = fgetcsv($h, null, ',')) !== FALSE)  {
    if (count($data) < 2) {
      continue;
    }
    $rows[] = array_combine($headers, $data);
  }
  fclose($h);

  foreach ($rows as $row) {
    if (empty($row['Title'])) {
      return;
    }
    $node = new \stdClass();
    $node->title = $row['Title'];
    $node->language = 'en';
    $node->type = 'document';
    if (!empty($row['Number'])) {
      $node->field_document_number[LANGUAGE_NONE][0]['value'] = $row['Number'];
    }
    if (!empty($row['Type'])) {
      $term = _cms_document_get_term_by_name($row['Type'], 'document_type');
      if (!empty($term)) {
        $node->field_document_type[LANGUAGE_NONE][0]['tid'] = $term;
      }
    }
    if (!empty($row['Decisions directed to'])) {
      $directed_to = explode(', ', $row['Decisions directed to']);
      foreach ($directed_to as $term) {
        $term = _cms_document_get_term_by_name($term, 'document_decision_directed_to');
        if (empty($term)) {
          continue;
        }
        $node->field_decision_directed_to[LANGUAGE_NONE][] = ['tid' => $term];
      }
    }
    if (!empty($row['Description'])) {
      $node->body['en'][0]['value'] = $row['Description'];
      $node->body['en'][0]['format'] = 'full_html';
    }
    if (!empty($row['CMS Instrument']) && !empty(node_load($row['CMS Instrument']))) {
      $node->field_instrument[LANGUAGE_NONE][0]['target_id'] = $row['CMS Instrument'];
    }

    node_save($node);

    foreach (['fr', 'es'] as $language) {
      if (empty($row["Title $language"]) && empty($row["Description $language"])) {
        continue;
      }

      $handler = entity_translation_get_handler('node', $node);
      $translation = [
        'translate' => 0,
        'status' => 1,
        'language' => $language,
        'source' => 'en',
      ];

      $values = [];
      if (!empty($row["Title $language"])) {
        $values['title_field'][$language][0]['value'] = $row["Title $language"];
      }

      if (!empty($row["Description $language"])) {
        $values['body'][$language][0]['value'] = $row["Description $language"];
      }

      $handler->setTranslation($translation, $values);
      field_attach_update('node', $node);
    }
  }
}

function _cms_document_get_term_by_name($name, $vocabulary) {
  $terms = taxonomy_get_term_by_name($name, $vocabulary);

  if (!empty($terms)) {
    $term = reset($terms);
    return $term->tid;
  }

  return NULL;
}
