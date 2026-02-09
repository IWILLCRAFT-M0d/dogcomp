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

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00288B30); /* SOUND_InitIOP */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00288CF0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00288D10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StartCommand);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_EndCommand);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AddData);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D200); /* "RPC buffer full. Call SOUND_FlushIOPCommand\n" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AddLongData);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AddString);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PlayStream);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D2C0); /* "Stream (%d) out of range\n"*/

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D2E0); /* "Call SOUND_SetMaxStreamLimit to allow more\n" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_LoadFile);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PlayStreamFromSFX);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FindFreeStream);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D3B0); /* "SOUND_FindFreeStream\n"*/

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D3C8); /* "No Spare streams free\n" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FindFreeStreamRange);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PlaySFX);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PlaySFXLoop);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetChannelVolume);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetChannelPitch);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StopStream);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StopSound);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetStatus);

void SOUND_Pause() {
    SOUND_StartCommand(SND_PAUSE);
    SOUND_EndCommand();
}

void SOUND_Resume() {
    SOUND_StartCommand(SND_RESUME);
    SOUND_EndCommand();
}

void SOUND_InitSPU() {
    SOUND_StartCommand(SND_INIT_SPU);
    SOUND_EndCommand();
}

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_InitStreamData);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CloseStreamBuffer);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D468); /* "Must range from 0-47\n" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetMaxStreamLimit);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AllocateStreamBuffer);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_ResizeStreamBuffer);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_ResizeSPUBuffer);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetSPUWriteAddress);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CopyIOPBuffer);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FindFreeSPUChannel);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetKeyStatus);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CheckAndStartStereo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CancelCheckStereo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", FlushIOPCommand);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FlushIOPCommand);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_EnableEffects);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_DisableEffects);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetEffectMasterVolume);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetChannelEffectOn);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetChannelEffectOff);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AllChannelEffectsOn);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AllChannelEffectsOff);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D768);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_ChainStreams);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PatchSFX);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_HzToSPU);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetFileInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetFileInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CreateFileInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StoreHOST0FileName);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FreeFileID);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FreeAllFileIDs);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AllocateFileMemory);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FreeFileMemory);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AllocateSpotFXMemory);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FreeSpotFXMemory);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FreeAllSpotFXIDs);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_FreeSpotFXID);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetFileOffsetAndPlaySize);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_InitCD);

void SOUND_DisableCDCallback() {
    SOUND_StartCommand(SND_DISABLE_CD_CALLBACK);
    SOUND_EndCommand();
}

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_DisableSPUCallback);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_EnableSPUCallback);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetStreamChannel);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetMSHSampleCount);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D7A8);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D7D0);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D7F0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PatchMSH);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D828);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetMSHInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetStreamParent_Int);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D8A0);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043D8C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetStreamChild_Int);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetMaxIOPRAM);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetMIHInfo);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043DA48);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043DA68);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetMIBEndOffset);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetMIHFileID);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_TransferDataToIOP);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CheckIOPTransfer);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StreamAllowKeyOn);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StreamDisableKeyOn);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetStreamTrack_Int);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetStreamInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetEXTERNALInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetNextInfoCounter);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_NextFileIDCounter);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_ReturnFileInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetEEWriteAddress);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetIOPWriteAddress);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetFileIDInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_TransIOPToSPU);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_RestartFromCDError);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_CheckCDError);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_EXTERNAL_CDErrorPause);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_EXTERNAL_CDErrorRestart);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_HandleCDErrors);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_ModifyEETransferAddress);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SFXDisableKeyOn);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SFXEnableKeyOn);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_KeyOnChannel);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetOutputPCM);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetOutputBitStream);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_AppendStream);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StreamAddSPUChannel);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetStreamLoadSource);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_InitPCMPlayback);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_InitPCMPlaybackNoStream);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_ClosePCMPlayback);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_PlayPCM);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_StopPCM);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_GetPCMInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetPCMType);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_SetPCMVolume);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028C8D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028C9C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CA40);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CAF8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CB10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CB90);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CC10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CC60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CCE0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CD70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CD90);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CDC8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CDF8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CF78);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028CFA8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D028);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D0A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D100);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D120);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D148);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D178);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D1A0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D1D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D1D8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D238);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D2A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D378);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D380);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D4B0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D5B8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D6A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D728);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D780);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D7C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D800);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D840);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D880);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D8A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D8D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D8F8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D920);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D948);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028D968);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DA08);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DA58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DAB0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DB00);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DB58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DBE8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DBF0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DBF8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DC00);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DC08);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DC10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DC18);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DCA8);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E3B8); /* "SOUND_InitMultiChannelPitch not called\n" */

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E3E0); /* "SPU channel %d out of range (must be 0-47\n" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DD58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DDC8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DDD8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DE70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DED0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028DFB0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E038);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E0C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E148);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E1B8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E2E0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E330);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E3D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E4A0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E598);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E5D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E608);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E668);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E788);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E7C0);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E818);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E838);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E868);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E888);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043E898);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028E968);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028EB88);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", SOUND_MemFree);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028ED48);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028EDE8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028EE78);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028EEA0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028EF48);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F078);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F088);

// end of multistream functions? sound.c





INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F0B0); // Movement_IF thing?

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F110);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F130);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F150);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F1A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F208);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0028F228); /* rct3 MeshInstance::Render ? */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290D08);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290D10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290E50);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290E60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290EC0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290ED8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290EE8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290F38);

