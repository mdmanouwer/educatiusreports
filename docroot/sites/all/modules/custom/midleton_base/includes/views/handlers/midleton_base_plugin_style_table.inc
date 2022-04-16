<?php

/**
 * Style plugin to render each item as a row in a table.
 *
 * @ingroup views_style_plugins
 */
class midleton_base_plugin_style_table extends views_plugin_style_table {

  public function build_sort() {
    return TRUE;
  }

  function build_sort_post() {
    parent::build_sort_post();

    // Save table sort to sessions.
    $view_name = $this->view->name . '_' . $this->view->current_display;
    if (!empty($_GET['order']) && !empty($_GET['sort'])) {
      $_SESSION['midleton_base_order_by'][$view_name] = array(
        "order" => $_GET['order'],
        'sort' => $_GET['sort']
      );
    }
    elseif (!empty($_POST) && empty($_GET['order']) && !empty($_SESSION['midleton_base_order_by'][$view_name])) {
      unset($_SESSION['midleton_base_order_by'][$view_name]);
    }

    if (!empty($_SESSION['midleton_base_order_by'][$view_name]) && empty($_GET['sort']) && empty($_GET['order'])) {
      $order = $_SESSION['midleton_base_order_by'][$view_name]['order'];
      $sort = $_SESSION['midleton_base_order_by'][$view_name]['sort'];
      $this->order = $sort;
      $this->active = $order;
    }
  }

}
