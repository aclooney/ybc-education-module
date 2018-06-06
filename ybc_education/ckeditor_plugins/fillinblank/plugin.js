/**
 * @file
 */

CKEDITOR.plugins.add('fillinblank', {
  icons: 'fillinblank',
  init: function (editor) {
    editor.addCommand('insertFillin', new CKEDITOR.dialogCommand('fillinDialog'));
    editor.ui.addButton('Fillinblank', {
      label: 'Insert a Fill In The Blank',
      command: 'insertFillin',
      toolbar: 'insert'
    });
    if (editor.contextMenu) {
      editor.addMenuGroup('fillinGroup');
      editor.addMenuItem('fillinItem', {
        label: 'Edit FillIn',
        icon: this.path + 'icons/fillinblank.png',
        command: 'insertFillin',
        group: 'fillinGroup'
      });
      editor.contextMenu.addListener(function (element) {
        if (element.getAscendant('input', true) && element.hasClass('blank')) {
          return {fillinItem: CKEDITOR.TRISTATE_OFF};
        }
      });
    }
    CKEDITOR.dialog.add('fillinDialog', this.path + 'dialogs/fillinblank.js');
  }
});
