#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/Playstation2/GE.h"
#include <libdev.h>
#include <libgraph.h>

#include "FGDK3/Playstation2/GE_RenderHardware.h"

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5350); // Create GE_PS2PrimVertices?

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A53B8); // Create GE_PS2PrimVertices?

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5430); /* GE_LoadedPS2PrimVertices ? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5468); /* GE_PS2PrimVertices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A54E8); /* GE_PS2PrimVertices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5568); /* GE_PS2PrimVertices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_18GE_PS2PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5600); // called by constructor

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5778); // called by deconstructor

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A57C0); // GE_PS2PrimVertices member

#ifdef NON_MATCHING
int GE_PS2PrimVertices::func_002A5868(int arg1, int arg2) {
    this->unk24 = arg2;
    this->unk20 = arg1;
    return this->unk14 + arg1;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5868__18GE_PS2PrimVerticesii);
#endif

#ifdef NON_MATCHING
void GE_PS2PrimVertices::func_002A5880() {
    this->unk34 = this->unk34 + 1;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5880__18GE_PS2PrimVertices);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5890); // GE_PS2PrimVertices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5970); // GE_PS2PrimVertices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A59E0); // GE_PS2PrimVertices member

void GE_PS2PrimVertices::func_002A5A50() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5A58);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5AC0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5B38); /* GE_LoadedPS2PrimIndices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5B70);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5BA8); /* GE_PS2PrimIndices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5C10); /* GE_PS2PrimIndices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5C80); /* GE_PS2PrimIndices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5CC0); /* GE_PS2PrimIndices? */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_17GE_PS2PrimIndices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5D80); // called by constructor

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5DB8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5DF0); // GE_PS2PrimIndices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5EB0); // GE_PS2PrimIndices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5EC0__17GE_PS2PrimIndices);
/*
void GE_PS2PrimIndices::func_002A5EC0() {
    this->unk18 = this->unk18 + 1;
}
*/
INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5ED0); // GE_PS2PrimIndices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5F68); // GE_PS2PrimIndices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5F90); // GE_PS2PrimIndices member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A5FB8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6040);

GE_PrimVertices::GE_PrimVertices(int arg1, int arg2, int arg3) {
    this->unk0 = arg2;
    this->unk4 = arg3;
    this->unk8 = 1;
    this->unkC = arg1;
    this->unkA = 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_15GE_PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A60D0); /* a0->unk8 = a0->unk8 + 1; */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A60E0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6148);

GE_PrimIndices::GE_PrimIndices(int arg1, char arg2, int arg3) {
    this->unk0 = 1;
    this->unk2 = arg2;
    this->unk4 = arg3;
    this->unk8 = arg1;
    this->unk3 = 0;

}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_14GE_PrimIndices);

void GE_PrimIndices::func_002A62D0() {
    this->unk0 += 1;
}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A62E0); // GE_PrimIndices method

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6350);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A64C8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf15GE_PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6580);

int func_002A6598() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A65A0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A65A8); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A65B0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A65B8);

int GE_PrimVertices::func_002A65C0() {
    return 0;
}

int GE_PrimVertices::func_002A65C8() {
    return 0;
}

void GE_PrimVertices::func_002A65D0() {
    return;
}


INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A65D8__15GE_PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf14GE_PrimIndices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6650);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6668);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6670); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6678);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6680); /* return a0->unk8 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf18GE_PS2PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A66F8); /* return a0->unk34 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6700);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6708); /* return a0->unk14 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6710);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6728__18GE_PS2PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6748__18GE_PS2PrimVertices); /* return a0->unk1A */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf17GE_PS2PrimIndices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A67C0); /* return a0->unk18 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A67C8); /* return a0->unk10 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_24GE_LoadedPS2PrimVertices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$23GE_LoadedPS2PrimIndices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$24GE_LoadedPS2PrimVertices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$17GE_PS2PrimIndices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$18GE_PS2PrimVertices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$14GE_PrimIndices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$15GE_PrimVertices);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", D_0043F7A0); /* "15GE_PrimVertices" */

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", D_0043F7B8); /* "14GE_PrimIndices" */

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", D_0043F7D0); /* "18GE_PS2PrimVertices" */

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", D_0043F7E8); /* "17GE_PS2PrimIndices" */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf24GE_LoadedPS2PrimVertices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_23GE_LoadedPS2PrimIndices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf23GE_LoadedPS2PrimIndices);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6940); // create GE_PS2PrimCache

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A69F8);  // create GE_PS2PrimCache // MeshData stored?

#ifdef NON_MATCHING
GE_PS2PrimCache::GE_PS2PrimCache(/**/) /* : GE_PrimCache */ {
    this->unk28 = 0x0;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A6AB8); /* GE_PS2PrimCache::GE_PS2PrimCache */
#endif

INCLUDE_ASM("asm/nonmatchings/text_002A5350", _$_15GE_PS2PrimCache);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7008__15GE_PS2PrimCache); /* return a0->unk44 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7010__15GE_PS2PrimCache); /* return a0->unk48 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7018); // GE_PS2PrimCache member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A70A8); // GE_PS2PrimCache member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A70E0); // GE_PS2PrimCache member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7108);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7218);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7B28);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7E58);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7F10);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A7FD0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A8258);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A8320);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A9538);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A9878);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A9930);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A9A40);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A9A58);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002A9AF0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AA3A0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AA498);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AA978);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AABF8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AADF8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AB278);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AB778);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ABAE8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ABF00); // GE_PS2PrimCache member; texture/transparency thing?

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC030);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC088);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC100);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", D_0043F8A0);

INCLUDE_RODATA("asm/nonmatchings/text_002A5350", _vt$24GE_PS2PrimCacheDMABuffer);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf24GE_PS2PrimCacheDMABuffer);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC1A0__24GE_PS2PrimCacheDMABuffer); // GE_PS2PrimCacheDMABuffer member

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC1B0);

void GE_PS2PrimCacheDMABuffer::func_002AC220() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC228);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf15GE_PS2PrimCache);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC460);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC470);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC488); /* return a0->unk70 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC490);

int GE_PS2PrimCache::func_002AC4A8() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC4B0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC4C0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC4D0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC4E0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC500);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC520);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC540);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC548);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC558); /* return (short) a0->unk62 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC560); /* return a0->unk40 */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC568); /* return a0->unk1C */

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC570);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC618);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC660);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AC910);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ACBE0);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ACF58);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AD278);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AD650);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002AD928);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ADA08);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ADAD8);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", __tf10I_GE_DMARc);

INCLUDE_ASM("asm/nonmatchings/text_002A5350", func_002ADC20);
