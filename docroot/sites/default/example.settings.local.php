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

ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

$cookie_domain = '.cms.local';

$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';

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