// split?
INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290F58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00290F70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291050);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002910C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291110);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002912D8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291438);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291568);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291638);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291700);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291770);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291778);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291780);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291CC0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00291DC8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292168);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292278);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002922A0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292338);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292528);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292940);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292C48);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292CF8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292D70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292E68);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00292E78);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00293C28);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00293C50);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00293C60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00293CE0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00293CF0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294690);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294700);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294770);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002947E0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294878);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294918);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002949B8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294AF8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294C90);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294E28);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00294FC8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295040);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002950B8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295130);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002951A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295220);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295298);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295310);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002953D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295708);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002957E8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295838);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295918);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295C50);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295D80);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295DF0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295E60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295ED0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00295F68);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296008);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002960A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296178);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", Main_RunGame); /* Main_RunGame */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002963D0); /* Main_Terminate */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002963E0); /* return tempR__Main_CloseRequest; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002963E8); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002963F0); /* return 0; */

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043EC30);

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

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296478); /* return 3; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296480);

// isWidescreen
int func_002964C0() {
    return sceScfGetAspect() == SCE_ASPECT_169;
}

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002964E8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296548);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296590);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002965B0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002965D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296630);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296650);

// split
#ifdef NON_MATCHING

Status IOPMem_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp", 47);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00288B30", IOPMem_InternalInitialise__Fv);
#endif

void IOPMem_InternalFinalise(void) {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription IOPMem_StdInit_Description = {
    0,
    &IOPMem_StdInit_UsedModules
};

void * const IOPMem_StdInit_UsedModules[] = {
    &IOPMem_InternalInitialise,
    &IOPMem_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    0,
    0,
};

Status IOPMem_Initialise(void) {
        return StdInit_InitialisationSequence(&IOPMem_StdInit_Description);
}

void IOPMem_Finalise(void) {
    StdInit_FinalisationSequence(&IOPMem_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00288B30", IOPMem_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00288B30", IOPMem_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296710);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002967C8);
/*
void func_002967C8(void* arg0, int arg1) {
    sceSifFreeIopHeap(arg0);
    IOPMem_Finalise();
    if (arg1 & 1) {
        delete(arg0);
    }
}
*/

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043EC70); /* "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp" */

// sym name taken from rct3_mac

void InterfaceError(char* file, int line) {
    DDE_FatalError("Failed to get interface in %s (line %d).", file, line);
}

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296840);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296878);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296958); // classinfo?

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296990);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296AF0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296CB8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296D40); /* rct3 InterfaceTag::InterfaceTag */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00296FB0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002970C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297158);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002971D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002971F8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297228);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043ED70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297238);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297378);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002973C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297400);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043EDC0); /* "13GenericObject" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", __tf9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002974A0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002974A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002974B0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002974E0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002974E8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297520);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297558);

// split
INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297578);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297608);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297658);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297808);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297950);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002979B0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297A40);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297AC8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297B88);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297BD8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297D60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297DD0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00297F88);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00298688);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002987C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00298D50);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299190);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002991C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002991F8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299250);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299258);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299270);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299278);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002992D0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299338);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002993A0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299448);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299450);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299600); /* ~GE_TextureTarget */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299690);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002996A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002996C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299740);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_00299AE0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A008);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A0C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A188);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A198);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A600);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A610); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A618); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A620); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A628); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A630);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", _vt$16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", __tf16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A700);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A708);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A738);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A740);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043EF70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", __tf14GE_TexturePage);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A798);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A7F8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A8E8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A928);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029A968);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029AA28); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029AA30); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029AA38);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029AA48);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029AA58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029B320);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029BAA8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029BF60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029C340);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029CC50);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029D728);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_0029FEA0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A03E0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A07C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A09C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A09E0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0AC0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0C18);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0C58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0CB0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0D80);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0D88);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0D90);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0DD0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A0E10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1218);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1500);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1520);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1678);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1688);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A17E0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1938);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1990);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A19A0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", __tf9GE_Target);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1A28); /* ~GE_Target */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1A58); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1A60); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1A68); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1A70); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1A78);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", __tf12GE_PS2Target);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B58);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B68);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B70); /* return 1.0f; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B80); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B88); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B90); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1B98); /* asm("break 0x1"); */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1BA8); /* asm("break 0x1"); */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1BB8); /* asm("break 0x1"); */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1BC8); /* asm("break 0x1"); */

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", _vt$19GE_PS2DisplayTarget);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", _vt$12GE_PS2Target);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", _vt$9GE_Target);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043F1F0); /* "9GE_Target" */

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043F200); /* "12GE_PS2Target" */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", __tf19GE_PS2DisplayTarget);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1C70);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1CB8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D00);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D18);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D28);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D30);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D48);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D68);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1D88);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1E60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1E98);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1F40);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A1F88);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A22A8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2330);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A23B8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2758);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2790);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2CD0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2D30);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2DB0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2E60);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2E90);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2F10);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A2FD8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A3070);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A3078);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A31C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A3AD0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A3C00);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A3C78);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4218);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4230);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A44C8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A44D8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A46C0);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A46E0);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", D_0043F250);

INCLUDE_RODATA("asm/nonmatchings/text_00288B30", _vt$10ClipVolume);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4838);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4878);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A48A8); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A48B0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A48B8);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4928);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4960);

INCLUDE_ASM("asm/nonmatchings/text_00288B30", func_002A4980);


