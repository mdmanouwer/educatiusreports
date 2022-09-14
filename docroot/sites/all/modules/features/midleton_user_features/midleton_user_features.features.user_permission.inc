<?php

/**
 * @file
 * midleton_user_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function midleton_user_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access mail logger'.
  $permissions['access mail logger'] = array(
    'name' => 'access mail logger',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'mail_logger',
  );

  // Exported permission: 'access notification message settings'.
  $permissions['access notification message settings'] = array(
    'name' => 'access notification message settings',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'access pdf download'.
  $permissions['access pdf download'] = array(
    'name' => 'access pdf download',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer userprotect'.
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own e-mail'.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own password'.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create field_comments_chief_coordinator'.
  $permissions['create field_comments_chief_coordinator'] = array(
    'name' => 'create field_comments_chief_coordinator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pdf'.
  $permissions['create field_pdf'] = array(
    'name' => 'create field_pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_user_superior'.
  $permissions['create field_user_superior'] = array(
    'name' => 'create field_user_superior',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create parent_teacher_meeting content'.
  $permissions['create parent_teacher_meeting content'] = array(
    'name' => 'create parent_teacher_meeting content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create report_1 content'.
  $permissions['create report_1 content'] = array(
    'name' => 'create report_1 content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create report_2 content'.
  $permissions['create report_2 content'] = array(
    'name' => 'create report_2 content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create report_3 content'.
  $permissions['create report_3 content'] = array(
    'name' => 'create report_3 content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any parent_teacher_meeting content'.
  $permissions['delete any parent_teacher_meeting content'] = array(
    'name' => 'delete any parent_teacher_meeting content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any report_1 content'.
  $permissions['delete any report_1 content'] = array(
    'name' => 'delete any report_1 content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any report_2 content'.
  $permissions['delete any report_2 content'] = array(
    'name' => 'delete any report_2 content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any report_3 content'.
  $permissions['delete any report_3 content'] = array(
    'name' => 'delete any report_3 content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own parent_teacher_meeting content'.
  $permissions['delete own parent_teacher_meeting content'] = array(
    'name' => 'delete own parent_teacher_meeting content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own report_1 content'.
  $permissions['delete own report_1 content'] = array(
    'name' => 'delete own report_1 content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own report_2 content'.
  $permissions['delete own report_2 content'] = array(
    'name' => 'delete own report_2 content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own report_3 content'.
  $permissions['delete own report_3 content'] = array(
    'name' => 'delete own report_3 content',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own student entities'.
  $permissions['delete own student entities'] = array(
    'name' => 'delete own student entities',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in school_year'.
  $permissions['delete terms in school_year'] = array(
    'name' => 'delete terms in school_year',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any parent_teacher_meeting content'.
  $permissions['edit any parent_teacher_meeting content'] = array(
    'name' => 'edit any parent_teacher_meeting content',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any report_1 content'.
  $permissions['edit any report_1 content'] = array(
    'name' => 'edit any report_1 content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any report_2 content'.
  $permissions['edit any report_2 content'] = array(
    'name' => 'edit any report_2 content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any report_3 content'.
  $permissions['edit any report_3 content'] = array(
    'name' => 'edit any report_3 content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit field_comments_chief_coordinator'.
  $permissions['edit field_comments_chief_coordinator'] = array(
    'name' => 'edit field_comments_chief_coordinator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pdf'.
  $permissions['edit field_pdf'] = array(
    'name' => 'edit field_pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_superior'.
  $permissions['edit field_user_superior'] = array(
    'name' => 'edit field_user_superior',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own account'.
  $permissions['edit own account'] = array(
    'name' => 'edit own account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own field_comments_chief_coordinator'.
  $permissions['edit own field_comments_chief_coordinator'] = array(
    'name' => 'edit own field_comments_chief_coordinator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pdf'.
  $permissions['edit own field_pdf'] = array(
    'name' => 'edit own field_pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_superior'.
  $permissions['edit own field_user_superior'] = array(
    'name' => 'edit own field_user_superior',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own parent_teacher_meeting content'.
  $permissions['edit own parent_teacher_meeting content'] = array(
    'name' => 'edit own parent_teacher_meeting content',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own report_1 content'.
  $permissions['edit own report_1 content'] = array(
    'name' => 'edit own report_1 content',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own report_2 content'.
  $permissions['edit own report_2 content'] = array(
    'name' => 'edit own report_2 content',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own report_3 content'.
  $permissions['edit own report_3 content'] = array(
    'name' => 'edit own report_3 content',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in school_year'.
  $permissions['edit terms in school_year'] = array(
    'name' => 'edit terms in school_year',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'update own student entities'.
  $permissions['update own student entities'] = array(
    'name' => 'update own student entities',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view field_comments_chief_coordinator'.
  $permissions['view field_comments_chief_coordinator'] = array(
    'name' => 'view field_comments_chief_coordinator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pdf'.
  $permissions['view field_pdf'] = array(
    'name' => 'view field_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user_superior'.
  $permissions['view field_user_superior'] = array(
    'name' => 'view field_user_superior',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own field_comments_chief_coordinator'.
  $permissions['view own field_comments_chief_coordinator'] = array(
    'name' => 'view own field_comments_chief_coordinator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pdf'.
  $permissions['view own field_pdf'] = array(
    'name' => 'view own field_pdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_superior'.
  $permissions['view own field_user_superior'] = array(
    'name' => 'view own field_user_superior',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own student entities'.
  $permissions['view own student entities'] = array(
    'name' => 'view own student entities',
    'roles' => array(
      'Coordinator' => 'Coordinator',
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revision overview'.
  $permissions['view revision overview'] = array(
    'name' => 'view revision overview',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'midleton_base',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Educatius Master' => 'Educatius Master',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
