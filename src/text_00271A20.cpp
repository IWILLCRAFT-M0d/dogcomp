#include "common.h"
#include <stdio.h>
#include "unk.h"
#include "mem.h"
#include <eekernel.h>

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/RunPath.h"

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271A20);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271AD8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271B30);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271BB8);

#ifdef NON_MATCHING
SavedGame::SavedGame(char* arg1, int arg2, int arg3) {
    this->unk4 = 0;
    this->unk14 = 0;
    this->unk18 = 0;
    this->unk20 = 0;
    this->unk2C = 0;
    this->unk0 = arg2;
    this->unk28 = arg3;
    this->unk10 = 8192;
    this->unk24 = 64;
    /*
    uVar1 = __builtin_vec_new((undefined *)0x2000);
    this->field3_0xc = uVar1;
    sVar2 = strlen(filename);
    dest = (char *)__builtin_vec_new((undefined *)((int)sVar2 + 5));
    this->field2_0x8 = dest;
    strcpy(dest,filename);
    strcat(this->field2_0x8,s_.sav_00451ad0);
    uVar1 = __builtin_vec_new((undefined *)(this->field9_0x24 << 3));
    this->field7_0x1c = uVar1;
    */
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", __9SavedGamePcii);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271D98);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271EE0);

void func_00271EF8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271F00);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272130);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272440);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272508);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272530);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272558);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272580);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002725A8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002725D0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272640);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272690);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002726C8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272748);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272798);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002727C0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002727E8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272810);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272838);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272860);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002728C8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272938);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002729A0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272A78);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272A98);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B00); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B08);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B30);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B58);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B88);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272BB8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272BE0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C08);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C30);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C58);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C80);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272CB8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272CF0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272D28);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272D60);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272D98);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272DD0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272E28);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272E88);

#ifdef NON_MATCHING

Status RunPath_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/playstation2/RunPath.cpp", 66);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", RunPath_InternalInitialise__Fv);
#endif

void RunPath_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription RunPath_StdInit_Description = {
    0,
    &RunPath_StdInit_UsedModules
};

void * const RunPath_StdInit_UsedModules[] = {
    &RunPath_InternalInitialise,
    &RunPath_InternalFinalise,
    &File_CD_Initialise,
    &File_CD_Finalise,
    0,
    0,
};


Status RunPath_Initialise() {
  return StdInit_InitialisationSequence(&RunPath_StdInit_Description);
}


void RunPath_Finalise() {
    StdInit_FinalisationSequence(&RunPath_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", RunPath_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", RunPath_Finalise__Fv);
#endif

#ifdef NON_MATCHING
// getRunPath
char * func_00272FF0() {
    return "cdrom0:\\";
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272FF0);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273000); // file related function

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273158);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002731E8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273240);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002732B8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273318);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002733D8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273420);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002735C8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002736A8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002736E8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273778);

// split???
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002737A8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273900);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273968);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273998);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002739B8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273A80);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273B10);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273C38);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273CB0);

Resource_LayoutUnit::Resource_LayoutUnit(void* arg0){
    this->unk0 = 0;
    this->unk4 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_19Resource_LayoutUnit);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273D58);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273DA0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273DE8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273E20);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273E58);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00273E90); /* Resource_LayoutOverlay */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_22Resource_LayoutOverlay);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274020); // "Ovl % 20s %12s % 10d\n"

extern s_D_0035FC48* D_0035FC48;
extern char* D_00487600;

#ifdef NON_MATCHING
void Resource_LayoutOverlay::func_00274200() {
    sprintf(D_00487600, "^^^^^^^^Load %2d - %s\n", this->unkC, D_0035FC48->m_overlays[this->unkC].m_overlayName);
    scePrintf(D_00487600);//
    //func_00274020(this, this->unk10, this->unk14, 0);
    //func_00274020(this, this->unk18, this->unk1C, 1);
    //func_00274020(this, this->unk20, this->unk24, 2);
    //func_00274020(this, this->unk28, this->unk2C, 3);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274200__22Resource_LayoutOverlay); /* Load Resource_LayoutOverlay */
#endif

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002742B0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274400); /* Unload Resource_LayoutOverlay */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002744B0); // Resource_LayoutOverlay ember

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002744F8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274540);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274588);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002745D0);

Resource_LayoutGroup::Resource_LayoutGroup(void* arg0, int arg1, void* arg2) :  Resource_LayoutUnit(arg0) {
    this->unkC = arg1;
    this->unk10 = arg2;
}
INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_20Resource_LayoutGroup);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274730); // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274790); // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002747F0);  // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274850); // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002748B0); /* Resource_LayoutExclusiveGroup) */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002748E8); // Resource_LayoutExclusiveGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274918); // Resource_LayoutExclusiveGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002749C8); /* Resource_LayoutInclusiveGroup */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274A00__29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274A60); // Resource_LayoutInclusiveGroup member

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274B00); // overlay loading function?

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274C10);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274CB0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274D40);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274DD0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274EB8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00274F78);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275038);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002750E0); // preload.dat referenced

int func_00275288(int arg0, int arg1, int ovlType, int arg3) {
    char* format;
    char ovlName[256];

    switch (arg3) {
    default:
        sprintf(ovlName, "overlay\\%d.ovl", ovlType);
        break;
    case 1:
        sprintf(ovlName, "overlay\\%dd%d.ovl", ovlType, arg0);
        break;
    case 2:
        sprintf(ovlName, "overlay\\%dl%d.ovl", ovlType, arg1);
        break;
    case 3:
        sprintf(ovlName, "overlay\\%dd%dl%d.ovl", ovlType, arg0, arg1);
        break;
    }
    return func_00274B00(ovlName);
}



#ifdef NON_MATCHING
Resource_Generic::Resource_Generic(){
    int i;

    this->unk0 = NULL;
    this->m_resourceCount = 0;
    this->m_resourceType = 0;

    StdInit_ClientBase *a0 = &this->unkC;
    a0->CheckError(StdMem_Initialise());

    for (i = 0; i < D_0044F5A0; i++) {
        if (D_0035FC18[i] == this) {
            this->m_resourceType = i;
            break;
        }
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", __16Resource_Generic);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_16Resource_Generic);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275448);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002754E8);

int func_00275520(void) {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275528);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275600);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002756E0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275718); /* "Resource %s:%d loaded twice\n" */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002757B0);

void func_002757E8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002757F0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002758F8); /* return D_00451B54 != 0 */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275908);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275990);

void func_00275AF8(void) {
    return;
}

int func_00275B00(void) {
    return 0;
}

void func_00275B08(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275B10);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf19Resource_LayoutUnit);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275BE8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275BF0); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf20Resource_LayoutGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$16Resource_Generic);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$29Resource_LayoutInclusiveGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$29Resource_LayoutExclusiveGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$22Resource_LayoutOverlay);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$20Resource_LayoutGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$19Resource_LayoutUnit);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", D_0043C188); /* "19Resource_LayoutUnit" */

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", D_0043C1A0); /* "20Resource_LayoutGroup" */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf22Resource_LayoutOverlay);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_29Resource_LayoutExclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf29Resource_LayoutExclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf16Resource_Generic);

void func_00275E88(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275E90);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275EE8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275F20);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275F88); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275F90); /* return D_00451B50 */

int func_00275F98(void) { // buncha resources member (Resource_Generic?)
    return 0;
}

int func_00275FA0(void) { // buncha resources member (Resource_Generic?)
    return 1;
}

void func_00275FA8(void) { // buncha resources member (Resource_Generic?)
    return;
}

void func_00275FB0(void) { // buncha resources member (Resource_Generic?)
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275FB8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00275FD8);
