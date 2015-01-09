<div class="form-group">
    <textarea class="form-control" rows="10"><?php
        echo
            $contact->first_name . " " . $contact->last_name . " \n" .
            $contact->organization . " \n" .
            $contact->clean_contact['street'] . " \n" .
            $contact->clean_contact['st'] . ", " . $contact->country_rendered . " \n";
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
