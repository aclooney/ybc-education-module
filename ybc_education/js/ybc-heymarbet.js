/**
 * @file
 */

(function ($) {
  $(document).ready(function ($) {

    // Initalizing tabs and tooltip.
    $("#tabs, #q_lang_tabs").tabs();
    $("#antabs").tabs();
    $(".gloss").tooltip();

    // Initialize dialog box.
    $('.dialog').dialog({
      autoOpen: false,
      resizable: false,
      buttons: {
        Ok: function () {
          $(this).dialog("close");
        }
      }
    });

    shuffle();

    /**
     * ON-READY:  FLASHCARDS.
     */
    if (typeof cards !== 'undefined') {
      fc_next();
    }
    /**
     * END OF ON-READY FLASHCARDS.
     */

    /**
     * ON-READY: FILL-IN EXERCISES.
     */
    // Empty blanks on reload.
    $('input.blank').each(function () {
      $(this).empty();
    });
    // Change colors on change, selected_color when in focus.
    $("input.blank").on("change paste keyup blur", function () {
      var blank_id = $(this).attr('id');
      var tag;
      $(this).removeClass("wrong_color iffy_color right_color");
      if (blank_id.indexOf("trans") >= 0) {
        tag = '#' + blank_id.substring(0, blank_id.length - 6) + ', #' + blank_id.substring(0, blank_id.length - 6) + '_eng';
        $(tag).removeClass("wrong_color iffy_color right_color");
        $(tag).val($(this).val());
      }
      else if (blank_id.indexOf("eng") >= 0) {
        tag = '#' + blank_id.substring(0, blank_id.length - 4) + ', #' + blank_id.substring(0, blank_id.length - 4) + '_trans';
        $(tag).removeClass("wrong_color iffy_color right_color");
        $(tag).val($(this).val());
      }
      else {
        tag = '#' + blank_id + '_trans, #' + blank_id + '_eng';
        $(tag).removeClass("wrong_color iffy_color right_color");
        $(tag).val($(this).val());
      }
    });
    /**
     * END OF ON-READY FILL-IN.
     */

    /**
     * ON-READY: HORZ D&D.
     */
    $(".sortable.reply_hrz_adj").sortable({
      placeholder: "ui-state-highlight",
      tolerance: "pointer",
      start: function (e, ui) {
        ui.placeholder.height(ui.item.height());
        ui.placeholder.width(ui.item.width());
        $(".reply_hrz_adj li").removeClass("selected_color");
        ui.item.siblings().removeClass("selected_color wrong_color right_color");
        ui.item.removeClass("wrong_color right_color");
        ui.item.addClass("selected_color");
      },
      items: "li:not(.ui-state-disabled)",
      cursor: "grabbing"
    });

    /**
     * END OF ON-READY HORZ D&D.
     */

    /**
     * ON-READY:  D&D.
     */
    $(".sortable.reply_adjustable").sortable({
      placeholder: "ui-state-highlight",
      start: function (e, ui) {
        ui.placeholder.height(ui.item.height());
        $(".reply_adjustable li").removeClass("right_color wrong_color selected_color iffy_color");
        ui.item.addClass("selected_color");
      },
      cursor: "grabbing"
    });
    /**
     * END OF ON-READY D&D.
     */

    /**
     * ON-READY: MC EXERCISES.
     */
    if (typeof questions !== 'undefined') {
      // Printing the questions.
      $.each(questions, function (i, l) {
        make_mc(i, l);
      });
      $(".question").buttonset();
      check_multilang();
    }
    /**
     * END OF ON-READY: MC.
     */
     /**
     * ON-READY:  IMAGE MAPS.
     */
   // $('.image_map2, .image_map').maphilight();
    //$('img[usemap]').rwdImageMaps();
    $('.image_map').mapify({
      hoverClass: "custom-hover",
      popOver: {
        content: function(zone){ 
          if (im_is_quiz) {
            var answer = image_map_questions[im_index].a;
 	        if (zone.attr("data-title") == answer) {
 	          return "Correct! \n<strong>" + answer + "</strong>";
 	        } else {
 	          return "Sorry, that's not right.\nKeep trying!";
 	        }
          } else {
            return "<strong>"+zone.attr("data-title")+"</strong>";
          }
        },
        delay: 0.7,
        margin: "15px",
        height: "auto",
        width: "100%",
        display: "inline-block"
      }
    });  
    if (im_is_quiz) {
      im_next();		
    }
    /**
     * END OF ON-READY IMAGE MAPS.
     */
     
    /**
     * ON-READY:  ALL SORTABLE.
     */
    $(".sortable, .question").disableSelection();

    /**
     * END OF ON-READY ALL SORTABLE.
     */
  });

  // Reload.
  $('.reload').click(function () {
    location.reload(true);
  });

  /**
   * FILL-IN EXERCISES.
   */
  // Highlight selected_color when blank is in use.
  $('.blank').focus(function () {
    $(this).addClass('selected_color');
  });
  $('.blank').focusout(function () {
    $(this).removeClass('selected_color');
  });

  // Check function for fillin.
  $(".checkAnswers.fi").click(function () {
    var score = 0;
    var spelling = 0;
    var count = 0;

    $(".yiddish .blank").each(function () {
      // Getting ids for corresponding yiddish/trans blanks.
      var trans_id = '#' + $(this).attr("id") + '_trans';
      var eng_id = '#' + $(this).attr("id") + '_eng';
      var all_blanks = '#' + $(this).attr("id") + ',' + trans_id + ',' + eng_id;
      // Parse answer options.
      var answers = $(this).data("answer").split(",");
      var variants = $(this).data("variant").split(",");
      // Removing stale coloring.
      $(all_blanks).removeClass("wrong_color iffy_color right_color");
      count++;
      // Check against each option.
      var done = 0;
      for (i = 0; i < answers.length; i++) {
        if ($(this).val().trim() === answers[i].trim() && $(this).val().trim()) {
          $(all_blanks).removeClass('wrong_color');
          $(all_blanks).addClass('right_color');
          score++;
          done = 1;
          break;
        }
      }
      if (done === 0) {
        for (i = 0; i < variants.length; i++) {
          if ($(this).val().trim() === variants[i].trim() && $(this).val().trim()) {
            $(all_blanks).removeClass('wrong_color');
            $(all_blanks).addClass('iffy_color');
            score++;
            spelling++;
            done = 1;
            break;
          }
        }
      }
      if (done === 0) {
        $(all_blanks).addClass('wrong_color');
      }
    });

    // Print results.
    dialog = $('.dialog').first();
    dialog.dialog("open");
    var grade = score + " out of " + count + " correct!<br>"
    if (spelling > 0) {
      grade = grade + " Try fixing your " + spelling + " spelling mistakes (in turqoise).<br>"
    }
    if (count === score) {
      dialog.html(grade + " Great job!");
    }
    else {
      dialog.html(grade + " Keep practicing!");
    }
  });
  /**
   * END OF FILL-IN.
   */

  /**
   * HORZ D&D EXERCISES.
   */
  $(".checkAnswers.hrz_dd").click(function () {
    var q_score = 0;
    var q_count = 0;
    var t_score = 0;
    var t_count = 0;
    $("ul.reply_hrz_adj").each(function () {
      q_count = 0;
      q_score = 0;
      t_count += 1;
      $(this).find('li').each(function (index) {
        q_count += 1;
        $(this).removeClass("selected_color wrong_color right_color");
        if (index + 1 == $(this).data("value")) {
          q_score += 1;
          $(this).addClass("right_color");
        }
        else {
          $(this).addClass("wrong_color");
        }
      });
      if (q_count === q_score) {
        t_score += 1;
      }
    });

    dialog = $('.dialog').first();
    dialog.dialog("open");
    if (t_count === t_score) {
      dialog.text(t_score + " out of " + t_count + " correct. Great job!");
    }
    else {
      dialog.text(t_score + " out of " + t_count + " correct. Keep practicing!");
    }
  });

  /**
   * END OF HORZ D&D.
   */

  /**
   * D&D EXERCISES.
   */
  $(".checkAnswers.vert_dd").click(function () {
    var score = 0;
    var count = 0;
    $(".reply_adjustable li").each(function (index) {
      count += 1;
      var this_val = $(this).data("value");
      $(this).removeClass("selected_color wrong_color iffy_color right_color");
      if (index + 1 == this_val) {
        score += 1;
        $(this).addClass("right_color");
      }
      else {
        var end = $(".reply_adjustable li").length;
        if (index - 1 >= 0 && $(this).prev().data("value") == this_val - 1) {
          $(this).addClass("iffy_color");
        }
        else if (index + 1 < end && $(this).next().data("value") == this_val + 1) {
          $(this).addClass("iffy_color");
        }
        else {
          $(this).addClass("wrong_color");
        }

      }
    });

    dialog = $('.dialog').first();
    dialog.dialog("open");
    if (count === score) {
      dialog.text(score + " out of " + count + " correct. Great job!");
    }
    else {
      dialog.text(score + " out of " + count + " correct. Keep practicing!");
    }
  });

  /**
   * END OF D&D.
   */

  /**
   * ALL D&D EXERCISES.
   */
  function shuffle() {
    $("ul.reply_hrz_adj").each(function () {
      for (var i = $(this).children().length; i > 1; i--) {
        var num = Math.floor((Math.random() * (i - 1)) + 1);
        $(this).append($(this).children().eq(num).detach());
      }
    });
    $("ul.reply_adjustable").each(function () {
      for (var i = $(this).children().length; i > 1; i--) {
        var num = Math.floor((Math.random() * i));
        $(this).append($(this).children().eq(num).detach());
      }
    });
  }

  /**
   * END OF ALL D&D.
   */

  /**
   * MC EXERCISES.
   */
  // Change question languages.
  function reviseQuestions(questions, language) {
    var id = 0;

    // Select the language.
    if (language == 0) {
      $('#yidquiz').addClass("yiddish");
      $("#eng_lang_but, #trans_lang_but").prop("checked", false);
      $("#yid_lang_but").prop("checked", true);
    }
    else if (language == 1) {
      $('#yidquiz').removeClass("yiddish");
      $("#yid_lang_but, #eng_lang_but").prop("checked", false);
      $("#trans_lang_but").prop("checked", true);
    }
    else {
      $('#yidquiz').removeClass("yiddish");
      $("#yid_lang_but, #trans_lang_but").prop("checked", false);
      $("#eng_lang_but").prop("checked", true);
    }
    // Printing the questions.
    $.each(questions, function (i, l) {
      var aid = 0;
      var prompt;
      // Get prompt by language.
      if (language == 0) {
        prompt = l.yidprompt;
      }
      else if (language == 1) {
        prompt = l.transprompt;
      }
      else {
        prompt = l.engprompt;
      }

      if (prompt.replace(/\u200F/g, '').trim()) {
        // Swapping title (question)
        $('#' + l.id + ' h3').html(prompt);

        $.each(l.answers, function (k, v) {
          v.aid = aid++;
          var value;
          // Get answer choices bby language.
          if (language == 0) {
            value = v.yidvalue;
          }
          else if (language == 1) {
            value = v.transvalue;
          }
          else {
            value = v.engvalue;
          }
          // Swapping label.
          if (value.replace(/\u200F/g, '').trim()) {
            var inputid = l.id + 'a' + v.aid;
            $('#' + inputid).button("option", "label", value);
          }
        });
      }
    });
  }

  // Create question elements.
  function make_mc(i, l) {
    var aid = 0;
    var prompt;
    // Select language for prompt.
    if ($("#yid_lang_but").length &&
      l.yidprompt.replace(/\u200F/g, '').trim().length) {
      prompt = l.yidprompt;
      $("#yidquiz").addClass("yiddish");
      $("#eng_lang_but").prop("checked", false);
      $("#trans_lang_but").prop("checked", false);
      $("#yid_lang_but").prop("checked", true);
    }
    else if (l.transprompt.replace(/\u200F/g, '').trim().length) {
      prompt = l.transprompt;
    }
    else {
      prompt = l.engprompt;
    }

    var myul = $('<ul></ul>', {class: 'question', id: l.id});
    myul.append('<h3>' + prompt + '</h3>');
    l.form = myul;
    $('div#yidquiz').append(myul);

    $.each(l.answers, function (k, v) {
      v.aid = aid++;
      var value;
      // Select language for answer choices.
      if ($("#yid_lang_but").length && v.yidvalue.replace(/\u200F/g, '').trim().length) {
        value = v.yidvalue;
      }
      else if (v.transvalue.replace(/\u200F/g, '').trim().length) {
        value = v.transvalue;
      }
      else {
        value = v.engvalue;
      }

      var myli = $('<li></li>');
      myul.append(myli);
      var inputid = l.id + 'a' + v.aid;
      var myinput = $('<input name="' + l.id + '" id="' + inputid + '" type="radio">');
      v.input = myinput;
      myli.append(myinput);
      myli.append($('<label></label>', {text: value, for: inputid}));
    });
  }

  // Check which langs are available, disable option for those that are not.
  function check_multilang() {
    var yiddish = false;
    var english = false;
    var translit = false;

    $.each(questions, function (i, l) {
      if (l.yidprompt.replace(/\u200F/g, '').trim()) {
        yiddish = true;
      }
      if (l.transprompt.trim()) {
        translit = true;
      }
      if (l.engprompt.trim()) {
        english = true;
      }
    });
    if (!english) {
      $("label[for='eng_lang_but']").hide();
    }
    if (!yiddish) {
      reviseQuestions(questions, 2);
      $("label[for='yid_lang_but']").hide();
      $("label[for='trans_lang_but']").hide();
    }
    if (!translit) {
      $("label[for='trans_lang_but']").hide();
    }
    if ((!english && !yiddish) || (!english && !translit) || (!yiddish && !translit)) {
      $("#q_lang_tabs").hide();
    }

  }

  // Changing question languages.
  $('input[type=radio][name=lang_but]').change(function () {
    var lang = $('input[name=lang_but]:checked').val();
    reviseQuestions(questions, lang);
  });

  // Check function for mc.
  $(".checkAnswers.mc").click(function () {
    var score = 0;
    var count = 0;

    $.each(questions, function (i, l) {
      count++;
      $.each(l.answers, function (k, v) {
        if (v.input.is(':checked') === true) {
          v.input.siblings().removeClass("wrong_color right_color");

          $('.question').buttonset("refresh");
          if (v.test === false) {
            v.input.prop('checked', false);
          }
          $('.question').buttonset("refresh");
          v.input.siblings().addClass("wrong_color");
          if (v.test === true) {
            v.input.siblings().addClass("right_color");
            score++;
          }
        }
      });
    });

    // Print results.
    dialog = $('.dialog').first();
    dialog.dialog("open");
    if (count === score) {
      dialog.text(score + " out of " + count + " correct. Great job!");
    }
    else {
      dialog.text(score + " out of " + count + " correct. Keep practicing!");
    }
  });

  /**
   * END OF MC.
   */

  /**
   * FLASHCARDS.
   */
  $(".card").click(function () {
    $(".front, .back").toggleClass("current");
    if ($(".current .fc_image").attr("src") === "") {
      $(".current .fc_image").toggleClass("current", false);
    }
  });

  $(".fc_next").click(function () {
    fc_next();
  });

  $(".fc_prev").click(function () {
    fc_prev();
  });

  function fc_next() {
    if (++fc_index === cards.length) {
      fc_index = 0;
    }
    $(".text.front").html(cards[fc_index].front.text);
    $(".text.back").html(cards[fc_index].back.text);

    $(".fc_image.front").attr("src", cards[fc_index].front.image);
    $(".fc_image.back").attr("src", cards[fc_index].back.image);

    $(".back").toggleClass("current", false);
    $(".front").toggleClass("current", true);
    if (!cards[fc_index].front.image) {
      $(".front.fc_image").toggleClass("current", false);
    }
    $("#card").effect("highlight", "fast");
  }

  function fc_prev() {
    if (--fc_index === -1) {
      fc_index = cards.length - 1;
    }
    $(".text.front").html(cards[fc_index].front.text);
    $(".text.back").html(cards[fc_index].back.text);

    $(".fc_image.front").attr("src", cards[fc_index].front.image);
    $(".fc_image.back").attr("src", cards[fc_index].back.image);

    $(".back").toggleClass("current", false);
    $(".front").toggleClass("current", true);
    if (!cards[fc_index].front.image) {
      $(".front.fc_image").toggleClass("current", false);
    }
    $("#card").effect("highlight", "fast");
  }

  /**
   * END OF FLASHCARDS.
   */
  /**
   * IMAGE MAPS.
   */
  var im_completed = -1;
  $("area.heymarbet_map_area").on('click', function() {
    var a = document.getElementsByClassName("image_map_audio");
    var this_audio = document.getElementById($(this).attr("data-title") + "_audio");
    
    if (im_is_quiz) {
      var answer = image_map_questions[im_index].a;
      var selection = $(this).attr("data-title");
 	  if (selection == answer && !$(this).hasClass("played")) {
 	    this_audio.play();
 	    $(this).addClass("played");
 	    if (im_index + 1 < image_map_questions.length) {
 	      $(".im_next").attr("disabled", false);
 	    } else if (im_completed != image_map_questions.length-1) {
          dialog = $('.dialog').first();
          dialog.dialog("open");
          im_completed = true;
 	    }
 	    if (im_index > im_completed) {
 	      im_completed = im_index;
 	    }
 	  } else if (selection== answer && $(this).hasClass("played")) { 
 	    this_audio.pause();
        this_audio.currentTime = 0;
        $(this).removeClass("played");
 	  } else {
 	    $("area.heymarbet_map_area").removeClass("played");
 	    for (var i = 0; i < a.length; i++) {
          if (!a[i].paused) {
            a[i].pause();
            a[i].currentTime = 0;
        }
    }
 	  }
 	  return 0;
    } 
    for (var i = 0; i < a.length; i++) {
      if (!a[i].paused && a[i] != this_audio) {
        a[i].pause();
        a[i].currentTime = 0;
      }
    }
     
    if (this_audio.paused && !$(this).hasClass("played")) {
      this_audio.play();
      $("area.heymarbet_map_area").removeClass("played");
      $(this).addClass("played");
    } else {
      this_audio.pause();
      this_audio.currentTime = 0;
      $(this).removeClass("played");
    }
  });
  
  $(".im_next").click(function () {
    im_next();
  });
  
  $(".im_prev").click(function () {
    im_prev();
  });
  
  function im_next() {
    if (++im_index < image_map_questions.length) {
      $("h3.image_map_caption").html(image_map_questions[im_index].q);
      if (im_index <= im_completed && im_index + 1 < image_map_questions.length) {
        $(".im_next").attr("disabled", false);
      } else {
        $(".im_next").attr("disabled", true);
      }

    }
    if (im_index > 0) {
      $(".im_prev").attr("disabled", false);
    } else {
      $(".im_prev").attr("disabled", true);
    }
  }   
  function im_prev() {
    if (--im_index >= 0) {
      $("h3.image_map_caption").html(image_map_questions[im_index].q);
      $(".im_next").attr("disabled", false);
    }
    if (im_index > 0) {
      $(".im_prev").attr("disabled", false);
    } else {
      $(".im_prev").attr("disabled", true);
    }
  }  
   /**
   * END OF IMAGE MAPS.
   */
})(jQuery);
