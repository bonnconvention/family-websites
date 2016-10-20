<?php

//module_load_include('inc', 'cms_contacts', 'cms_contacts.pages');

/**
 * Callback function for menu item
 *
 * Exported listed contacts to CSV/XLS format
 */

function cms_contacts_export($type = 'csv') {
    $request = new CMSContactsRequestHelper();

    $export = new CMSContactsExport($request);
    $rows = $export->prepare_data();

    switch(strtolower($type)) {
        case 'csv':
            // Offers the file for download
            CMSUtils::set_download_http_headers('text/csv', sprintf('contacts_%s.csv', date('YmdHis')));
            $fp = fopen('php://output', 'w');
            $export->export_csv($rows, $fp);
            break;
        case 'xls':
            // Redirect output to a client’s web browser (Excel5)
            CMSUtils::set_download_http_headers('application/vnd.ms-excel', sprintf('contacts_%s.xls', date('YmdHis')));
            $xls = $export->export_excel($rows);
            $xls_writer = PHPExcel_IOFactory::createWriter($xls, 'Excel5');
            $xls_writer->save('php://output');
            break;
        default:
            drupal_not_found();
            break;
    }
    drupal_exit();
}


class CMSContactsExport {

    private $request;

    public static $headers = array(
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
        'is_nfp' => 'NFP',
        'lastmodifiedtime' => 'Last Modified',

        'dummy1' => 'Instruments',
        'dummy2' => 'Status person',
        'dummy3' => 'Status organization'
    );

    /**
     * @param CMSContactsRequestHelper $request Request parameters
     */
    function __construct(CMSContactsRequestHelper $request) {
        $this->request = $request;
    }

