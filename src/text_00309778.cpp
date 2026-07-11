#include "common.h"

#include "unk.h"

#include <string.h>
INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309778);

int func_00309798(char* arg0, char* arg1) {
    return strcasecmp(arg0, arg1);
}

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_003097B8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_003098D8); // constructor for D_00484050

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309908); // destructor for D_00484050

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309988); // get id? (, char*)

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309A68);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309AB8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309B28);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309CD8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309E68);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_00309F30); // set music for level


/**
 * @note Name taken from RCT3 symbols.
 */
int NameStore_StringCompare(const char *s1, const char *s2) {
    int var_2;

    if (s1 != NULL) {
        goto block_3;
    }
    var_2 = 1;
    if (s2 != NULL) {
        goto block_5;
    }
    return 0;
block_3:
    var_2 = -1;
    if (s2 != NULL) {
        return strcmp(s1, s2);
    }
block_5:
    return var_2;
};

/**
 * @note Name taken from RCT3 symbols.
 */
int NameStore_StringCompareCI(const char *s1, const char *s2) {
    int var_2;

    if (s1 != NULL) {
        goto block_3;
    }
    var_2 = 1;
    if (s2 != NULL) {
        goto block_5;
    }
    return 0;
block_3:
    var_2 = -1;
    if (s2 != NULL) {
        return strcasecmp(s1, s2);
    }
block_5:
    return var_2;
};

// 003777e8 RCT3 Music_Track::s_nameStore?
INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A030); // RCT3 NameStore::NameStore?

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A098); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A0D0); // RCT3 ~NameStore?

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A150); // RCT3 NameStore::Reset?

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A1C8); // RCT3 NameStore::Initialise?

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A388);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A478);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A4C8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A6D8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A818);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030A9C8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030AA78);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030AAA0);

// 0038acb0 RCT3 DebugID_IF::m_interfaceName?
INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030AB68);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030ABC8);

INCLUDE_ASM("asm/nonmatchings/text_00309778", func_0030ABE8);
