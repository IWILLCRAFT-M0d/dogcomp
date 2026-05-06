#include "common.h"
#include <stdio.h>
#include <string.h>
#include "unk.h"
#include "resinfo_unk.h"
#include "resource_unk.h"
#include "mem.h"
#include <eekernel.h>

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Playstation2/File_CD.h"



#ifdef NON_MATCHING

Status RunPath_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/playstation2/RunPath.cpp", 66);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00272F50", RunPath_InternalInitialise__Fv);
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
INCLUDE_ASM("asm/nonmatchings/text_00272F50", RunPath_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00272F50", RunPath_Finalise__Fv);
#endif

#ifdef NON_MATCHING
const char * RunPath_Get() {
    return "cdrom0:\\";
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00272F50", RunPath_Get__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273000); // file related function (, char*); RCT3 RunPath_GetFileName?

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273158);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002731E8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273240);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002732B8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273318);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002733D8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273420);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002735C8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002736A8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002736E8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273778);

// split???
// 004534B5 lang variable
INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002737A8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273900);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273968);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273998);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002739B8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273A80);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273B10);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273C38);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273CB0);

Resource_LayoutUnit::Resource_LayoutUnit(Resource_LayoutUnit* arg0){
    this->unk0 = 0;
    this->unk4 = arg0;
}

INCLUDE_ASM("asm/nonmatchings/text_00272F50", _$_19Resource_LayoutUnit);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273D58);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273DA0);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273DE8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273E20);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273E58);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00273E90); /* Resource_LayoutOverlay */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", _$_22Resource_LayoutOverlay);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274020); // "Ovl % 20s %12s % 10d\n"

extern s_D_0035FC48* D_0035FC48;
//extern char* D_00487600;

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
INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274200__22Resource_LayoutOverlay); /* Load Resource_LayoutOverlay */
#endif

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002742B0);

#ifdef NON_MATCHING
void Resource_LayoutOverlay::func_00274400() {
    sprintf(D_00487600, "^^^^^^Unload %2d - %s\n", this->unkC, D_0035FC48->m_overlays[this->unkC].m_overlayName);
    scePrintf(D_00487600);//
    //func_002742B0(this, this->unk10, this->unk14, 0);
    //func_002742B0(this, this->unk18, this->unk1C, 1);
    //func_002742B0(this, this->unk20, this->unk24, 2);
    //func_002742B0(this, this->unk28, this->unk2C, 3);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274400__22Resource_LayoutOverlay); /* Unload Resource_LayoutOverlay */
#endif

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002744B0); // Resource_LayoutOverlay  virtual

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002744F8); // virtual

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274540); // virtual

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274588);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002745D0);

Resource_LayoutGroup::Resource_LayoutGroup(Resource_LayoutUnit* arg0, int arg1, void* arg2) :  Resource_LayoutUnit(arg0) {
    this->unkC = arg1;
    this->unk10 = arg2;
}
INCLUDE_ASM("asm/nonmatchings/text_00272F50", _$_20Resource_LayoutGroup);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274730); // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274790); // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002747F0);  // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274850); // Resource_LayoutGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002748B0); /* Resource_LayoutExclusiveGroup) */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002748E8); // Resource_LayoutExclusiveGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274918); // Resource_LayoutExclusiveGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002749C8); /* Resource_LayoutInclusiveGroup */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274A00__29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274A60); // Resource_LayoutInclusiveGroup member

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274B00); // overlay loading function?
// string_ascii(RunPath_Get());
//
INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274C10); // used for preload.dat?

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274CB0);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274D40);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274DD0);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274EB8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00274F78);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275038);

#ifdef NON_MATCHING
void func_002750E0(void) {
    func_00274B00("preload.dat");
}
#else
INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002750E0); // preload.dat referenced
#endif

void* func_00275288(int arg0, int arg1, int ovlType, int arg3) {
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
INCLUDE_ASM("asm/nonmatchings/text_00272F50", __16Resource_Generic);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00272F50", _$_16Resource_Generic);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275448);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002754E8);

int Resource_Generic::func_00275520() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275528);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275600);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002756E0);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275718);
//scePrintf("Resource %s:%d loaded twice\n",type,id)

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002757B0);

void func_002757E8(void) { // called by resource internalinitialise functions
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002757F0); // called by resource internalfinalise functions

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_002758F8); /* return D_00451B54 != 0 */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275908);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275990);

void func_00275AF8(void) {
    return;
}

int func_00275B00(void) {
    return 0;
}

void func_00275B08(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275B10);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", __tf19Resource_LayoutUnit);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275BE8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275BF0); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", __tf20Resource_LayoutGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", _vt$16Resource_Generic);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", _vt$29Resource_LayoutInclusiveGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", _vt$29Resource_LayoutExclusiveGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", _vt$22Resource_LayoutOverlay);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", _vt$20Resource_LayoutGroup);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", _vt$19Resource_LayoutUnit);

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", D_0043C188); /* "19Resource_LayoutUnit" */

INCLUDE_RODATA("asm/nonmatchings/text_00272F50", D_0043C1A0); /* "20Resource_LayoutGroup" */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", __tf22Resource_LayoutOverlay);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", _$_29Resource_LayoutExclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", __tf29Resource_LayoutExclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", _$_29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", __tf29Resource_LayoutInclusiveGroup);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", __tf16Resource_Generic);

void func_00275E88(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275E90);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275EE8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275F20);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275F88); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275F90); /* return D_00451B50 */

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

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275FB8);

INCLUDE_ASM("asm/nonmatchings/text_00272F50", func_00275FD8);
