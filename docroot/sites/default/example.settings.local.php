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

$update_free_access = FALSE;

$conf['base_email_url'] = 'http://cms.local';

$cookie_domain = '.cms.local';

// $_SERVER['HTTPS'] = 'on';

$conf['smtp_on'] = TRUE;
$conf['smtp_host'] = 'smtp.yoursmtp.com';
$conf['smtp_port'] = 587;
$conf['smtp_protocol'] = 'tls';
$conf['smtp_username'] = 'username@mail.com';
$conf['smtp_password'] = 'smtp-password';

$conf['varnish_flush_cron'] = 1;
$conf['varnish_version'] = 4;
$conf['varnish_control_terminal'] = '127.0.0.1:6082';
$conf['varnish_control_key'] = 'your-varnish-control-key';
$conf['varnish_control_key_appendnewline'] = 1;
$conf['varnish_socket_timeout'] = 100;
$conf['varnish_cache_clear'] = 1;
$conf['varnish_bantype'] = 0;

$conf['edw_healthcheck_user'] = '';
$conf['edw_healthcheck_pass'] = '';