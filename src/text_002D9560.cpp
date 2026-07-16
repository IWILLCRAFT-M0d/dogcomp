#include "common.h"
#include "debug.h"
#include "unk.h"

// Editables.cpp?

#ifdef NON_MATCHING
LiveEditable::LiveEditable(char* arg1, char* arg2) { // member, manager?
    this->unk8 = this;
    this->unk14 = 0;
    this->unk10 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D9560", __12LiveEditablePcPc);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D95D0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D9620); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D9658);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D9848);

#ifdef NON_MATCHING
EditableManager::EditableManager(char* arg1) {
    this->unk2C = new char[strlen(arg1) + 1];
    strcpy(this->unk2C, arg1);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D9560", __15EditableManagerPc); /* EditableManager */
#endif

INCLUDE_ASM("asm/nonmatchings/text_002D9560", _$_15EditableManager);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D99F8); // EditableManager virtual

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D9B08);
// DDE_FatalError("Duplicate member name \'%s\' in manager %s", /**/);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D9C38);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002D9CB8);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA210);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA2C0);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA410);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA438);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA470);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA4B8);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA4D8);

INCLUDE_RODATA("asm/nonmatchings/text_002D9560", _vt$17Widget_FilterText);

INCLUDE_RODATA("asm/nonmatchings/text_002D9560", D_00443F88);

INCLUDE_RODATA("asm/nonmatchings/text_002D9560", _vt$12LiveEditable);

INCLUDE_RODATA("asm/nonmatchings/text_002D9560", _vt$23EditableSelectionDialog);

INCLUDE_RODATA("asm/nonmatchings/text_002D9560", _vt$15EditableManager);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", __tf15EditableManager);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA568); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA570); // unreferenced
/* return a0->unk2C */

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA578); // EditableSelectionDialog virtual

INCLUDE_ASM("asm/nonmatchings/text_002D9560", __tf23EditableSelectionDialog);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA5E8);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA628);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", __tf20EditableCreateAction);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA698);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", _$_17Widget_FilterText);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", __tf17Widget_FilterText);

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA7B8); // Widget_FilterText virtual

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DA9E0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DAA20); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DAAA0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DAAC0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DAB10); // unreferenced
/* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_002D9560", func_002DAB18);

