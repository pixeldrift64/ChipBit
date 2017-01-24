<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

  <div id="page-wrapper"><div id="page">

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

      <!-- Banner -->
        <section id="banner">
          <?php print render($page['header']); ?>
        </section>

    <section id="main" class="container">

      <section class="box special">
        <header class="major">
          <h2>Now Playing</h2>
          <h4 id="cc_strinfo_song_chipbit" class="cc_streaminfo NowPlayingTitle" style="display: inline;">Loading...</h4>
          <h4 id="cc_strinfo_playlist_chipbit" class="cc_streaminfo NowPlayingShowName">Loading...</h4>
          <h5><i class="fa fa-microphone"></i> Tune in | <i class="fa fa-download"></i> Download</h5></br>
          <p>Blandit varius ut praesent nascetur eu penatibus nisi risus faucibus nunc ornare<br />
          adipiscing nunc adipiscing. Condimentum turpis massa.</p>
        </header>
      </section>

      <div id="content" class="column"><div class="section">
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div></div> <!-- /.section, /#content -->

    </div></div> <!-- /#main, /#main-wrapper -->

    <footer id="footer">
      <ul class="icons">
        <li><a href="#" class="icon fa-twitter"><span class="label">Twitter</span></a></li>
        <li><a href="#" class="icon fa-facebook"><span class="label">Facebook</span></a></li>
        <li><a href="#" class="icon fa-instagram"><span class="label">Instagram</span></a></li>
        <li><a href="#" class="icon fa-github"><span class="label">Github</span></a></li>
        <li><a href="#" class="icon fa-dribbble"><span class="label">Dribbble</span></a></li>
        <li><a href="#" class="icon fa-google-plus"><span class="label">Google+</span></a></li>
      </ul>
      <?php print render($page['footer']); ?>
    </footer>

    </div> <!-- /.section, /#footer -->

  </div></div> <!-- /#page, /#page-wrapper -->
