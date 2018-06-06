<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
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
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>

<div class="instructions">
  Click the option you think best answers each question, then click the "check
  answers" button to see how you did.
  Items highlighted <span class="right_color">green</span> are correct.
  Items highlighted <span class="wrong_color">orange</span> are incorrect.
</div>

<div class="columns <?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="centerfix">
    <!-- Language buttons -->
    <form class="lang_buts" id="q_lang_tabs">
      <fieldset>
        <legend>Choose a language & Answer the questions</legend>
        <div>
          <input id="yid_lang_but" class="lang_but" name="lang_but" type="radio"
                 value="0" checked>
          <label for="yid_lang_but">Yiddish</label>
          <input id="trans_lang_but" class="lang_but" name="lang_but"
                 type="radio" value="1">
          <label for="trans_lang_but">Transliteration</label>
          <input id="eng_lang_but" class="lang_but" name="lang_but" type="radio"
                 value="2">
          <label for="eng_lang_but">English</label>
        </div>
      </fieldset>
    </form>
    <!-- /language buttons -->
    <div class="centerfix-inner" id="yidquiz">
    </div>

    <div class="button">
      <button class="checkAnswers mc">Check answers</button>
      <button class="reload">Reload exercise</button>
    </div>
    <div class="dialog"></div>

  </div>
</div>

<script>

  var id = 0;
  var questions = [
    <?php foreach ($children as $q): ?>
    /* question */
    {
      yidprompt: "‏<?php print $q->field_ha_mc_yid_question_prompt->value(); ?>‏",
      transprompt: "<?php print $q->field_ha_mc_trans_question_promp->value(); ?>",
      engprompt: "<?php print $q->field_ha_mc_eng_question_prompt->value(); ?>",
      id: 'question' + id++,
      answers: [
        <?php foreach ($q->field_ha_mc_anschoices_multilang as $a): ?>
        {
          engvalue: "<?php print $a->field_ha_mc_eng_answer_choice->value(); ?>‏",
          transvalue: "<?php print $a->field_ha_mc_trans_answer_choice->value(); ?>",
          yidvalue: "<?php print $a->field_ha_mc_yid_answer_choice->value(); ?>",
          test: <?php print (1 == $a->field_ha_mc_answer_is_correct_ml->value()) ? 'true' : 'false'; ?>},
        <?php endforeach; ?>
      ]
    },
    <?php endforeach; ?>
  ];
</script>
