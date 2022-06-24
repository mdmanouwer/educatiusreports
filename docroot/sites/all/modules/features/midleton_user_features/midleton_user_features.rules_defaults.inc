<?php

/**
 * @file
 * midleton_user_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function midleton_user_features_default_rules_configuration() {
  $items = array();
  $items['rules_login_for_chief_coordinator'] = entity_import('rules_config', '{ "rules_login_for_chief_coordinator" : {
      "LABEL" : "Login for chief coordinator",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "11" : "11" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "chief-coordinator\\/reports" } } ]
    }
  }');
  $items['rules_login_for_midleton_school'] = entity_import('rules_config', '{ "rules_login_for_midleton_school" : {
      "LABEL" : "Login for midleton school",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "16" : "16" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "educatius\\/reports" } } ]
    }
  }');
  $items['rules_login_for_rol'] = entity_import('rules_config', '{ "rules_login_for_rol" : {
      "LABEL" : "Login for coordinator",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "coordinator\\/reports" } } ]
    }
  }');
  return $items;
}
