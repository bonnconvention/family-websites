<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201405121714
 */


/**
 * Render the contacts listing view
 * @return string Rendered HTML template using theme('contacts_list')
 */
function cms_contacts_list() {
    $ret = array();
    $breadcrumb = array();
    $breadcrumb[] = l(t('Home'), '<front>');
    drupal_set_breadcrumb($breadcrumb);

    $module_path = drupal_get_path('module', 'cms_contacts');

    $ret['filters'] = drupal_get_form('cms_contacts_list_form');

    $table_id = 'contacts-listing';
    $ret['table'] = array(
        '#theme' => 'table',
        '#header' => array(
            array('data' => '#'),
            t('First name'), t('Last name'), t('Organization'), t('Country'),
            t('Instruments'), t('Actions')),
        '#prefix' => '<div class="row">', '#suffix' => '</div>',
        '#rows' => array(),
        '#attributes' => array(
            'id' => 'contacts-listing'
        )
    );

    $datatable_options = array(
        'bServerSide' => TRUE, 'bProcessing' => TRUE, 'bDeferRender' => TRUE, 'bFilter' => TRUE,
        'sPaginationType' => 'bootstrap',
        'aoColumns' => array(
            array('sTitle' => '#', 'bSortable' => FALSE),
            array('sTitle' => t('First name'), 'bSortable' => TRUE),
            array('sTitle' => t('Last name'), 'bSortable' => TRUE),
            array('sTitle' => t('Organization'), 'bSortable' => TRUE),
            array('sTitle' => t('Country'), 'bSortable' => TRUE),
            array('sTitle' => t('Instruments'), 'bSortable' => FALSE),
            array('sTitle' => t('Actions'), 'bSortable' => FALSE),
        ),
        "aaSorting" => array(
            array($ret['filters']['iSortCol_0']['#value'], $ret['filters']['sSortDir_0']['#value']),
        ),
        'sAjaxSource' => CMSContactsURLHelper::url_listing_ajax_endpoint(),
        'fnServerParams' => 'cms_contacts_list_datatables_callback',
        'fnDrawCallback' => 'cms_contacts_list_draw_datatables_callback'
    );

    $ret['modal'] = array(
        '#type' => 'markup',
        '#markup'=> theme_render_template($module_path .'/templates/modal.tpl.php', array()),
    );

    // See cms_contacts_library()
    drupal_add_library('cms_contacts', 'cms_contacts_datatables');
    drupal_add_js(array('datatables' => array('#' . $table_id => $datatable_options)), 'setting');
    drupal_add_js(array('cms_contacts_listing_table' => $table_id), 'setting');
    drupal_add_js($module_path . '/js/list.js', array('type' => 'file', 'scope' => 'footer'));
    return $ret;
}


/**
 * Drupal form to render the filtering area of contacts listing
 * @param stdClass $context Form context
 * @param array $form_state Form status
 * @return array Renderable form array
 */
function cms_contacts_list_form($context, &$form_state) {
    $form_filters = array(
        '#type' => 'form', '#method' => 'post',
        '#attributes' => array('class' => array('contacts-form'), 'role' => 'form'),
    );

    if(user_access('create contacts content')) {
        $form_filters['btn_add_contact'] = array(
            '#theme' => 'link',
            '#text' => t('Add new contact'),
            '#path' => CMSContactsURLHelper::url_add(),
            '#options' => array(
                'attributes' => array(
                    'title' => t('Create new LDAP contact'),
                    'class' => array('btn', 'btn-success', 'pull-right')
                ),
                'html' => FALSE,
            ),
        );
    }

    $key = 'per_field_operator';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : '';
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select(
            array('title' => t('Per field operator'),'name' => 'per_field_operator', 'id' => 'per_field_operator'),
            array('' => t('Is any of'), 'and' => t('Is all of')),
            $selected
        ),
        array('#prefix' => '<div class="row"><div class="col-md-4">', '#suffix' => '</div></div>')
    );

    $key = 'instruments';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : array();
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_instruments($selected, array(), TRUE),
        array('#prefix' => '<div class="row"><div class="col-md-4">', '#suffix' => '</div>')
    );

    $key = 'regions';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : array();
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_regions($selected),
        array('#prefix' => '<div class="col-md-4">', '#suffix' => '</div>')
    );

    $key = 'countries';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : array();
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_countries($selected),
        array('#prefix' => '<div class="col-md-4">', '#suffix' => '</div>')
    );

    $key = 'status_person';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : array();
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_status_person($selected, array(), TRUE),
        array('#prefix' => '<div class="col-md-3">', '#suffix' => '</div>')
    );

    $key = 'status_organization';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : array();
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_status_organization($selected, array(), TRUE),
        array('#prefix' => '<div class="col-md-3">', '#suffix' => '</div>')
    );

    $key = 'availability';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : '';
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_availability($selected),
        array('#prefix' => '<div class="col-md-3">', '#suffix' => '</div>')
    );

    $key = 'mailing_lists';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : '';
    $form_filters[$key] = array_merge(
        CMSContactsUIHelper::html_select_mailing_list($selected),
        array('#prefix' => '<div class="col-md-3">', '#suffix' => '</div></div>')
    );

    $key = 'iSortCol_0';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : 2;
    $form_filters[$key] = array('#theme' => 'hidden', '#name' => $key, '#value' => $selected);

    $key = 'sSortDir_0';
    $selected = !empty($form_state['input'][$key]) ? $form_state['input'][$key] : 'asc';
    $form_filters[$key] = array('#theme' => 'hidden', '#name' => $key, '#value' => $selected);

    $form_filters['search'] = array(
        '#value' => t('Search'), '#type' => 'submit', '#name' => 'search',
        '#attributes' => array('class' => array('btn-primary')),
        '#prefix' => '<div class="btn-toolbar">'
    );

    $form_filters['clear'] = array(
        '#text' => t('Reset'), '#theme' => 'link',
        '#path' => CMSContactsURLHelper::url_listing(),
        '#options' => array(
            'attributes' => array(
                'class' => array('btn', 'btn-default'),
                'role' => 'button'),
            'html' => FALSE,
        ),
    );

    $form_filters['export']['export'] = array(
        '#text' => t('Export').' <span class="caret"></span>',
        '#theme' => 'link',
        '#options' => array(
            'attributes' => array(
                'class' => array('btn', 'btn-default dropdown-toggle'),
                'role' => 'button',
                'data-toggle' => 'dropdown',
            ),
            'html' => TRUE,
        ),
        '#prefix' => '<div class="btn-group pull-right">',
    );

    $form_filters['export']['csv'] = array(
        '#value' => t('CSV'),
        '#type' => 'submit',
        '#name' => 'export_csv',
        '#prefix' => '<ul class="dropdown-menu"><div class="btn-group btn-group-justified"><div class="btn-group">',
        '#suffix' => '</div>',
    );

    $form_filters['export']['xls'] = array(
        '#value' => t('Excel'),
        '#type' => 'submit',
        '#name' => 'export_xls',
        '#prefix' => '<div class="btn-group">',
        '#suffix' => '</div></div></ul></div>',
    );

    $form_filters['clear_cache'] = array(
        '#value' => t('Clear cache'), '#type' => 'submit', '#name' => 'clear_cache',
        '#attributes' => array('class' => array('btn', 'btn-danger', 'pull-right')),
        '#suffix' => '</div>',
    );


    return $form_filters;
}

