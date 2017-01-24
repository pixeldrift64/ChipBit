<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="landing <?php print $classes; ?>" <?php print $attributes;?>>
  <div id="page-wrapper">

    <!-- Header -->
      <header id="header" class="alt">
        <a href="index.html"><img src="http://chipbit.net/sites/all/themes/chipbit/images/logos/logo_png_chipbit_main_light_nosub_comp.png" class="nav-logo"/></a>
        <nav id="nav">
          <ul>
            <li><a href="index.html">Home</a></li>
            <li>
              <a href="#" class="icon fa-angle-down">Layouts</a>
              <ul>
                <li><a href="generic.html">Generic</a></li>
                <li><a href="contact.html">Contact</a></li>
                <li><a href="elements.html">Elements</a></li>
                <li>
                  <a href="#">Submenu</a>
                  <ul>
                    <li><a href="#">Option One</a></li>
                    <li><a href="#">Option Two</a></li>
                    <li><a href="#">Option Three</a></li>
                    <li><a href="#">Option Four</a></li>
                  </ul>
                </li>
              </ul>
            </li>
            <li><a href="#" class="button">Sign Up</a></li>
          </ul>
        </nav>
      </header>

    <div id="skip-link">
      <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </div>
  <!-- Scripts -->
    <!--[if lte IE 8]><script src="assets/js/ie/respond.min.js"></script><![endif]-->
    <script language="javascript" type="text/javascript" src="http://stream.chipbit.net:2199/system/streaminfo.js"></script>

</body>
</html>
