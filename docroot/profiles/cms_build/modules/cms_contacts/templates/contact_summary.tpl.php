<div class="form-group">
    <textarea class="form-control" rows="10"><?php
        if (!empty($contact->clean_contact['personaltitle'])) {
            echo $contact->clean_contact['personaltitle'] . " " . $contact->first_name . " " . $contact->last_name . "\n";
        } else {
            echo $contact->first_name . " " . $contact->last_name . " \n";
        }
        if (!empty($contact->clean_contact['title'])) {
            echo $contact->clean_contact['title'] . "\n";
        }
        if (!empty($contact->department)) {
            echo $contact->department . "\n";
        }
        echo
            $contact->organization . " \n" .
            $contact->clean_contact['street'] . " \n";
        if (!empty($contact->clean_contact['postalcode'])) {
            echo $contact->clean_contact['postalcode'] . "\n";
        }
        echo $contact->clean_contact['st'] . ", " . $contact->country_rendered . " \n";
        if (!empty($contact->clean_contact['mail'])) {
            echo t('E-mail') . ': ' . $contact->clean_contact['mail'] . " \n";
        }
        if (!empty($contact->clean_contact['workphonenumbers'])) {
            echo t('Phone') . ': ' . $contact->clean_contact['workphonenumbers'] . " \n";
        }
        if (!empty($contact->clean_contact['faxnumbers'])) {
            echo t('Fax') . ': ' . $contact->clean_contact['faxnumbers'];
        }
    ?></textarea>
</div>
