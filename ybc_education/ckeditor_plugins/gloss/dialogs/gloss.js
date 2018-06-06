/**
 * @file
 */

CKEDITOR.dialog.add('glossDialog', function (editor) {
  return {
    title: 'A glossed word with tooltip functionality!',
    minWidth: 100,
    minHeight: 100,
    contents: [
      {
        id: 'tab-basic',
        label: 'Basic Settings',
        elements: [
          {
            type: 'text',
            id: 'word',
            label: 'The visible word, to be hovered over.\nE.g. \"הונט\":',
            labelStyle: 'white-space: pre',
            validate: CKEDITOR.dialog.validate.notEmpty("The visible word field cannot be empty."),
            setup: function (element) {
              this.setValue(element.getText());
            },
            commit: function (element) {
              element.setText(this.getValue());
            }
          },
          {
            type: 'text',
            id: 'value',
            label: 'The hidden word (i.e. translation) to be displayed when one hovers over.\nE.g. "dog".\nIf left blank, there will be no hover functionality.',
            labelStyle: 'white-space: pre',
            setup: function (element) {
              this.setValue(element.getAttribute("title"));
            },
            commit: function (element) {
              var value = this.getValue();
              if (value) {
                element.setAttribute("title", value);
              }
            }
          }
        ]
      }
    ],
    onShow: function () {
      var selection = editor.getSelection();
      var element = selection.getStartElement();

      if (element) {
        element = element.getAscendant('span', true);
      }

      if (!element || !element.hasClass('gloss')) {
        element = editor.document.createElement('span');
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
      if (dialog.insertMode) {
        var gloss = editor.document.createElement('span');

        var value = dialog.getValueOf('tab-basic', 'value');
        if (value) {
          gloss.setAttribute('title', value);
        }
        gloss.setAttribute('class', 'gloss');
        gloss.setText(dialog.getValueOf('tab-basic', 'word'));

        editor.insertElement(gloss);
      }
      else {
        dialog.commitContent(dialog.element);
      }
    }
  };
});
