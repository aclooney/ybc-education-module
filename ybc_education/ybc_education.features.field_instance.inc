<?php
/**
 * @file
 * ybc_education.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ybc_education_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_dd_sentences_child-field_answer_value'.
  $field_instances['paragraphs_item-heymarbet_dd_sentences_child-field_answer_value'] = array(
    'bundle' => 'heymarbet_dd_sentences_child',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_answer_value',
    'label' => 'Order Value (1 for first, 2 for 2nd...)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_dd_sentences_child-field_sentence'.
  $field_instances['paragraphs_item-heymarbet_dd_sentences_child-field_sentence'] = array(
    'bundle' => 'heymarbet_dd_sentences_child',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sentence',
    'label' => 'Sentence',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_dd_sentences_parent-field_hm_dd_sentence_item'.
  $field_instances['paragraphs_item-heymarbet_dd_sentences_parent-field_hm_dd_sentence_item'] = array(
    'bundle' => 'heymarbet_dd_sentences_parent',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_hm_dd_sentence_item',
    'label' => 'Drag and drop quiz',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'email_signup' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => 'heymarbet_dd_sentences_child',
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_flashcard' => -1,
        'heymarbet_flashcards' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text' => -1,
        'heymarbet_tabbed_text_entry' => -1,
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'email_signup' => 28,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_fill_in_the_blank_quiz' => 32,
        'heymarbet_flashcard' => 33,
        'heymarbet_flashcards' => 34,
        'heymarbet_horiz_dragdrop_quiz' => 35,
        'heymarbet_horiz_dragdrop_sentenc' => 36,
        'heymarbet_mc_answer_multilang' => 37,
        'heymarbet_mc_question_multilang' => 38,
        'heymarbet_mc_quiz_multilang' => 39,
        'heymarbet_tabbed_text' => 40,
        'heymarbet_tabbed_text_entry' => 41,
        'homepage_element_focus' => 7,
        'homepage_element_image' => 8,
        'homepage_element_text' => 9,
        'homepage_element_video' => 10,
        'ia_audio' => 11,
        'ia_video' => 12,
        'image' => 13,
        'image_gallery' => 14,
        'quote' => 16,
        'slide' => 17,
        'slideshow' => 18,
        'soundcloud_audio_player' => 19,
        'splash_block_image_and_button' => 20,
        'splash_block_text_and_image' => 21,
        'text' => 22,
        'text_bilingual' => 23,
        'ybc_education' => 24,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Drag and Drop Sentence',
      'title_multiple' => 'Drag and Drop Sentences',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_fill_in_the_blank_quiz-field_ha_fi_english_text'.
  $field_instances['paragraphs_item-heymarbet_fill_in_the_blank_quiz-field_ha_fi_english_text'] = array(
    'bundle' => 'heymarbet_fill_in_the_blank_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The English Text. Feel free to omit any language (and transliteration).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fi_english_text',
    'label' => 'HA FI English Text',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'fill_in_the_blank' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text_entry' => 'heymarbet_tabbed_text_entry',
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'fill_in_the_blank' => 5,
        'heymarbet_dd_sentences_child' => 6,
        'heymarbet_dd_sentences_parent' => 7,
        'heymarbet_fill_in_the_blank_quiz' => 8,
        'heymarbet_horiz_dragdrop_quiz' => 9,
        'heymarbet_horiz_dragdrop_sentenc' => 10,
        'heymarbet_mc_answer_multilang' => 11,
        'heymarbet_mc_question_multilang' => 12,
        'heymarbet_mc_quiz_multilang' => 13,
        'heymarbet_tabbed_text_entry' => 14,
        'homepage_element_focus' => 15,
        'homepage_element_image' => 16,
        'homepage_element_text' => 17,
        'homepage_element_video' => 18,
        'ia_audio' => 19,
        'ia_video' => 20,
        'image' => 21,
        'image_gallery' => 22,
        'quote' => 23,
        'slide' => 24,
        'slideshow' => 25,
        'soundcloud_audio_player' => 26,
        'splash_block_image_and_button' => 27,
        'splash_block_text_and_image' => 28,
        'text' => 29,
        'text_bilingual' => 30,
        'ybc_education' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'English Tabbed Text',
      'title_multiple' => 'English Tabbed Texts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_fill_in_the_blank_quiz-field_ha_fi_translit_text'.
  $field_instances['paragraphs_item-heymarbet_fill_in_the_blank_quiz-field_ha_fi_translit_text'] = array(
    'bundle' => 'heymarbet_fill_in_the_blank_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The transliterated text. Feel free to omit any language (and transliteration).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fi_translit_text',
    'label' => 'HA FI Translit Text',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'fill_in_the_blank' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text_entry' => 'heymarbet_tabbed_text_entry',
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'fill_in_the_blank' => 5,
        'heymarbet_dd_sentences_child' => 6,
        'heymarbet_dd_sentences_parent' => 7,
        'heymarbet_fill_in_the_blank_quiz' => 8,
        'heymarbet_horiz_dragdrop_quiz' => 9,
        'heymarbet_horiz_dragdrop_sentenc' => 10,
        'heymarbet_mc_answer_multilang' => 11,
        'heymarbet_mc_question_multilang' => 12,
        'heymarbet_mc_quiz_multilang' => 13,
        'heymarbet_tabbed_text_entry' => 14,
        'homepage_element_focus' => 15,
        'homepage_element_image' => 16,
        'homepage_element_text' => 17,
        'homepage_element_video' => 18,
        'ia_audio' => 19,
        'ia_video' => 20,
        'image' => 21,
        'image_gallery' => 22,
        'quote' => 23,
        'slide' => 24,
        'slideshow' => 25,
        'soundcloud_audio_player' => 26,
        'splash_block_image_and_button' => 27,
        'splash_block_text_and_image' => 28,
        'text' => 29,
        'text_bilingual' => 30,
        'ybc_education' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Transliterated Tabbed Text',
      'title_multiple' => 'Transliterated Tabbed Texts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_fill_in_the_blank_quiz-field_ha_fi_yiddish_text'.
  $field_instances['paragraphs_item-heymarbet_fill_in_the_blank_quiz-field_ha_fi_yiddish_text'] = array(
    'bundle' => 'heymarbet_fill_in_the_blank_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Yiddish text. Feel free to omit any language (and transliteration).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fi_yiddish_text',
    'label' => 'HA FI Yiddish Text',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'fill_in_the_blank' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text_entry' => 'heymarbet_tabbed_text_entry',
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'fill_in_the_blank' => 5,
        'heymarbet_dd_sentences_child' => 6,
        'heymarbet_dd_sentences_parent' => 7,
        'heymarbet_fill_in_the_blank_quiz' => 8,
        'heymarbet_horiz_dragdrop_quiz' => 9,
        'heymarbet_horiz_dragdrop_sentenc' => 10,
        'heymarbet_mc_answer_multilang' => 11,
        'heymarbet_mc_question_multilang' => 12,
        'heymarbet_mc_quiz_multilang' => 13,
        'heymarbet_tabbed_text_entry' => 14,
        'homepage_element_focus' => 15,
        'homepage_element_image' => 16,
        'homepage_element_text' => 17,
        'homepage_element_video' => 18,
        'ia_audio' => 19,
        'ia_video' => 20,
        'image' => 21,
        'image_gallery' => 22,
        'quote' => 23,
        'slide' => 24,
        'slideshow' => 25,
        'soundcloud_audio_player' => 26,
        'splash_block_image_and_button' => 27,
        'splash_block_text_and_image' => 28,
        'text' => 29,
        'text_bilingual' => 30,
        'ybc_education' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Yiddish Tabbed Text',
      'title_multiple' => 'Yiddish Tabbed Texts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_flashcard-field_ha_fc_back_image'.
  $field_instances['paragraphs_item-heymarbet_flashcard-field_ha_fc_back_image'] = array(
    'bundle' => 'heymarbet_flashcard',
    'deleted' => 0,
    'description' => 'The image to be displayed don the front of the flashcard. Leave empty if no image is desired.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fc_back_image',
    'label' => 'HA FC Back Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'soundcloud' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
        'collapsible' => 2,
        'croparea' => '500x500',
        'enforce_minimum' => TRUE,
        'enforce_ratio' => TRUE,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '200x150',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_flashcard-field_ha_fc_back_text'.
  $field_instances['paragraphs_item-heymarbet_flashcard-field_ha_fc_back_text'] = array(
    'bundle' => 'heymarbet_flashcard',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The text to be displayed don the back of the flashcard. Leave empty if no text is desired.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fc_back_text',
    'label' => 'HA FC Back Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_flashcard-field_ha_fc_front_image'.
  $field_instances['paragraphs_item-heymarbet_flashcard-field_ha_fc_front_image'] = array(
    'bundle' => 'heymarbet_flashcard',
    'deleted' => 0,
    'description' => 'The image to be displayed don the front of the flashcard. Leave empty if no image is desired.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fc_front_image',
    'label' => 'HA FC Front Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'soundcloud' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
        'collapsible' => 2,
        'croparea' => '500x500',
        'enforce_minimum' => TRUE,
        'enforce_ratio' => TRUE,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
        'resolution' => '200x150',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_flashcard-field_ha_fc_front_text'.
  $field_instances['paragraphs_item-heymarbet_flashcard-field_ha_fc_front_text'] = array(
    'bundle' => 'heymarbet_flashcard',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The text to be displayed don the front of the flashcard. Leave empty if no text is desired.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_fc_front_text',
    'label' => 'HA FC Front Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_flashcards-field_ha_flashcard'.
  $field_instances['paragraphs_item-heymarbet_flashcards-field_ha_flashcard'] = array(
    'bundle' => 'heymarbet_flashcards',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a flashcard to this set.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_flashcard',
    'label' => 'HA Flashcard',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_flashcard' => 'heymarbet_flashcard',
        'heymarbet_flashcards' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text' => -1,
        'heymarbet_tabbed_text_entry' => -1,
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_fill_in_the_blank_quiz' => 7,
        'heymarbet_flashcard' => 8,
        'heymarbet_flashcards' => 9,
        'heymarbet_horiz_dragdrop_quiz' => 10,
        'heymarbet_horiz_dragdrop_sentenc' => 11,
        'heymarbet_mc_answer_multilang' => 12,
        'heymarbet_mc_question_multilang' => 13,
        'heymarbet_mc_quiz_multilang' => 14,
        'heymarbet_tabbed_text' => 15,
        'heymarbet_tabbed_text_entry' => 16,
        'homepage_element_focus' => 17,
        'homepage_element_image' => 18,
        'homepage_element_text' => 19,
        'homepage_element_video' => 20,
        'ia_audio' => 21,
        'ia_video' => 22,
        'image' => 23,
        'image_gallery' => 24,
        'quote' => 25,
        'slide' => 26,
        'slideshow' => 27,
        'soundcloud_audio_player' => 28,
        'splash_block_image_and_button' => 29,
        'splash_block_text_and_image' => 30,
        'text' => 31,
        'text_bilingual' => 32,
        'ybc_education' => 33,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Flashcard',
      'title_multiple' => 'Flashcards',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_horiz_dragdrop_quiz-field_ha_hz_dd_sentence'.
  $field_instances['paragraphs_item-heymarbet_horiz_dragdrop_quiz-field_ha_hz_dd_sentence'] = array(
    'bundle' => 'heymarbet_horiz_dragdrop_quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add any number of horizontal drag and drop sentences',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_hz_dd_sentence',
    'label' => 'HA Horiz DD Sentence',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => 'heymarbet_horiz_dragdrop_sentenc',
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_horiz_dragdrop_quiz' => 7,
        'heymarbet_horiz_dragdrop_sentenc' => 8,
        'heymarbet_mc_answer_multilang' => 9,
        'heymarbet_mc_question_multilang' => 10,
        'heymarbet_mc_quiz_multilang' => 11,
        'homepage_element_focus' => 12,
        'homepage_element_image' => 13,
        'homepage_element_text' => 14,
        'homepage_element_video' => 15,
        'ia_audio' => 16,
        'ia_video' => 17,
        'image' => 18,
        'image_gallery' => 19,
        'quote' => 20,
        'slide' => 21,
        'slideshow' => 22,
        'soundcloud_audio_player' => 23,
        'splash_block_image_and_button' => 24,
        'splash_block_text_and_image' => 25,
        'text' => 26,
        'text_bilingual' => 27,
        'ybc_education' => 28,
      ),
      'default_edit_mode' => 'open',
      'title' => 'DragDrop Sentence',
      'title_multiple' => 'DragDrop Sentences',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_horiz_dragdrop_sentenc-field_ha_hz_dd_isyid'.
  $field_instances['paragraphs_item-heymarbet_horiz_dragdrop_sentenc-field_ha_hz_dd_isyid'] = array(
    'bundle' => 'heymarbet_horiz_dragdrop_sentenc',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check the box if this sentence is in Yiddish, leave it unchecked if it is in English or transliteration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_hz_dd_isyid',
    'label' => 'HA Horiz DD isYid',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_horiz_dragdrop_sentenc-field_ha_hz_dd_words'.
  $field_instances['paragraphs_item-heymarbet_horiz_dragdrop_sentenc-field_ha_hz_dd_words'] = array(
    'bundle' => 'heymarbet_horiz_dragdrop_sentenc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter each word in the sentence in its own textbox, in the correct order.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_hz_dd_words',
    'label' => 'HA Horiz DD Words',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_answer_is_correct_ml'.
  $field_instances['paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_answer_is_correct_ml'] = array(
    'bundle' => 'heymarbet_mc_answer_multilang',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check the box if this is the correct answer. Leave it unchecked if it is incorrect.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_answer_is_correct_ml',
    'label' => 'HA MC Answer Is Correct Multi Lang',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_eng_answer_choice'.
  $field_instances['paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_eng_answer_choice'] = array(
    'bundle' => 'heymarbet_mc_answer_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The English version of this answer choice',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_eng_answer_choice',
    'label' => 'HA MC Eng Answer Choice',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_trans_answer_choice'.
  $field_instances['paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_trans_answer_choice'] = array(
    'bundle' => 'heymarbet_mc_answer_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The transliterated version of this answer choice',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_trans_answer_choice',
    'label' => 'HA MC Trans Answer Choice',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_yid_answer_choice'.
  $field_instances['paragraphs_item-heymarbet_mc_answer_multilang-field_ha_mc_yid_answer_choice'] = array(
    'bundle' => 'heymarbet_mc_answer_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Yiddish version of this answer choice',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_yid_answer_choice',
    'label' => 'HA MC Yid Answer Choice',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_anschoices_multilang'.
  $field_instances['paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_anschoices_multilang'] = array(
    'bundle' => 'heymarbet_mc_question_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add as many multi-lingual answer choices as you wish.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_anschoices_multilang',
    'label' => 'HA MC AnsChoices MultiLang',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_magnetic_child' => -1,
        'heymarbet_magnetic_parent' => -1,
        'heymarbet_mc_answer_multilang' => 'heymarbet_mc_answer_multilang',
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_magnetic_child' => 7,
        'heymarbet_magnetic_parent' => 8,
        'heymarbet_mc_answer_multilang' => 9,
        'heymarbet_mc_question_multilang' => 10,
        'heymarbet_mc_quiz_multilang' => 38,
        'homepage_element_focus' => 11,
        'homepage_element_image' => 12,
        'homepage_element_text' => 13,
        'homepage_element_video' => 14,
        'ia_audio' => 15,
        'ia_video' => 16,
        'image' => 17,
        'image_gallery' => 18,
        'quote' => 19,
        'slide' => 20,
        'slideshow' => 21,
        'soundcloud_audio_player' => 22,
        'splash_block_image_and_button' => 23,
        'splash_block_text_and_image' => 24,
        'text' => 25,
        'text_bilingual' => 26,
        'ybc_education' => 27,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Multi-lingual Answer Choice ',
      'title_multiple' => 'Multi-lingual Answer Choices ',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_eng_question_prompt'.
  $field_instances['paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_eng_question_prompt'] = array(
    'bundle' => 'heymarbet_mc_question_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The English version of the question',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_eng_question_prompt',
    'label' => 'HA MC Eng Question Prompt',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_trans_question_promp'.
  $field_instances['paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_trans_question_promp'] = array(
    'bundle' => 'heymarbet_mc_question_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The transliterated version of this question prompt',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_trans_question_promp',
    'label' => 'HA MC Trans Question Prompt',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_yid_question_prompt'.
  $field_instances['paragraphs_item-heymarbet_mc_question_multilang-field_ha_mc_yid_question_prompt'] = array(
    'bundle' => 'heymarbet_mc_question_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Yiddish version of the question',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_yid_question_prompt',
    'label' => 'HA MC Yid Question Prompt',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_mc_quiz_multilang-field_ha_mc_question_multilang'.
  $field_instances['paragraphs_item-heymarbet_mc_quiz_multilang-field_ha_mc_question_multilang'] = array(
    'bundle' => 'heymarbet_mc_quiz_multilang',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add any number of multi-lingual questions to your quiz',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_mc_question_multilang',
    'label' => 'HA MC Question MultiLang',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_magnetic_child' => -1,
        'heymarbet_magnetic_parent' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => 'heymarbet_mc_question_multilang',
        'heymarbet_mc_quiz_multilang' => -1,
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_magnetic_child' => 7,
        'heymarbet_magnetic_parent' => 8,
        'heymarbet_mc_answer_multilang' => 9,
        'heymarbet_mc_question_multilang' => 10,
        'heymarbet_mc_quiz_multilang' => 11,
        'homepage_element_focus' => 12,
        'homepage_element_image' => 13,
        'homepage_element_text' => 14,
        'homepage_element_video' => 15,
        'ia_audio' => 16,
        'ia_video' => 17,
        'image' => 18,
        'image_gallery' => 19,
        'quote' => 20,
        'slide' => 21,
        'slideshow' => 22,
        'soundcloud_audio_player' => 23,
        'splash_block_image_and_button' => 24,
        'splash_block_text_and_image' => 25,
        'text' => 26,
        'text_bilingual' => 27,
        'ybc_education' => 28,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Multi-lingual MC Question ',
      'title_multiple' => 'Multi-lingual MC Questions ',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_tabbed_text-field_ha_tabbed_text_english'.
  $field_instances['paragraphs_item-heymarbet_tabbed_text-field_ha_tabbed_text_english'] = array(
    'bundle' => 'heymarbet_tabbed_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The English text. Feel free to omit any language (and transliteration).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_tabbed_text_english',
    'label' => 'HA Tabbed Text English',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text' => -1,
        'heymarbet_tabbed_text_entry' => 'heymarbet_tabbed_text_entry',
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_fill_in_the_blank_quiz' => 7,
        'heymarbet_horiz_dragdrop_quiz' => 8,
        'heymarbet_horiz_dragdrop_sentenc' => 9,
        'heymarbet_mc_answer_multilang' => 10,
        'heymarbet_mc_question_multilang' => 11,
        'heymarbet_mc_quiz_multilang' => 12,
        'heymarbet_tabbed_text' => 13,
        'heymarbet_tabbed_text_entry' => 14,
        'homepage_element_focus' => 15,
        'homepage_element_image' => 16,
        'homepage_element_text' => 17,
        'homepage_element_video' => 18,
        'ia_audio' => 19,
        'ia_video' => 20,
        'image' => 21,
        'image_gallery' => 22,
        'quote' => 23,
        'slide' => 24,
        'slideshow' => 25,
        'soundcloud_audio_player' => 26,
        'splash_block_image_and_button' => 27,
        'splash_block_text_and_image' => 28,
        'text' => 29,
        'text_bilingual' => 30,
        'ybc_education' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'English Tabbed Text',
      'title_multiple' => 'English Tabbed Texts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_tabbed_text-field_ha_tabbed_text_translit'.
  $field_instances['paragraphs_item-heymarbet_tabbed_text-field_ha_tabbed_text_translit'] = array(
    'bundle' => 'heymarbet_tabbed_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The transliterated text. Feel free to omit any language (and transliteration).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_tabbed_text_translit',
    'label' => 'HA Tabbed Text Transliterated',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text' => -1,
        'heymarbet_tabbed_text_entry' => 'heymarbet_tabbed_text_entry',
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_fill_in_the_blank_quiz' => 7,
        'heymarbet_horiz_dragdrop_quiz' => 8,
        'heymarbet_horiz_dragdrop_sentenc' => 9,
        'heymarbet_mc_answer_multilang' => 10,
        'heymarbet_mc_question_multilang' => 11,
        'heymarbet_mc_quiz_multilang' => 12,
        'heymarbet_tabbed_text' => 13,
        'heymarbet_tabbed_text_entry' => 14,
        'homepage_element_focus' => 15,
        'homepage_element_image' => 16,
        'homepage_element_text' => 17,
        'homepage_element_video' => 18,
        'ia_audio' => 19,
        'ia_video' => 20,
        'image' => 21,
        'image_gallery' => 22,
        'quote' => 23,
        'slide' => 24,
        'slideshow' => 25,
        'soundcloud_audio_player' => 26,
        'splash_block_image_and_button' => 27,
        'splash_block_text_and_image' => 28,
        'text' => 29,
        'text_bilingual' => 30,
        'ybc_education' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Transliterated Tabbed Text',
      'title_multiple' => 'Transliterated Tabbed Texts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_tabbed_text-field_ha_tabbed_text_yiddish'.
  $field_instances['paragraphs_item-heymarbet_tabbed_text-field_ha_tabbed_text_yiddish'] = array(
    'bundle' => 'heymarbet_tabbed_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Yiddish text. Feel free to omit any language (and transliteration).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_tabbed_text_yiddish',
    'label' => 'HA Tabbed Text Yiddish',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'button_paragraph' => -1,
        'call_to_action_paragraph_wide' => -1,
        'embedded_media' => -1,
        'heymarbet_dd_sentences_child' => -1,
        'heymarbet_dd_sentences_parent' => -1,
        'heymarbet_fill_in_the_blank_quiz' => -1,
        'heymarbet_horiz_dragdrop_quiz' => -1,
        'heymarbet_horiz_dragdrop_sentenc' => -1,
        'heymarbet_mc_answer_multilang' => -1,
        'heymarbet_mc_question_multilang' => -1,
        'heymarbet_mc_quiz_multilang' => -1,
        'heymarbet_tabbed_text' => -1,
        'heymarbet_tabbed_text_entry' => 'heymarbet_tabbed_text_entry',
        'homepage_element_focus' => -1,
        'homepage_element_image' => -1,
        'homepage_element_text' => -1,
        'homepage_element_video' => -1,
        'ia_audio' => -1,
        'ia_video' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'quote' => -1,
        'slide' => -1,
        'slideshow' => -1,
        'soundcloud_audio_player' => -1,
        'splash_block_image_and_button' => -1,
        'splash_block_text_and_image' => -1,
        'text' => -1,
        'text_bilingual' => -1,
        'ybc_education' => -1,
      ),
      'bundle_weights' => array(
        'button_paragraph' => 2,
        'call_to_action_paragraph_wide' => 3,
        'embedded_media' => 4,
        'heymarbet_dd_sentences_child' => 5,
        'heymarbet_dd_sentences_parent' => 6,
        'heymarbet_fill_in_the_blank_quiz' => 7,
        'heymarbet_horiz_dragdrop_quiz' => 8,
        'heymarbet_horiz_dragdrop_sentenc' => 9,
        'heymarbet_mc_answer_multilang' => 10,
        'heymarbet_mc_question_multilang' => 11,
        'heymarbet_mc_quiz_multilang' => 12,
        'heymarbet_tabbed_text' => 13,
        'heymarbet_tabbed_text_entry' => 14,
        'homepage_element_focus' => 15,
        'homepage_element_image' => 16,
        'homepage_element_text' => 17,
        'homepage_element_video' => 18,
        'ia_audio' => 19,
        'ia_video' => 20,
        'image' => 21,
        'image_gallery' => 22,
        'quote' => 23,
        'slide' => 24,
        'slideshow' => 25,
        'soundcloud_audio_player' => 26,
        'splash_block_image_and_button' => 27,
        'splash_block_text_and_image' => 28,
        'text' => 29,
        'text_bilingual' => 30,
        'ybc_education' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Yiddish Tabbed Text',
      'title_multiple' => 'Yiddish Tabbed Texts',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_tabbed_text_entry-field_ha_tabbed_ack'.
  $field_instances['paragraphs_item-heymarbet_tabbed_text_entry-field_ha_tabbed_ack'] = array(
    'bundle' => 'heymarbet_tabbed_text_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Give credit where credit is due! E.g. "Translated by John Doe." <br>
Each acknowledgement in its own text-field please. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_tabbed_ack',
    'label' => 'HA Tabbed Acknowledgments',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_tabbed_text_entry-field_ha_tabbed_text'.
  $field_instances['paragraphs_item-heymarbet_tabbed_text_entry-field_ha_tabbed_text'] = array(
    'bundle' => 'heymarbet_tabbed_text_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The text. Use the rightmost icons in the editor toolbar to add gloss words (words, when hovered, display their translation) and fill-in-the-blanks.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_tabbed_text',
    'label' => 'HA Tabbed Text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'simple_html' => 0,
          'simple_italics' => 0,
          'slide_description' => 0,
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-heymarbet_tabbed_text_entry-field_ha_tabbed_title'.
  $field_instances['paragraphs_item-heymarbet_tabbed_text_entry-field_ha_tabbed_title'] = array(
    'bundle' => 'heymarbet_tabbed_text_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The title of the text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_ha_tabbed_title',
    'label' => 'HA Tabbed Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'editor_html' => 'editor_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simple_html' => 'simple_html',
          'simple_italics' => 'simple_italics',
          'slide_description' => 'slide_description',
          'ybc_education_html' => 'ybc_education_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'editor_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
            'simple_italics' => array(
              'weight' => 0,
            ),
            'slide_description' => array(
              'weight' => 0,
            ),
            'ybc_education_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-ybc_education-field_education_exercise'.
  $field_instances['paragraphs_item-ybc_education-field_education_exercise'] = array(
    'bundle' => 'ybc_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_education_exercise',
    'label' => 'Education Exercise',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a flashcard to this set.');
  t('Add any number of horizontal drag and drop sentences');
  t('Add any number of multi-lingual questions to your quiz');
  t('Add as many multi-lingual answer choices as you wish.');
  t('Check the box if this is the correct answer. Leave it unchecked if it is incorrect.');
  t('Check the box if this sentence is in Yiddish, leave it unchecked if it is in English or transliteration.');
  t('Drag and drop quiz');
  t('Education Exercise');
  t('Enter each word in the sentence in its own textbox, in the correct order.');
  t('Give credit where credit is due! E.g. "Translated by John Doe." <br>
Each acknowledgement in its own text-field please. ');
  t('HA FC Back Image');
  t('HA FC Back Text');
  t('HA FC Front Image');
  t('HA FC Front Text');
  t('HA FI English Text');
  t('HA FI Translit Text');
  t('HA FI Yiddish Text');
  t('HA Flashcard');
  t('HA Horiz DD Sentence');
  t('HA Horiz DD Words');
  t('HA Horiz DD isYid');
  t('HA MC AnsChoices MultiLang');
  t('HA MC Answer Is Correct Multi Lang');
  t('HA MC Eng Answer Choice');
  t('HA MC Eng Question Prompt');
  t('HA MC Question MultiLang');
  t('HA MC Trans Answer Choice');
  t('HA MC Trans Question Prompt');
  t('HA MC Yid Answer Choice');
  t('HA MC Yid Question Prompt');
  t('HA Tabbed Acknowledgments');
  t('HA Tabbed Text');
  t('HA Tabbed Text English');
  t('HA Tabbed Text Transliterated');
  t('HA Tabbed Text Yiddish');
  t('HA Tabbed Title');
  t('Order Value (1 for first, 2 for 2nd...)');
  t('Sentence');
  t('The English Text. Feel free to omit any language (and transliteration).');
  t('The English text. Feel free to omit any language (and transliteration).');
  t('The English version of the question');
  t('The English version of this answer choice');
  t('The Yiddish text. Feel free to omit any language (and transliteration).');
  t('The Yiddish version of the question');
  t('The Yiddish version of this answer choice');
  t('The image to be displayed don the front of the flashcard. Leave empty if no image is desired.');
  t('The text to be displayed don the back of the flashcard. Leave empty if no text is desired.');
  t('The text to be displayed don the front of the flashcard. Leave empty if no text is desired.');
  t('The text. Use the rightmost icons in the editor toolbar to add gloss words (words, when hovered, display their translation) and fill-in-the-blanks.');
  t('The title of the text');
  t('The transliterated text. Feel free to omit any language (and transliteration).');
  t('The transliterated version of this answer choice');
  t('The transliterated version of this question prompt');

  return $field_instances;
}
