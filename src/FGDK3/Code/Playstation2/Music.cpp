#include "common.h"

#include "FGDK3/Playstation2/Music.h"
#include "FGDK3/Playstation2/IOPMem.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/SoundManager.h"
//Music_ObjectService header goes here
#include "FGDK3/Playstation2/RunPath.h"
//StdMem header goes here


#include <ee_gcc/sys/types.h>
#include <MultiStream/sound.h>
#include <eekernel.h>
#include <string.h>

#include "debug.h"
#include "unk.h"

#ifdef NON_MATCHING
Status Music_InternalInitialise() {
    //func_002848C8
    if (SOUND_InitIOP() < 0) {
        return func_0026CFD0(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/Music.cpp", 304);
    }
    else {
        SOUND_InitSPU();
        SOUND_InitCD(SOUND_DVD);
        SOUND_InitStreamData(SND_LOAD_EXTERNAL, 3, 0);
        SOUND_SetMaxStreamLimit(10);
        FlushIOPCommand(0);
        //
        return func_0026CFD0(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/Music.cpp", 327);
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", Music_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", Music_InternalFinalise__Fv);


#ifdef NON_MATCHING

StdInit_ModuleDescription Music_StdInit_Description = {
    0,
    &Music_StdInit_UsedModules
};


void * const Music_StdInit_UsedModules[] = {
    &Music_InternalInitialise,
    &Music_InternalFinalise,
    &IOPMem_Initialise,
    &IOPMem_Finalise,
    //&sifManager_Initialise,
    //&sifManager_Finalise,
    &SoundManager_Initialise,
    &SoundManager_Finalise,
    //services_Initialise,
    //services_Finalise,
    &RunPath_Initialise,
    &RunPath_Finalise,
    &Thread_Initialise,
    &Thread_Finalise,
    &StdMem_Initialise,
    &StdMem_Finalise,
    0,
    0,
};
Status Music_Initialise() {
    return StdInit_InitialisationSequence(&Music_StdInit_Description);
}
void Music_Finalise() {
    StdInit_FinalisationSequence(&Music_StdInit_Description);
}


#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", Music_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", Music_Finalise__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F020);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F100);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F270);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F308);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F390);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F708);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F820);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F8B8); /* Music_Track */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027F988); /* Music_Track */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_11Music_Track);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FAD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FB48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FBE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FC60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FCF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FE60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FEA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_0027FF00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280088);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280370);
#ifdef NON_MATCHING
Music_Piece::Music_Piece() {
    this->unk0 = 0;
    this->unk4 = 0;
    this->unk8 = 0;

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __11Music_Piece);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_11Music_Piece);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280628);



#ifdef NON_MATCHING
char* func_00280660(int arg0) {

    switch (arg0) {
    case 0:
        return "MIDI";
    case 1:
        return "CDDA";
    case 2:
        return "ADPCM";
    default:
        return "";
    }

}

int func_00280708(char* arg0) {

    if (strcmp(arg0, "MIDI") == 0) {
        return 0;
    }
    else if (strcmp(arg0, "CDDA") == 0) {
        return 1;
    }
    else if (strcmp(arg0, "ADPCM") == 0) {
        return 2;
    }
    else {
        return -1;
    }
    if (0) {

    } else {

    }
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280660);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280708);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002807D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002809C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280A58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280AA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280AF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280B38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280F08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00280FB8);

#ifdef NON_MATCHING
extern Music_Performance* D_00453744; // static Music_Performance* m_self?
Music_Performance::Music_Performance() {
    this->unk0 = 0;
    this->unk4 = 0;
    this->unk8 = 0;
    this->unkC = 0;

    this->unk24 = 1.0f;
    this->unk28 = 1.0f;

    this->unk9C = 1.0f;
    this->unkA0 = 1.0f;

    if (D_00453744 != 0) {
        DDE_FatalError("More than one Music_Performance instance not allowed");
    }

    this->unk48 = new Music_MenuRegisterable();
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __17Music_Performance);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281198);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_17Music_Performance);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281298);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281380); // a0 is Music_Performance*

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002813E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281518);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281650);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281710);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002817C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002817F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281888);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281910);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281B28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00281BA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002822B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002822F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282328);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002823B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282428);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282450);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282480);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002824F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282560);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282648);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002826B0);

