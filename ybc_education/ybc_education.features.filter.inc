<?php
/**
 * @file
 * ybc_education.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ybc_education_filter_default_formats() {
  $formats = array();

  // Exported format: YBC education HTML.
  $formats['ybc_education_html'] = array(
    'format' => 'ybc_education_html',
    'name' => 'YBC education HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <audio> <div> <span> <p> <source> <button> <br><input><img>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
