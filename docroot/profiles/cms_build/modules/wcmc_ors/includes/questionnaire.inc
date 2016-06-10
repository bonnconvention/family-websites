<?php

interface ORSQuestionnaire {

  function getId();
  function getTitle();
  function getLanguage();
  function getLanguages();
  function getStatus();
  function getActivatedOn();
  function getSubmissionPercentage();
  function getQuestionsUrl();
  function getUrl();
}


class ORSQuestionnaireV1 implements ORSQuestionnaire {

  protected $id;
  protected $submission_percentage;

  public function __construct($item) {
    $this->submission_percentage = t('Unknown');
    foreach ($item as $k => $v) {
      $this->$k = $v;
    }

    $languages = language_list();
    if (!empty($this->language) && !empty($languages[strtolower($this->language)])) {
      $l = $languages[strtolower($this->language)];
      $this->language = $l->name;
    }

    $langs = array();
    if (!empty($this->languages)) {
      foreach ($this->languages as &$language) {
        if (!empty($language) && !empty($languages[strtolower($language)])) {
          $l = $languages[strtolower($language)];
          $langs[] = $l->name;
        }
      }
    }
    $this->languages = $langs;
    $this->prepareQuestionnaireRespondents();
  }

  public function getId() {
    return $this->id;
  }

  public function getTitle() {
    return $this->title;
  }

  public function getLanguage() {
    return $this->language;
  }

  public function getLanguages() {
    return $this->languages;
  }

  public function getStatus() {
    return $this->status;
  }

  public function getActivatedOn() {
    return $this->activated_on;
  }

  public function getSubmissionPercentage() {
    return $this->submission_percentage;
  }

  public function getQuestionsUrl() {
    return $this->questions_url;
  }

  public function getUrl() {
    return $this->url;

  }

  private function prepareQuestionnaireRespondents() {
    $this->submission_percentage = 0;
    if (!empty($this->respondents)) {
      $submitted = 0;
      foreach ($this->respondents as &$value) {
        if (!empty($value['respondent'])) {
          $value = (object)$value['respondent'];
          if (strtolower($value->status) == 'submitted') {
            $submitted++;
          }
        }
      }
      if ($submitted > 0) {
        $this->submission_percentage = $submitted * 100 / count($this->respondents);
      }
    }
  }
}
