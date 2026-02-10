#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include <libscf.h>
#include <sound.h>
#include <ee/sifdev.h>
#include "FGDK3/ThrowCat.h"

#include "FGDK3/Playstation2/GE.h"
#include <libdev.h>
#include <libgraph.h>

#include "FGDK3/Playstation2/GE_RenderHardware.h"


INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_0028F150);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_0028F1A8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_0028F208);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_0028F228); /* rct3 MeshInstance::Render ? */

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290D08);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290D10);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290E50);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290E60);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290EC0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290ED8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290EE8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290F38);

// split?
INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290F58);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290F70);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291050);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002910C8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291110);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002912D8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291438);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291568);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291638);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291700);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291770);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291778);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291780);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291CC0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00291DC8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292168);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292278);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002922A0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292338);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292528);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292940);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292C48);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292CF8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292D70);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292E68);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00292E78);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00293C28);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00293C50);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00293C60);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00293CE0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00293CF0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294690);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294700);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294770);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002947E0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294878);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294918);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002949B8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294AF8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294C90);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294E28);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00294FC8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295040);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002950B8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295130);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002951A8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295220);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295298);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295310);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002953D0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295708);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002957E8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295838);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295918);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295C50);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295D80);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295DF0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295E60);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295ED0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00295F68);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296008);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002960A8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296178);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", Main_RunGame); /* Main_RunGame */

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002963D0); /* Main_Terminate */

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002963E0); /* return tempR__Main_CloseRequest; */

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002963E8); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002963F0); /* return 0; */

INCLUDE_RODATA("asm/nonmatchings/text_0028F150", D_0043EC30);

// getPS2Lang
int func_002963F8() {

    switch (sceScfGetLanguage()) {
    case SCE_JAPANESE_LANGUAGE:
        return 0;
    case SCE_FRENCH_LANGUAGE:
        return 2;
    case SCE_SPANISH_LANGUAGE:
        return 3;
    case SCE_GERMAN_LANGUAGE:
        return 4;
    case SCE_ITALIAN_LANGUAGE:
        return 5;
    case SCE_DUTCH_LANGUAGE:
        return 6;
    case SCE_PORTUGUESE_LANGUAGE:
        return 7;
    default:
        //SCE_ENGLISH_LANGUAGE
        return 1;
    }
}

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296478); /* return 3; */

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296480);

// isWidescreen
int func_002964C0() {
    return sceScfGetAspect() == SCE_ASPECT_169;
}

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002964E8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296548);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296590);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002965B0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_002965D0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296630);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00296650);
