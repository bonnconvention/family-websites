<?php

class cms_odata_views_handler_email extends views_handler_field {
  /**
   * Render some stuff.
   *
   * Data should be made XSS safe prior to calling this function.
   */
  function render($values) {
    $value = check_plain($values->odata_focal_point_work_email);
    // Hide the email for spam bots using the spamspan module.
    $spamspan_email = spamspan($value);
    return $spamspan_email;
  }
}