/**
 * Handler for the submit actions of the contacts listing form
 * @param array $form Form data
 * @param array $form_state Form status
 */
function cms_contacts_list_form_submit($form, &$form_state) {
    if(!empty($form_state['clicked_button']['#name'])) {
        $op = $form_state['clicked_button']['#name'];
        switch ($op) {
            case 'clear_cache':
                CMSContactsCacheHelper::cache_clear_all();
                break;
            case 'export_csv':
                cms_contacts_export('csv');
                break;
            case 'export_xls':
                cms_contacts_export('xls');
                break;
            default:
                break;
        }
    }
    // Rebuild the form so that selections are preserved
    $form_state['rebuild'] = TRUE;
}


/**
 * Datatables Ajax endpoint for server-side contact listing
 */
function cms_contacts_list_ajax() {
    $ret = array(
        'sEcho' => intval($_GET['sEcho']),
        'iTotalRecords' => 0,
        'iTotalDisplayRecords' => 0,
        'aaData' => array()
    );
    $request = new CMSContactsRequestHelper();
    $filters = $request->get_list_parameters();
    $sort = $request->get_list_sorting();

    $ldap = CMSContactsLDAP::get_instance();
    $users = $ldap->contacts_list_filter($filters);
    $users = $ldap->contacts_list_sort($users, $sort);

    $offset = $request->get_integer('iDisplayStart');
    $page_size = $request->get_integer('iDisplayLength', 10);
    $ret['iTotalRecords'] = count($users);
    $ret['iTotalDisplayRecords'] = count($users);
    $users = array_slice($users, $offset, $page_size);
    $display = array();
    foreach($users as $idx => $row) {
        $display[] = (object)array(
            $idx + $offset + 1,
            $row->first_name,
            $row->last_name,
            $row->organization,
            $row->country_rendered,
            $row->instruments_rendered,
            l(t('View'), $row->view_link)
                . ' | ' . l(t('Edit'), $row->edit_link)
                . ' | ' .
                    l(t('Summary'), '',
                        array(
                            'attributes' =>
                                array(
                                    'class' => array('contact-summary'),
                                    'data-toggle' => 'modal',
                                    'data-target' => '#contact_modal',
                                    'data-href' => '/contacts/ajax/item_summary/'.$row->uid,
                                    'role' => 'button',
                                ),
                            'fragment' => 'contact_modal',
                            'external' => TRUE,
                            )
                        ),
        );
    }
    $ret['aaData'] = $display;
    echo json_encode($ret);
    drupal_exit();
}

/**
 * Callback for view_contact page
 * @param $contact
 *
 * @return mixed
 */
