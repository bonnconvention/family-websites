<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201405121812
 */


/**
 * Encrypt string using tripledes algorithm. Decrypt using <code>cms_contacts_decrypt_string</code>.
 * @param string $str String to encrypt
 * @return string Encrypted string, '' if $str is empty
 */
function cms_contacts_encrypt_string($str) {
    $ret = '';
    if(!empty($str)) {
        $hash = substr(drupal_get_hash_salt(), 0, 24);
        $td = mcrypt_module_open('tripledes', '', 'ecb', '');
        mcrypt_generic_init($td, $hash, IV);
        $ret = mcrypt_generic($td, $str);
        mcrypt_generic_deinit($td);
        mcrypt_module_close($td);
    }
    return $ret;
}


/**
 * Decrypt string encrypted by cms_contacts_encrypt_string
 * @param string $str Encrypted string
 * @return string Decrypted string
 */
function cms_contacts_decrypt_string($str) {
    if(!empty($str)) {
        $td = mcrypt_module_open('tripledes', '', 'ecb', '');
        $key = substr(drupal_get_hash_salt(), 0, 24);
        mcrypt_generic_init($td, $key, IV);
        $decrypted_data = mdecrypt_generic($td, $str);
        mcrypt_generic_deinit($td);
        mcrypt_module_close($td);
        $decrypted_data = rtrim($decrypted_data, "\0");
        return $decrypted_data;
    }
    return NULL;
}


function cms_contacts_list_instruments_by_uuid() {
    $the_data = &drupal_static(__FUNCTION__);
    if(empty($the_data)) {
        if($the_data = CMSContactsCacheHelper::cache_get('instrument_uuid_title')) {
        } else {
            $nodes = node_load_multiple(array(), array('type'=> 'legal_instrument'));
            foreach ($nodes as $node) {
                if(!empty($node->uuid)) {
                    $the_data[$node->uuid] = $node->title;
                }
            }
            CMSContactsCacheHelper::cache_set('instrument_uuid_title', $the_data);
        }
    }
    return $the_data;
}


function cms_contacts_get_country_names_cached() {
    $the_data = &drupal_static(__FUNCTION__);
    if(empty($the_data)) {
        if($the_data = CMSContactsCacheHelper::cache_get('iso2l_name')) {
        } else {
            $query = new EntityFieldQuery();
            $query = $query->entityCondition('entity_type', 'node')->propertyCondition('type', 'country')->execute();
            if(isset($query['node'])) {
                $nodes = node_load_multiple(array_keys($query['node']));
                foreach($nodes as $row) {
                    $iso2 = $row->field_country_iso2[LANGUAGE_NONE][0]['value'];
                    $the_data[strtoupper($iso2)] = $row->title;
                }
                CMSContactsCacheHelper::cache_set('iso2l_name', $the_data);
            }
        }
    }
    return $the_data;
}

function cms_contacts_load_multiple($uids) {
    $ldap = CMSContactsLDAP::get_instance();
    $all_users = $ldap->ldap_get_contacts_partial_attributes();
    $contacts = array();
    foreach($uids as $uid) {
        $dn = CMSContact::format_dn($uid, 'contact');
        if (!empty($all_users[$dn])) {
            $contacts []= $all_users[$dn];
        }
    }
    return $contacts;
}



class CMSContactsUIHelper {


    /**
     * Generate the renderable select for the Regions drop-down
     */
    static function html_select_regions($selected=array(), array $extra=array()) {
        $cfg = array_merge(array(
                'name' => 'regions',
                'id' => 'regions',
                'title' => t('Regions'),
                'multiple' => TRUE,
            ), $extra
        );
        $options = array();
        $r = taxonomy_vocabulary_machine_name_load('region');
        if($r) {
            $regions = taxonomy_get_tree($r->vid);
            foreach($regions as $t) {
                $options[$t->name] = $t->name;
            }
            asort($options);
        }
        return self::html_select($cfg, $options, $selected);
    }

    /**
     * Generate the renderable select for the Languages drop-down
     */
    static function html_select_languages($selected=array(), array $extra=array()) {
        $cfg = array_merge(array(
                'name' => 'languages',
                'id' => 'languages',
                'title' => t('Languages'),
                'multiple' => TRUE,
            ), $extra
        );
        $options = array();
        $r = taxonomy_vocabulary_machine_name_load('un_languages');
        if($r) {
            $regions = taxonomy_get_tree($r->vid);
            foreach($regions as $t) {
                $options[$t->name] = $t->name;
            }
            asort($options);
        }
        return self::html_select($cfg, $options, $selected);
    }


    static function html_select_instruments($selected=array(), array $extra=array(), $disable_empty_options = FALSE) {
        $cfg = array_merge(array(
                'name' => 'instruments',
                'id' => 'instruments',
                'title' => t('CMS Instrument'),
                'multiple' => TRUE,
            ), $extra
        );
        $options = cms_contacts_list_instruments_by_uuid();
        asort($options);

        $ob = CMSContactsLDAP::get_instance();
        $rows = $ob->get_instrument_people();
        if ($disable_empty_options) {
            foreach ($rows as $instrument_uuid => $list) {
                if (empty($list->uniquemember)) {
                    unset($options[$instrument_uuid]);
                }
            }
        }
        return self::html_select($cfg, $options, $selected);
    }

