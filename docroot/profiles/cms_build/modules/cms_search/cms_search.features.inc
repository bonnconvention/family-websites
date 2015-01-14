<?php
/**
 * @file
 * cms_search.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cms_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function cms_search_default_search_api_index() {
  $items = array();
  $items['default_multilingual_node_index'] = entity_import('search_api_index', '{
    "name" : "Default multilingual node index",
    "machine_name" : "default_multilingual_node_index",
    "description" : "An automatically created search index for indexing multilingual node data. Might be configured to specific needs.",
    "server" : "",
    "item_type" : "search_api_et_node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "search_api_et" : { "include" : "incomplete", "fallback language" : "en" },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0"
          }
        },
        "search_api_attachments_field_collections_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0"
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "never"
          }
        }
      },
      "fields" : {
        "search_api_et_id" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "vid" : { "type" : "integer" },
        "is_new" : { "type" : "boolean" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "comment_count" : { "type" : "integer" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "title_field" : { "type" : "text", "boost" : "5.0" },
        "field_instrument" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publication_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_news_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_instrument_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_is_private" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "attachments_field_instrument_treaty_text" : { "type" : "text" },
        "attachments_field_document_file" : { "type" : "text" },
        "attachments_field_project_file" : { "type" : "text" },
        "attachments_field_publication_attachment" : { "type" : "text" },
        "attachments_field_basic_page_attachments" : { "type" : "text" },
        "attachments_field_news_attachments" : { "type" : "text" },
        "body:value" : { "type" : "text", "boost" : "2.0" },
        "body:summary" : { "type" : "text", "boost" : "2.0" },
        "body:format" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
