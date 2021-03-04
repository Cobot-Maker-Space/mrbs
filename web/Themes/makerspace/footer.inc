<?php
namespace MRBS;

function print_theme_footer()
{
  echo "</div>\n";  // closing the contents div, opened in print_theme_header()
  ?>
  <footer style="width: 100%; text-align: center;">
    Privacy Policy | Cookie Policy
  </footer>
  <?php
  echo "</body>\n";
  echo "</html>\n";
}
