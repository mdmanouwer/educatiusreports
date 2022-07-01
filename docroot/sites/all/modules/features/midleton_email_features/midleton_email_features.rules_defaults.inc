<?php

/**
 * @file
 * midleton_email_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function midleton_email_features_default_rules_configuration() {
  $items = array();
  $items['rules_send_report_to_chief_coordinator'] = entity_import('rules_config', '{ "rules_send_report_to_chief_coordinator" : {
      "LABEL" : "Send report to Manager",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "midleton_base" ],
      "ON" : { "midleton_after_changing_form_status" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "revision_pending" } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "You\\u0027ve just sent the report to be revised by a manager. We\\u0027ve sent him an email to notify him. " } },
        { "mail" : {
            "to" : [ "node:author:field-user-superior:mail" ],
            "subject" : "New report from [node:author]",
            "message" : "Buenos d\\u00edas,\\r\\n\\r\\n[node:author:name] has sent you a report to review. \\r\\n\\r\\nRegards,",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_report_to_midleton'] = entity_import('rules_config', '{ "rules_send_report_to_midleton" : {
      "LABEL" : "Send report to Midleton",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "midleton_base" ],
      "ON" : { "midleton_after_changing_form_status" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_status" } },
        { "data_is" : { "data" : [ "node:field-status" ], "value" : "approval_pending" } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thank you for submitting the form. We\\u0027ve notified Midleton in Madrid." } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "16" : "16" } },
            "subject" : "Nuevo informe para revisar",
            "message" : "Buenos d\\u00edas,\\r\\n\\r\\nHay un nuevo informe para revisar.\\r\\n\\r\\nSaludos,"
          }
        }
      ]
    }
  }');
  return $items;
}