    static function html_select_countries($selected=array(), array $extra=array()) {
        $cfg = array_merge(array(
                'name' => 'countries',
                'id' => 'countries',
                'title' => t('Countries'),
                'multiple' => TRUE,
            ), $extra
        );
        $countries = Country::get_all_objects();
        $options = array();
        foreach($countries as $country) {
            $iso2 = field_get_items('node', $country, 'field_country_iso2');
            $iso2 = strtoupper(@$iso2[0]['value']);
            $options[$iso2] = $country->title;
        }
        asort($options);
        return self::html_select($cfg, $options, $selected);
    }


    static function html_select_status_person($selected=array(), array $extra=array(), $disable_empty_options = FALSE) {
        $cfg = array_merge(array(
                'name' => 'status_person',
                'id' => 'status_person',
                'title' => t('Status person'),
                'multiple' => TRUE,
            ), $extra
        );
        $ob = CMSContactsLDAP::get_instance();
        $rows = $ob->get_statusperson_people();
        $options = array();
        foreach ($rows as $list_dn => $list) {
            $options[$list_dn] = $list->title;
        }
        asort($options);
        if ($disable_empty_options) {
            foreach ($rows as $list_dn => $list) {
                if (empty($list->uniquemember)) {
                    unset($options[$list_dn]);
                }
            }
        }
        return self::html_select($cfg, $options, $selected);
    }


    static function html_select_status_organization($selected=array(), array $extra=array(), $disable_empty_options = FALSE) {
        $cfg = array_merge(array(
                'name' => 'status_organization',
                'id' => 'status_organization',
                'title' => t('Status organization'),
                'multiple' => TRUE,
            ), $extra
        );
        $ob = CMSContactsLDAP::get_instance();
        $rows = $ob->get_statusorganization_people();
        $options = array();
        foreach ($rows as $list_dn => $list) {
            $options[$list_dn] = $list->title;
        }
        asort($options);
        if ($disable_empty_options) {
            foreach ($rows as $list_dn => $list) {
                if (empty($list->uniquemember)) {
                    unset($options[$list_dn]);
                }
            }
        }
        return self::html_select($cfg, $options, $selected);
    }

    static function html_select_mailing_list($selected=array(), array $extra=array(), $disable_empty_options = FALSE) {
        $cfg = array_merge(array(
                'name' => 'mailing_lists',
                'id' => 'mailing_lists',
                'title' => t('Mailing list'),
                'multiple' => TRUE,
            ), $extra
        );
        $ob = CMSContactsLDAP::get_instance();
        $rows = $ob->get_mailing_lists();
        $options = array();
        foreach ($rows as $list_dn => $list) {
            $options[$list_dn] = $list->title;
        }
        asort($options);
        if ($disable_empty_options) {
            foreach ($rows as $list_dn => $list) {
                if (empty($list->uniquemember)) {
                    unset($options[$list_dn]);
                }
            }
        }
        return self::html_select($cfg, $options, $selected);
    }


    static function html_select_availability($selected=array(), array $extra=array()) {
        $cfg = array_merge(array(
                'name' => 'availability',
                'id' => 'availability',
                'title' => t('Availability'),
                'multiple' => FALSE,
            ), $extra
        );
        $options = array(
            '' => t('-- Any --'),
            'TRUE' => t('Available'),
            'FALSE' => t('Unavailable')
        );
        return self::html_select($cfg, $options, $selected);
    }


    static function html_select($cfg, $options, $selected) {
        $multiple = isset($cfg['multiple']) && $cfg['multiple'] === TRUE;
        $ctrl = array(
            '#title' => $cfg['title'], '#type' => 'select',
            '#name' => $cfg['name'],
            '#id' => $cfg['id'],
            '#options' => $options,
            '#default_value' => $selected,
            '#attributes' => array(
                'class' => array('form-control')
            )
        );
        if($multiple) {
            $ctrl['#multiple'] = TRUE;
        }
        return $ctrl;
    }

    /**
     * Prepare a field value for contact view
     * @param $value
     *
     * @return string
     */
    static function render_contact_value($value) {
        if (is_array($value)) {
            return format_string(implode(', ', $value));
        } else {
            return format_string($value);
        }
    }

    /**
     * Get the titles of instruments uuids
     * @param $uuids
     *
     * @return string
     */
    static function render_contact_instruments($uuids) {
        if(!is_array($uuids)) {
            $uuids = array($uuids);
        }

        $ldap = CMSContactsLDAP::get_instance();
        $instruments = $ldap->get_instrument_people();

        $return = array();
        foreach ($uuids as $uuid) {
            if (!empty($instruments[$uuid])) {
                $return []= $instruments[$uuid]->title;
            }
        }
        return format_string(implode(', ', $return));
    }


    static function prepend_none_to_select_form_item(&$form_item) {
        $option = array( '' => '-- None --' );
        $form_item['#options'] = $option + $form_item['#options'];
    }

