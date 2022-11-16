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
            "message" : "Dear Educatius manager, \\r\\n\\r\\nThere is a new student progress report for you to review.\\r\\n\\r\\nBest wishes,\\r\\n",
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
        { "drupal_message" : { "message" : "Thank you for submitting the report. Educatius management have been notified to validate the report" } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "16" : "16" } },
            "subject" : "New Report to View",
            "message" : "Hello,\\r\\n\\r\\nThere is a new report to review at Educatius Reports: http:\\/\\/educatiusreports.org\\r\\n\\r\\nThanks"
          }
        }
      ]
    }
  }');
  return $items;
}
