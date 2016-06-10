<?php

interface ORSQuestion {

  function getId();
  function getSectionId();
  function getUrl();
  function getTitle();
  function getLanguage();
  function getPath();
  function getType();
  function isMandatory();
  function getOptions();
  function getFormElement($order);
}


class ORSQuestionV1 implements ORSQuestion {

  public function __construct($item) {
    foreach ($item as $k => $v) {
      $this->$k = $v;
    }

    $languages = language_list();
    if (!empty($this->language) && !empty($languages[strtolower($this->language)])) {
      $l = $languages[strtolower($this->language)];
      $this->language = $l->name;
    }
  }

  function getId() {
    return $this->id;
  }

  function getSectionId() {
    return $this->section_id;
  }

  function getUrl() {
    return $this->url;
  }

  function getTitle() {
    return $this->title;
  }

  function getLanguage() {
    return $this->language;
  }

  function getPath() {
    return $this->path;
  }

  function getType() {
    return $this->type;
  }

  function isMandatory() {
    return $this->is_mandatory;
  }

  function getOptions() {
    return $this->options;
  }

  function getFormElement($order) {
    $path = $this->getPath();
    $type = $this->getType();
    switch($type) {
      case 'MultiAnswer':
        $ret = array();
        $ret['q']['path'] = array(
          '#type' => 'item',
          '#markup' => '<h5>' . implode('» ', $path) . '</h5>',
        );
        $ret['q']['answer']['#title'] = $this->getTitle();
        $ret['q']['answer']['#type'] = 'radios';
        $ret['q']['answer']['#options'] = $this->getOptions();
        $ret['q']['answer']['#disabled'] = 1;
        $ret['q']['answer']['#attributes'] = array('class' => array('question', 'depth-' . count($path)));
        return $ret;
        break;
      default:
        // dpm($this);
    }
    return FALSE;
  }
}
