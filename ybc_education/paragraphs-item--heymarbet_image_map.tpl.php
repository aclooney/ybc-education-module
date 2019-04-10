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
<?php  $is_quiz = (int)$content['field_ha_im_image_mode']['#items'][0]['value']; ?>
<?php if ($is_quiz): ?>
<div class="instructions">Answer the question by clicking on the specified portion of the image. Use the "next" button to go to the next question. Use the "back" button the go to the previous question.</div>
<?php else: ?>
<div class="instructions">Click parts of the image to see how to say them in Yiddish!</div>
<?php endif; ?>

<div class="image_map_frame" >
  <?php if ($is_quiz): ?>
  <div class="image_map_caption">
    <h3 class="image_map_caption">
    </h3>
  </div>
  <?php endif; ?>
  <?php 
    $url = file_create_url($content['field_ha_im_image'][0]['#item']['uri']);
    list($width, $height, $type, $attr) = getimagesize($content['field_ha_im_image'][0]['#item']['uri']);
  ?>
  <img width="<?php echo $width; ?>" height="<?php echo $height; ?>" class="image_map" src="<?php echo $url; ?>" alt="Heymarbet Image Map" usemap="#heymarbet_map">
  <map name="heymarbet_map" id="heymarbet_map"> 
    <?php foreach ($children as $q):?>
    <area class="heymarbet_map_area" shape="<?php echo $q->field_ha_im_image_area_type->value(); ?>" title="<?php echo $q->field_ha_im_image_area_title->value(); ?>" id="<?php echo $q->field_ha_im_image_area_title->value(); ?>_area" coords="<?php echo $q->field_ha_im_image_area_coordinat->value(); ?>">
    <?php endforeach; ?>
  </map> 
  <?php if ($is_quiz): ?>
  <div class="button">
    <button class="im_prev" disabled>BACK</button>
    <button class="im_next" disabled>NEXT</button>
  </div>
  <?php endif; ?>
  <div class="dialog">Great job! Browse the previous questions with the back button or try out another <em>heymarbet</em>!</div>
</div>

<?php foreach ($children as $q):?>
    <audio id="<?php echo $q->field_ha_im_image_area_title->value() . "_audio"; ?>" class="image_map_audio" src="<?php echo $q->field_ha_im_image_area_audio->value(); ?>">  Your browser does not support the <code>audio</code> element.</audio>
  <?php endforeach; ?>

<script>
  var im_is_quiz = <?php echo $is_quiz; ?>;
  <?php if ($is_quiz): ?>
  var im_index = -1;
  var image_map_questions = [
    <?php foreach ($children as $q): ?>
    {q: "‏<?php print $q->field_ha_im_image_question->value(); ?>‏",
     a: "<?php print $q->field_ha_im_image_area_title->value(); ?>"},
    <?php endforeach; ?>
  ];
  <?php endif; ?>
</script>