function cms_contacts_view_contact($contact) {

    //Redirect on  from front-end to manage (sudomain)
    $domain = domain_get_domain();
    if (!empty($domain) && !strpos($domain['subdomain'], 'manage')) {
        $manage_domain_id = db_query("SELECT domain_id FROM {domain} WHERE machine_name LIKE '%_manage' ")->fetchField();
        unset($_GET['destination']);
        $manage = domain_load($manage_domain_id);
        $path = domain_get_uri($manage);
        drupal_goto($path);
    }

    drupal_set_title($contact->clean_contact['cn']);
    //Set breadcrumb
    $breadcrumb = array();
    $breadcrumb[] = l(t('Home'), '<front>');
    $breadcrumb[] = l(t('Contacts'), 'contacts/listing');
    drupal_set_breadcrumb($breadcrumb);

    $return['btn_edit'] = array(
        '#theme' => 'link',
        '#text' => t('Edit'),
        '#path' => $contact->edit_link,
        '#options' => array(
            'attributes' => array(
                'class' => array('btn', 'btn-primary'),
            ),
            'html' => FALSE,
        ),
        '#prefix' => '<div class="btn-toolbar">'
    );

    $return['btn_delete'] = array(
        '#theme' => 'link',
        '#text' => t('Delete'),
        '#path' => $contact->delete_link,
        '#options' => array(
            'attributes' => array(
                'class' => array('btn', 'btn-danger'),
            ),
            'html' => FALSE,
        ),
        '#suffix' => '</div>',
    );

    $rows = array();
    if (!empty($contact->clean_contact['lastmodifiedtime'])) {
        $rows [] = array(
            array('data' => t('Last updated'), 'header' => TRUE),
            array('data' => t('@lastmodifiedtime by @user', array(
              '@lastmodifiedtime' => date('d-m-Y', $contact->clean_contact['lastmodifiedtime']),
              '@user' => $contact->clean_contact['lastmodifiedby']
            ))),
            'weight' => -2,
        );
    }

    foreach ($contact->clean_contact as $key => $value) {
        if (!in_array(strtolower($key), CMSContact::$hidden_view_fields)){
            $row = array();
            if ($key == 'iso2' || $key == 'cpiso2') {
                $countries = cms_contacts_get_country_names_cached();
                $row []= array(
                    'data' => (!empty(CMSContact::$key_labels[$key])) ? CMSContact::$key_labels[$key] : $key,
                    'header' => TRUE,
                );
                $row []= array('data' => $countries[$value]);
                $row['weight'] = (!empty(CMSContact::$key_weight[$key])) ? CMSContact::$key_weight[$key] : -1;
                $rows []= $row;
            } else {
                $row []= array(
                    'data' => (!empty(CMSContact::$key_labels[$key])) ? CMSContact::$key_labels[$key] : $key,
                    'header' => TRUE
                );
                $row []= array('data' => CMSContactsUIHelper::render_contact_value($value));
                $row['weight'] = (!empty(CMSContact::$key_weight[$key])) ? CMSContact::$key_weight[$key] : -1;
                $rows []= $row;
            }
        }
    }

    uasort($rows, 'drupal_sort_weight');

    foreach ($rows as $key => $row) {
        unset($row['weight']);
        $rows[$key] = $row;
    }

    $table = array(
        '#theme' => 'table',
        '#header' => array(),
        '#rows' => $rows,
        '#attributes' => array('class'=> array('table', 'table-bordered')),
        '#prefix' => '<div class="row">', '#suffix' => '</div>',
    );

    $return['contact_information'] = array(
        '#title' => t('Contact Information'),
        '#type' => 'fieldset',
        '#id' => 'contact_information',
        '#attributes' => array(),
    );
    $return['contact_information']['table'] = $table;

    if (!empty($contact->instruments_data)) {
        $return['instrument_fieldset'] = array(
            '#title' => t('CMS Instrument status'),
            '#type' => 'fieldset',
            '#id' => 'instrument_fieldset',
            '#attributes' => array(),
        );
        $return['instrument_fieldset']['instruments_table'] = CMSContactsUIHelper::render_contact_instrument_data($contact->instruments_data);
    }


    return $return;
}

/**
 * Callback for edit/add contact page
 *
 * @param $form
 * @param $form_submit
 * @param null $contact_obj
 *
 * @return mixed
 */
