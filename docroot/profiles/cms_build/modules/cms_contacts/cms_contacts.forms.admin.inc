<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201405121559
 */

/**
 * Overrides hook_admin()
 * Configuration screen of LDAP connection parameters
 *
 * @see      system_settings_form()
 * @return   array   $form
 */
function cms_contacts_admin() {
    $form = array();
    $form[LDAP_ADDRESS] = array(
        '#type' => 'textfield',
        '#title' => t('LDAP Server address'),
        '#description' => t('ex. ldap.server.com'),
        '#default_value' => variable_get(LDAP_ADDRESS, ''),
        '#size' => 40,
        '#maxlength' => 255,
        '#required' => TRUE,
    );

    $form[LDAP_PORT] = array(
        '#type' => 'textfield',
        '#title' => t('LDAP Server port'),
        '#default_value' => variable_get(LDAP_PORT, '389'),
        '#description' => t('ex. 389'),
        '#size' => 10,
        '#maxlength' => 255,
        '#required' => TRUE,
    );

    $form[LDAP_BIND_RDN] = array(
        '#type' => 'textfield',
        '#title' => t('Bind RDN'),
        '#default_value' => variable_get(LDAP_BIND_RDN, ''),
        '#size' => 60,
        '#maxlength' => 255,
        '#description' => t('Bind RDN (Relative distinguished name)'),
        '#required' => TRUE,
    );

    $form[LDAP_PASSWORD] = array(
        '#type' => 'password',
        '#title' => t('LDAP Server password'),
        '#size' => 25,
        '#description' => t('Leave empty to preserve old password'),
    );

    $form[LDAP_BASE_DN] = array(
        '#type' => 'textfield',
        '#title' => t('Base DN'),
        '#default_value' => variable_get(LDAP_BASE_DN, ''),
        '#size' => 60,
        '#maxlength' => 255,
        '#description' => t('Base DN (Distinguished name)'),
        '#required' => TRUE,
    );

    $form[LDAP_PEOPLE_DN] = array(
        '#type' => 'textfield',
        '#title' => t('People DN'),
        '#default_value' => variable_get(LDAP_PEOPLE_DN, ''),
        '#size' => 60,
        '#maxlength' => 255,
        '#description' => t('LDAP DN for contacts group'),
        '#required' => TRUE,
    );

    $form[LDAP_ORGANIZATION_DN] = array(
        '#type' => 'textfield',
        '#title' => t('Organization DN'),
        '#default_value' => variable_get(LDAP_ORGANIZATION_DN, ''),
        '#size' => 60,
        '#maxlength' => 255,
        '#description' => t('LDAP DN for organizations group'),
        '#required' => TRUE,
    );

    $form[LDAP_DEPARTMENT_DN] = array(
        '#type' => 'textfield',
        '#title' => t('Department DN'),
        '#default_value' => variable_get(LDAP_DEPARTMENT_DN, ''),
        '#size' => 60,
        '#maxlength' => 255,
        '#description' => t('LDAP DN for departments group'),
        '#required' => TRUE,
    );

    $form[LDAP_INSTRUMENT_DN] = array(
        '#type' => 'textfield',
        '#title' => t('Instrument DN'),
        '#default_value' => variable_get(LDAP_INSTRUMENT_DN, ''),
        '#size' => 60,
        '#maxlength' => 255,
        '#description' => t('LDAP DN for instruments group'),
        '#required' => TRUE,
    );

    return system_settings_form($form);
}


/**
 * Implements hook_admin_validate()
 *
 * Validate CMS Contacts administration settings.
 *
 * @param   array   $form
 * @param   array   $form_state
 */
function cms_contacts_admin_validate($form, &$form_state) {
    $values = $form_state['values'];
    $base_dn = $values[LDAP_BASE_DN];
    cms_contacts_validate_dn($values[LDAP_BIND_RDN], $base_dn, 'Bind RDN');
    cms_contacts_validate_dn($values[LDAP_PEOPLE_DN], $base_dn, 'People DN');
    cms_contacts_validate_dn($values[LDAP_ORGANIZATION_DN], $base_dn, 'Organization DN');
    cms_contacts_validate_dn($values[LDAP_DEPARTMENT_DN], $base_dn, 'Department DN');

    $hash = substr(drupal_get_hash_salt(), 0, 24);
    if(!empty($values[LDAP_PASSWORD])) {
        $td = mcrypt_module_open('tripledes', '', 'ecb', '');
        mcrypt_generic_init($td, $hash, IV);
        $form_state['values'][LDAP_PASSWORD] = mcrypt_generic($td, $values[LDAP_PASSWORD]);
        mcrypt_generic_deinit($td);
        mcrypt_module_close($td);
    } else {
        unset($form_state['values'][LDAP_PASSWORD]);
    }
    $password = cms_contacts_decrypt_string($form_state['values'][LDAP_PASSWORD]);
    cms_contacts_validate_ldap_connection(
        $values[LDAP_ADDRESS], $values[LDAP_BIND_RDN], $password, $values[LDAP_PORT]
    );
}


/**
 * Check if a given DN (Distinguished name) is correct.
 * The given DN must end with the Base DN.
 *
 * @param   string   $dn
 *    The DN to check
 * @param   string   $base_dn
 *    The Base DN to match
 * @param   string   $dn_name
 *    Name of the DN parameter. Used to set form error.
 *
 * @return  boolean
 */
function cms_contacts_validate_dn($dn, $base_dn, $dn_name) {
    $contains = CMSUtils::ends_with($dn, $base_dn);

    if (!$contains) {
        form_set_error('cms_contacts', t($dn_name . ' must be formed from Base DN'));
    }
}


/**
 * Validate LDAP server connection
 * @param $host
 * @param $rdn
 * @param $password
 * @param int $port
 * @return bool
 */
function cms_contacts_validate_ldap_connection($host, $rdn, $password, $port=389) {
    $conn = ldap_connect($host, $port);
    if($conn) {
        ldap_set_option($conn, LDAP_OPT_PROTOCOL_VERSION, 3);
        if(!@ldap_bind($conn, $rdn, $password)) {
            $code = ldap_errno($conn);
            $msg = ldap_err2str($code);
            form_set_error(
                'cms_contacts',
                t('LDAP binding failed (@err). Check your settings and try again', array('@err' => $msg))
            );
            return FALSE;
        }
    } else {
        form_set_error('cms_contacts', t('Unable to connect to the LDAP server'));
        return FALSE;
    }
    return TRUE;
}
