<?php
/**
 * Implement this aliases in your aliases.local.php
 */
$aliases['staging'] = array(
  'uri' => 'http://cms.edw.ro',
  'db-allows-remote' => TRUE,
  'remote-host' => 'php-devel1.edw.lan',
  'remote-user' => 'php',
  'root' => '/var/www/html/cms/cms.edw.ro/docroot',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'simulate' => '1',
      'source-dump' => '/tmp/cms-source-dump-myuser.sql',
      'target-dump' => '/tmp/cms-target-dump-myuser.sql.gz',
    ),
  ),
);

$aliases['production'] = array(
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
      'source-dump' => '/tmp/cms-source-dump-myuser.sql',
      'target-dump' => '/tmp/cms-target-dump-myuser.sql.gz',
    ),
  ),
);

// Add your local aliases.
if (file_exists(dirname(__FILE__) . '/aliases.local.php')) {
  include dirname(__FILE__) . '/aliases.local.php';
}
