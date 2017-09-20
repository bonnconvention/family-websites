<?php

class cms_odata_views_handler_email extends views_handler_field {
  /**
   * Render some stuff.
   *
   * Data should be made XSS safe prior to calling this function.
   */
  function render($values) {
    static $pub_key, $priv_key = null;
    module_load_include('module', 'recaptcha_mailhide');
    _recaptcha_mailhide_load_library();
    if (empty($pub_key)) {
      $pub_key = variable_get('recaptcha_mailhide_public_key');
    }
    if (empty($priv_key)) {
      $priv_key = variable_get('recaptcha_mailhide_private_key');
    }
    $value = check_plain($values->odata_focal_point_work_email);
    $mail_url  = recaptcha_mailhide_url($pub_key, $priv_key, $value);
    $mail_part = implode('&hellip;@', _recaptcha_mailhide_email_parts($value));
    return l(
      $mail_part, $mail_url, array(
        'attributes' => array(
        'onclick' => sprintf(
          'window.open(\'%s\', \'\', \'toolbar=0,scrollbars=0,location=0,statusbar=0,menubar=0,resizable=0,width=500,height=300\'); return false;',
          $mail_url)
        ),
        'external' => TRUE, 'html' => TRUE
      )
    );
  }
}