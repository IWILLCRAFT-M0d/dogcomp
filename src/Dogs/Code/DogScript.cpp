#include "common.h"
#include "unk.h"
#include "script_unk.h"

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DogScript", D_003DB138); /* "C:/Coding/Dogs/Code/Common/SimObj.h" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DogScript", D_003DB160); /* "_actorID >= -1 && _actorID <= m_actorTblSize" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DogScript", D_003DB190); /* "_actorID >= -1 && _actorID < m_actorTblSize" */

#ifdef NON_MATCHING
DogScript::DogScript(WorldObject* worldObj, int scriptId) : Script(worldObj, (worldObj != NULL ? worldObj->unk58 : NULL), scriptId) {
    // void *temp_2;
    //
    if (scriptId >= 0) {
    //     temp_2 = func_001FC7F0(func_001FC598(), this->unk38);
    //     this->unk3C = temp_2;
    //     if ((temp_2 == NULL) && (D_00452944 == 0) && (D_0044E600 == 0)) {
            if (func_002D5B40("Failed to construct script for actorID %d", worldObj->m_actorId) != 0) {
                PS2_BREAK();
            }
    //         D_0044E600 = D_0045298C;
        }
    //     func_0031CF78(this);
    //     func_0031ECA8(this);
    //     func_0031ECC0(this, 0, 0, this->unk3C->unk50);
    // }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", __9DogScriptP11WorldObjecti); /* DogScript::DogScript */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD470); // unreferenced

void func_001AD560(void) { // unreferenced
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD568); // DogScript member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD590); // DogScript member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD5E0); // DogScript virtual
// can talk?

int DogScript::func_001AD5F8() {
	return -1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD600); // DogScript virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD648);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD740); // DogScript virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD7E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD850);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD8D0__9DogScript); // DogScript virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD928); // DogScript virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AD950);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADA20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADA80); // DogScript virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADAF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADBE8__9DogScript);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADC00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADC90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADCD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADD20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADD68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADDC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADE18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADE70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADEB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADF00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADF48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001ADFC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE050);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE0D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE158);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE1D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE220);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE268);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE2B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE308);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE360);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE3B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE4A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE540);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE688);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE798);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE820);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AE8F8);

#ifdef NON_MATCHING
extern double D_0044EBB8;

float DogScript::func_001AEA78() {
	return (float) D_0044EBB8;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEA78__9DogScript);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEAA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEAD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEB38); // DogScript virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AECD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AED58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEDA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEE40); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AEE80); // virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF020); // DogScript virtual
// func_002D5B40("Script \"%s\" cannot find its owning object ID=%d",

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF180);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF288);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF2E8); // DogScript member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF300); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", _$_9DogScript);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DogScript", D_003DB338); /* "Script \"%s\" cannot find its owning object ID=%d" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DogScript", _vt$18SetLevelEnumerator);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DogScript", _vt$9DogScript);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", __tf9DogScript);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF398); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", __tf18SetLevelEnumerator);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF410); // SetLevelEnumerator virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DogScript", func_001AF430);
