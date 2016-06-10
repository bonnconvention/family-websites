<?php

class WCMCOrsClient {

  private $config = NULL;

  public function __construct($config = array()) {
    $this->config = $config;
  }

  public function isConfigured() {
    return !empty($this->config['wcmc_ors_api_key']) && !empty($this->config['wcmc_ors_api_url']);
  }

  public function getQuestionnaires() {
    $ret = array();
    $url = $this->url('/api/v1/questionnaires');
    $response = $this->ajaxCall($url);
    if (!empty($response['questionnaires']) && is_array($response['questionnaires'])) {
      foreach ($response['questionnaires'] as $item) {
        if (!empty($item['questionnaire'])) {
          $row = ORSQuestionnaireFactory::createQuestionnaire($item['questionnaire']);
          $ret[$row->getId()] = $row;
        }
      }
    }
    return $ret;
  }

  public function getQuestionnaire($id) {
    $ret = array();
    $url = $this->url('/api/v1/questionnaires/' . $id);
    $response = $this->ajaxCall($url);
    if (!empty($response['questionnaire'])) {
      $ret = ORSQuestionnaireFactory::createQuestionnaire($response['questionnaire']);
    }
    return $ret;
  }

  public function getQuestionnaireQuestions($id) {
    $ret = array();
    $url = $this->url('/api/v1/questionnaires/' . $id . '/questions');
    $response = $this->ajaxCall($url);
    if (!empty($response['questions'])) {
      foreach ($response['questions'] as $item) {
        $row = ORSQuestionnaireFactory::createQuestion($item['question']);
        $ret[$row->getId()] = $row;
      }
    }
    return $ret;
  }


  public function url($suffix) {
    return $this->config['wcmc_ors_api_url'] . '/' . $suffix;
  }


  public function ajaxCall($url, $headers = array()) {
    $ret = NULL;
    if (empty($headers['X-Authentication-Token'])) {
      $headers[] = 'X-Authentication-Token:' . $this->config['wcmc_ors_api_key'];
    }
    if ($content = $this->httpCall($url, $headers)) {
      $ret = json_decode($content, TRUE);
    }
    return $ret;
  }

  public function httpCall($url, $headers = array()) {
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_URL, $url);
    foreach ($headers as $k => $v) {
      curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
    }
    curl_setopt($ch, CURLOPT_TIMEOUT, 30);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, TRUE);
    curl_setopt($ch,CURLOPT_MAXREDIRS, 3);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, FALSE);
    curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, 3);
    curl_setopt($ch, CURLOPT_NOBODY, 0);
    $ret = curl_exec($ch);
    $info = curl_getinfo($ch);
    if ($info['http_code'] != 200) {
      $ret = NULL;
    }
    curl_close($ch);
    return $ret;
  }
}