#ifdef NON_MATCHING
Music_PS2Piece::Music_PS2Piece(char* arg1) {
    this->unk58 = arg1;
    //

    if (arg1 != 0) {

    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __14Music_PS2PiecePc); /* Music_PS2Piece::Music_PS2Piece(char* name?) */
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_14Music_PS2Piece);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282E48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282F08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00282FC8); // "piece timed out\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00283148);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00283210__14Music_PS2Piece);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", Load__14Music_PS2Piece);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00283EB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284018); // Music_PS2Piece virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284090); // Music_PS2Piece virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002841D8); // Music_PS2Piece virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284880);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002848C8);

#ifdef NON_MATCHING
Music_PS2Performance::Music_PS2Performance() {
    //
    this->unk120 = 0;
    this->unk124 = 0;
    this->m_paused = false;
    //
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __20Music_PS2Performance);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_20Music_PS2Performance);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284AF0); // Music_PS2Performance virtual
// new Music_PS2Piece( )

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284B60); // Music_PS2Performance virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284C28); // Music_PS2Performance virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284CE0); // Music_PS2Performance virtual

#ifdef NON_MATCHING

void Music_PS2Performance::PauseNow() {
    scePrintf("Music_PS2Performance::PauseNow\n");
    this->m_paused = true;
    SOUND_Pause();
    FlushIOPCommand(0);
}

void Music_PS2Performance::ResumeNow() {
    scePrintf("Music_PS2Performance::ResumeNow\n");
    this->m_paused = false;
    SOUND_Resume();
    FlushIOPCommand(0);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", PauseNow_20Music_PS2Performance);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", ResumeNow_20Music_PS2Performance);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00284DF0); // file loading for music?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00285338);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002854E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002856F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002858D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002859C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00285A08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00285B60);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$22Music_MenuRegisterable);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", D_0043CCB8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", D_0043CCD8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$14Music_PS2Piece);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$14Music_PS2Track);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$17Music_Performance);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$11Music_Piece);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$11Music_Track);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00285CE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf11Music_Track);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf11Music_Piece);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf17Music_Performance);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_14Music_PS2Track);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf14Music_PS2Track);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00285F88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf20Music_PS2Performance);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", D_0043CF48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf22Music_MenuRegisterable);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002860F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286198);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286248);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002862C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286390);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286450);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002864C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286548); // RCT3 string_ascii::compare ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002865B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286628);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286698);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002866D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286720); // create musicthread?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286790);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286848);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002868B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286920);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002869C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286A30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286A98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286AD0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286B20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286B50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286BD0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286C40);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286CA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286D28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286DB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286E78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286EB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286EE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286F20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286F58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286F90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00286FC8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287000);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287030);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287068);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287098);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002870F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287130);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002871A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002871D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287228);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287278);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002872D0);

Music_Channel::Music_Channel() {
    this->unk4 = 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_13Music_Channel);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002873B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002873F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287428);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287460);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287498);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002874D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287508);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287538);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287570);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002875A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002875D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287628);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287660); // return D_00453744; // GetMusicPerformance()?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287698);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287700);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287740);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002877C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287808);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287850);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287888);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002878E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287918);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287948);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287980);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002879B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002879E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287A18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287A48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287A80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287AB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287AF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287B18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287B50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287B88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287BC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287CA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287CF0);

CreateAction::CreateAction() {
}

Music_MenuRegisterable::Music_MenuRegisterable() {
}


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287E70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287EA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287F20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287F60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287F98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00287FD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288028);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002880D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288110);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288160);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002881A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288218);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288268);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002882B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002882F0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$12CreateAction);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _vt$13Music_Channel);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf13Music_Channel);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288398); /* __tf16MenuRegisterable */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", _$_12CreateAction);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", __tf12CreateAction);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002884B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288520);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288558);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002885B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288618);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002886B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002887C0);

MenuRegisterable::MenuRegisterable() { // Move to header or other CPP file?
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288828); // CreateAction virtual?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002888F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288930);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288968);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_002889A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288A38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288AC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Music", func_00288AF8);