function cms_contacts_form_edit_contact($form, &$form_state, $contact_obj = NULL) {

    //Redirect on  from front-end to manage (sudomain)
    $domain = domain_get_domain();
    if (!empty($domain) && !strpos($domain['subdomain'], 'manage')) {
        $manage_domain_id = db_query("SELECT domain_id FROM {domain} WHERE machine_name LIKE '%_manage' ")->fetchField();
        unset($_GET['destination']);
        $manage = domain_load($manage_domain_id);
        $path = domain_get_uri($manage);
        drupal_goto($path);
    }

    if (!empty($contact_obj)) {
        //Get clean contact object
        $contact =  $contact_obj->clean_contact;
        $contact['instruments_data'] = $contact_obj->instruments_data;
        //Set breadcrumb
        $breadcrumb = array();
        $breadcrumb[] = l('Home', '<front>');
        $breadcrumb[] = l($contact['cn'], 'contacts/'. $contact['uid']);
        drupal_set_breadcrumb($breadcrumb);

        $cancel_link = 'contacts/'. $contact['uid'];
        $is_new = FALSE;

    } else {
        $cancel_link = 'contacts/listing';
        $is_new = TRUE;
    }

    $form['cmsavailability'] = array(
        '#title' => t(CMSContact::$key_labels['cmsavailability']),
        '#type' => 'radios',
        '#options' => array(
            'TRUE' => t('Available'),
            'FALSE' => t('Unavailable'),
        ),
        '#required' => TRUE,
        '#tree' => TRUE,
    );
    if (!empty($contact['cmsavailability'])) {
        $form['cmsavailability']['#default_value'] = strtoupper($contact['cmsavailability']);
    }
    if (!empty($form_state['input']['cmsavailability'])) {
        $form['cmsavailability']['#default_value'] = strtoupper($form_state['input']['cmsavailability']);
    }

    $form['personaltitle'] = array(
        '#title' => t(CMSContact::$key_labels['personaltitle']),
        '#type' => 'textfield',
    );
    if (!empty($contact['personaltitle'])) {
        $form['personaltitle']['#default_value'] = $contact['personaltitle'];
    }
    if (!empty($form_state['input']['personaltitle'])) {
        $form['personaltitle']['#default_value'] = $form_state['input']['personaltitle'];
    }

    $form['givenname'] = array(
        '#title' => t(CMSContact::$key_labels['givenname']),
        '#type' => 'textfield',
        '#required' => TRUE,
    );
    if (!empty($contact['givenname'])) {
        $form['givenname']['#default_value'] = $contact['givenname'];
    }
    if (!empty($form_state['input']['givenname'])) {
        $form['givenname']['#default_value'] = $form_state['input']['givenname'];
    }

    $form['sn'] = array(
        '#title' => t(CMSContact::$key_labels['sn']),
        '#type' => 'textfield',
        '#required' => TRUE,
    );
    if (!empty($contact['sn'])) {
        $form['sn']['#default_value'] = $contact['sn'];
    }
    if (!empty($form_state['input']['sn'])) {
        $form['sn']['#default_value'] = $form_state['input']['sn'];
    }

    $form['title'] = array(
        '#title' => t(CMSContact::$key_labels['title']),
        '#type' => 'textfield',
    );
    if (!empty($contact['title'])) {
        $form['title']['#default_value'] = $contact['title'];
    }
    if (!empty($form_state['input']['title'])) {
        $form['title']['#default_value'] = $form_state['input']['title'];
    }

    $form['mail'] = array(
        '#title' => t(CMSContact::$key_labels['mail']),
        '#type' => 'textfield',
    );
    if (!empty($contact['mail'])) {
        $form['mail']['#default_value'] = $contact['mail'];
    }
    if (!empty($form_state['input']['mail'])) {
        $form['mail']['#default_value'] = $form_state['input']['mail'];
    }


    if(empty($contact['iso2'])) {
        $contact['iso2'] = '';
    }
    if(!empty($form_state['input']['iso2'])) {
        $contact['iso2'] = $form_state['input']['iso2'];
    }
    $form['iso2'] = array_merge(
        CMSContactsUIHelper::html_select_countries($contact['iso2']),
        array(
            '#id' => 'iso2',
            '#name' => 'iso2',
            '#title' => t(CMSContact::$key_labels['iso2']),
            '#multiple' => FALSE,
            '#attributes' => array('class'=> array('chosen')),
        )
    );
    CMSContactsUIHelper::prepend_none_to_select_form_item($form['iso2']);

    if(empty($contact['cpiso2'])) {
        $contact['cpiso2'] = '';
    }
    if(!empty($form_state['input']['cpiso2'])) {
        $contact['cpiso2'] = $form_state['input']['cpiso2'];
    }
    $form['cpiso2'] = array_merge(
        CMSContactsUIHelper::html_select_countries($contact['cpiso2']),
        array(
            '#id' => 'cpiso2',
            '#name' => 'cpiso2',
            '#title' => t(CMSContact::$key_labels['cpiso2']),
            '#multiple' => FALSE,
            '#attributes' => array('class'=> array('chosen')),
        )
    );
    CMSContactsUIHelper::prepend_none_to_select_form_item($form['cpiso2']);

    if(empty($contact['region'])) {
        $contact['region'] = '';
    }
    if(!empty($form_state['input']['region'])) {
        $contact['region'] = $form_state['input']['region'];
    }
    $form['region'] = array_merge(
        CMSContactsUIHelper::html_select_regions($contact['region']),
        array(
            '#id' => 'region',
            '#name' => 'region',
            '#title' => t(CMSContact::$key_labels['region']),
            '#multiple' => FALSE,
            '#attributes' => array('class'=> array('chosen')),
        )
    );
    CMSContactsUIHelper::prepend_none_to_select_form_item($form['region']);

    if(empty($contact['preferredlanguages'])) {
        $contact['preferredlanguages'] = array();
    }
    if(!empty($form_state['input']['preferredlanguages'])) {
        $contact['preferredlanguages'] = $form_state['input']['preferredlanguages'];
    }
    $form['preferredlanguages'] = array_merge(
        CMSContactsUIHelper::html_select_languages($contact['preferredlanguages']),
        array(
            '#id' => 'preferredlanguages',
            '#name' => 'preferredlanguages',
            '#title' => t(CMSContact::$key_labels['preferredlanguages']),
            '#multiple' => TRUE,
            '#attributes' => array('class'=> array('chosen')),
        )
    );

    $form['st'] = array(
        '#title' => t(CMSContact::$key_labels['st']),
        '#type' => 'textfield',
    );
    if (!empty($contact['st'])) {
        $form['st']['#default_value'] = $contact['st'];
    }
    if (!empty($form_state['input']['st'])) {
        $form['st']['#default_value'] = $form_state['input']['st'];
    }


    $form['postalcode'] = array(
        '#title' => t(CMSContact::$key_labels['postalcode']),
        '#type' => 'textfield',

    );
    if (!empty($contact['postalcode'])) {
        $form['postalcode']['#default_value'] = $contact['postalcode'];
    }
    if (!empty($form_state['input']['postalcode'])) {
        $form['postalcode']['#default_value'] = $form_state['input']['postalcode'];
    }

    $form['street'] = array(
        '#title' => t(CMSContact::$key_labels['street']),
        '#type' => 'textarea',
    );
    if (!empty($contact['street'])) {
        $form['street']['#default_value'] = $contact['street'];
    }
    if (!empty($form_state['input']['street'])) {
        $form['street']['#default_value'] = $form_state['input']['street'];
    }

    $form['o'] = array(
        '#title' => t(CMSContact::$key_labels['o']),
        '#type' => 'textfield',
    );
    if (!empty($contact['o'])) {
        $form['o']['#default_value'] = $contact['o'];
    }
    if (!empty($form_state['input']['o'])) {
        $form['o']['#default_value'] = $form_state['input']['o'];
    }

    $form['ou'] = array(
        '#title' => t(CMSContact::$key_labels['ou']),
        '#type' => 'textfield',
    );
    if (!empty($contact['ou'])) {
        $form['ou']['#default_value'] = $contact['ou'];
    }
    if (!empty($form_state['input']['ou'])) {
        $form['ou']['#default_value'] = $form_state['input']['ou'];
    }

    $form['workphonenumbers'] = array(
        '#title' => t(CMSContact::$key_labels['workphonenumbers']),
        '#type' => 'textfield',
        '#description' => t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['workphonenumbers'])) {
        $form['workphonenumbers']['#default_value'] = $contact['workphonenumbers'];
    }
    if (!empty($form_state['input']['workphonenumbers'])) {
        $form['workphonenumbers']['#default_value'] = $form_state['input']['workphonenumbers'];
    }

    $form['homephone'] = array(
        '#title' => t(CMSContact::$key_labels['homephone']),
        '#type' => 'textfield',
        '#description' => t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['homephone'])) {
        $form['homephone']['#default_value'] = $contact['homephone'];
    }
    if (!empty($form_state['input']['homephone'])) {
        $form['homephone']['#default_value'] = $form_state['input']['homephone'];
    }

    $form['faxnumbers'] = array(
        '#title' => t(CMSContact::$key_labels['faxnumbers']),
        '#type' => 'textfield',
        '#description' => t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['faxnumbers'])) {
        $form['faxnumbers']['#default_value'] = $contact['faxnumbers'];
    }
    if (!empty($form_state['input']['faxnumbers'])) {
        $form['faxnumbers']['#default_value'] = $form_state['input']['faxnumbers'];
    }

    $form['mobilephonenumbers'] = array(
        '#title' => t(CMSContact::$key_labels['mobilephonenumbers']),
        '#type' => 'textfield',
        '#description' => t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['mobilephonenumbers'])) {
        $form['mobilephonenumbers']['#default_value'] = $contact['mobilephonenumbers'];
    }
    if (!empty($form_state['input']['mobilephonenumbers'])) {
        $form['mobilephonenumbers']['#default_value'] = $form_state['input']['mobilephonenumbers'];
    }

    $form['websites'] = array(
        '#title' => t(CMSContact::$key_labels['websites']),
        '#type' => 'textfield',
        '#description' => t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['websites'])) {
         $form['websites']['#default_value'] = $contact['websites'];
    }
    if (!empty($form_state['input']['websites'])) {
         $form['websites']['#default_value'] = $form_state['input']['websites'];
    }

    $form['personalemail'] = array(
        '#title' => t(CMSContact::$key_labels['personalemail']),
        '#type' => 'textfield',
        '#description' => t('E-mail addresses from this field will be used for mailing purposes.') . t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['personalemail'])) {
        $form['personalemail']['#default_value'] = $contact['personalemail'];
    }
    if (!empty($form_state['input']['personalemail'])) {
        $form['personalemail']['#default_value'] = $form_state['input']['personalemail'];
    }

    $form['additionalemails'] = array(
        '#title' => t(CMSContact::$key_labels['additionalemails']),
        '#type' => 'textfield',
        '#description' => t('Separate multiple entries with a comma.'),
    );
    if (!empty($contact['additionalemails'])) {
        $form['additionalemails']['#default_value'] = $contact['additionalemails'];
    }
    if (!empty($form_state['input']['additionalemails'])) {
        $form['additionalemails']['#default_value'] = $form_state['input']['additionalemails'];
    }

    $form['skype'] = array(
        '#title' => t(CMSContact::$key_labels['skype']),
        '#type' => 'textfield',
    );
    if (!empty($contact['skype'])) {
        $form['skype']['#default_value'] = $contact['skype'];
    }
    if (!empty($form_state['input']['skype'])) {
        $form['skype']['#default_value'] = $form_state['input']['skype'];
    }

    $form['description'] = array(
        '#title' => t(CMSContact::$key_labels['description']),
        '#type' => 'textarea',
    );
    if (!empty($contact['description'])) {
        $form['description']['#default_value'] = $contact['description'];
    }
    if (!empty($form_state['input']['description'])) {
        $form['description']['#default_value'] = $form_state['input']['description'];
    }

    cms_contacts_theme_form($form);

    // STATUS PERSON TABLE - Field with multiple values
    $form['instrument_fieldset'] = array(
        '#title' => t('CMS Instrument status'),
        '#type' => 'fieldset',
        '#tree' => TRUE,
        '#description' => '<div class="alert alert-info">' . t('<strong>Important!</strong> Please do not add same instrument twice!') . '</div>
            <div class="alert alert-info">If you can\'t find the desired lists, please use the Add list page from the menu</div>',
    );
    // Set up the wrapper so that AJAX will be able to replace the fieldset.
    $form['instrument_fieldset'] += array('#prefix' => '<div id="instrument-fieldset-wrapper">', '#suffix' => '</div>',);

    $entries = array();
    if (isset($form_state['input']['instrument_fieldset']['entries'])) {
        //From ajax - rebuild the fieldset with values from edit
        $items = $form_state['input']['instrument_fieldset']['entries'];
        foreach($items as $i => $item) {
            $sel_instrument = $sel_person_status = $sel_organization = $sel_mailing_lists = '';
            if(!empty($item['instrument'])) {
                $sel_instrument = $item['instrument'];
                if(!empty($item['person_status'])) {
                    $sel_person_status = $item['person_status'];
                }
                if(!empty($item['organization_status'])) {
                    $sel_organization = $item['organization_status'];
                }

                if(!empty($item['mailing_lists'])) {
                    $sel_mailing_lists = $item['mailing_lists'];
                }
            }
            $entries[$i] = cms_contacts_form_instrument_add_row($i,
                $sel_instrument, $sel_person_status, $sel_organization, $sel_mailing_lists
            );
        }
    } else {
        //Render edit form - build fieldset with values from contact
        $items = array();
        if(empty($contact['instruments_data'])) {
            $entries[0] = cms_contacts_form_instrument_add_row(0); // Add one row
        } else {
            $idx = 0;
            foreach($contact['instruments_data'] as $uuid => &$row) {
                $idx++;
                $row['instrument'] = $uuid;
                $sel_person_status = $sel_organization = $sel_mailing_lists = '';

                if(!empty($contact['instruments_data'][$uuid]['person_status'])) {
                    $sel_person_status = $contact['instruments_data'][$uuid]['person_status'];
                }
                if(!empty($contact['instruments_data'][$uuid]['organization_status'])) {
                    $sel_organization = $contact['instruments_data'][$uuid]['organization_status'];
                }
                if(!empty($contact['instruments_data'][$uuid]['mailing_lists'])) {
                    $sel_mailing_lists = $contact['instruments_data'][$uuid]['mailing_lists'];
                }

                $entries[$idx] = cms_contacts_form_instrument_add_row($idx,
                    $uuid, $sel_person_status, $sel_organization, $sel_mailing_lists
                );
            }
        }
    }

    $defaults['#label_attributes'] = array('class' => array('col-sm-3', 'control-label'));

    $form['instrument_fieldset']['entries'] = array();
    $form['instrument_fieldset']['entries'] += $entries;
    $form['instrument_fieldset']['add_instrument'] = array(
        '#value' => t('Add more instruments'),
        '#type' => 'submit',
        '#name' => 'add_instrument_submit',
        '#prefix' => '<div class="row"><div class="form-group"><div class="col-sm-offset-1 col-sm-10">',
        '#suffix' => '</div></div></div>',
        '#submit' => array('cms_contacts_form_add_more_add_one_instrument'),
        '#attributes' => array('class' => array('btn-default')),
        '#ajax' => array(
            'callback' => 'cms_contacts_form_instrument_callback',
            'wrapper' => 'instrument-fieldset-wrapper',
            'effect' => 'fade',
        ),
    );

    $form['buttons'] = array(
        'submit'=> array(
            '#value' => 'Save',
            '#type' => 'submit',
        ),
        'cancel' => array(
            '#type' => 'markup',
            '#markup' => l('Cancel', $cancel_link, array('attributes' =>
                                                       array('class' => array('btn btn-default')))),
        ),
    );

    if ($is_new) {
        $form['is_new'] = array(
            '#type' => 'hidden',
            '#value' => $is_new,
        );
    } else {
        $form['uid'] = array(
            '#type' => 'hidden',
            '#value' => $contact['uid'],
        );
    }

    drupal_add_js(drupal_get_path('module', 'cms_contacts') . '/js/edit.js', array('type' => 'file', 'scope' => 'footer'));
    // Fix Chosen controls when return from Ajax call (SELECTs are broken)
    drupal_add_js('jQuery(document).ajaxSuccess(function() { jQuery("#instrument-fieldset-wrapper .chosen").chosen(); });', 'inline');

    return $form;
}

