<?php

function wcmc_ors_configuration_form($form, $form_state) {
  $form['wcmc_ors_api_key'] = array(
    '#type' => 'textfield',
    '#title' => 'API Key',
    '#default_value' => variable_get('wcmc_ors_api_key'),
    '#description' => 'API key required to access the service. <a href="http://cms-ors-api.ort-staging.linode.unep-wcmc.org/users/new?lang=en" target="_blank">Sign up here for a key</a>, then login to your account where the key is located',
  );
  $form['wcmc_ors_api_url'] = array(
    '#type' => 'textfield',
    '#title' => 'API Endpoint URL',
    '#default_value' => variable_get('wcmc_ors_api_url'),
    '#description' => 'Where is the service located'
  );
  return system_settings_form($form);
}

function wcmc_ors_questionnaires_form($form, &$form_state) {
  drupal_set_title('Online Report System');
  $form = array('#tree' => TRUE);
  $config = array(
    'wcmc_ors_api_key' => variable_get('wcmc_ors_api_key'),
    'wcmc_ors_api_url' => variable_get('wcmc_ors_api_url'),
  );
  $client = new WCMCOrsClient($config);
  if (!$client->isConfigured()) {
    drupal_set_message('The system is not properly configured to make API calls to the ORS. Please contact technical support.', 'error');
    return $form;
  }
  drupal_add_js('https://www.gstatic.com/charts/loader.js');
  drupal_add_js(drupal_get_path('module', 'wcmc_ors') . '/js/questionnaires.js');
  drupal_add_css(drupal_get_path('module', 'wcmc_ors') . '/css/questionnaires.css');

  //
  $questionnaires = $client->getQuestionnaires();
  $options = array('' => t('-- Please select --'));
  /** @var ORSQuestionnaire $row */
  foreach($questionnaires as $id => $row) {
    $options[$id] = $row->getTitle();
  }
  $form['questionnaire'] = array(
    '#title' => t('Available questionnaires'),
    '#type' => 'select',
    '#options' => $options,
    '#ajax' => array(
      'callback' => 'ajax_example_autocheckboxes_callback',
    ),
  );

  $values = $form_state['values'];
  $form['content'] = array(
    '#prefix' => '<div id="report-content">',
    '#suffix' => '</div>',
  );
  if (!empty($values['questionnaire'])) {
    $qid = $values['questionnaire'];
    /** @var ORSQuestionnaire $questionnaire */
    $questionnaire = $questionnaires[$qid];
    $form_state['questionnaire'] = $questionnaire;

    // Questionnaire details
    $content = "<h2>" . $questionnaire->getTitle() . "</h2><dl class='dl-horizontal'>";
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
    $content .= '<div id="respondents-chart"></div><div class="clear"></div>';

    $form['content']['summary'] = array(
      '#type' => 'item',
      '#markup' => $content
    );

    // Respondents
    if (isset($questionnaire->respondents) && is_array($questionnaire->respondents)) {
      $rows = array();
      foreach ($questionnaire->respondents as $row) {
        $rows[] = array($row->full_name, $row->status);
      }
      uasort($rows, function ($a, $b) { return strcmp($a[0], $b[0]); });

      // Compute chart data
      $chart_data = array();
      foreach ($questionnaire->respondents as $row) {
        if (empty($chart_data[$row->status])) {
          $chart_data[$row->status] = 1;
        }
        else {
          $chart_data[$row->status] += 1;
        }
      }
      $form['content']['respondents-title'] = array('#type' => 'item', '#markup' => '<h3>' . t('Respondents') . '</h3>');
      $form['content']['respondents']['table'] = array(
        '#theme' => 'table',
        '#rows' => $rows,
      );
    }
  }

  return $form;
}

/**
 * Callback element needs only select the portion of the form to be updated.
 * Since #ajax['callback'] return can be HTML or a renderable array (or an
 * array of commands), we can just return a piece of the form.
 */
function ajax_example_autocheckboxes_callback($form, $form_state) {
  $commands = array(
    ajax_command_replace('#report-content', drupal_render($form['content']))
  );
  if (!empty($form_state['questionnaire'])) {
    $questionnaire = $form_state['questionnaire'];
    $commands[] = ajax_command_invoke(NULL, 'drawChartQuestionnaire', array(WCMCORSGoogleChart::getQuestionnaireChartData($questionnaire)));
  }
  return array('#type' => 'ajax', '#commands' => $commands);
}


function wcmc_ors_questions_form($form, $form_state) {

}