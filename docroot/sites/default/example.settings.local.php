<?php

$databases['default']['default'] = array(
 'driver' => 'mysql',
 'database' => 'database',
 'username' => 'user',
 'password' => 'password',
 'host' => 'localhost',
 'prefix' => '',
);
$drupal_hash_salt = 'TEST';
$conf['css_gzip_compression'] = FALSE;
$conf['js_gzip_compression'] = FALSE;
$conf['theme_debug'] = TRUE;
$conf['file_temporary_path'] = '/tmp';
$conf['file_private_path'] = '/path/to/files/private';

#$conf['search_api_server_host'] = '127.0.0.1';
#$conf['search_api_server_port'] = 8983;
#$conf['search_api_server_path'] = '/solr/informea';
#$conf['search_api_server_user'] = 'TODO';
#$conf['search_api_server_pass'] = 'TODO';
