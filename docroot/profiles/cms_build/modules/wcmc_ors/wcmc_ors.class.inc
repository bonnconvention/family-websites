<?php


class ORSQuestionnaireFactory {

  static function createQuestionnaire($item) {
    return new ORSQuestionnaireV1($item);
  }

  static function createQuestion($item) {
    return new ORSQuestionV1($item);
  }
}


class QuestionnaireUIHelper {

  /**
   * @param ORSQuestionnaire $questionnaire
   * @return string
   */
  static function detailsPane($questionnaire) {
    // Questionnaire details
    $content = "<dl class='dl-horizontal'>";
    if (!empty($questionnaire->getStatus())) {
      $content .= "<dt>Status</dt><dd>" . $questionnaire->getStatus() . "</dd>";
    }
    if (!empty($questionnaire->getActivatedOn())) {
      $content .= "<dt>Activated on</dt><dd>" . $questionnaire->getActivatedOn() . "</dd>";
    }
    if (!empty($questionnaire->getLanguage())) {
      $content .= "<dt>Language</dt><dd>{$questionnaire->getLanguage()}</dd>";
    }
    if (!empty($questionnaire->getLanguages())) {
      $content .= "<dt>Languages</dt><dd>" . implode(', ' , $questionnaire->getLanguages()) . "</dd>";
    }
    $content .= "<dt>Submission percentage</dt><dd>" . sprintf('%.2f%%', $questionnaire->getSubmissionPercentage()) . "</dd>";
    if (user_is_logged_in()) {
      $content .= "<dt>URL</dt><dd>" . $questionnaire->getUrl() . "</dd>";
      $content .= "<dt>Questions URL</dt><dd>" . $questionnaire->getQuestionsUrl() . "</dd>";
    }
    $content .= "</dl>";
    return $content;
  }

  static function questionnaireQuestions($questions) {
    $ret = array('#tree' => TRUE);
    $i = 0;
    /** @var $question ORSQuestion */
    foreach($questions as $id => $question) {
      if ($element = $question->getFormElement(++$i)) {
        $ret[$id] = $element;
      }
    }
    return $ret;
  }

}
