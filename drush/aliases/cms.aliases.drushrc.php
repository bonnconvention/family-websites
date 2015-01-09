<?php

$aliases['cms.prod'] = array(
  'uri' => 'set-ip-from-local',
  'db-allows-remote' => TRUE,
  'remote-host' => 'please-fill-in-local-aliases',
  'remote-user' => 'root',
  'root' => 'please-fill-in-local-aliases',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'simulate' => '1',
    ),
  ),
);

// Example of local setting.
// $aliases['cms.local'] = array(
//   'uri' => 'cms.localhost',
//   'root' => '/home/user/Work/project/docroot',
// );

// Add your local aliases.
if (file_exists(dirname(__FILE__) . '/aliases.local.php')) {
  include dirname(__FILE__) . '/aliases.local.php';
}
