<?php
/**
 * @file
 * ybc_education.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function ybc_education_ckeditor_profile_defaults() {
  $data = array(
    'heymarbet_ckeditor' => array(
      'name' => 'heymarbet_ckeditor',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Format\',\'-\',\'Styles\',\'-\'],
    [\'Undo\',\'Redo\',\'Bold\',\'Italic\',\'Underline\',\'Blockquote\'],
    [\'BidiLtr\',\'BidiRtl\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Link\',\'Unlink\'],
    [\'Copy\',\'Cut\',\'Paste\',\'PasteFromWord\',\'Find\',\'Indent\',\'Outdent\'],
    [\'Gloss\',\'Fillinblank\',\'Image\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'br',
        'shift_enter_mode' => 'p',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '/sites/all/modules/features/ybc_education/css/ybc-heymarbet.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'fillinblank' => array(
            'name' => 'fillinblank',
            'desc' => 'Plugin for inserting a fill-in-the-blank.',
            'path' => '%base_path%sites/all/modules/features/ybc_education/ckeditor_plugins/fillinblank/',
            'default' => 't',
            'buttons' => array(
              'Fillinblank' => array(
                'label' => 'Insert a Fill-in-the-blank!',
                'icon' => 'icons/fillinblank.png',
              ),
            ),
          ),
          'gloss' => array(
            'name' => 'gloss',
            'desc' => 'Plugin for inserting a gloss word with tooltip.',
            'path' => '%base_path%sites/all/modules/features/ybc_education/ckeditor_plugins/gloss/',
            'default' => 't',
            'buttons' => array(
              'Gloss' => array(
                'label' => 'Insert a Gloss Word!',
                'icon' => 'icons/gloss.png',
              ),
            ),
          ),
          'image2' => array(
            'name' => 'image2',
            'desc' => 'Enhanced Image plugin. See <a href="http://ckeditor.com/addon/image2">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/image2/',
            'buttons' => array(
              'Enhanced Image' => array(
                'icon' => 'icons/image.png',
                'label' => 'Insert Enhanced Image',
              ),
            ),
            'default' => 't',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(
        'ybc_education_html' => 'YBC education HTML',
      ),
    ),
  );
  return $data;
}
