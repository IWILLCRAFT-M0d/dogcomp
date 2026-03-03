#include "common.h"

#include "Dogs/Zone.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044DD70;
Zone::Zone(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DD70 = arg1;
    }

    if (arg1 == 0) {
        D_0044DD70->unk4 = 1;
    }
    this->unk114 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", __4ZoneP9ClassInfoP15SimObj_Universeis);
#endif
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", _$_4Zone);

#ifdef NON_MATCHING
extern ClassInfo* D_0044DD78;
ZoneRadius::ZoneRadius(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : Zone(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DD78 = arg1;
    }
    this->unk120 = 0;

    if (arg1 == 0) {
        D_0044DD78->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", __10ZoneRadiusP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00188A30); // "Unknown extra for ZoneRadius creature"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", _$_10ZoneRadius);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00188BF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00188C28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00188C88__10ZoneRadius);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_001890B0__10ZoneRadius);

#ifdef NON_MATCHING
extern ClassInfo* D_0044DD98;
ZoneFromNavGraph::ZoneFromNavGraph(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : Zone(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DD98 = arg1;
    }

    //this->unk12C
    this->unk134 = 301;
    //this->unk140
    this->unk120 = 0;
    this->unk124 = 0;
    this->unk128 = 0;
    this->unk130 = 0;

    if (arg1 == 0) {
        D_0044DD98->unk4 = 1;
    }

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", __16ZoneFromNavGraphP9ClassInfoP15SimObj_Universeis); /* ZoneFromNavGraph */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", _$_16ZoneFromNavGraph);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1C58); /* "Position: " */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1C68); /* "Radius: " */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1C78); /* "Render: " */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00189440__16ZoneFromNavGraph); // "Failed to get navigation graph in ZoneFromNavGraph"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_001896C0); // "Unknown extra for ZoneFromNavGraph creature"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00189878__16ZoneFromNavGraph);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_001898A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00189988);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00189A18__16ZoneFromNavGraph);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00189AB0__16ZoneFromNavGraph);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1D08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1D20);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1D38);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1EF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1F08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D1F20);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D20D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D20F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Zone", D_003D2108);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_00189CD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", __tf4Zone);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A070);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A078); /* D_0044DD64 = a0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A080); /* return D_0044DD64 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A088);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A098__4Zone); /* return D_0044DD70 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", __tf10ZoneRadius);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A138); /* return (float) a0->unk120 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A140__10ZoneRadius); /* return D_0044DD78 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", __tf16ZoneFromNavGraph);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A1E0__16ZoneFromNavGraph); /* return D_0044DD98 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Zone", func_0018A1E8);
