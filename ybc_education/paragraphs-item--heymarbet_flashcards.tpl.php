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
<div class="instructions">Click the flashcard to flip it. Use the "next" and "back" buttons to see the
  other cards.</div>

<div class="card" id="card">
  <div class="card_info front current" id="card_info_front">
    <h3 class="text front">
    </h3>
    <img src="" class="fc_image front" id="fc_image_front">
  </div>
  <div class="card_info back" id="card_info_back">
    <h3 class="text back">
    </h3>
    <img src="" class="fc_image back" id="fc_image_back">
  </div>
</div>
<div class="button">
  <button class="fc_prev">BACK</button>
  <button class="fc_next">NEXT</button>
</div>

<script>
  var fc_index = -1;
  var cards = [
    <?php foreach ($children as $q):
    $uri_f = $q->field_ha_fc_front_image->value()['uri'];
    $uri_b = $q->field_ha_fc_back_image->value()['uri'];
    ?>
    {
      front: {
        text: "<?php print $q->field_ha_fc_front_text->value(); ?>",
        image: "<?php print ($uri_f) ? file_create_url($uri_f) : ''; ?>"
      },
      back: {
        text: "<?php print $q->field_ha_fc_back_text->value(); ?>",
        image: "<?php print ($uri_b) ? file_create_url($uri_b) : ''; ?>"
      }
    },
    <?php endforeach; ?>
  ];
</script>
