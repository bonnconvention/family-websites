<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201405121729
 */

class CMSContactsLDAP {

    protected $address;
    protected $port;
    protected $bind_rdn;
    protected $password;
    protected $base_dn;
    protected $people_dn;
    protected $organization_dn;
    protected $department_dn;

    protected $ldap_conn = NULL;
    protected $ldap_last_search_identifier = NULL;

    private static $instance = NULL;


    /**
     * Create a single instance (and a single LDAP connection) of this class
     * @return CMSContactsLDAP object
     */
    static function get_instance() {
        if(!self::$instance) {
            $base_dn = variable_get(LDAP_BASE_DN);
            $bind_rdn = variable_get(LDAP_BIND_RDN);
            $people_dn = variable_get(LDAP_PEOPLE_DN);
            $organization_dn = variable_get(LDAP_ORGANIZATION_DN);
            $department_dn = variable_get(LDAP_DEPARTMENT_DN);
            $password = cms_contacts_decrypt_string(variable_get(LDAP_PASSWORD));
            $address = variable_get(LDAP_ADDRESS);
            $port = variable_get(LDAP_PORT);
            self::$instance = new CMSContactsLDAP(
                $address, $port, $bind_rdn, $password, $base_dn, $people_dn, $organization_dn, $department_dn
            );
        }
        return self::$instance;
    }


    /** Constructor with required parameters */
    function __construct($address, $port, $bind_rdn, $password,
                         $base_dn, $people_dn, $organization_dn, $department_dn) {

        $this->address = $address;
        $this->port = $port;
        $this->bind_rdn = $bind_rdn;
        $this->password = $password;
        $this->base_dn = $base_dn;
        $this->people_dn = $people_dn;
        $this->organization_dn = $organization_dn;
        $this->department_dn = $department_dn;

        $this->connect();
    }


    /** Destructor */
    function __destruct() {
        $this->close();
    }


    private function connect() {
        $this->ldap_conn = ldap_connect($this->address, $this->port);
        if($this->ldap_conn) {
            ldap_set_option($this->ldap_conn, LDAP_OPT_PROTOCOL_VERSION, 3);
            $bind_result = @ldap_bind($this->ldap_conn, $this->bind_rdn, $this->password);
            if(!$bind_result) {
                $this->ldap_conn = FALSE;
                //@todo: drupal_set_message('Unable to bind the LDAP server! Please contact site administrator.', 'error');
                // Handle error
            }
        } else {
            $this->ldap_conn = NULL;
            //@todo: drupal_set_message('Unable to connect to the LDAP server! Please contact site administrator.', 'error');
            // Handle error
        }
    }

    /** Release LDAP resources */
    function close() {
        $this->ldap_free_last_result();
        if($this->ldap_conn) {
            ldap_close($this->ldap_conn);
        }
    }


    private function ldap_free_last_result() {
        if($this->ldap_last_search_identifier) {
            @ldap_free_result($this->ldap_last_search_identifier);
            $this->ldap_last_search_identifier = NULL;
        }
    }

    /**
     * Search LDAP using ldap_search.
     * @param string $filter LDAP filter, example: (&(objectClass=cmsContact)(uid=friedsiele))
     * @param string $base_dn Base DN for search, can be NULL to use the default one
     * @param array $attributes Attributes to return, if empty all attributes are returned
     * @return array Search results. It removed 'count' variable specific to LDAP
     */
    function ldap_search_cms($filter, $base_dn = NULL, $attributes = array()) {
        $ret = array();
        if($this->ldap_conn) {
            $final_base_dn = !empty($base_dn) ? $base_dn : $this->base_dn;
            if($this->ldap_last_search_identifier = ldap_search($this->ldap_conn, $final_base_dn, $filter, $attributes)) {
                $rows = ldap_get_entries($this->ldap_conn, $this->ldap_last_search_identifier);
                if($rows !== FALSE && $rows['count'] > 0) {
                    unset($rows['count']);
                    $ret = $rows;
                    $this->ldap_free_last_result();
                }
                if($rows === FALSE) {
                    $this->ldap_handle_error('ldap_get_entries');
                }
            } else {
                $this->ldap_handle_error('ldap_search');
            }
        } else {
            $this->ldap_handle_error('connection');
        }
        return $ret;
    }