    static function render_contact_instrument_data($instruments_data) {
        $header = array('');
        $rows = array();

        $ldap = CMSContactsLDAP::get_instance();
        $instruments = $ldap->get_instrument_people();
        $organizations_status = $ldap->get_statusorganization_people();
        $person_status = $ldap->get_statusperson_people();
        $mailing_lists = $ldap->get_mailing_lists();

        $row1 = array(t(CMSContact::$key_labels['organization_status']));
        $row2 = array(t(CMSContact::$key_labels['person_status']));
        $row3 = array(t(CMSContact::$key_labels['mailing_lists']));

        foreach ($instruments_data as $uuid => $instrument_data) {
            $header []= (!empty($instruments[$uuid])) ? $instruments[$uuid]->title : '-';
            $organizations = array();
            if (!empty($instrument_data['organization_status'])) {
                foreach($instrument_data['organization_status'] as $organization_status) {
                    $organizations []= $organizations_status[$organization_status]->title;
                }
            }
            $row1 []= self::render_contact_value($organizations);

            $persons = array();
            if (!empty($instrument_data['person_status'])) {
                foreach($instrument_data['person_status'] as $person_st) {
                    $persons []= $person_status[$person_st]->title;
                }
            }
            $row2 []=  self::render_contact_value($persons);

            $mail_lists = array();
            if (!empty($instrument_data['mailing_lists'])) {
                foreach($instrument_data['mailing_lists'] as $list) {
                    $mail_lists []= $mailing_lists[$list]->title;
                }
            }
            $row3 []=  self::render_contact_value($mail_lists);
        }
        $rows = array($row1, $row2, $row3);

        $table = array(
            '#theme' => 'table',
            '#header' => $header,
            '#rows' => $rows,
            '#attributes' => array('class'=> array('table', 'table-bordered')),
            '#prefix' => '<div class="row">', '#suffix' => '</div>',
        );

        return $table;
    }

    /**
     * Get a renderable list of contacts with ajax loading of contact's details on click
     * @param $contacts - array of contacts obj
     * @param $title - Title list
     *
     * @return array - rendarable array of type item_list
     */
    static function render_contact_list($contacts, $title) {
        $list = array();
        $module_path = drupal_get_path('module', 'cms_contacts');
        if (!empty($contacts)) {
            $list = array(
                '#theme' => 'item_list',
                '#type' => 'ul',
                '#title' => t($title),
                '#attached' => array(
                    'js' => array(
                        $module_path . '/js/contact_modal.js',
                    )
                ),
                //add modal unde list that will be used for ajax loading of contact's details
                '#suffix' => theme_render_template($module_path .'/templates/modal.tpl.php', array()),
            );
            foreach($contacts as $contact) {
                $list['#items'][] =
                    l($contact->first_name . ' ' . $contact->last_name,
                        '',
                        array(
                            'attributes' => array(
                                'data-toggle' => "modal",
                                'data-target' => "#contact_modal",
                                'class' => array('contact_list_item'),
                                'data-uid' => $contact->uid,
                                'data-href' => '/contacts/item_list/',
                                'role' => 'button'
                            ),
                            'fragment' => 'contact_modal',
                            'external' => TRUE,
                        )
                    );
            }
        }
        return $list;
    }
}

/** Handle request parameter parsing */
class CMSContactsRequestHelper {

    private $request = NULL;

    /** If $request is NULL, uses $_POST as data source */
    function __construct($request = NULL) {
        if($request === NULL) {
            $this->request = array_merge($_GET, $_POST);
        } else {
            $this->request = $request;
        }
    }

    /** Retrieve parameter value from request or return $default if empty */
    function get_parameter($name, $default=array()) {
        return !empty($this->request[$name]) ? $this->request[$name] : $default;
    }

    /** Retrieve parameter value as integer from requst or return $default (0) if empty */
    function get_integer($name, $default=0) {
        $v = $this->get_parameter($name, $default);
        return intval($v);
    }

    /** Retreive the filters used by listing */
    function get_list_parameters() {
        $ret = array();
        foreach(array('instruments', 'regions', 'countries', 'status_person', 'status_organization',
                    'availability', 'sSearch', 'clear_cache', 'per_field_operator', 'mailing_lists') as $k) {
            $ret[$k] = $this->get_parameter($k);
        }
        return $ret;
    }

    /** Retreive the sorting used by listing */
    function get_list_sorting($default_col=2) {
        $column = $this->get_integer('iSortCol_0', $default_col);
        $direction = $this->get_parameter('sSortDir_0', '');
        $direction = strtolower($direction) == 'desc' ? 'desc' : 'asc';
        return array(0 => array('column' => $column, 'direction' => $direction));
    }
}


class CMSContactsURLHelper {

    static function url_listing() {
        return 'contacts/listing';
    }

    static function url_listing_ajax_endpoint() {
        return '/manage/contacts/ajax/listing';
    }

    static function url_add() {
        return 'contacts/add';
    }
}


class CMSContactBase {
    public $uid;
    public $dn;
    public $view_link;
    public $edit_link;

    public $region;

    public $mail = array();

    // Computed fields
    public $country;
    public $country_rendered;

    public $department;
    public $organization;

    public $country_post;
    public $country_post_rendered;

    public $instruments;
    public $instruments_rendered;

    public $statusperson;
    public $statusperson_rendered;

    public $statusorganization;
    public $statusorganization_rendered;

    public $mailing_lists;
    public $mailing_lists_rendered;

    public $availability = FALSE;

    public $full_text;