    function prepare_data() {
        $ret = array();
        $ldap = CMSContactsLDAP::get_instance();
        $filters = $this->request->get_list_parameters();
        $sort = $this->request->get_list_sorting();

        $users = $ldap->contacts_list_filter($filters);
        $users = $ldap->contacts_list_sort($users, $sort);

        // Retrieve the three lists
        $people_instrument = $ldap->get_people_instrument();
        $instruments = array();
        foreach($ldap->get_instrument_people() as $dn => $list) {
            $instruments[$dn] = $list->title;
        }

        $people_statusperson = $ldap->get_people_statusperson();
        $statuspersons = array();
        foreach($ldap->get_statusperson_people() as $dn => $list) {
            $statuspersons[$dn] = $list->title;
        }

        $people_statusorganization = $ldap->get_people_statusorganization();
        $statusorganizations = array();
        foreach($ldap->get_statusorganization_people() as $dn => $list) {
            $statusorganizations[$dn] = $list->title;
        }

        $people_mailing_lists = $ldap->get_people_mailing_lists();
        $mailing_lists = array();
        foreach($ldap->get_mailing_lists() as $dn => $list) {
            $mailing_lists[$dn] = $list->title;
        }

        $countries = cms_contacts_get_country_names_cached();

        //Get all information about filtered users
        foreach($users as $row) {
            $filter = "(&(objectClass=cmsContact)(uid=$row->uid))";
            $contact = $ldap->ldap_search_cms($filter);
            if (!empty($contact[0])) {
                $user_dn = $contact[0]['dn'];
                $row = array();
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'personaltitle');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'cn');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'givenname');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'sn');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'uid');
                $row[] = self::get_multi_valued_attribute($contact[0], 'mail');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'title');
                $iso2 = CMSContactBase::get_single_valued_attribute($contact[0], 'iso2');
                $row[] = $countries[strtoupper($iso2)];
                $cpiso2 = CMSContactBase::get_single_valued_attribute($contact[0], 'cpiso2');
                $row[] = $countries[strtoupper($cpiso2)];
                $row[] = self::get_multi_valued_attribute($contact[0], 'personalemail');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'st');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'postalcode');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'street');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'o');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'ou');
                $row[] = self::get_multi_valued_attribute($contact[0], 'workphonenumbers');
                $row[] = self::get_multi_valued_attribute($contact[0], 'homephone');
                $row[] = self::get_multi_valued_attribute($contact[0], 'faxnumbers');
                $row[] = self::get_multi_valued_attribute($contact[0], 'mobilephonenumbers');
                $row[] = self::get_multi_valued_attribute($contact[0], 'websites');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'skype');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'description');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'region');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'cmsavailability');
                $row[] = self::get_multi_valued_attribute($contact[0], 'preferredlanguages');
                $row[] = self::get_multi_valued_attribute($contact[0], 'additionalemails');
                $row[] = CMSContactBase::get_single_valued_attribute($contact[0], 'is_nfp');

                $last_modif_date = CMSContactBase::get_single_valued_attribute($contact[0], 'lastmodifiedtime');
                if (!empty($last_modif_date)) {
                  $last_modif_date = date('d/m/Y', $last_modif_date);
                }
                $row[] = $last_modif_date;

                // Instruments
                $values = array();
                if(array_key_exists($user_dn, $people_instrument)) {
                    foreach($people_instrument[$user_dn] as $list_dn) {
                        if(array_key_exists($list_dn, $instruments)) {
                            $values[] = $instruments[$list_dn];
                        }
                    }
                }
                $row[] = implode(',', $values);
                // Status person
                $values = array();
                if(array_key_exists($user_dn, $people_statusperson)) {
                    foreach($people_statusperson[$user_dn] as $list_dn) {
                        if(array_key_exists($list_dn, $statuspersons)) {
                            $values[] = $statuspersons[$list_dn];
                        }
                    }
                }
                $row[] = implode(',', $values);
                // Status organization
                $values = array();
                if(array_key_exists($user_dn, $people_statusorganization)) {
                    foreach($people_statusorganization[$user_dn] as $list_dn) {
                        if(array_key_exists($list_dn, $statusorganizations)) {
                            $values[] = $statusorganizations[$list_dn];
                        }
                    }
                }
                $row[] = implode(',', $values);
                // Add row to the result
                $ret[] = $row;
            }
        }
        return $ret;
    }


    static function get_headers() {
        return array_values(self::$headers);
    }


    function export_excel($rows) {
        require_once(drupal_realpath(libraries_get_path('PHPExcel') . '/Classes/PHPExcel.php'));
        $xls = new PHPExcel();

        // Set properties
        $xls->getProperties()->setCreator("CMS Databases website");
        $xls->getProperties()->setLastModifiedBy("iCMS robot");
        $xls->getProperties()->setTitle("CMS contacts");
        $xls->getProperties()->setSubject("List of CMS contacts");
        $xls->getProperties()->setDescription("Search results of CMS contacts exported from the LDAP database");
        $xls->setActiveSheetIndex(0);

        $letters = array();
        $headers = self::get_headers();
        $total_columns = count($headers);
        $count = 0;
        for($letter = 'A'; $letter <= 'ZZ'; $letter++) {
            if ($count < $total_columns) {
                $letters[] = $letter;
            }
            $count ++;
        }
        // Set column titles
        $count = 0;
        foreach($headers as $idx => $title) {
            $cell_name = $letters[$idx] . '1';
            $value = $title;
            $xls->getActiveSheet()->SetCellValue($cell_name, $value);
            $xls->getActiveSheet()->getStyle($cell_name)->getFont()->setBold(true);
        }
        // Rename sheet
        $xls->getActiveSheet()->setTitle('Contacts');

        foreach($rows as $idx => $data) {
            $cell_name = 'A' . ($idx + 2);
            $xls->getActiveSheet()->fromArray($data, NULL, $cell_name);
        }

        return $xls;
    }


    function export_csv($rows, &$out) {
        // Add BOM_UTF-8 header
        //fputs($out, $bom =( chr(0xEF) . chr(0xBB) . chr(0xBF) ));

        // Set file headings
        fputcsv($out, self::get_headers());

        //add rows
        foreach($rows as $data) {
            fputcsv($out, $data, ',', '"');
        }
    }


    private static function get_multi_valued_attribute($array, $name) {
        $ret = FALSE;
        if(!empty($array[$name])) {
            unset($array[$name]['count']);
            $ret = implode(',', $array[$name]);
        }
        return $ret;
    }
}
