(function($) {
  // this section is for the vertical list drag and drops.
  $(document).ready(function ($) {

    var replySelector = '.reply li';
    var promptSelector = '.prompt li';

    // make prompt li droppable and only accept one at a time.
    $(promptSelector).droppable({
      drop : dropEvent,
      out : function() {
        $(this).droppable('option', 'accept', '.reply li');
      }
    });

    $('.dialog').dialog({
      autoOpen: false,
      resizable: false,
      buttons: {
        Ok: function() {
          $(this).dialog("close");
        }
      }
    });

    // compare values to add correct and incorrect classes, and other half of making the droppable accept one draggable at a time.
    function dropEvent (event, ui) {
      var draggable = ui.draggable;
      var promptValue = $(this).attr("data-value");
      $(this).droppable('option', 'accept', ui.draggable);
      if (promptValue==draggable.attr("data-value")){
        $(draggable).addClass("correct");
      } else {
        $(draggable).addClass("incorrect");
      }
    }

    // make the reply items draggable and remove classes when dragged out to allow retry.
    $(replySelector).draggable({
      snap: ".prompt li",
      snapMode: "inner",
      snapTolerance: "40",
      revert: function(event, ui) {
        $(this).data("uiDraggable").originalPosition = {
          top : 0,
          left : 0
        };
        return !event;
      },
      drag: function(event, ui) {
        $(this).removeClass("incorrect"),
          $(this).removeClass("correct"),
          $(this).removeClass("green"),
          $(this).removeClass("yellow");
      }
    });

    $(promptSelector).droppable();


    // keep the mouse from selecting draggables.
    $(replySelector).disableSelection();
    $(promptSelector).disableSelection();

    $('.checkAnswers').click(colors).click(checkAnswers);

    $('.reload').click(function() {
      location.reload();
    });

    /**
     * Check answers for an exercise
     *
     * @todo This will cause dialog issues if multiple exercises are on the same page.
     */
    function checkAnswers(event, ui) {
      var context = $(event.currentTarget).parents('.paragraphs-item')[0],
          correctAnswers = $('li.correct', context).length,
          totalAnswers = $('.reply li', context).length,
          skipAnswers = $('.reply li', context).not('.correct').not('.incorrect').length,
          dialog = $('.dialog').first();

      dialog.dialog("open");

      if (totalAnswers == correctAnswers) {
        dialog.text(correctAnswers+" out of "+totalAnswers+" correct. Great job!");}
      else {
        if (skipAnswers === 0) {
          dialog.text(correctAnswers+ " out of "+totalAnswers+" correct. Keep practicing!");
        }
        else {
          dialog.text(correctAnswers+ " out of "+totalAnswers+" correct. " +skipAnswers+" skipped. Keep practicing!");}
      }
    }

    function colors(event,ui) {
      $('.reply li.correct').addClass('green');
      $('.reply li.incorrect').addClass('yellow');
    }

    // This section is for the horizontal list drag and drops (currently only one exercise --lookalikes.
    var longBoxReplySelector = 'li.long-box-reply';
    var horizontalPromptSelector = '.horizontal-prompt li';

    $(longBoxReplySelector).disableSelection();
    $(horizontalPromptSelector).disableSelection();

    $('li.long-box-reply').each(function(){
      $(this).draggable({
        containment: $(this).closest('div.question-horizontal')
      });
    });

    $(function() {
      $(longBoxReplySelector).draggable({
        snap: '.horizontal-prompt li',
        snapMode: "inner",
        snapTolerance: "60",
        revert: function(event, ui) {
          $(this).data("uiDraggable").originalPosition = {
            top: 0,
            left: 0,
          };
          return !event;
        },
        drag: function(event, ui) {
          $(this).removeClass("incorrect"),
            $(this).removeClass("correct"),
            $(this).removeClass("green"),
            $(this).removeClass("yellow");
        }
      });
      $(horizontalPromptSelector).droppable();
    });

    /**
     * Initialise the dialog box. Only do this once.
     */
    $('body').once('dialog-init', function() {
      $(".dialog").dialog({
        autoOpen: false,
        resizable: false,
        buttons: {
          Ok: function() {
            $(this).dialog( "close" );
          }
        }
      });
    });

    //make horizontal-prompt li droppable and only accept one at a time.
    $(horizontalPromptSelector).droppable({
      drop : dropEventHorizontal,
      out : function(event, ui) {
        $(this).droppable('option', 'accept', 'li.long-box-reply');
      }
    });

    function dropEventHorizontal (event, ui) {
      var draggable = ui.draggable;
      var promptValue = $(this).attr("data-value");
      var questionWrapper = $(this).closest('div.question-wrapper');
      $(this).droppable('option', 'accept', ui.draggable);
      if (promptValue==draggable.attr("data-value")){
        questionWrapper.addClass("correct");
      } else {
        questionWrapper.addClass("incorrect");
      }
    }

    function checkAnswersHorizontal(event, ui) {
      var context = $(event.currentTarget).parent('.paragraphs-item')[0],
          correctAnswers = $('div.question-wrapper.correct', context).length,
          totalAnswers = $('div.question-wrapper', context).length,
          skipAnswers = $('div.question-wrapper', context).not('.correct').not('.incorrect').length,
          dialog = $('.dialog').first();

      dialog.dialog( "open" );

      if (totalAnswers == correctAnswers) {
        dialog.text(correctAnswers+" out of "+totalAnswers+" correct. Great job!");
      }
      else {
        if (skipAnswers === 0) {
          dialog.text(correctAnswers+ " out of "+totalAnswers+" correct. Keep practicing!");
        }
        else {
          dialog.text(correctAnswers+ " out of "+totalAnswers+" correct. " +skipAnswers+" skipped. Keep practicing!");}
      }
    }

    function colorsHorizontal(event,ui) {
      $('div.question-wrapper.correct').addClass('green');
      $('div.question-wrapper.incorrect').addClass('yellow');
    }

    $('.checkAnswersHorizontal')
        .click(checkAnswersHorizontal)
        .click(colorsHorizontal);

    $('.reload').click(function() {
      location.reload();
    });

    //this section is for playing audio on the alef beys chart, and on reading practice.
    $('div.square').each(
      function() {
        // when done playing do this
        $('audio', this).bind('ended', function(){
          // remove the playing style
          $(this).parent().removeClass('playing');
        });
      }
    );

    $("audio").on("play", function(){
      var _this = $(this);

      $("audio").each(function(i,el){
        if(!$(el).is(_this)) {
          $(el).parent().removeClass('playing');
          $(el).get(0).pause();
        }
      });
    });

    $('div.square').click(function() {
        $('audio', this)[0].currentTime = 0;
        // play the sound
        $('audio', this)[0].play();
        // and add the playing style
        $(this).addClass('playing');
      }
    );

    //this section is for the reading practice tooltip.
    $(document).tooltip();
  });
})(jQuery);
