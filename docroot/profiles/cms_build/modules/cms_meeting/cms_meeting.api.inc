<?php

/**
 * Menu callback for meeting
 *
 * Create an associative array with meeting UUIDs and title
*/
function cms_meeting_list_from_cache($website) {
    global $user;
    $response = array();
    $meetings = array();

    $websites = CMSUtils::get_all_websites();
    if (array_key_exists($website, $websites)) {
        $url = $websites[$website]['url'];
        $cookie_file = CMSUtils::remote_login($url);
        if ($cookie_file && $user->uid) {
            $ch = curl_init();
            $curl_options = array(
                CURLOPT_HEADER => 0,
                CURLOPT_RETURNTRANSFER => 1,
                CURLOPT_COOKIEFILE => $cookie_file,
                CURLOPT_URL => $url . '/api/meeting/list/cache',
            );

            curl_setopt_array($ch, $curl_options);
            $meetings = curl_exec($ch);
            $meetings = json_decode($meetings);
            curl_close($ch);
            unset($ch);

            $ch = curl_init();
            $curl_options[CURLOPT_URL] = $url . '/user/logout';
            curl_setopt_array($ch, $curl_options);
            curl_exec($ch);
            unset($ch);

            unlink($cookie_file);
        }

        $respone = (array) $meetings;
    }

    return $response;
}

function api_meeting_list($type = '', $profile = '') {
    if (empty($profile)) {
        $profile = CMSUtils::get_current_profile();
    }

    if ($type == 'cache') {
        $cache_file = drupal_get_path('module', 'cms') . _DS_ . 'remote_cache' . _DS_ . $profile . _DS_  . MEETING_CACHE_FILENAME;
        $meetings = array();
        if (file_exists($cache_file)) {
            $meetings = file_get_contents($cache_file);
            $meetings = json_decode($meetings);
        }

        return (array) $meetings;
    }else {
        $current_profile = CMSUtils::get_current_profile();
        $meetings = CMSMeeting::map_remote_meetings($current_profile);
        echo json_encode($meetings);
        drupal_exit();
    }
}

function meetings_remote_options($data = '', $meeting_options = array(), $website = '', $websites_list = array()) {
    if (is_array($data) && isset($websites_list[$website])) {
        $remote_website_data = $websites_list[$website];
        foreach ($data as $uuid => $meeting) {
            $meeting_options[$website . ':' . $uuid] = $meeting . ' (' . $remote_website_data['title'] . ')';
        }
    }

    return $meeting_options;
}