function cms_contacts_form_edit_contact_validate($form, &$form_state) {
    if (!empty($form_state['input']['instrument_fieldset']['entries'])) {
        $selected_instruments = array();
        $trigger = @$form_state['triggering_element']['#name'];
        if(preg_match('/delete\_/', $trigger)) { // Allow the Delete button to remove "CMS Instrument status" rows
            return;
        }
        foreach($form_state['input']['instrument_fieldset']['entries'] as $idx => $entry) {
            if (empty($entry['instrument'])) {
                if (!empty($entry['person_status']) || !empty($entry['organization_status']) || !empty($entry['mailing_lists'])) {
                    form_set_error("instrument_fieldset][entries][$idx][instrument",
                        t('Please select the Instrument in order to complete other fields'));
                } else {
                    form_set_error("instrument_fieldset][entries][$idx][instrument",
                        t('Please select the Instrument or remove the field set'));
                }
            } else {
                if (!in_array($entry['instrument'], $selected_instruments)) {
                    $selected_instruments []= $entry['instrument'];
                } else {
                    form_set_error("instrument_fieldset][entries][$idx][instrument",
                        t('You can\'t add twice the same instrument'));
                }
                if (!empty($entry['person_status'])
                    && count(preg_grep("/".$entry['instrument']."/", $entry['person_status'])) != count($entry['person_status'])) {
                    form_set_error("instrument_fieldset][entries][$idx][person_status",
                        t('Please select a Status Person that corresponds with the Instrument'));
                }
                if (!empty($entry['organization_status'])
                    && count(preg_grep("/".$entry['instrument']."/", $entry['organization_status'])) != count($entry['organization_status'])) {
                    form_set_error("instrument_fieldset][entries][$idx][organization_status",
                        t('Please select an Organization Status that corresponds with the Instrument'));
                }
                if (!empty($entry['mailing_lists'])
                    && count(preg_grep("/".$entry['instrument']."/", $entry['mailing_lists'])) != count($entry['mailing_lists'])) {
                    form_set_error("instrument_fieldset][entries][$idx][mailing_lists",
                        t('Please select a Mailing List that corresponds with the Instrument'));
                }
            }
        }
    }
    if(!empty($form_state['input']['mail'])) {
        $mails = explode(',', $form_state['input']['mail']);
        foreach ($mails as $mail) {
            if (!valid_email_address(trim($mail))) {
                form_set_error('mail', t('Invalid email address.'));
            }
        }
    }
}

