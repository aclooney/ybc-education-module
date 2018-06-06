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

<div id="tabs">
  <?php
  $yiddish = $children[0];
  $translit = $children[1];
  $english = $children[2];
  ?>
  <?php if (($yiddish && $translit) || ($yiddish && $english) || ($english && $translit)): ?>
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
  <?php endif ?>
  <?php if ($yiddish): ?>
    <div id="yiddish">
      <div class="song yiddish">
        <h3><?php print $yiddish->field_ha_tabbed_title->value(); ?></h3>
        <span class="acknowledgment">
          <?php foreach ($yiddish->field_ha_tabbed_ack as $ack): ?>
            <?php print $ack->value(); ?><br>
          <?php endforeach ?>
        </span><br>
        <?php print $yiddish->field_ha_tabbed_text->value()['value']; ?>
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
        <?php print $translit->field_ha_tabbed_text->value()['value']; ?>
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
        <?php print $english->field_ha_tabbed_text->value()['value']; ?>
      </div> <!-- /.song -->
    </div> <!-- /#answers -->
  <?php endif ?>
</div>  <!-- /#tabs -->
