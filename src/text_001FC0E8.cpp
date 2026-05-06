#include "common.h"
//#include "unk.h"
#include "resource_unk.h"

#include "FGDK3/TextRes.h"
#include "FGDK3/ResLibs/TextureRes/TextureRes.h"
#include "FGDK3/FontRes.h"
//#include "FGDK3/ResLibs/ShapeRes/ShapeRes.h"
//#include "FGDK3/ResLibs/SoundRes/SoundRes.h"
#include "Dogs/Creatres.h"
//#include "FGDK3/ResLibs/LandscapeRes/LandscapeRes.h"
//#include "FGDK3/ResLibs/AnimRes/AnimRes.h"
//#include "FGDK3/ResLibs/ScriptRes/ScriptRes.h"
#include "FGDK3/NavGraphRes.h"
//

#ifdef NON_MATCHING
static Text_Resources D_0035FB10;
static Texture_Resources D_0035FB28;
static Font_Resources D_0035FB40;
// static Shape_Resources D_0035FB58;
// static Sound_Resources D_0035FB70;
static Creature_Resources D_0035FB88;
// static DogsTaleLand_Resources D_0035FBA0;
// static Animation_Resources D_0035FBB8;
// static Script_Resources D_0035FBD0;
static NavGraph_Resources D_0035FBE8;
// static Music_Resources D_0035FC00;
#endif

INCLUDE_ASM("asm/nonmatchings/text_001FC0E8", func_001FC108);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/nonmatchings/text_001FC0E8", func_001FC118); // create/destroy resources
INCLUDE_ASM("asm/nonmatchings/text_001FC0E8", func_001FC400);
INCLUDE_ASM("asm/nonmatchings/text_001FC0E8", func_001FC420);
#endif