/**
 * Function to put form inputs in 2 columns
 * @param $form
 */
function cms_contacts_theme_form(&$form){
    $idx = 0;
    reset($form);
    $count_inputs = count($form);

    foreach($form as $key => &$input) {
        if ($idx % 2 == 0) {
            $input['#prefix'] = '<div class="row"><div class="col-md-6">';
            $input['#suffix'] = '</div>';
        } else {
            $input['#prefix'] = '<div class="col-md-6">';
            $input['#suffix'] = '</div></div>';
        }
        $idx ++;
    }

    //close row div if odd number of fields
    if ($count_inputs % 2 != 0) {
        $last_key = key( array_slice( $form, -1, 1, TRUE ) );
        $form[$last_key]['#suffix'] = '</div></div>';
    }
}

function cms_contacts_form_instrument_add_row($id, $sel_instrument = '', $sel_person_status = '', $sel_organization = '',
                                              $sel_mailing_lists = '') {
    $row = array(
        '#type' => 'fieldset',
        '#tree' => TRUE,
    );

    $row['instrument'] = array_merge(
        CMSContactsUIHelper::html_select_instruments(),
        array(
            '#title' => t('CMS Instrument'),
            '#size' => 5,
            '#default_value' => $sel_instrument,
            '#attributes' => array(
                'class' => array('chosen')
            ),
            '#prefix' => '<div class="row"><div class="col-md-4">',
            '#suffix' => '</div></div>',
            '#multiple' => FALSE,
        )
    );
    //unset id and name to let drupal api set them for tree
    unset($row['instrument']['#id']);
    unset($row['instrument']['#name']);

    $row['person_status'] = array_merge(
        CMSContactsUIHelper::html_select_status_person(),
        array(
            '#multiple' => TRUE,
            '#title' => t('Status person'),
            '#default_value' => $sel_person_status,
            '#size' => 5,
            '#attributes' => array(
                'class' => array('chosen')
            ),
            '#prefix' => '<div class="row"><div class="col-md-4">',
            '#suffix' => '</div>',
        )
    );
    unset($row['person_status']['#id']);
    unset($row['person_status']['#name']);

    $row['organization_status'] = array_merge(
        CMSContactsUIHelper::html_select_status_organization(),
        array(
            '#multiple' => TRUE,
            '#title' => t('Status organization'),
            '#default_value' => $sel_organization,
            '#attributes' => array(
                'class' => array('chosen')
            ),
            '#prefix' => '<div class="col-md-4">',
            '#suffix' => '</div>',
        )
    );
    unset($row['organization_status']['#id']);
    unset($row['organization_status']['#name']);

    $row['mailing_lists'] = array_merge(
            CMSContactsUIHelper::html_select_mailing_list(),
            array(
                '#multiple' => TRUE,
                '#title' => t('Mailing lists'),
                '#default_value' => $sel_mailing_lists,
                '#attributes' => array(
                    'class' => array('chosen')
                ),
                '#prefix' => '<div class="col-md-4">',
                '#suffix' => '</div></div>',
            )
        );
    unset($row['mailing_lists']['#id']);
    unset($row['mailing_lists']['#name']);

    $row['remove_last_instrument'] = array(
        '#value' => t('Remove'),
        '#type' => 'submit', '#name' => 'delete_' . $id, '#index' => $id,
        '#submit' => array('cms_contacts_form_remove_one_instrument'),
        '#prefix' => '<div class="row"><div class="col-md-12">',
        '#suffix' => '</div></div>',
        '#ajax' => array(
            'callback' => 'cms_contacts_form_instrument_callback',
            'wrapper' => 'instrument-fieldset-wrapper',
            'effect' => 'fade',
        )
    );

    return $row;

}

