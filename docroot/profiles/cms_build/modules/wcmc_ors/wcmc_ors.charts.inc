<?php

class WCMCORSGoogleChart {

  static function getQuestionnaireChartData($questionnaire) {
    $ret = array();
    if (!empty($questionnaire->respondents) && is_array($questionnaire->respondents)) {
      $ret[] = array('Status', 'Count');
      $stats = array();
      foreach ($questionnaire->respondents as $row) {
        if (empty($stats[$row->status])) {
          $stats[$row->status] = 1;
        }
        else {
          $stats[$row->status] += 1;
        }
      }
      foreach ($stats as $k => $v) {
        $ret[] = array($k, $v);
      }
    }
    return $ret;
  }
}