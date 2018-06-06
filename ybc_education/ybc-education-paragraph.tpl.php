<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

    <?php print render($content); ?>
    <div class="<?php print drupal_html_class($education_exercise); ?>">
      <?php if ($education_exercise === 'yiddish_vowel_names'): ?>
        <?php module_load_include('inc', 'ybc_education', 'exercises/yiddish_vowel_names'); ?>
      <?php elseif ($education_exercise === 'alef_beys_chart'): ?>
        <?php module_load_include('inc', 'ybc_education', 'exercises/alef_beys_chart'); ?>
      <?php elseif ($education_exercise === 'yiddish_final_forms'): ?>
        <?php module_load_include('inc', 'ybc_education', 'exercises/yiddish_final_forms'); ?>
      <?php elseif ($education_exercise === 'yiddish_letter_lookalikes'): ?>
        <?php module_load_include('inc', 'ybc_education', 'exercises/yiddish_letter_lookalikes'); ?>
      <?php elseif ($education_exercise === 'yiddish_pronounciations'): ?>
        <?php module_load_include('inc', 'ybc_education', 'exercises/yiddish_pronounciations'); ?>
      <?php elseif ($education_exercise === 'yiddish_reading_practice'): ?>
        <?php module_load_include('inc', 'ybc_education', 'exercises/yiddish_reading_practice'); ?>
      <?php endif; ?>
    </div>
  </div>
</div>