    function __construct($ldap = NULL) {
        $this->uid = $ldap['uid'][0];
        $this->dn = $ldap['dn'];

        if(!empty($ldap['cn'][0])) { $this->name = !empty($ldap['cn'][0]); }
        if(!empty($ldap['givenname'][0])) { $this->first_name =  $ldap['givenname'][0]; }
        if(!empty($ldap['sn'][0])) { $this->last_name = $ldap['sn'][0]; }
        if(!empty($ldap['o'][0])) { $this->organization = $ldap['o'][0]; }
        if(!empty($ldap['ou'][0])) { $this->department = $ldap['ou'][0]; }
        if(!empty($ldap['region'][0])) { $this->region = $ldap['region'][0]; }
        $this->availability = !empty($ldap['cmsavailability'][0]) && $ldap['cmsavailability'][0] == 'TRUE';

        $this->view_link = sprintf('contacts/%s', $this->uid);
        $this->edit_link = sprintf('contacts/%s/edit', $this->uid);
        $this->delete_link = sprintf('contacts/%s/delete', $this->uid);
        $country_cache = cms_contacts_get_country_names_cached();
        if(!empty($ldap['iso2'][0])) {
            $iso2 = strtoupper($ldap['iso2'][0]);
            $this->country = $iso2;
            if(array_key_exists($iso2, $country_cache)) {
                $this->country_rendered = $country_cache[$iso2];
            }
        }
        $this->country_post_rendered = '';
        if(!empty($ldap['cpiso2'][0])) {
            $cpiso2 = strtoupper($ldap['cpiso2'][0]);
            $this->country_post = $cpiso2;
            if(array_key_exists($cpiso2, $country_cache)) {
                $this->country_post_rendered = $country_cache[$cpiso2];
            }
        }
        if (!empty($ldap['mail'])) {
          $this->mail = $ldap['mail'];
        }
        $this->full_text = sprintf('%s %s %s %s %s %s',
            $this->uid,
            $this->first_name,
            $this->last_name,
            $this->country_rendered,
            $this->organization,
            implode(', ', $this->mail)
        );
    }


    static function get_single_valued_attribute($array, $name, &$ob = NULL) {
        $ret = !empty($array[$name][0]) ? $array[$name][0] : FALSE;
        if($ob) {
            $ob->$name = $ret;
        }
        return $ret;
    }


    /**
     * Retrieve a multivalued attribute from an LDAP array entry
     * @param array $array LDAP array entry
     * @param string $name Property name
     * @param stdClass $ob Object, if not-null, the property will be set on that object
     * @return mixed Array with values or FALSE is attribute does not exists or is false
     */
    static function get_multi_valued_attribute($array, $name, &$ob = NULL) {
        $ret = FALSE;
        if(!empty($array[$name])) {
            unset($array[$name]['count']);
            $ret = $array[$name];
        }
        if($ob) {
            $ob->$name = $ret;
        }
        return $ret;
    }

    public static function get_contacts_as_options() {
        $result = array();
        $ldap = CMSContactsLDAP::get_instance();
        $all_users = $ldap->ldap_get_contacts_partial_attributes();

        foreach($all_users as $user) {
            $result[$user->uid]= $user->first_name . ' ' . $user->last_name;
        }

        return $result;
    }

    public static function get_country_nfp($country = null, $current_instance = TRUE) {
        if (empty($country)) {
            return null;
        }


        $nfps_dn = array();
        $nfps = array();
        $country = strtoupper($country);

        $ldap = CMSContactsLDAP::get_instance();
        //$fp_lists = $ldap->get_mailing_lists();
        $country_contacts = $ldap->contacts_list_filter(array('countries' => array($country)));
        $people_statuses_lists = $ldap->get_people_statusperson();

        if ($current_instance) {
            $instance = CMSLegalInstrument::get_current_instrument();
            $uuid = $instance->uuid;
        }
        foreach ($country_contacts as $contact) {
            if (!empty($people_statuses_lists[$contact->dn])) {
                if (!empty($uuid)) {
                    $person_statuses = preg_grep("/(.*)Focal Point(.*)$uuid/i", $people_statuses_lists[$contact->dn]);
                } else {
                    $person_statuses = preg_grep("/Focal Point/i", $people_statuses_lists[$contact->dn]);
                }
                if (!empty($person_statuses) ) {
                    $nfps_dn []= $contact->dn;
                }
            }
        }
        $nfps_dn = array_unique($nfps_dn);
        if (!empty($nfps_dn)) {
            $all_users = $ldap->ldap_get_contacts_partial_attributes();
            foreach ($nfps_dn as $user_dn) {
                if (!empty($all_users[$user_dn])) {
                    $nfps []= $all_users[$user_dn];
                }
            }
        }
        return $nfps;
    }
}

class CMSContact extends CMSContactBase {

    public $ldap;

    public $uid;

    public $clean_contact = array();

    public $instruments_data = array();

    static $hidden_view_fields = array('uid', 'conventions', 'count', 'dn', 'cn', 'objectclass','countryfrench', 'preferredlanguages',
        'countryspanish', 'countryenglish', 'statusorganization', 'statusperson', 'lastmodifiedtime', 'lastmodifiedby', 'mailinglists');

    static $key_labels = array(
        'personaltitle' => 'Personal Title',
        'cn' => 'Name',
        'givenname' => 'Given name',
        'sn' => 'Surname',
        'uid' => 'ID',
        'mail' => 'Work Email',
        'title' => 'Position',
        'iso2' => 'Country',
        'cpiso2' => 'Country Post',
        'personalemail' => 'Personal Email',
        'st' => 'City',
        'postalcode' => 'Zip Code',
        'street' => 'Address',
        'o' => 'Organization',
        'ou' => 'Department',
        'workphonenumbers' => 'Work Phone',
        'homephone' => 'Home Phone',
        'faxnumbers' => 'Fax',
        'mobilephonenumbers' => 'Mobile',
        'websites' => 'Websites',

        'skype' => 'Skype',
        'description' => 'Description',
        'region' => 'Region',
        'cmsavailability' => 'Availability',

        'preferredlanguages' => 'Preferred Languages',
        'additionalemails' => 'Additional emails',

        'instrument' => 'Instrument',
        'organization_status' => 'Status Organization',
        'person_status' => 'Status Person',
        'mailing_lists' => 'Mailing Lists',
    );