/**
 * Callback for both ajax-enabled buttons.
 *
 * Selects and returns the fieldset with the names in it.
 */
function cms_contacts_form_instrument_callback($form, &$form_state) {
    return $form['instrument_fieldset'];
}


/**
 * Submit handler for the "add-one-more" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function cms_contacts_form_add_more_add_one_instrument($form, &$form_state) {
    if(isset($form_state['values']['instrument_fieldset'])) {
        $c = max(array_keys($form_state['values']['instrument_fieldset']['entries']));
        $c++;
        $form_state['input']['instrument_fieldset']['entries'][$c] = array();
        $form_state['rebuild'] = TRUE;
    }
}


/**
 * Submit handler for the "remove one" button.
 *
 * Decrements the max counter and causes a form rebuild.
 */
function cms_contacts_form_remove_one_instrument($form, &$form_state) {
    if(isset($form_state['input']['instrument_fieldset']['entries'])) {
        if(isset($form_state['triggering_element']['#index'])) {
            $d = intval($form_state['triggering_element']['#index']);
            unset($form_state['input']['instrument_fieldset']['entries'][$d]);
            $form_state['rebuild'] = TRUE;
        }
    }
}


function cms_contacts_form_edit_contact_submit($form, &$form_state) {
    $is_new = !empty($form_state['input']['is_new']);

    $ldap = CMSContactsLDAP::get_instance();
    $ldap_data = CMSContact::format_formdata_to_ldapdata($form_state['input'], $is_new);

    $instruments = $ldap_data['instruments'];
    unset($ldap_data['instruments']);

    $statusperson = $ldap_data['statusperson'];
    unset($ldap_data['statusperson']);

    $statusorganization = $ldap_data['statusorganization'];
    unset($ldap_data['statusorganization']);

    $mailing_lists = $ldap_data['mailing_lists'];
    unset($ldap_data['mailing_lists']);

    if ($is_new) {
        $uid = $ldap_data['uid'];
        $dn = CMSContact::format_dn($uid, 'contact');
        if (!CMSContact::add_contact($dn, $ldap_data, $instruments, $statusperson, $statusorganization, $mailing_lists)) {
            $error = TRUE;
        }
    } else {
        // Editing Contact
        $contact = $form_state['build_info']['args'][0];
        $ldap_data['uid'] = $contact->uid;
        $dn = CMSContact::format_dn($contact->uid, 'contact');
        if (!CMSContact::update_contact($dn, $ldap_data, $instruments, $statusperson, $statusorganization, $mailing_lists)) {
            $error = TRUE;
        }
    }

    CMSContactsCacheHelper::cache_clear_all();

    if (empty($error)) {
        drupal_set_message(t('Contact saved.'));
    } else {
        drupal_set_message(t('The contact was not successfully saved.'), 'error');
    }
    drupal_goto('contacts/'.$ldap_data['uid']);
}

/**
 * Callback for delete contact page
 *
 * @param $form
 * @param $form_submit
 * @param $contact
 *
 * @return array
 */
function cms_contacts_form_delete_contact($form, &$form_submit, $contact) {

    $form = array();
    $view_link = $contact->view_link;
    //Get clean contact object
    $contact =  $contact->clean_contact;

    $form['question'] = array(
        '#markup' => '<p>' . t('Are you sure you want to remove contact') . ' ' .sprintf('<i><strong>%s</strong></i>', $contact['cn']) . ' ?</p>',
    );

    $form['submit'] = array(
        '#value' => 'Delete',
        '#type' => 'submit',
        '#attributes' => array('class' => array('btn-danger')),
    );

    $form['cancel'] = array(
        '#markup' => l('Cancel', $view_link, array('attributes' =>
                                                       array('class' => array('btn btn-default')))),
    );

    return $form;
}

