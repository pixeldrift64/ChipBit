<?php

/**
 * @file
 * The Disqus Drupal module variables.
 */

/**
 * Implements hook_variable_group_info().
 */
function disqus_variable_group_info() {
  $groups['disqus'] = array(
    'title' => t('Disqus'),
    'access' => 'Administer Disqus',
    'path' => 'admin/config/services/disqus',
  );
  return $groups;
}

/**
 * Implements hook_variable_info().
 */
function disqus_variable_info($options) {
  $variable['disqus_domain'] = array(
    'type' => 'string',
    'title' => t('Shortname', array(), $options),
    'description' => t('The website shortname that you registered Disqus with. If you registered http://example.disqus.com, you would enter "example" here.'),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_location'] = array(
    'type' => 'string',
    'title' => t('Location', array(), $options),
    'description' => t('Display the Disqus comments in the given location. When "Block" is selected, the comments will appear in the <a href="@disquscomments">Disqus Comments block</a>.', array('@disquscomments' => url('admin/structure/block'))),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_weight'] = array(
    'type' => 'string',
    'title' => t('Weight', array(), $options),
    'description' => t('When the comments are displayed in the content area, you can change the position at which they will be shown.'),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_userapikey'] = array(
    'type' => 'string',
    'title' => t('User API Key'),
    'description' => t('The API key of the administrator account on Disqus. You can get yours <a href="@key">here</a>.', array('@key' => 'http://disqus.com/api/get_my_key/')),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_localization'] = array(
    'type' => 'string',
    'title' => t('Localization support'),
    'description' => t("When enabled, overrides the language set by Disqus with the language provided by the site."),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_inherit_login'] = array(
    'type' => 'string',
    'title' => t('Inherit User Credentials'),
    'description' => t("When enabled and a user is logged in, the Disqus 'Post as Guest' login form will be pre-filled with the user's name and email address."),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_developer'] = array(
    'type' => 'string',
    'title' => t('Testing'),
    'description' => t('When enabled, uses the <a href="http://docs.disqus.com/help/2/">disqus_developer</a> flag to tell Disqus that you are in a testing environment. Threads will not display on the public community page with this set.'),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_useraccesstoken'] = array(
    'type' => 'string',
    'title' => t('User Access Token'),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_publickey'] = array(
    'type' => 'string',
    'title' => t('Public Key'),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_secretkey'] = array(
    'type' => 'string',
    'title' => t('Secret Key'),
    'default' => '',
    'group' => 'disqus',
  );
  $variable['disqus_sso'] = array(
    'type' => 'string',
    'title' => t('Single Sign-On'),
    'description' => t('Provide <a href="@sso">Single Sign-On</a> access to your site.', array(
        '@sso' => 'http://disqus.com/api/sso/',
    )),
    'default' => '',
    'group' => 'disqus',
  );
  return $variable;
}