    static $key_weight = array(
      'personaltitle' => 0,
      'cn' => -1,
      'givenname' => 1,
      'sn' => 2,
      'uid' => -1,
      'mail' => 14,
      'title' => 3,
      'iso2' => 9,
      'cpiso2' => 11,
      'personalemail' => 15,
      'st' => 8,
      'postalcode' => 7,
      'street' => 6,
      'o' => 5,
      'ou' => 4,
      'workphonenumbers' => 12,
      'homephone' => 17,
      'faxnumbers' => 13,
      'mobilephonenumbers' => 16,
      'websites' => 18,

      'skype' => 19,
      'description' => 20,
      'region' => 10,
      'cmsavailability' => 21,

      'preferredlanguages' => -1,
      'additionalemails' => -1,

      'instrument' => -1,
      'organization_status' => -1,
      'person_status' => -1,
      'mailing_lists' => -1,
    );

    static $field_options = array(
        'personaltitle' => array('edit' => 'single'),
        'cn' => array('edit' => 'single'),
        'givenname' => array('edit' => 'single'),
        'sn' => array('edit' => 'single'),
        'uid' => array('edit' => 'single'),
        'mail' => array('edit' => 'single', 'multiple' => TRUE),
        'title' => array('edit' => 'single'),
        'iso2' => array('edit' => 'single'),
        'cpiso2' => array('edit' => 'single'),
        'st' => array('edit' => 'single'),
        'postalCode' => array('edit' => 'single'),
        'street' => array('edit' => 'single'),
        'o' => array('edit' => 'single'),
        'ou' => array('edit' => 'single'),
        'skype' => array('edit' => 'single'),
        'description' => array('edit' => 'single'),
        'region' => array('edit' => 'single'),

        'workphonenumbers' => array('edit' => 'single', 'multiple' => TRUE),
        'homephone' => array('edit' => 'single', 'multiple' => TRUE),
        'faxnumbers' => array('edit' => 'single', 'multiple' => TRUE),
        'mobilephonenumbers' => array('edit' => 'single', 'multiple' => TRUE),
        'websites' => array('edit' => 'single', 'multiple' => TRUE),
        'personalemail' => array('edit' => 'single', 'multiple' => TRUE),
        'preferredlanguages' => array('edit' => 'multiple', 'multiple' => TRUE),
        'additionalemails' => array('edit' => 'single', 'multiple' => TRUE),

    );

    static $item_list_fields = array (
        'title' => 'Position',
        'ou' => 'Department',
        'o' => 'Organization',
        'street' => 'Address',
        'st' => 'City',
        'postalcode' => 'Zip Code',
        'region' => 'Region',
        'country_rendered' => 'Country',
        'mail' => 'Email',
        'workphonenumbers' => 'Phone',
        'mobilephonenumbers' => 'Mobile',
        'faxnumbers' => 'Fax',
    );


    function __construct($ldap = NULL) {
        parent::__construct($ldap);
        if($ldap !== NULL) {
            $this->uid = $ldap['uid'][0];
            $this->ldap = $ldap;
        }
    }

    public function get_simple_attribute($name) {
        return !empty($this->ldap[$name][0]) ? $this->ldap[$name][0] : '';
    }

    public function process_instruments_data(){
        $instruments_data = array();
        $ldap = CMSContactsLDAP::get_instance();

        $instruments = $ldap->get_people_instrument();
        $instruments =  (!empty($instruments[$this->dn])) ? $instruments[$this->dn] : '';

        $person_status = $ldap->get_people_statusperson();
        $person_status = (!empty($person_status[$this->dn])) ? $person_status[$this->dn] : '';

        $organization_status = $ldap->get_people_statusorganization();
        $organization_status = (!empty($organization_status[$this->dn])) ? $organization_status[$this->dn] : '';

        $mailing_lists = $ldap->get_people_mailing_lists();
        $mailing_lists = (!empty($mailing_lists[$this->dn])) ? $mailing_lists[$this->dn] : '';

        if (!empty($instruments)) {
            foreach ($instruments as $instrument) {
                $instruments_data[$instrument] = array();
                if(!empty($organization_status)) {
                    $organization = preg_grep("/$instrument/", $organization_status);
                    $instruments_data[$instrument]['organization_status'] = $organization;
                    //remove the already set organization
                    $organization_status = array_diff($organization_status, $organization);
                }

                if (!empty($person_status)) {
                    $person = preg_grep("/$instrument/", $person_status);
                    $instruments_data[$instrument]['person_status'] = $person;
                    //remove the already set status
                    $person_status = array_diff($person_status, $person);
                }

                if (!empty($mailing_lists)) {
                    $mailing = preg_grep("/$instrument/", $mailing_lists);
                    $instruments_data[$instrument]['mailing_lists'] = $mailing;
                    //remove the already set mailing list
                    $mailing_lists = array_diff($mailing_lists, $mailing);
                }
            }
        }
        if (!empty($person_status) || !empty($organization_status) || !empty($mailing_lists)) {
            $instruments_data['-']['organization_status'] = $organization_status;
            $instruments_data['-']['person_status'] = $person_status;
            $instruments_data['-']['mailing_lists'] = $mailing_lists;
        }

        $this->instruments_data = $instruments_data;
    }

