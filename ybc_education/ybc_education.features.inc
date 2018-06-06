<?php
/**
 * @file
 * ybc_education.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function ybc_education_paragraphs_info() {
  $items = array(
    'heymarbet_dd_sentences_child' => array(
      'name' => 'Heymarbet Vertical DragDrop Item',
      'bundle' => 'heymarbet_dd_sentences_child',
      'locked' => '1',
    ),
    'heymarbet_dd_sentences_parent' => array(
      'name' => 'Heymarbet Vertical DragDrop Quiz',
      'bundle' => 'heymarbet_dd_sentences_parent',
      'locked' => '1',
    ),
    'heymarbet_fill_in_the_blank_quiz' => array(
      'name' => 'Heymarbet Fill in the Blank Quiz',
      'bundle' => 'heymarbet_fill_in_the_blank_quiz',
      'locked' => '1',
    ),
    'heymarbet_flashcard' => array(
      'name' => 'Heymarbet Flashcard',
      'bundle' => 'heymarbet_flashcard',
      'locked' => '1',
    ),
    'heymarbet_flashcards' => array(
      'name' => 'Heymarbet Flashcards',
      'bundle' => 'heymarbet_flashcards',
      'locked' => '1',
    ),
    'heymarbet_horiz_dragdrop_quiz' => array(
      'name' => 'Heymarbet Horiz DragDrop Quiz',
      'bundle' => 'heymarbet_horiz_dragdrop_quiz',
      'locked' => '1',
    ),
    'heymarbet_horiz_dragdrop_sentenc' => array(
      'name' => 'Heymarbet Horiz DragDrop Sentence',
      'bundle' => 'heymarbet_horiz_dragdrop_sentenc',
      'locked' => '1',
    ),
    'heymarbet_mc_answer_multilang' => array(
      'name' => 'Heymarbet MC Answer MultiLang',
      'bundle' => 'heymarbet_mc_answer_multilang',
      'locked' => '1',
    ),
    'heymarbet_mc_question_multilang' => array(
      'name' => 'Heymarbet MC Question MultiLang',
      'bundle' => 'heymarbet_mc_question_multilang',
      'locked' => '1',
    ),
    'heymarbet_mc_quiz_multilang' => array(
      'name' => 'Heymarbet MC Quiz MultiLang',
      'bundle' => 'heymarbet_mc_quiz_multilang',
      'locked' => '1',
    ),
    'heymarbet_tabbed_text' => array(
      'name' => 'Heymarbet Tabbed Text',
      'bundle' => 'heymarbet_tabbed_text',
      'locked' => '1',
    ),
    'heymarbet_tabbed_text_entry' => array(
      'name' => 'Heymarbet Tabbed Text Entry',
      'bundle' => 'heymarbet_tabbed_text_entry',
      'locked' => '1',
    ),
    'ybc_education' => array(
      'name' => 'Education Exercises',
      'bundle' => 'ybc_education',
      'locked' => '1',
    ),
  );
  return $items;
}
