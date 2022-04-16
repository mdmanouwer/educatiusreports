
<table>
  <thead>
  <tr>
    <th>
      <?php print(t('Show message')); ?>
    </th>
    <th>
      <?php print(t('Deadline')); ?>
    </th>
    <th>
      <?php print(t('Days')); ?>
    </th>
    <th>

    </th>
    <th>
      <?php print(t('Message to display (1 day left)')); ?>
    </th>
    <th>
      <?php print(t('Message to display (multiple days left)')); ?>
    </th>
  </tr>
  </thead>
  <tbody>
  <tr>
    <td>
      <?php print render($form['add_students_deadline']['show_add_students_deadline_message']); ?>
    </td>
    <td>
      <?php print render($form['add_students_deadline']['deadline_add_students_date']); ?>
    </td>
    <td>
      <?php print render($form['add_students_deadline']['deadline_add_students_days']); ?>
    </td>
    <td>
      <div class="calendar"></div>
    </td>
    <td>
      <?php print render($form['add_students_deadline']['student_message_single_day']); ?>
    </td>
    <td>
      <?php print render($form['add_students_deadline']['student_message_multiple_days']); ?>
    </td>
  </tr>
  <?php foreach (element_children($form['reports']) as $report_type) { ?>
    <tr>
      <td>
        <?php print render($form['reports'][$report_type]['send_reports_deadline']['show_send_reports_deadline_message']); ?>
      </td>
      <td>
        <?php print render($form['reports'][$report_type]['send_reports_deadline']['show_deadline_send_reports_date']); ?>
      </td>
      <td>
        <?php print render($form['reports'][$report_type]['send_reports_deadline']['deadline_send_reports_days']); ?>
      </td>
      <td>
        <div class="calendar"></div>
      </td>
      <td>
        <?php print render($form['reports'][$report_type]['send_reports_deadline']['send_reports_message_single_day']); ?>
      </td>
      <td>
        <?php print render($form['reports'][$report_type]['send_reports_deadline']['send_reports_message_multiple_days']); ?>
      </td>
    </tr>
  <?php } ?>
  </tbody>
</table>
<?php print drupal_render_children($form); ?>