    public function clean_contact_array() {
        $this->clean_contact = $this->ldap;
        foreach($this->clean_contact as $key => &$value) {
            if (is_int($key)) {
                unset($this->clean_contact[$key]);
            } else {
                if (isset($value['count'])) {
                    $count = $value['count'];
                    if ($count) {
                        unset($value['count']);
                        $field_options = CMSContact::$field_options;
                        if (!empty($field_options[$key])) {
                            switch($field_options[$key]['edit']) {
                                case 'single':
                                    if (!empty($field_options[$key]['multiple'])) {
                                        $value = implode(',',$value);
                                    } else {
                                        $value = current($value);
                                    }
                                    break;
                                case 'multiple':
                                    break;
                            }
                        } else {
                            //if not defined in fields options, assume that is single value if count == 1
                            if ($count == 1) {
                                $value = current($value);
                            }
                        }
                    } else {
                        unset($this->clean_contact[$key]);
                    }
                }
            }
        }
    }


    /**
     * Prepare user data for LDAP insertion
     *
     * @param   array   $data
     * @param   boolean $edit
     *    If $edit is TRUE there is no need to generate another uid
     *
     * @return array    $ldap_data
     *
     * @todo   Timezone should have a customizable value
     */
    public static function format_formdata_to_ldapdata($data = array(), $is_new = FALSE) {
        global $user;
        date_default_timezone_set("Europe/Berlin");

        // Manually set attributes that are not coming from the Contacts' add/edit form
        $ldap_data = array(
            'objectClass' => array(
                'top',
                'cmsContact',
            ),
            'lastModifiedTime' => array(
                time(),
            ),
            'lastModifiedBy' => array(
                $user->name,
            ),
        );


        $ldap_data['personaltitle'] = $data['personaltitle'];
        $ldap_data['cn'] = $data['givenname'] . ' ' . $data['sn'];
        $ldap_data['givenname'] = $data['givenname'];
        $ldap_data['sn'] = $data['sn'];


        $ldap_data['title'] = $data['title'];
        $ldap_data['iso2'] = $data['iso2'];


        $ldap_data['cpiso2'] = $data['cpiso2'];
        $ldap_data['region'] = $data['region'];

        //Languages comes from Form as array
        $ldap_data['preferredlanguages'] = (!empty($data['preferredlanguages'])) ? $data['preferredlanguages'] : '';

        $ldap_data['st'] = $data['st'];
        $ldap_data['postalcode'] = $data['postalcode'];
        $ldap_data['street'] = $data['street'];
        $ldap_data['o'] = $data['o'];
        $ldap_data['ou'] = $data['ou'];
        //$ldap_data['is_nfp'] = ($data['is_nfp']) ? TRUE : FALSE;

        self::single_to_multiple_attribute($ldap_data, $data, 'workphonenumbers', 'workphonenumbers');
        self::single_to_multiple_attribute($ldap_data, $data, 'homephone', 'homephone');
        self::single_to_multiple_attribute($ldap_data, $data, 'faxnumbers', 'faxnumbers');
        self::single_to_multiple_attribute($ldap_data, $data, 'mobilephonenumbers', 'mobilephonenumbers');
        self::single_to_multiple_attribute($ldap_data, $data, 'websites', 'websites');
        self::single_to_multiple_attribute($ldap_data, $data, 'additionalEmails', 'additionalEmails');
        self::single_to_multiple_attribute($ldap_data, $data, 'personalemail', 'personalemail');
        self::single_to_multiple_attribute($ldap_data, $data, 'mail', 'mail');

        $ldap_data['skype'] = $data['skype'];
        $ldap_data['description'] = $data['description'];

        // Clean LDAP data before insertion
        self::clean_ldap_data($ldap_data, $is_new);

        //set this after clean (empty())
        $ldap_data['cmsAvailability'][0] = ($data['cmsavailability'] == 'FALSE') ? 'FALSE' : 'TRUE';

        //TODO change generating function to use email or something unique
        if ($is_new) {
            if ((!empty($data['givenname'])) && (!empty($data['sn']))) {
                $uid = self::generate_user_id($data['givenname'], $data['sn']);

                $ldap = CMSContactsLDAP::get_instance();
                $filter = "(&(objectClass=cmsContact)(uid=$uid))";
                $contact = $ldap->ldap_search_cms($filter);
                $suffix = 0;
                while (!empty($contact)) {
                    $uid = self::generate_user_id($data['givenname'], $data['sn'], $suffix, '-');
                    $filter = "(&(objectClass=cmsContact)(uid=$uid))";
                    $contact = $ldap->ldap_search_cms($filter);
                    $suffix ++;
                }
                $ldap_data['uid'] = $uid;
            }
        }

        $ldap_data['instruments'] = array();
        $ldap_data['statusorganization'] = array();
        $ldap_data['statusperson'] = array();
        $ldap_data['mailing_lists'] = array();

        if(!empty($data['instrument_fieldset']['entries'])) {
            foreach ($data['instrument_fieldset']['entries'] as $instrument_data) {
                if (!empty($instrument_data['instrument'])) {
                    $ldap_data['instruments'] []= $instrument_data['instrument'];
                    if (!empty($instrument_data['organization_status'])) {
                        foreach ($instrument_data['organization_status'] as $statusorganization) {
                            $ldap_data['statusorganization'] []= $statusorganization;
                        }
                    }
                    if (!empty($instrument_data['person_status'])) {
                        foreach ($instrument_data['person_status'] as $statusperson) {
                            $ldap_data['statusperson'] []= $statusperson;
                        }
                    }
                    if (!empty($instrument_data['mailing_lists'])) {
                        foreach ($instrument_data['mailing_lists'] as $list) {
                            $ldap_data['mailing_lists'] []= $list;
                        }
                    }
                }
            }
        }

        return $ldap_data;
    }

