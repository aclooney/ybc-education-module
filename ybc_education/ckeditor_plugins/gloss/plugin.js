/**
 * @file
 */

CKEDITOR.plugins.add('gloss', {
    icons: 'gloss',
    init: function(editor) {
      editor.addCommand('insertGlossWord', new CKEDITOR.dialogCommand('glossDialog'));
      editor.ui.addButton('Gloss', {
        label: 'Insert a gloss word with tooltip!',
        command: 'insertGlossWord',
        toolbar: 'insert'
      });
      if (editor.contextMenu) {
        editor.addMenuGroup('glossGroup');
        editor.addMenuItem('glossItem', {
          label: 'Edit Gloss Word',
          icon: this.path + 'icons/gloss.png',
          command: 'insertGlossWord',
          group: 'glossGroup'
        });
         editor.contextMenu.addListener(function(element) {
          if (element.getAscendant('span', true) && element.hasClass('gloss')) {
            return { glossItem: CKEDITOR.TRISTATE_OFF };
          }
         });
      }
      CKEDITOR.dialog.add('glossDialog', this.path + 'dialogs/gloss.js');
    }
});
