#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/IOPMem.h"
#include "FGDK3/Playstation2/GE.h"
#include "FGDK3/Playstation2/RunPath.h"

#ifdef NON_MATCHING
int main(int argc, char* argv[]) {
//     s32* sp0;
//     ?* sp4;
//     s32 sp8;
//     s32 spC;
//     s32* sp10;
//     ?* sp14;
//     s32* sp20;
//     ?* sp420;
//     ?* temp_16;
//     ?* temp_20;
//     s32 (*temp_6)(void*, ?, ?);
//     s32 temp_2_4;
//     s32 temp_2_5;
//     s32 temp_2_7;
//     s32 temp_2_8;
    int var_16;
//     s32 var_16_2;
    int var_17;
//     void* temp_2;
//     void* temp_2_2;
//     void* temp_2_3;
//     void* temp_2_6;
//     void* temp_3;
//     void* temp_8;
//     void* temp_8_2;
//     void** temp_20_2;

    var_17 = 0;

    Semaphore_Initialise();
    IOPMem_Initialise();
    GE_Initialise();
    RunPath_Initialise();
    if (argc >= 2) {
        if (strcmp(argv[1], "spongebob") == 0) {
            var_17 = 1;
            goto block_7;
        }
//         func_001C5518(sp, argv[1]);
//         sp14 = &_vt$6Status;
//         sp10 = (s32* )0xFFFFFFFF;
//         _6Status$m_file = "c:/coding/dogs/Code/Playstation2/Main.cpp";
//         _6Status$m_line = 0x8D;
//         _6Status$m_errorString = 0;
//         if (~sp0 != 0) {
//             PrepareReport_6StatusPci(sp, &sp20, 0x400, &_6Status$m_errorString);
//             printf("Failed to process command line:%s\n", &sp20);
//             return -1;
//         }
        goto block_7;
    }
block_7:
    var_16 = 0;
//     func_002CA950()->unk4 = 0.2f;
//     temp_2 = func_002CA950();
//     temp_8 = temp_2->unk8;
//     temp_8->unk2C(temp_2 + temp_8->unk28, 0, sp, 0, temp_8);
//     temp_20 = "Dogs.dgf\0\0C:/Coding/FGDK3/Code/Common/StdMem.h\0m_defaultHeapStackSize < c_maxDefaultHeapStackSize\0\0m_defaultHeapStackSize > 0\0\0m_defaultHeapStack[m_defaultHeapStackSize-1] == this";
// loop_9:
//     temp_2_2 = func_002CA950();
//     temp_3 = temp_2_2->unk8;
//     temp_6 = temp_3->unk24;
//     if (var_16 < temp_6(temp_2_2 + temp_3->unk20, 0, temp_6)) {
//         temp_2_3 = func_002CA950();
//         temp_8_2 = temp_2_3->unk8;
//         temp_8_2->unk2C(temp_2_3 + temp_8_2->unk28, var_16, &sp10, 0, temp_8_2);
//         var_16 += 1;
//         if (sp18 != 0x32) {
//             goto loop_9;
//         }
//         sp0 = sp10;
//         sp4 = sp14;
//         sp8 = sp18;
//         spC = sp1C;
//     }
//     temp_20_2 = func_002A4C58(D_0045216C, sp, 0, 0, var_17 == 0);
//     func_002D6EA8(&sp20, func_00272FF0());
//     func_002D70C0(&sp10, &sp20, temp_20, strlen(temp_20));
//     func_002D7050(&sp10, sp10->unk4 + 1);
//     *(sp10->unkC + sp10->unk4) = 0;
//     func_002BEA88(&D_00388918, sp10->unkC);
//     temp_2_4 = sp10->unk0 - 1;
//     sp10->unk0 = temp_2_4;
//     if (temp_2_4 == 0) {
//         if (sp10 != NULL) {
//             __builtin_delete(sp10->unkC);
//             __builtin_delete(sp10);
//         }
//     }
//     temp_2_5 = sp20->unk0 - 1;
//     sp20->unk0 = temp_2_5;
//     if ((temp_2_5 == 0) && (sp20 != NULL)) {
//         __builtin_delete(sp20->unkC);
//         __builtin_delete(sp20);
//     }
//     temp_2_6 = *temp_20_2;
//     temp_2_6->unk74(temp_20_2 + temp_2_6->unk70);
    Main_RunGame();
    GE_Finalise();
    Semaphore_Finalise();
//     func_0031FCF0(0, 0);
//     func_0031FC50();
//     func_00343478();
//     var_16_2 = func_00337A40(argv->unk0, 0x5C);
//     if ((var_16_2 != 0) || (var_16_2 = func_00337A40(argv->unk0, 0x3A), (var_16_2 != 0))) {
//         temp_16 = var_16_2 + 1;
//         sp420 = "spongebob";
//         func_002D6EA8(&sp20, func_00272FF0());
//         func_002D70C0(&sp10, &sp20, temp_16, strlen(temp_16));
//         func_002D7050(&sp10, sp10->unk4 + 1);
//         *(sp10->unkC + sp10->unk4) = 0;
//         func_00349B60(sp10->unkC, 1, &sp420);
//         temp_2_7 = sp10->unk0 - 1;
//         sp10->unk0 = temp_2_7;
//         if (temp_2_7 == 0) {
//             if (sp10 != NULL) {
//                 __builtin_delete(sp10->unkC);
//                 __builtin_delete(sp10);
//             }
//         }
//         temp_2_8 = sp20->unk0 - 1;
//         sp20->unk0 = temp_2_8;
//         if (temp_2_8 == 0) {
//             if (sp20 != NULL) {
//                 __builtin_delete(sp20->unkC);
//                 __builtin_delete(sp20);
//             }
//         }
//     }
    return 0;
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Playstation2/Main", main);
#endif
/* Status(0xFFFFFFFF, "c:/coding/dogs/Code/Playstation2/Main.cpp", 141) */
