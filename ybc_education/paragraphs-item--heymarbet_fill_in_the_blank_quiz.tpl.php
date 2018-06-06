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
  Use your keyboard or the one on-screen to fill in the blanks, then click the
  "check answers" button to see how you did.
  Items highlighted <span class="right_color">green</span> are correct.
  Items highlighted <span class="wrong_color">orange</span> are incorrect.
  Items highlighted <span class="iffy_color">blue</span> are correct, though
  mispelled.
</div>

<div id="tabs" class="fillintheblank">
  <?php
  $yiddish = $children[0];
  $translit = $children[1];
  $english = $children[2];
  ?>
  <ul>
    <?php if ($yiddish): ?>
      <li><a href="#yiddish">Yiddish</a></li>
    <?php endif ?>
    <?php if ($translit): ?>
      <li><a href="#transl">Transliteration</a></li>
    <?php endif ?>
    <?php if ($english): ?>
      <li><a href="#answers">English</a></li>
    <?php endif ?>
  </ul>
  <?php if ($yiddish): ?>
    <div id="yiddish">
      <div class="song yiddish">
        <h3><?php print $yiddish->field_ha_tabbed_title->value(); ?></h3>
        <span class="acknowledgment">
        <?php foreach ($yiddish->field_ha_tabbed_ack as $ack): ?>
          <?php print $ack->value(); ?><br>
        <?php endforeach ?>
      </span><br>
        <?php
        $text = $yiddish->field_ha_tabbed_text->value()['value'];
        $text = str_replace('class="blank"', 'class="blank keyboardInput"', $text);
        $index = 1;
        while (strstr($text, 'id="blank"')) {
          $id = 'id="blank' . $index . '"';
          $text = preg_replace('/' . 'id="blank"' . '/', $id, $text, 1);
          $index += 1;
        }
        print $text;
        ?>
      </div> <!-- /.song -->
    </div> <!-- /#yiddish -->
  <?php endif ?>

  <?php if ($translit): ?>
    <div id="transl">
      <div class="song">
        <h3><?php print $translit->field_ha_tabbed_title->value(); ?></h3>
        <span class="acknowledgment">
          <?php foreach ($translit->field_ha_tabbed_ack as $ack): ?>
            <?php print $ack->value(); ?><br>
          <?php endforeach ?>
        </span><br>
        <?php
        $text = $translit->field_ha_tabbed_text->value()['value'];
        $index = 1;
        while (strstr($text, 'id="blank"')) {
          $id = 'id="blank' . $index . '_trans"';
          $text = preg_replace('/' . 'id="blank"' . '/', $id, $text, 1);
          $index += 1;
        }
        print $text;
        ?>
      </div> <!-- /.song -->
    </div> <!-- /#transl -->
  <?php endif ?>

  <?php if ($english): ?>
    <div id="answers">
      <div class="song">
        <h3><?php print $english->field_ha_tabbed_title->value(); ?></h3>
        <span class="acknowledgment">
          <?php foreach ($english->field_ha_tabbed_ack as $ack): ?>
            <?php print $ack->value(); ?><br>
          <?php endforeach ?>
        </span><br>
        <?php
        $text = $english->field_ha_tabbed_text->value()['value'];
        $index = 1;
        while (strstr($text, 'id="blank"')) {
          $id = 'id="blank' . $index . '_eng"';
          $text = preg_replace('/' . 'id="blank"' . '/', $id, $text, 1);
          $index += 1;
        }
        print $text;
        ?>
      </div> <!-- /.song -->
    </div> <!-- /#answers -->
  <?php endif ?>
</div>  <!-- /#tabs -->

<div class="columns <?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="centerfix">
    <div class="centerfix-inner" id="yidquiz">
    </div>
    <div class="button">
      <button class="checkAnswers fi">Check answers</button>
      <button class="reload">Reload exercise</button>
    </div>
    <div class="dialog"></div>
  </div>
</div>


