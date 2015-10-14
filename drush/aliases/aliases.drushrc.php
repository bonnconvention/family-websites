<?php

$aliases['prod'] = array(
  'uri' => 'http://www.cms.int',
  'db-allows-remote' => TRUE,
  'remote-host' => 'www.cms.int',
  'remote-user' => 'please-fill-in-remote-user',
  'root' => '/path/to/drupal/root',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'simulate' => '1',
    ),
  ),
);

// Add your local aliases.
if (file_exists(dirname(__FILE__) . '/aliases.local.php')) {
  include dirname(__FILE__) . '/aliases.local.php';
}
