<?php

/**
 * @file
 */
?>
<html>
<meta charset="utf-8"/>
<meta http-equiv="cleartype" content="on"/>
<?php
global $base_url;
?>
<link rel="stylesheet" type="text/css"
      href="<?php print $base_url . '/' . drupal_get_path('theme', 'midleton'); ?>/css/midleton.pdf.css">
<body class="pdf">
<div class="pager">
  <script type="text/php">
  print $pdf->text(550,814, "{$PAGE_NUM} /", 'Helvetica', 7);
  </script>
</div>

<div class="logo">
  <img
    src="<?php print $base_url . '/' . drupal_get_path('module', 'midleton_base'); ?>/images/logo.jpg"/>
</div>


</div>
<div class="student">
  <h3><?php print $student_name; ?></h3>

</div>
<h1><?php print $report; ?></h1>
<div class="date">
  <?php print $report_date; ?>
</div>
<?php print render($node); ?>
<div class="footer" style="width: 150px;height: 150px">
  <img
    src="<?php print $base_url . '/' . drupal_get_path('module', 'midleton_base'); ?>/images/footer.jpg" width="150" height="150"/>
</div>

  <script type="text/php">
  print $pdf->page_text(560,814, "{$PAGE_COUNT}", 'Helvetica', 7);
  </script>

</body>
</html>
