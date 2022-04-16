<html>
<meta charset="utf-8"/>
<meta http-equiv="cleartype" content="on"/>
<?php
global $base_url;
?>
<link rel="stylesheet" type="text/css"
      href="<?php print  $base_url . '/' . drupal_get_path('theme', 'midleton'); ?>/css/midleton.pdf.css">
<body class="pdf">
<div class="pager">
  <script type="text/php">
  print $pdf->text(550,814, "{$PAGE_NUM} /", 'Helvetica', 7);
  </script>
</div>

<div class="logo">
  <img
    src="<?php print  $base_url . '/' . drupal_get_path('module', 'midleton_base'); ?>/images/logo.jpg"/>
</div>

<div class="side">
  <div class="inner">
    <div>English Language Solutions, S.L. Inscrita en el Registro Mercantil de
      Madrid, Tomo 31.748, Folio 93,
      Sección 8, Hoja M-571251, Inscripción 1ª - C.I.F.: B-86884616
    </div>
  </div>
</div>
</div>
<div class="student">
  <h3><?php print $student_name; ?></h3>
  <?php print render($student); ?>
</div>
<h1><?php print $report; ?></h1>
<div class="date">
  <?php print $report_date; ?>
</div>
<?php print render($node); ?>
<div class="footer">
  <img
    src="<?php print  $base_url . '/' . drupal_get_path('module', 'midleton_base'); ?>/images/footer.jpg"/>
</div>
<div class="logo-small">
  <img
    src="<?php print  $base_url . '/' . drupal_get_path('module', 'midleton_base'); ?>/images/logo_small.jpg"/>
</div>
  <script type="text/php">
  print $pdf->page_text(560,814, "{$PAGE_COUNT}", 'Helvetica', 7);
  </script>

</body>
</html>