    /**
     * Manually handle multiple valued LDAP attributes on Contacts add/edit save
     *
     * @param   array   $ldap_data
     *    Data to be saved in LDAP database
     * @param   array   $data
     *    Data retrieved from Drupal Contacts add/edit form
     * @param   string  $field
     *    Drupal Contacts add/edit form field name
     * @param   string  $ldap_attribute
     *    LDAP attribute on which the data will be saved
     */
    public static function single_to_multiple_attribute(&$ldap_data = array(), $data = array(), $field = '', $ldap_attribute = '') {
        $ldap_data[$ldap_attribute] = array();
        if (isset($data[$field]) && (!empty($data[$field]))) {
            $values = explode(',', $data[$field]);
            foreach ($values as $value) {
                $value = trim($value);
                if (!in_array($value, array_values($ldap_data[$ldap_attribute]))) {
                    $ldap_data[$ldap_attribute][] = $value;
                }
            }
        }
    }

    /**
     * Remove empty values from LDAP data in order to avoid "Invalid syntax" LDAP error or Protocol Error
     *
     * @param   array   $data
     *
     * @return  array   $data
     */
    public static function clean_ldap_data(&$data, $is_new = FALSE) {
        foreach ($data as $key => $value) {
            if (is_array($value)) {
                foreach ($value as $key2 => $value2) {
                    if (empty($value2)){
                        if ($is_new) {
                            $data[$key][$key2] = array();
                        } else {
                            unset($data[$key][$key2]);
                        }
                    }
                }
            }

            if (empty($value)) {
                unset($data[$key]);
            }
        }
    }

    static function format_dn($uid, $type){
        switch ($type) {
            case 'contact':
                return "uid=$uid,ou=Users,o=CMS";
                break;
            case CMS_STATUS_PERSON:
                return "cn=".$uid['title'].",ou=Status Person,uuid=".$uid['uuid'].",o=CMS";
                break;
            case CMS_STATUS_ORGANIZATION:
                return "cn=".$uid['title'].",ou=Status Organization,uuid=".$uid['uuid'].",o=CMS";
                break;
            case CMS_MAILING:
                return "cn=".$uid['title'].",ou=Mailing List,uuid=".$uid['uuid'].",o=CMS";
                break;
            default:
                break;
        }
    }

    /**
     * Generate LDAP uid attribute' value based on user's first name and last name
     *
     * @param   string   $first_name
     * @param   string   $last_name
     *
     * @return  string
     */
    public static function generate_user_id($first_name = '', $last_name = '', $suffix = '', $glue = '') {
        $first_name = CMSUtils::alphanumeric($first_name);
        $last_name = CMSUtils::alphanumeric($last_name);
        if (strlen($first_name) > 5) {
            $first_name = substr($first_name, 0, 5);
        }

        if (strlen($last_name) > 3) {
            $last_name = substr($last_name, 0, 5);
        }
        return strtolower($first_name . $last_name . $glue . $suffix);
    }


    /**
     * Insert new contact into LDAP server.
     *
     * @param string $user_dn User DN
     * @param array $entry Array with LDAP data
     * @param array $instruments Array with instruments DNs
     * @param array $statusperson Array with status person DNs
     * @param array $statusorganization Array with status organization DNs
     * @param array $nfp_instruments Array with instrument UUIDs to assign as NFP
     * @return bool ldap_add operation result
     */
    static function add_contact($user_dn, $entry, $instruments = array(), $statusperson = array(), $statusorganization = array(), $mailing_lists = array()) {
        $ldap = CMSContactsLDAP::get_instance();
        $ret = $ldap->ldap_add($user_dn, $entry);
        if($ret) {
            self::set_user_instruments($user_dn, $instruments);
            self::set_user_statusperson($user_dn, $statusperson);
            self::set_user_statusorganization($user_dn, $statusorganization);
            self::set_user_mailing_lists($user_dn, $mailing_lists);
        }
        return $ret;
    }


    /**
     * Updates a contact into LDAP server database, including lists
     * @param string $user_dn User DN
     * @param array $entry Array with LDAP data
     * @param array $instruments Array with instruments DNs
     * @param array $statusperson Array with status person DNs
     * @param array $statusorganization Array with status organization DNs
     * @param array $nfp_instruments Array with instrument UUIDs to assign as NFP
     * @return bool ldap_add operation result
     */
    static function update_contact($user_dn, $entry, $instruments = array(), $statusperson = array(), $statusorganization = array(), $mailing_lists = array()) {
        $ldap = CMSContactsLDAP::get_instance();
        $success = $ldap->ldap_modify($user_dn, $entry);
        if($success) {
            if (!self::set_user_instruments($user_dn, $instruments)) {
                $success = FALSE;
            }
            if (!self::set_user_statusperson($user_dn, $statusperson)) {
                $success = FALSE;
            }
            if (!self::set_user_statusorganization($user_dn, $statusorganization)) {
                $success = FALSE;
            }
            if (!self::set_user_mailing_lists($user_dn, $mailing_lists)) {
                $success = FALSE;
            }
        }
        CMSContactsCacheHelper::cache_clear_all();
        return $success;
    }


    /**
     * Delete contact from LDAP (entry and remove from associated lists)
     * @param string $user_dn User DN
     * @return bool <b>TRUE</b> on success or <b>FALSE</b> on failure.
     */
    static function delete_contact($user_dn) {
        // Delete user from all lists
        $ldap = CMSContactsLDAP::get_instance();
        self::remove_user_from_lists($user_dn, $ldap->ldap_get_instrument_people());
        self::remove_user_from_lists($user_dn, $ldap->ldap_get_statusperson_people());
        self::remove_user_from_lists($user_dn, $ldap->ldap_get_statusorganization_people());
        self::remove_user_from_lists($user_dn, $ldap->ldap_get_mailing_lists());
        return $ldap->ldap_delete($user_dn);
    }


