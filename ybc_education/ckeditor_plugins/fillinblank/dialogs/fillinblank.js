/**
 * @file
 */

CKEDITOR.dialog.add('fillinDialog', function (editor) {
  return {
    title: 'A Blank for a \"Fill in the Blank\"',
    minWidth: 100,
    minHeight: 100,

    contents: [
      {
        id: 'tab-basic',
        label: 'Basic Settings',
        elements: [
          {
            type: 'text',
            id: 'answers',
            label: 'Enter all fully correct answers, seperated by a comma.\nE.g. \" fish, פֿיש\":',
            labelStyle: 'white-space: pre',
            validate: CKEDITOR.dialog.validate.notEmpty("Answer field cannot be empty."),
            setup: function (element) {
              this.setValue(element.getAttribute('data-answer'));
            }
          },
          {
            type: 'text',
            id: 'variants',
            label: 'Enter all alternate (incorrect) spellings, seperated by a comma.\nE.g. \"phish ,פיש\":',
            labelStyle: 'white-space: pre',
            setup: function (element) {
              this.setValue(element.getAttribute('data-variant'));
            }
          }
        ]
      }
    ],
    onShow: function () {
      var selection = editor.getSelection();
      var element = selection.getStartElement();

      if (element) {
        element = element.getAscendant('input', true);
      }

      if (!element || !element.hasClass('blank')) {
        element = editor.document.createElement('input');
        this.insertMode = true;
      }
      else {
        this.insertMode = false;
      }

      this.element = element;
      if (!this.insertMode) {
        this.setupContent(element);
      }
    },
    onOk: function () {
      var dialog = this;
      var blank = editor.document.createElement('input');

      blank.setAttribute('data-answer', dialog.getValueOf('tab-basic', 'answers'));
      blank.setAttribute('data-variant', dialog.getValueOf('tab-basic', 'variants'));
      blank.setAttribute('type', 'text');
      blank.setAttribute('class', 'blank');
      blank.setAttribute('id', 'blank');

      editor.insertElement(blank);
    }
  };
});