    private function ldap_handle_error($hint = '') {
        $msg = ldap_error($this->ldap_conn);
        $err_no = ldap_errno($this->ldap_conn);
        $message = sprintf('LDAP error #%d (%s)', $err_no, $msg);
        if($hint) {
            error_log("$hint $message\n");
        } else {
            error_log("$message\n");
        }
    }

    /**
     * Uncached call to retrieve the people membership to cmsMailingList groups
     * @return array Array of objects keyed by list dn
     */
    function ldap_get_mailing_lists() {
        $ret = array();
        if($rows = $this->ldap_search_cms('(objectClass=' . CMS_MAILING. ')', NULL)) {
            foreach($rows as $row) {
                $list = new stdClass();
                $list->dn = $row['dn'];
                CMSContactBase::get_multi_valued_attribute($row, 'objectclass', $list);
                CMSContactBase::get_single_valued_attribute($row, 'cn', $list);
                CMSContactBase::get_single_valued_attribute($row, 'in', $list);
                CMSContactBase::get_single_valued_attribute($row, 'uuid', $list);
                CMSContactBase::get_multi_valued_attribute($row, 'uniquemember', $list);
                $list->title = sprintf('%s (%s)', $list->cn, $list->in);
                $ret[$list->dn] = $list;
            }
            $this->ldap_free_last_result();
        }
        return $ret;
    }


