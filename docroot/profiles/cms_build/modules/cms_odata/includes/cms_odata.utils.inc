<?php

define ('ODATA_CMS_INSTRUMENT', 'f0b4ae05-8d04-4814-b01f-064c94da5a23');
define ('ODATA_CMS_STATUS_PERSON', 'cn=Focal Point,ou=Status Person,uuid=f0b4ae05-8d04-4814-b01f-064c94da5a23,o=CMS');
define ('ODATA_AEWA_INSTRUMENT', 'dbce2ddc-648e-4302-be84-47d0aa36ad66');
define ('ODATA_AEWA_STATUS_PERSON', 'cn=Focal Point,ou=Status Person,uuid=dbce2ddc-648e-4302-be84-47d0aa36ad66,o=CMS');
define ('ODATA_ASCOBANS_INSTRUMENT', '0b41fac4-6198-439a-a335-f7405f352681');
define ('ODATA_ASCOBANS_STATUS_PERSON', 'cn=National Coordinator,ou=Status Person,uuid=0b41fac4-6198-439a-a335-f7405f352681,o=CMS');

function get_ldap_contacts($filters) {
  $ldap = CMSContactsLDAP::get_instance();
  $users = $ldap->contacts_list_filter($filters);

  foreach($users as $user) {
    $filter = "(&(objectClass=cmsContact)(uid=$user->uid))";
    $contact = $ldap->ldap_search_cms($filter);

    if (!empty($contact[0])) {
      $user->dn = $contact[0]['dn'];
      $user->address = CMSContactBase::get_single_valued_attribute($contact[0], 'street');
      $user->work_email = get_multi_valued_attribute($contact[0], 'mail');
      $user->telephone = get_multi_valued_attribute($contact[0], 'workphonenumbers');
      $user->fax = get_multi_valued_attribute($contact[0], 'faxnumbers');
    }
  }

  return $users;
}

function get_multi_valued_attribute($array, $name) {
  $ret = FALSE;
  if(!empty($array[$name])) {
    unset($array[$name]['count']);
    $ret = implode(',', $array[$name]);
  }
  return $ret;
}