    /**
     * Remove user from a given list
     * @param string $user_dn User DN
     * @param array $lists Array of lists to search
     */
    protected static function remove_user_from_lists($user_dn, $lists) {
        $ldap = CMSContactsLDAP::get_instance();
        foreach($lists as $list) {
            // Not requested to be added, removed it from this instrument
            if(($idx = array_search($user_dn, $list->uniquemember)) !== FALSE) {
                unset($list->uniquemember[$idx]);
                $list->uniquemember = array_values($list->uniquemember); // Avoid LDAP error requiring consecutive indices 0, 1, ..
                $ldap->ldap_modify_cms($list->dn, (array)$list);
            }
        }
    }


    /**
     * Set instruments for a contact. Removes old instruments and add to the passed instruments
     * @param string $user_dn User DN
     * @param array $instruments Array with instruments UUIDs
     */
    static function set_user_instruments($user_dn, $instruments) {
        $ldap = CMSContactsLDAP::get_instance();
        $lists = $ldap->ldap_get_instrument_people();
        return self::set_user_in_lists($user_dn, $instruments, $lists);
    }


    /**
     * Set status person for a contact. Removes old status persons and add to the passed ones
     * @param string $user_dn User DN
     * @param array $status Array with status persons
     */
    static function set_user_statusperson($user_dn, $status) {
        $ldap = CMSContactsLDAP::get_instance();
        $lists = $ldap->ldap_get_statusperson_people();
        return self::set_user_in_lists($user_dn, $status, $lists);
    }


    /**
     * Set status organization for a contact. Removes old status organization and add to the passed ones
     * @param string $user_dn User DN
     * @param array $status Array with status organizations
     */
    static function set_user_statusorganization($user_dn, $status) {
        $ldap = CMSContactsLDAP::get_instance();
        $lists = $ldap->ldap_get_statusorganization_people();
        return self::set_user_in_lists($user_dn, $status, $lists);
    }

    /**
     * Set mailing lists for a contact. Removes old status organization and add to the passed ones
     * @param string $user_dn User DN
     * @param array $status Array with status organizations
     */
    static function set_user_mailing_lists($user_dn, $status) {
        $ldap = CMSContactsLDAP::get_instance();
        $lists = $ldap->ldap_get_mailing_lists();
        return self::set_user_in_lists($user_dn, $status, $lists);
    }

    protected static function set_user_in_lists($user_dn, $values, $lists) {
        $ldap = CMSContactsLDAP::get_instance();
        $success = TRUE;
        foreach($lists as $key => $list) {
            // Requested to be added to this instrument
            if(in_array($key, $values)) {
                // Not assigned to the instrument
                if(!in_array($user_dn, $list->uniquemember)) {
                    $list->uniquemember[] = $user_dn;
                    if(!$ldap->ldap_modify_cms($list->dn, (array)$list)){
                        $success = FALSE;
                        drupal_set_message(sprintf(t('User %s could not be added to %s'), $user_dn, $key), 'error');
                    }
                }
            } else {
                // Not requested to be added, removed it from this instrument
                if(($idx = array_search($user_dn, $list->uniquemember)) !== FALSE) {
                    unset($list->uniquemember[$idx]);
                    $list->uniquemember = array_values($list->uniquemember); // Avoid LDAP error requiring consecutive indices 0, 1, ..
                    if(!$ldap->ldap_modify_cms($list->dn, (array)$list)) {
                        $success = FALSE;
                        drupal_set_message(sprintf(t('User %s could not be removed from %s'), $user_dn, $key), 'error');
                    }
                }
            }
        }
        return $success;
    }
}


/**
 * Class CMSContactsCacheHelper handles cached data for contacts
 */
class CMSContactsCacheHelper {

    /**
     * Wrapper around cache_get which returns the data directly
     */
    static function cache_get($cid) {
        $value = cache_get($cid, self::get_cache_bin());
        if(is_object($value) && isset($value->data)) {
            return $value->data;
        }
        return NULL;
    }


    /**
     * Wrapper around cache_set. Sets prefixed key and same expiration of 1h
     */
    static function cache_set($cid, $data) {
        if(!empty($data)) {
            cache_set($cid, $data, self::get_cache_bin(), time() + 3600);
        }
    }


    /**
     * Wrapper around cache_clear_all. To clear all cms_contacts cache, call
     * <code>cms_contacts_cache_clear_all();</code>
     */
    static function cache_clear_all($cid = '*', $wildcard = TRUE) {
        cache_clear_all($cid, self::get_cache_bin(), $wildcard);
        drupal_set_message('Contacts cache was cleared, refresh may take around 20 seconds');
    }


    private static function get_cache_bin() {
        // This is set by simpletest. In test mode cms_contacts_cache bin is not available
        return empty($GLOBALS['drupal_test_info']['test_run_id']) ? 'cache_cms_contacts' : 'cache';
    }
}


class CMSPerformanceHelper {

    static function print_memory_usage($start_memory) {
        $endm = memory_get_usage(TRUE);
        echo "\nStatistics:\n";
        echo sprintf("Memory usage at the end:%s\n", ($endm - $start_memory));
        echo sprintf("Peak memory usage:%s\n", memory_get_peak_usage(TRUE ));
    }
}