    /**
     * Cache the people membership to cmsMailingList groups
     * @return array Array of objects keyed by list dn
     */
    function get_mailing_lists() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('mailing_lists')) {
            } else {
                $the_data = $this->ldap_get_mailing_lists();
                CMSContactsCacheHelper::cache_set('mailing_lists', $the_data);
            }
        }
        return $the_data;
    }

    /**
     * Cache the people membership to statusPerson groups
     * @return array Array of arrays keyed by cmsStatusPerson DN with user DN as items
     */
    function get_people_mailing_lists() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('people_mailing_lists')) {
            } else {
                $temporary = $this->ldap_get_mailing_lists();
                foreach($temporary as $list_dn => $list) {
                    foreach($list->uniquemember as $udn) {
                        $the_data[$udn][] = $list_dn;
                    }
                }
                CMSContactsCacheHelper::cache_set('people_mailing_lists', $the_data);
            }
        }
        return $the_data;
    }


    /**
     * Retrieve the people membership to statusPerson groups
     * @return array Array of arrays keyed by cmsStatusPerson DN with user DN as items
     */
    function ldap_get_statusperson_people() {
        $ret = array();
        if($rows = $this->ldap_search_cms('(objectClass=' . CMS_STATUS_PERSON. ')', NULL)) {
            foreach($rows as $row) {
                $list = new stdClass();
                $list->dn = $row['dn'];
                CMSContactBase::get_multi_valued_attribute($row, 'objectclass', $list);
                CMSContactBase::get_single_valued_attribute($row, 'cn', $list);
                CMSContactBase::get_single_valued_attribute($row, 'in', $list);
                CMSContactBase::get_single_valued_attribute($row, 'uuid', $list);
                CMSContactBase::get_multi_valued_attribute($row, 'uniquemember', $list);
                $list->title = sprintf('%s (%s)', $list->cn, $list->in);
                $ret[$list->dn] = $list;
            }
            $this->ldap_free_last_result();
        }
        return $ret;
    }


    /**
     * Cache the people membership to statusPerson groups
     * @return array Array of arrays keyed by cmsStatusPerson DN with user DN as items
     */
    function get_statusperson_people() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('statusperson_people')) {
            } else {
                $the_data = $this->ldap_get_statusperson_people();
                CMSContactsCacheHelper::cache_set('statusperson_people', $the_data);
            }
        }
        return $the_data;
    }

    /**
     * Cache the people membership to statusPerson groups
     * @return array Array of arrays keyed by cmsStatusPerson DN with user DN as items
     */
    function get_people_statusperson() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('people_statusperson')) {
            } else {
                $temporary = $this->ldap_get_statusperson_people();
                foreach($temporary as $list_dn => $list) {
                    foreach($list->uniquemember as $udn) {
                        $the_data[$udn][] = $list_dn;
                    }
                }
                CMSContactsCacheHelper::cache_set('people_statusperson', $the_data);
            }
        }
        return $the_data;
    }


    /**
     * Uncached call to retrieve the lists of statusorganization people.
     * @return array Array of arrays
     */
    function ldap_get_statusorganization_people() {
        $ret = array();
        if($rows = $this->ldap_search_cms('(objectClass=' . CMS_STATUS_ORGANIZATION. ')')) {
            foreach($rows as $row) {
                $list = new stdClass();
                $list->dn = $row['dn'];
                CMSContactBase::get_multi_valued_attribute($row, 'objectclass', $list);
                CMSContactBase::get_single_valued_attribute($row, 'cn', $list);
                CMSContactBase::get_single_valued_attribute($row, 'in', $list);
                CMSContactBase::get_single_valued_attribute($row, 'uuid', $list);
                CMSContactBase::get_multi_valued_attribute($row, 'uniquemember', $list);
                $list->title = sprintf('%s (%s)', $list->cn, $list->in);
                $ret[$list->dn] = $list;
            }
            $this->ldap_free_last_result();
        }
        return $ret;
    }


    /**
     * Cache the people membership to statusOrganization groups
     * @return array Array of arrays keyed by cmsStatusOrganization DN with user DN as items
     */
    function get_statusorganization_people() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('statusorganization_people')) {
            } else {
                $the_data = $this->ldap_get_statusorganization_people();
                CMSContactsCacheHelper::cache_set('statusorganization_people', $the_data);
            }
        }
        return $the_data;
    }

    /**
     * Cache the people membership to statusPerson groups
     * @return array Array of arrays keyed by cmsStatusPerson DN with user DN as items
     */
    function get_people_statusorganization() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('people_statusorganization')) {
            } else {
                $temporary = $this->get_statusorganization_people();
                foreach($temporary as $list_dn => $list) {
                    foreach($list->uniquemember as $udn) {
                        $the_data[$udn][] = $list_dn;
                    }
                }
                CMSContactsCacheHelper::cache_set('people_statusorganization', $the_data);
            }
        }
        return $the_data;
    }



    /**
     * Uncached call to get the people instrument relation
     * @return array Array with membership data for instrument
     */
    function ldap_get_instrument_people() {
        $ret = array();
        if($rows = $this->ldap_search_cms('(objectClass=' . CMS_INSTRUMENT. ')')) {
            foreach($rows as $row) {
                $list = new stdClass();
                $list->dn = $row['dn'];
                CMSContactBase::get_multi_valued_attribute($row, 'objectclass', $list);
                CMSContactBase::get_single_valued_attribute($row, 'uuid', $list);
                CMSContactBase::get_single_valued_attribute($row, 'cn', $list);
                CMSContactBase::get_single_valued_attribute($row, 'description', $list);
                CMSContactBase::get_multi_valued_attribute($row, 'uniquemember', $list);
                $list->title = $list->cn;
                $ret[$list->uuid] = $list;
            }
            $this->ldap_free_last_result();
        }
        return $ret;
    }


    /**
     * Cache the people instrument relation.
     * @return array Array with membership data for instrument
     */
    function get_instrument_people() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('instrument_people')) {
            } else {
                $the_data = $this->ldap_get_instrument_people();
                CMSContactsCacheHelper::cache_set('instrument_people', $the_data);
            }
        }
        return $the_data;
    }


    /**
     * Cache the people instrument relation.
     * @return array Array with membership data for instrument
     */
    function get_people_instrument() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('people_instrument')) {
            } else {
                $temporary = $this->ldap_get_instrument_people();
                foreach($temporary as $list_dn => $list) {
                    foreach($list->uniquemember as $udn) {
                        $the_data[$udn][] = $list_dn;
                    }
                }
                CMSContactsCacheHelper::cache_set('people_instrument', $the_data);
            }
        }
        return $the_data;
    }


    /**
     * This method retrieves all e-mail (mail property) of LDAP users members of a list (cmsMailingList)
     * @param string $instrument_uuid Instrument UUID (part of mailing list DN (pk))
     * @param string $list_name List name (i.e Working group)
     * @return array Array of e-mail addresses
     */
    function ldap_get_emails_of_list_members($instrument_uuid, $list_name) {
        $ret = array();
        $query = sprintf('(&(objectClass=cmsMailingList)(uuid=%s)(cn=%s))', $instrument_uuid, $list_name);
        $rows = $this->ldap_search_cms($query);
        if(count($rows)) {
            $list = $rows[0];
            if(!empty($list['uniquemember'])) {
                unset($list['uniquemember']['count']);
                foreach($list['uniquemember'] as $user_dn) {
                    if(!empty($user_dn)) {
                        $uid = str_replace(',ou=Users,o=CMS', '', $user_dn);
                        $result = $this->ldap_search_cms($uid);

                        if(count($result)) {
                            $user = $result[0];
                            if (!empty($user['mail']['count']) && $user['mail']['count'] > 0) {
                                $ret = array_merge($ret, CMSContactBase::get_multi_valued_attribute($user, 'mail'));
                            }
                        }
                    }
                }
            }
        }
        return $ret;
    }


    /**
     * !WARNING! For performance reason, this method retrieves records (contacts) partially loaded (not all attributes).
     * Attributes returned are those used in listing of the contacts
     */
    function ldap_get_contacts_partial_attributes() {
        $the_data = &drupal_static(__FUNCTION__);
        if(empty($the_data)) {
            if($the_data = CMSContactsCacheHelper::cache_get('people_partial_attributes')) {
            } else {
                $statusperson = $this->get_people_statusperson();
                $statusorganization = $this->get_people_statusorganization();
                $people_instrument = $this->get_people_instrument();
                $instrument_people = $this->get_instrument_people();
                $mailing_lists_people = $this->get_people_mailing_lists();

                $attributes = array('uid', 'cn', 'sn', 'givenname', 'region', 'iso2', 'o', 'cpiso2', 'cmsavailability', 'mail');
                $filter = '(objectClass=' . CMS_CONTACT . ')';

                // Unpaginated query
                $rows = $this->ldap_search_cms($filter, NULL, $attributes);
                foreach($rows as $u) {
                    $the_data[$u['dn']] = $this->init_ldap_user($u,
                        $statusperson, $statusorganization, $people_instrument, $instrument_people, $mailing_lists_people
                    );
                }
                $this->ldap_free_last_result();
                CMSContactsCacheHelper::cache_set('people_partial_attributes', $the_data);
                // Do paginated processing to enhance memory consumption (~10%)
                // Currently after this call, subsequent searches are failing with protocol error
                /*
                $cookie = '';
                $pageSize = 1000;
                $result = NULL;
                do {
                    ldap_control_paged_result($this->ldap_conn, $pageSize, true, $cookie);
                    $result  = ldap_search($this->ldap_conn, $this->base_dn, $filter, $attributes);
                    $rows = ldap_get_entries($this->ldap_conn, $result);
                    if($rows['count'] > 0) {
                        unset($rows['count']);
                        foreach($rows as $u) {
                            $the_data[$u['dn']] = $this->init_ldap_user($u,
                                $statusperson, $statusorganization, $people_instrument, $instrument_people
                            );
                        }
                    }
                    ldap_control_paged_result_response($this->ldap_conn, $result, $cookie);
                } while($cookie !== NULL && $cookie != '');
                if($result) {
                    @ldap_free_result($result);
                    $result = NULL;
                }
                */
            }
        }
        return $the_data;
    }


    /**
     * @param array $ldap LDAP data
     * @param array $statusperson
     * @param array $statusorganization
     * @param array $people_instrument
     * @param array $instrument_people
     * @return CMSContact user object
     */
    private function init_ldap_user($ldap, $statusperson, $statusorganization, $people_instrument, $instrument_people, $mailing_lists_people) {
        $ob = new CMSContactBase($ldap);
        if(array_key_exists($ob->dn, $statusperson)) {
            $ob->statusperson = $statusperson[$ob->dn];
        }
        if(array_key_exists($ob->dn, $statusorganization)) {
            $ob->statusorganization = $statusorganization[$ob->dn];
        }
        if(array_key_exists($ob->dn, $mailing_lists_people)) {
            $ob->mailing_lists = $mailing_lists_people[$ob->dn];
        }
        $ob->instruments = array();
        if(array_key_exists($ob->dn, $people_instrument)) {
            $ob->instruments = $people_instrument[$ob->dn];
            foreach($ob->instruments as $dn) {
                if(array_key_exists($dn, $instrument_people)) {
                    $ob->instruments_rendered[] = $instrument_people[$dn]->title;
                }
            }
            if(!empty($ob->instruments_rendered)) {
                $ob->instruments_rendered = implode(', ', $ob->instruments_rendered);
            } else {
                $ob->instruments_rendered = '';
            }
        }
        return $ob;
    }


    /**
     * Filters the contacts based on filtering criterion received
     * @param array $filters Filter with key => values
     * @return array Array of filtered contacts
     */
    function contacts_list_filter($filters = array()) {
        $all_users = $this->ldap_get_contacts_partial_attributes();
        $filter_regex = !empty($filters['sSearch']) ? '/' . $filters['sSearch'] . '/i' : FALSE;

        $field_or = empty($filters['per_field_operator']);
        $filter_instrument = !empty($filters['instruments']);
        $filter_statusperson = !empty($filters['status_person']);
        $filter_statusorganization = !empty($filters['status_organization']);
        $filter_availability = !empty($filters['availability']);
        $filter_mailing_lists = !empty($filters['mailing_lists']);
        $available = FALSE;
        if($filter_availability) {
            $available = $filters['availability'] == 'TRUE';
        }
        $filtered_users = array();

        if($filter_instrument) {
            sort($filters['instruments']);
        }
        foreach($all_users as &$u) {
            $add = TRUE;
            if($filter_instrument) {
                if(is_array($u->instruments)) {
                    sort($u->instruments);
                    $intersect = array_intersect($u->instruments, $filters['instruments']);
                    sort($intersect);
                    if($field_or) {
                        if(empty($intersect)) {
                            $add = FALSE;
                        }
                    } else {
                        if($intersect != $filters['instruments']) {
                            $add = FALSE;
                        }
                    }
                } else {
                    $add = FALSE;
                }
            }
            # Country - $field_or is always TRUE as we have one country per user
            if(!empty($filters['countries']) && (empty($u->country) || !in_array($u->country, $filters['countries']))) {
                $add = FALSE;
            }
            # Region - $field_or is always TRUE as we have one region per user
            if(!empty($filters['regions']) && (empty($u->region) || !in_array($u->region, $filters['regions']))) {
                $add = FALSE;
            }
            # Availability
            if($filter_availability && $u->availability != $available) {
                $add = FALSE;
            }

            # Mailing Lists
            if($filter_mailing_lists) {
                if(is_array($u->mailing_lists)) {
                    sort($u->mailing_lists);
                    $intersect = array_intersect($u->mailing_lists, $filters['mailing_lists']);
                    sort($intersect);
                    if($field_or) {
                        if(empty($intersect)) {
                            $add = FALSE;
                        }
                    } else {
                        if($intersect != $filters['mailing_lists']) {
                            $add = FALSE;
                        }
                    }
                } else {
                    $add = FALSE;
                }
            }

            # Search string
            if($filter_regex && !preg_match($filter_regex, $u->full_text)) {
                $add = FALSE;
            }
            # Status person
            if($filter_statusperson) {
                if(is_array($u->statusperson)) {
                    sort($u->statusperson);
                    $intersect = array_intersect($u->statusperson, $filters['status_person']);
                    sort($intersect);
                    if($field_or) {
                        if(empty($intersect)) {
                            $add = FALSE;
                        }
                    } else {
                        if($intersect != $filters['status_person']) {
                            $add = FALSE;
                        }
                    }
                } else {
                    $add = FALSE;
                }
            }
            # Status organization
            if($filter_statusorganization) {
                if(is_array($u->statusorganization)) {
                    sort($u->statusorganization);
                    $intersect = array_intersect($u->statusorganization, $filters['status_organization']);
                    sort($intersect);
                    if($field_or) {
                        if(empty($intersect)) {
                            $add = FALSE;
                        }
                    } else {
                        if($intersect != $filters['status_organization']) {
                            $add = FALSE;
                        }
                    }
                } else {
                    $add = FALSE;
                }
            }
            # Assignment
            if($add) {
                $filtered_users[] = $u;
            }
        }
        return $filtered_users;
    }


    /**
     * Receives the list of users and sorts them by certain attributes. Used in contacts listing page.
     * @param array $rows LDAP users
     * @param array $criteria Array with 'column' and 'direction'
     * @return array Sorted LDAP users
     */
    function contacts_list_sort($rows, $criteria = array()) {
        if(!empty($criteria)) {
            $column = $criteria[0]['column'];
            $direction = $criteria[0]['direction'];
            usort($rows, function($a, $b) use ($column) {
                    switch($column) {
                        case 1:
                            return strcasecmp($a->first_name, $b->first_name);
                        case 3:
                            return strcasecmp($a->organization, $b->organization);
                        case 4:
                            return strcasecmp($a->country_rendered, $b->country_rendered);
                        case 5:
                            return strcasecmp($a->country_post_rendered, $b->country_post_rendered);
                        case 6:
                            return strcasecmp($a->instruments_rendered, $b->instruments_rendered);
                        default:
                            return strcasecmp($a->last_name, $b->last_name);
                    }
                }
            );
            if($direction == 'desc') {
                $rows = array_reverse($rows, FALSE);
            }
        }
        return $rows;
    }


    /**
     * Add a basic entry into LDAP. Wrapper around ldap_add method
     * @param string $dn Entry DN
     * @param array $entry Array containing LDAP entry
     * @return bool Returns true on success or false on failure.
     */
    public function ldap_add($dn, $entry) {
        return ldap_add($this->ldap_conn, $dn, $entry);
    }

    /**
     * Synonym for ldap_add
     * @deprecated
     * @see ldap_add
     */
    public function add($dn, $entry) {
        return ldap_add($this->ldap_conn, $dn, $entry);
    }

    /**
     * Synonym for ldap_modify
     * @deprecated
     * @see ldap_modify
     */
    public function modify($dn, $entry) {
        return ldap_modify($this->ldap_conn, $dn, $entry);
    }

    /**
     * Modify a ldap entry
     * @param string $dn Entry DN
     * @param array $entry Entry data
     * @return bool <b>TRUE</b> on success or <b>FALSE</b> on failure.
     */
    public function ldap_modify($dn, $entry) {
        return ldap_modify($this->ldap_conn, $dn, $entry);
    }

    /**
     * Update LDAP entry. Wrapper around ldap_modify, but contains also CMS specific preparations
     * @param string $dn Entry DN
     * @param array $entry Actual LDAP entry
     * @return bool <b>TRUE</b> on success or <b>FALSE</b> on failure.
     */
    function ldap_modify_cms($dn, $entry) {
        unset($entry['dn']);
        unset($entry['title']);
        return ldap_modify($this->ldap_conn, $dn, $entry);
    }


    /**
     * Synonym for ldap_delete
     * @deprecated
     * @see ldap_delete below
     */
    public function delete($dn) {
        return $this->ldap_delete($dn);
    }

    /**
     * Delete record from LDAP
     * @param string $dn Entry DN
     * @return bool <b>TRUE</b> on success or <b>FALSE</b> on failure.
     */
    public function ldap_delete($dn) {
        return ldap_delete($this->ldap_conn, $dn);
    }

    /**
     * Retrieve LDAP connection.
     *
     * @return resource
     *   Connection resource
     */
    public function get_connection() {
        return $this->ldap_conn;
    }
}
