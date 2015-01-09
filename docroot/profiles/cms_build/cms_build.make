api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.23
projects[drupal][download][type] = get
projects[drupal][download][url] = http://ftp.drupal.org/files/projects/drupal-7.23.tar.gz

; Contrib modules

projects[entity][version] = "1.2"
projects[entity][subdir] = "contrib"

projects[logintoboggan][type] = "module"
projects[logintoboggan][version] = "1.3"
projects[logintoboggan][subdir] = "contrib"

projects[token][type] = "module"
projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[pathauto][type] = "module"
projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[module_filter][type] = "module"
projects[module_filter][version] = "1.8"
projects[module_filter][subdir] = "contrib"

projects[taxonomy_access_fix][type]    = "module"
projects[taxonomy_access_fix][version] = "1.1"
projects[taxonomy_access_fix][subdir]  = "contrib"

projects[event_calendar][type]    = "module"
projects[event_calendar][version] = "1.4"
projects[event_calendar][subdir]  = "contrib"

projects[calendar][type]    = "module"
projects[calendar][version] = "3.4"
projects[calendar][subdir]  = "contrib"
projects[calendar][patch][] = "http://drupal.org/files/calendar-php54-1471400-58.patch"

projects[countries][type]    = "module"
projects[countries][version] = "2.1"
projects[countries][subdir]  = "contrib"

projects[field_collection_table][type]    = "module"
projects[field_collection_table][version] = "1.0-beta1"
projects[field_collection_table][subdir]  = "contrib"

projects[field_collection][type]    = "module"
projects[field_collection][version] = "1.x-dev"
projects[field_collection][subdir]  = "contrib"

projects[imce][subdir] = contrib
projects[imce][version] = 1.7
projects[imce_wysiwyg][subdir] = contrib
projects[imce_wysiwyg][version] = 1.0

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2

projects[date_range_formatter][type]    = "module"
projects[date_range_formatter][version] = "1.0"
projects[date_range_formatter][subdir]  = "contrib"

projects[date][type]    = "module"
projects[date][version] = "2.6"
projects[date][subdir]  = "contrib"

projects[context][type]    = "module"
projects[context][version] = "3.1"
projects[context][subdir]  = "contrib"

projects[context_reaction_theme][type]    = "module"
projects[context_reaction_theme][version] = "1.x-dev"
projects[context_reaction_theme][subdir]  = "contrib"

projects[context_condition_theme][type]    = "module"
projects[context_condition_theme][version] = "1.0"
projects[context_condition_theme][subdir]  = "contrib"

projects[link][type]    = "module"
projects[link][version] = "1.1"
projects[link][subdir]  = "contrib"

projects[title][version] = "1.0-alpha7"
projects[title][subdir] = "contrib"

projects[draggableviews][type]    = "module"
projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir]  = "contrib"

projects[i18n][version] = "1.10"
projects[i18n][subdir] = "contrib"

projects[variable][version] = "2.3"
projects[variable][subdir] = "contrib"

projects[entityreference][type]    = "module"
projects[entityreference][version] = "1.0"
projects[entityreference][subdir]  = "contrib"

projects[entity_translation][version] = "1.0-beta3"
projects[entity_translation][subdir] = "contrib"

projects[uuid][type]    = "module"
projects[uuid][version] = "1.0-alpha5"
projects[uuid][subdir]  = "contrib"

projects[simpletest][type]    = "module"
projects[simpletest][version] = "2.0"
projects[simpletest][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[features][type]    = "module"
projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[views_autocomplete_filters][type]    = "module"
projects[views_autocomplete_filters][version] = "1.0"
projects[views_autocomplete_filters][subdir]  = "contrib"

projects[views_data_export][type]    = "module"
projects[views_data_export][version] = "3.0-beta6"
projects[views_data_export][subdir]  = "contrib"

projects[views][type]    = "module"
projects[views][version] = "3.7"
projects[views][subdir]  = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[jquery_update][type]    = "module"
projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir]  = "contrib"

projects[mailchimp][type]    = "module"
projects[mailchimp][version] = "2.12"
projects[mailchimp][subdir]  = "contrib"

projects[chosen][type]    = "module"
projects[chosen][version] = "2.x-dev"
projects[chosen][subdir]  = "contrib"

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5/ckeditor_3.5.tar.gz

libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/1.0.0/chosen_v1.0.0.zip

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip
libraries[mailchimp][destination] = libraries
libraries[mailchimp][directory_name] = mailchimp

projects[profiler][type] = library
libraries[profiler][directory_name] = profiler
projects[profiler][download][type] = get
projects[profiler][download][url] = http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz

projects[libraries][type]    = "module"
projects[libraries][version] = "2.1"
projects[libraries][subdir]  = "contrib"


; Eau de Web custom modules for CMS Databases (downloaded from Feature Server)

projects[cms_menu][type] = module
projects[cms_menu][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_instrument][type] = module
projects[cms_instrument][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_project][type] = module
projects[cms_project][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_meeting][type] = module
projects[cms_meeting][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_publication][type] = module
projects[cms_publication][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_country][type] = module
projects[cms_country][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_species][type] = module
projects[cms_species][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_document][type] = module
projects[cms_document][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_contacts][type] = module
projects[cms_contacts][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_initial_data][type] = "module"
projects[cms_initial_data][download][type] = "git"
projects[cms_initial_data][download][url] = "https://github.com/eaudeweb/cms.initial_data.git"

projects[cms][type] = module
projects[cms][location] = http://fserver.eaudeweb.ro/fserver

projects[cms_theme][type] = theme
projects[cms_theme][location] = http://fserver.eaudeweb.ro/fserver