function cms_contacts_form_delete_contact_submit($form, &$form_submit) {

    $contact = $form_submit['build_info']['args'][0];
    $ldap = CMSContactsLDAP::get_instance();
    $dn = CMSContact::format_dn($contact->uid,'contact');

    if(CMSContact::delete_contact($dn)) {
        CMSContactsCacheHelper::cache_clear_all();
        drupal_set_message(sprintf(t('The contact %s was deleted'), $contact->clean_contact['cn']));
    } else {
        drupal_set_message(sprintf(t('Unable to delete contact %s'), $contact->clean_contact['cn']), 'error');
    }

    drupal_goto('contacts/listing');
}

function cms_contacts_form_add_instrument_lists($form, &$form_submit) {

    $default_cfg = array(
        '#prefix' => '<div class="row"><div class="col-md-4">',
        '#suffix' => '</div></div>',
        '#required' => TRUE,
    );
    $form['instrument'] = array_merge(
        CMSContactsUIHelper::html_select_instruments(),
        array(
            '#title' => t('CMS Instrument'),
            '#size' => 5,
            '#attributes' => array(
                'class' => array('chosen')
            ),
            '#multiple' => FALSE,
        ),$default_cfg
    );
    if (!empty($form_state['input']['instrument'])) {
        $form['instrument']['#default_value'] = $form_state['input']['instrument'];
    }
    unset($form['instrument']['#id']);
    unset($form['instrument']['#name']);

    $list_types = array(
        CMS_STATUS_PERSON => 'Status Person',
        CMS_STATUS_ORGANIZATION => 'Status Organization',
        CMS_MAILING => 'Mailing Lists',
    );
    $form['list_type'] = array_merge(
        CMSContactsUIHelper::html_select(
            array(
                'title' => t('List type'),
                'id' => 'list_type',
                'name' => 'list_type'),
            $list_types,
            ''
        ),
        $default_cfg
    );
    if (!empty($form_state['input']['list_type'])) {
        $form['list_type']['#default_value'] = $form_state['input']['list_type'];
    }

    $form['list_name'] = array_merge(
        array(
            '#title' => t('List name'),
            '#type' => 'textfield',
            '#id' => 'list_name',
            '#name' => 'list_name',
        ),
        $default_cfg
    );

    $form['submit'] = array(
        '#value' => 'Add',
        '#type' => 'submit',
        '#attributes' => array('class' => array('btn-danger')),
    );

    $form['cancel'] = array(
        '#markup' => l('Cancel', 'contacts/listing', array('attributes' =>
                                                       array('class' => array('btn btn-default')))),
    );

    return $form;
}

function cms_contacts_form_add_instrument_lists_validate($form, &$form_state) {
    $ldap = CMSContactsLDAP::get_instance();
    switch($form_state['input']['list_type']) {
        case CMS_STATUS_PERSON:
            $lists = $ldap->get_people_statusperson();
            $lists = $lists[''];
            $new_list_dn = CMSContact::format_dn(
                array(
                    'title' => $form_state['input']['list_name'],
                    'uuid' => $form_state['input']['instrument']
                ), CMS_STATUS_PERSON
            );
            if (in_array($new_list_dn, $lists)) {
                form_set_error("list_name",
                    t('This list already exists'));
            }
            break;
        case CMS_STATUS_ORGANIZATION:
            $lists = $ldap->get_people_statusorganization();
            $lists = $lists[''];
            $new_list_dn = CMSContact::format_dn(
                array(
                    'title' => $form_state['input']['list_name'],
                    'uuid' => $form_state['input']['instrument']
                ), CMS_STATUS_ORGANIZATION
            );
            if (in_array($new_list_dn, $lists)) {
                form_set_error("list_name",
                    t('This list already exists'));
            }
            break;
        case CMS_MAILING:
            $lists = $ldap->get_people_mailing_lists();
            $lists = $lists[''];
            $new_list_dn = CMSContact::format_dn(
                array(
                    'title' => $form_state['input']['list_name'],
                    'uuid' => $form_state['input']['instrument']
                ), CMS_MAILING
            );
            if (in_array($new_list_dn, $lists)) {
                form_set_error("list_name",
                    t('This list already exists'));
            }
            break;
    }
}

function cms_contacts_form_add_instrument_lists_submit($form, &$form_state) {

    $ldap = CMSContactsLDAP::get_instance();
    $dn = CMSContact::format_dn(
        array(
            'title' => $form_state['input']['list_name'],
            'uuid' => $form_state['input']['instrument']
        ),
        $form_state['input']['list_type']
    );

    global $user;
    date_default_timezone_set("Europe/Berlin");

    $ldap_data = array(
        'objectClass' => array(
            'top',
            $form_state['input']['list_type'],
        ),
    );

    $ldap_data['cn'] = $form_state['input']['list_name'];
    $ldap_data['uuid'] = $form_state['input']['instrument'];
    $ldap_data['uniquemember'] = array('');

    $instruments = cms_contacts_list_instruments_by_uuid();
    $ldap_data['in'] = $instruments[$ldap_data['uuid']];

    if (!$ldap->ldap_add($dn, $ldap_data)) {
        $error = TRUE;
    }


    if (empty($error)) {
        CMSContactsCacheHelper::cache_clear_all();
        drupal_set_message(t('List added.'));
        drupal_goto('contacts/listing');
    } else {
        drupal_set_message(t('The list could not be added.'), 'error');
        $form_state['rebuild'] = TRUE;
    }
}
