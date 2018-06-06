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
  Click and drag the items below into their proper order, then click the "check
  answers" button to see how you did.
  Items highlighted <span class="right_color">green</span> are correct.
  Items highlighted <span class="wrong_color">orange</span> are incorrect.
</div>

<div class="columns <?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="centerfix">
    <div class="centerfix-inner" id="yidquiz">
      <?php
      $id_index = 1;
      foreach ($children as $s): ?>
        <ul
          class="reply_hrz_adj sortable <?php print (1 == $s->field_ha_hz_dd_isyid->value()) ? 'yiddish' : ''; ?>"
          id="<?php print "sortable$id_index";
          $id_index++; ?>">
          <?php
          $order = 1;
          foreach ($s->field_ha_hz_dd_words as $word):
            ?>
            <li
              data-value="<?php print $order; ?>" <?php print (1 == $order++) ? 'class="ui-state-disabled"' : ''; ?>><?php print $word->value(); ?></li>
          <?php endforeach; ?>
        </ul>
      <?php endforeach; ?>

      <div class="button">
        <button class="checkAnswers hrz_dd">Check answers</button>
        <button class="reload">Reload exercise</button>
      </div>
      <div class="dialog"></div>
    </div>
  </div>
</div>
