<?php
/**
 * @file
 * cms_country.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function cms_country_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'xml_ws';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'xml-ws';
  $endpoint->authentication = array();
  $endpoint->server_settings = array(
    'formatters' => array(
      'xml_informea' => TRUE,
      'bencode' => FALSE,
      'json' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
      'xml' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
      'application/x-www-form-urlencoded' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'informea-parties' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['xml_ws'] = $endpoint;

  return $export;
}
