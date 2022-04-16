<?php

/**
 * @file
 * Contains the theme function override for 'menu_local_task'.
 */

/**
 * Returns HTML for primary and secondary local tasks.
 *
 * @ingroup themeable
 */
function midleton_menu_local_tasks(&$variables) {
  $output = '';

  // Add home.

  $home = [];
  $home['title'] = t('Home');
  $home['path'] = '<front>';
  $home['href'] = '<front>';

  global $user;
  $result = db_select('front_page', 'f')
    ->fields('f', ['data'])
    ->condition('rid', array_keys($user->roles), 'IN')
    ->condition('data', '', '!=')
    ->execute()
    ->fetchAll();

  $active = drupal_is_front_page();
  if (!empty($result)) {
    $path = $result[0]->data;
    $active = current_path() == $path;
  }

  if (!is_array($variables['primary'])) {
    $variables['primary'] = [];
    array_unshift($variables['primary'], [
      '#theme' => 'menu_local_task',
      '#link' => [
        'title' => strip_tags(drupal_get_title()),
        'path' => current_path(),
        'href' => current_path(),
      ],
    ]);
  }
  array_unshift($variables['primary'], [
    '#theme' => 'menu_local_task',
    '#link' => $home,
    '#active' => $active,
  ]);

  //Add back button for 'students'.

  $current_menu = menu_get_item();

  if ($current_menu['path'] == "student/student/%") {
    if (in_array(MIDLETON_BASE_COORDINATOR_ROLE, $user->roles)) {
      array_unshift($variables['primary'], [
        '#theme' => 'menu_local_task',
        '#link' => [
          'title' => t('Back'),
          'path' => 'coordinator/student',
          'href' => 'coordinator/student',
          'localized_options' => [
            'attributes' => ['class' => ['back']],
          ],
        ],
      ]);
    }elseif (in_array(MIDLETON_BASE_CHIEF_COORDINATOR_ROLE, $user->roles)) {
      array_unshift($variables['primary'], [
        '#theme' => 'menu_local_task',
        '#link' => [
          'title' => t('Back'),
          'path' => 'chief-coordinator/students',
          'href' => 'chief-coordinator/students',
          'localized_options' => [
            'attributes' => ['class' => ['back']],
          ],
        ],
      ]);
    } elseif(in_array(MIDLETON_MIDLETON_ROLE, $user->roles)) {
      array_unshift($variables['primary'], [
        '#theme' => 'menu_local_task',
        '#link' => [
          'title' => t('Back'),
          'path' => 'midleton/students',
          'href' => 'midleton/students',
          'localized_options' => [
            'attributes' => ['class' => ['back']],
          ],
        ],
      ]);
    }
  }


  if (!empty($variables['primary'])) {
    foreach ($variables['primary'] as $delta => $item) {
      $item['#link']['localized_options']['attributes']['class'][] = drupal_clean_css_identifier($item['#link']['path']);
      $variables['primary'][$delta] = $item;
    }
  }
  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs tabs--primary  links--inline">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs tabs--secondary links--inline">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}
