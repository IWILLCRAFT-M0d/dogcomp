/* SCE CONFIDENTIAL
 $PSLibId$
 */
/*
 *        Emotion Engine (I/O Processor) Library Sample Program
 *
 *                         - Multistream -
 *
 *                           Shift-JIS
 *
 *      Copyright (C) 2000-2001 Sony Computer Entertainment Europe
 *                        All Rights Reserved.
 *
 *                            sound.c
 *                  EE code of Multistream's API
 *
 *       Version        Date            Design      Log
 *  --------------------------------------------------------------------
 *      5.00            Oct,31,2001      Jason Page
 *      6.00            Nov,28,2002      Jason Page
 *      6.10            Jan,31,2003      Jason Page
 *      6.20            Feb,25,2003      Jason Page
 *		7.00 (DSP)		Jun,25,2003		 Jason Page
 *		7.1				Jan,6,2004		 Jason Page
 *		7.2				Apr,13,2004		 Jason Page
 */

/**********************************************************************************
A big "thankyou" to Criterion Games for first showing the world the DSP effect via
the hardware reverb unit technique at the SCEE DevStation 2003.
***********************************************************************************/

/**********************************************************************************
June 2003 (c) SCEE. Written by Jason Page.

Thanks to Rob Vawter, Oliver Hume, Jono Jones, James Russell, Nathalie, Jake, Tim,
Mark, Frank, Gordon, Len, Ben, Dave Lomas, Todd, Geoff G, ....

Notes for playing back realtime DTS surround sound:
	The DTS encode routine that you are attempting to call is a propriety
	technology. In order to utilize this technology a licensing agreement is
	required.  The DTS SDK can be obtained from DTS.

***********************************************************************************/

#define SOUND_MULTISTREAM_VERSION_ID 72
#define SOUND_DTS_ENABLE 0

#include <eekernel.h>
#include <stdio.h>
#include <sdrcmd.h>
#include <libdev.h>
#include <libpkt.h>
#include <libcdvd.h>
#include <sifdev.h>	/* for cd funtions.. */
#include <sif.h>
#include <libmrpc.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <libvu0.h>	/* For DTS stuff.. */
#include <libsdr.h>
#include "sound.h"

#if SOUND_DTS_ENABLE
#include "../dts/idtsenc.h"
#include "../dts/eedts.h"
#endif

#define DEBUG_STATE	/* COMMENT OUT THIS LINE TO REMOVE ALL MSERRORS (scePrintf's)...!! */
#ifdef DEBUG_STATE
#define MSERROR(x) scePrintf x
#else
#define MSERROR(x)
#endif

#define DATA_SIZE_NORMAL 2048			/* Size of data block to send to IOP */
#define IOP_RETURN_BUFFER_SIZE 2048		/* Size of data block returned from IOP */

#define SOUND_PLAY_STREAM_FROM_SFX 0x80	/* Value passed to SOUND_PlayStream */

#define SOUND_THREAD_PRIORITY 40	/* IOP THREAD PRIORITY */

static int IOP_Cnt=0;		/* Pointer into senddata for writing command/data packets */
static u_short senddata[DATA_SIZE_NORMAL/2] __attribute__((aligned (64)));
u_short senddata2[DATA_SIZE_NORMAL/2] __attribute__((aligned (64)));

/* Holds data to be copied into senddata from each SOUND call. */
static u_short IOPCommandData[DATA_SIZE_NORMAL/2];

/* sbuff2 holds the data that is returned from the IOP. */
static u_int sbuff2[IOP_RETURN_BUFFER_SIZE/4] __attribute__((aligned (64)));	/* 512bytes return buffer */

static SPUDSP_TRANS SOUND_DSPData[64];
static int SOUND_DSPCount=0;
static int SOUND_DSPLimit=0;

static u_int SOUND_DSPUpdate[32] __attribute__((aligned (64)));

//static u_int SOUND_DSPCounter=0;		// 0-3
//static u_int SOUND_DSPCounter2=0;		// 0-0xff
//static u_int SOUND_DSPCounter3=0;		// EE 0-3

static u_int SOUND_CurrentMSUpdate=0;

static u_int SOUND_CD_ERRORCODE=0;
static u_int SOUND_CD_ERRORCOUNT=0;

volatile static int SOUND_TransFlag[1]={0};

static u_int SOUND_MCCore0=0;
static u_int SOUND_MCCore1=0;
static u_int SOUND_MCPitch=0;
static u_int SOUND_MCStatus=0;

static u_int SOUND_DEBUG_SCAN[2]={0,0};

static int SOUND_StreamInit;
static int SOUND_IOPThreadPriority=SOUND_THREAD_PRIORITY;
static int SOUND_DSPThreadPriority=20;	//SOUND_THREAD_PRIORITY-1;

/*These are filled in by copying data from the IOP Return buffer (sbuff2) */
static int SOUND_STEREO_READY_FLAG=0;
static int SOUND_CD_STATUS=0;
static u_int SOUND_SPU_ADDR=0x5010;
static u_int SOUND_IOP_ADDR=0;
static u_int SOUND_EE_ADDR=0;
static int SOUND_STREAM_CD_ACCESS=0;
static int SOUND_STREAM_CD_ACCESS_CHAN=0;
static int SOUND_IOP_REQUEST_LOAD=-1;
static int SOUND_STREAM_ID[48];
static int SOUND_STREAM_TIME[48];
static char SOUND_STREAM_STATUS[48];
static char SOUND_STREAM_TIMER[48];
static char SOUND_STREAM_TYPE[48];
static u_char SOUND_STREAM_SPU_CHAN[48];
static char SOUND_STREAM_ACTIVE[48];
static char SOUND_STREAM_PLAY_HALF[48];
static u_short SOUND_STREAM_ENV[48];
static int SOUND_STREAM_SPU_ADDR[48];
static int SOUND_IOP_COUNTER=0;
static u_int SOUND_DSP_IOP_BUFFER=0;
static u_char SOUND_DSP_STATUS=SOUND_DSP_OFF;

u_int SOUND_DSP_IOP_INFO[8]={0,0,0,0,0,0,0,0};

static short SOUND_STREAM_SPU_PITCH[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
										 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static u_short SOUND_STREAM_PRIORITY[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							  			  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


static u_char SOUND_StreamType[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							  			  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static u_int SOUND_SFXID[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							  			  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


static u_int SOUND_IOPInitialBufferSizes[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							  			  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static u_int SOUND_IOPCurrentBufferSizes[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							  			  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static u_int SOUND_SPUBufferSizes[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							  			  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


static u_int SOUND_IOP_DATA_ADDRESS=0;
static u_int SOUND_IOP_DATA_SIZE;
static u_int SOUND_IOP_DATA_SEEK[9];
static u_int SOUND_IOP_DATA_CHECK=0;
static int SOUND_IOP_DATA_ID[9];
static u_int SOUND_IOP_DATA_LSN[9];
static u_int SOUND_IOP_DATA_PLAYSIZE[9];

static u_int SOUND_STREAM_IOP_BUFFER_ADDR[48];

static u_int SOUND_EffectBuffer[2]={0x1fffff,0x1dffff};
static u_int SOUND_CurrentReverb[2]={0,0};
static u_int SOUND_CurrentReverbAddr[2]={0,0};
static u_int SOUND_CurrentReverbSize[2]={0,0};
static u_int ReverbSizes[10]={0x80,0x26c0,0x1f40,0x4840,0x6fe0,0xade0,0xf6c0,0x18040,0x18040,0x3c00};	/* List of reverb sizes */

static u_int SOUND_IOP_DATA_CHAIN_COUNT;
static u_int SOUND_IOP_DATA_CHAIN_POS;
static u_int SOUND_IOP_DATA_REMAIN;
static u_int SOUND_IOP_DATA_OFFSET;
static u_char SOUND_CD_ERROR=0;		/* 0 = No errors, 1 = Error (Streams paused) */
static u_char SOUND_CD_IERROR=0;		/* Multistream internal error status */
static u_char SOUND_CD_STAT=0;			/* returned from SOUND_CheckCDError */
static u_int SOUND_FILE_LSN=0;
static u_int SOUND_FILE_SIZE=0;
static int SOUND_FILE_SOURCE=0;
static int SOUND_FILE_COUNTER=255;
static int SOUND_FILE_AT_OPEN=-1;
static int SOUND_FILE_AT_ID=-1;

static u_int SOUND_MAX_IOP_RAM=0;
static u_int SOUND_IOP_LOAD_TYPE=0;
static u_int SOUND_STREAM_WADDR[48];	/* Current write address for streams..(either EE,IOP or SPU address) */
static u_int SOUND_STREAM_POFFSET[48];	/* Current playback seek position through file */
static u_int SOUND_STREAM_EE_SIZE[48];	/* Current playback seek position through file */
static int SOUND_LastStream=0;
static char SOUND_GETSTATUS_FLAG=0;
static u_int SOUND_LAST_EE_TRAN_SIZE=0;
static u_int SOUND_EE_TRAN_COUNT=0;
static int SOUND_DTS_STATUS=SOUND_DTS_OFF;

static u_int SOUND_PCM_IOP_ADDR=0;
static u_int SOUND_PCM_SIZE=0;
static u_int SOUND_PCM_CURRENT_ADDR=0;
static u_int SOUND_PCM_STATUS=SOUND_PCM_BUFFER_NOT_ALLOCATED;

static u_int SOUND_USER_TRANSFER_STATUS=0;

static int SOUND_TempStream;
static u_int SOUND_TempCounter=0x9999;
/*u_int SOUND_TempBuffer; */
/*u_int SOUND_TempSize; */
static short	SOUND_BufferFull=0;

/* IOP counter is sent to this address each time (IOP)StreamADPCM is called */
/* You can then use this value to know when its safe to do another SOUND_FlushIOPCommand */
static u_int SOUND_MSUpdate[32] __attribute__((aligned (64)));
/*u_int SOUND_MSUpdate[(1024*1000)/4] __attribute__((aligned (64))); */

/* Counter is sent from IOP to EE each time a SOUND_GetStatus is called. */
/* It is used to know if more data has been recieved since the last SOUND_CopyIOPBuffer call */
static int SOUND_LastCounter=0x1234;

static u_char SOUND_SPUAddrSet=0;	/* Flag set if EE has updated SPUWrite address */
static u_char SOUND_EEAddrSet=0;	/* Flag set if EE has updated EEWrite address */
static u_char SOUND_IOPAddrSet=0;	/* Flag set if EE has updated IOPWrite address */

static sceSifClientData jgCd;

/* Current SPU key status */
static u_char SOUND_SPUKeyStatus[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

/*
SOUND_SPU2StreamRef
Cross reference for SPU Channel and stream channel. So you can pass the routine SOUND_GetStreamID(SpuChannel)
And it will return what stream channel was allocated for it if you passed FIND_FREE_STREAM when using
SOUND_PlayStream.
*/
static char SOUND_SPU2StreamRef[48]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
							   -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

/* Current left and right volume levels for each SPU Channel */
static short SOUND_VolL[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static short SOUND_VolR[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

/* Master volume subgroup number for each SPU Channel (0=SPU Channel not active, 1-4 = subgroup) */
static u_int SOUND_SPU_MasterVol[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static u_int SOUND_SPU_NAX[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
							   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

/* Subgroup master volumes (0x1000 = max volume) */
static short SOUND_MasterVolumeLeft[4]={0x1000,0x1000,0x1000,0x1000};
static short SOUND_MasterVolumeRight[4]={0x1000,0x1000,0x1000,0x1000};
static int SOUND_MasterL,SOUND_MasterR;


static u_int SOUND_DataCounter=0;	/* Offset into data packet when creating MultiStream command */
static int SOUND_Command=-1;		/* Current command data is being created for */
static u_int SOUND_COMMAND_COUNTER=0;	/* Amount of commands being sent to IOP via SOUND_FlushIOPCommand */

#if SOUND_DTS_ENABLE
static u_char SOUND_DTS_SUR_MODE;	/* 4.0 or 5.1 mode for DTS */
#endif

volatile SOUND_FASTLOAD_INFO SOUND_FastLoad;
#define SOUND_FASTLOAD_RPC_DEVICE	0x12344321
static sceSifQueueData SOUND_rpcqd;
static sceSifServeData SOUND_rpcsd;
static u_int SOUND_packet[64/4] __attribute__((aligned(64)));
static u_int SOUND_rpcarg[64] __attribute__((aligned(64)));
static char *SOUND_INTERNALStack;

static SOUND_RPCFunc SOUND_UserRPC_Callback=NULL;
static int SOUND_RPC_th;	/* Fastload RPC thread ID */
static int SOUND_FastLoadInCallback=0;
static volatile char SOUND_FLoad=0;

static int SOUND_SetFileIDCounter=0;
static u_char SOUND_GetInfoCounter=0;

u_int	SOUND_MSChannelUseMask[2] = { 0xffffff, 0xffffff}; // channels that Multistream is allowed to use on cores 0 and 1
#define CHANNEL_FLAG_SET(x,y) (((x < 24) ? ((1L<<x) & (*y)) : ((1L<<(x-24)) & (*(y+1)))) != 0)

static SOUND_ALLOC_FUNC	SOUND_AllocFunc		=	NULL;
static SOUND_FREE_FUNC	SOUND_FreeFunc		=	NULL;
static u_int			SOUND_ALLOC_COUNTER	=	0;

static int SOUND_MTSafe=-1;
static int SOUND_ThreadSleep[256];
static u_char SOUND_SleepCount=0;
static u_char SOUND_WakeCount=0;


/**********************************************************************************
SOUND_InitIOP
	Initialise IOP sound routine
	Bind the reqiured IOP device (ie. link it into the system..)

	Requires:	Nothing
	Returns:	0		Init OK
				-1		Init failed
x
***********************************************************************************/
int SOUND_InitIOP( void )
{
int i;

	SOUND_MTSafe=-1;
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE


	SOUND_MSUpdate[0]=0;	/* Counter value sent back from IOP if using SOUND_InitWaitUpdate */
	SOUND_DSPUpdate[0]=0;

	SOUND_StreamInit=0;
	SOUND_IOPThreadPriority=SOUND_THREAD_PRIORITY;	/* IOP THREAD PRIORITY */
	SOUND_FastLoad.EEStatus=SOUND_FASTLOAD_OFF;
	SOUND_FastLoad.IOPStatus=SOUND_FASTLOAD_OFF;
	SOUND_SetFileIDCounter=0;
	SOUND_GetInfoCounter=0;

	SOUND_SPU_ADDR=0x5010;

	for (i=0;i<48;i++)
	{
		SOUND_STREAM_STATUS[i]=STREAM_STATUS_OFF;	/* Turn off stream status */
		SOUND_STREAM_ACTIVE[i]=0;	/* No streams are ACTIVE */
		SOUND_STREAM_TYPE[i]=0;		/* Audio / EE data / IOP data / SPU data */
		SOUND_SPUKeyStatus[i]=0;	/* Current SPU key status */
		SOUND_VolL[i]=0;	/* Current SPU volumes */
		SOUND_VolR[i]=0;
		SOUND_SPU_MasterVol[i]=SOUND_MASTER_VOL_OFF;	/* Master volume subgroup to use */
		SOUND_SPU2StreamRef[i]=-1;		/* Cross reference stream with SPU Channel */
	}
	for (i=0;i<4;i++)
	{
		SOUND_MasterVolumeLeft[i]=SOUND_MASTER_VOL_FULL;	/* MAX master volume subgroup vol */
		SOUND_MasterVolumeRight[i]=SOUND_MASTER_VOL_FULL;
	}

	sceSifInitRpc(0);
//	sceSifMInitRpc(0);	/* Initialise RPC */

	while(1) {
//		if (sceSifMBindRpcParam( &jgCd, SOUND_DEV,0, DATA_SIZE_NORMAL,32*1024,SOUND_IOPThreadPriority) < 0)	/* Bind the IOP Stream.C code.. */
		if (sceSifBindRpc( &jgCd, SOUND_DEV, 0) < 0)	/* Bind the IOP Stream.C code.. */
		{
			MSERROR(("error: sceSifBindRpc \n"));
			while(1){}
		}
		i = 10000;		/* Wait for binding to take place (looks a bit dodgy - eh?!) */
		while( i-- ){}
		if(jgCd.serve != 0)
			break;
	}

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return 0;
}

/**********************************************************************************
SOUND_JP
	sceSifCallRpc callback function.
	Just calls a function to decode IOP data packet containing MultiStream information.

	Requires:	*data		Pointer to sbuff2[0]
***********************************************************************************/
void SOUND_JP(void *data)
{
(void)data;
	SOUND_CopyIOPBuffer();	/* Decode IOP buffer into EE friendly format */
}

/**********************************************************************************
SOUND_SIFTransfer
	Transfers data from EE to IOP

	Requires:	command		Command to execute on IOP
				data		address of data packet
				flag		0(halts EE)  or SIF_RPCM_NO_WAIT(doesn't stall EE)
***********************************************************************************/
int SOUND_SIFTransfer( int command,  int data, int flag )
{
	sceSifCallRpc( &jgCd,  (unsigned int)command, (unsigned int)flag, (void *)data
	, DATA_SIZE_NORMAL, (void *)(&sbuff2[0]),IOP_RETURN_BUFFER_SIZE,(sceSifEndFunc)SOUND_JP,NULL);
	return 0;
}

/**********************************************************************************
SOUND_StartCommand
	Sets the command value for a Command/Data packet which is sent to the IOP
	Also sets SOUND_Counter to 0 (which SOUND_EndCommand also does)

	Requires:	command		Command number
***********************************************************************************/
void SOUND_StartCommand(short command)
{
	if (SOUND_Command!=-1)	/* Currently writing a command? */
	{
		MSERROR((">>>>> ERROR: SOUND_StartCommand\n"));	/* Yes.. */
		MSERROR(("Previous command (%d) not completed\n",SOUND_Command));
		MSERROR(("To complete a command, it must end with SOUND_EndCommand\n"));
		return;
	}
	SOUND_DataCounter=0;		/* Amount of data for command */
	SOUND_Command=command;		/* Copy of command. */
}

/**********************************************************************************
SOUND_EndCommand
	Builds a list of command/data, which is sent over to IOP once per frame.

	Notes:
		The data length is give via SOUND_DataCounter. Each time data or an address
		is added to the data before this call, SOUND_DataCounter is increased.
		At the end if this function, SOUND_DataCounter is reset to 0
***********************************************************************************/
void SOUND_EndCommand(void)
{
int i,a;

	if (SOUND_Command==-1)	/* Command started? */
	{
		MSERROR((">>>>> ERROR: SOUND_EndCommand\n"));	/* No.. */
		MSERROR(("This function is called before a SOUND_StartCommand has\n"));
		MSERROR(("been called. Exiting\n"));
		return;
	}

/* Is there enough Buffer space to add command and its data ? */
/* (+1 for first short being the command count. +1 for command short.) */

	if ((IOP_Cnt+SOUND_DataCounter+3)>=(DATA_SIZE_NORMAL/2))
	{
		MSERROR( ("*** Function:SOUND_EndCommand - IOP Buffer full ***\n"));

		SOUND_GETSTATUS_FLAG=1;
		a=SOUND_CheckRPCStatus();
		while(a==1)
		{
			a=SOUND_CheckRPCStatus();
		};
		i=SOUND_FlushIOPCommand(0);
		SOUND_GETSTATUS_FLAG=0;
		if (i==-1)
		{
			SOUND_BufferFull=1;
			MSERROR(("SOUND_FlushIOPCommand busy. Could not flush\n"));
			return;
		}
		else
		{
			MSERROR(("SOUND_FlushIOPCommand called. Buffer now empty\n"));
		}
	}
	SOUND_BufferFull=0;
	senddata[IOP_Cnt+2]=(unsigned short)SOUND_Command;		/* Command */
	senddata[IOP_Cnt+3]=(unsigned short)SOUND_DataCounter;	/* Size of data for command */

	for (i=0;i<(int)SOUND_DataCounter;i++)		/* Copy command data */
	{
		senddata[IOP_Cnt+i+4]=IOPCommandData[i];
	}

/* Increase position through buffer past command and its size parameters */
	IOP_Cnt+=2;
	IOP_Cnt+=(int)SOUND_DataCounter;	/* Increase position past data */
	SOUND_COMMAND_COUNTER++;	/* Number of commands in total */
	SOUND_DataCounter=0;
	SOUND_Command=-1;
}

/**********************************************************************************
SOUND_AddData
	Adds a 16bit data value to command/data stream
	All SOUND_AddData/SOUND_AddLongData functions must be called before calling the
	SOUND_EndCommand function (which actually adds the whole command to the buffer
	which is to be transfered to the IOP)

	Requires:	data		16bit data value
***********************************************************************************/
void SOUND_AddData(short data)
{
	if (SOUND_BufferFull==1)
	{
		MSERROR(("Error: SOUND_AddData\n"));
		MSERROR(("RPC buffer full. Call SOUND_FlushIOPCommand\n"));
		return;
	}
	IOPCommandData[SOUND_DataCounter++]=(unsigned short)data;	/* Add 16 bit data value to command */
}

/**********************************************************************************
SOUND_AddLongData
	Adds a 32bit data value to command/data stream
	All SOUND_AddData/SOUND_AddLongData functions must be called before calling the
	SOUND_EndCommand function (which actually adds the whole command to the buffer
	which is to be transfered to the IOP)

	Requires:	data		32bit data value

	Notes:
		32 bit value is split into two 16 bit values
***********************************************************************************/
void SOUND_AddLongData(u_int address)
{
	if (SOUND_BufferFull==1)
	{
		MSERROR(("Error: SOUND_AddLongData\n"));
		MSERROR(("RPC buffer full. Call SOUND_FlushIOPCommand\n"));
		return;
	}
	IOPCommandData[SOUND_DataCounter++]=(unsigned short)((address>>16)&0xffff);	/* Add 32 bit data to command */
	IOPCommandData[SOUND_DataCounter++]=(unsigned short)(address&0xffff);
}

/**********************************************************************************
SOUND_AddString (V5)
	Copy string to IOPCommandData buffer.
	This function must be called before calling the	SOUND_EndCommand function (which
	actually adds the whole command to the buffer which is to be transfered to the IOP)

	Requires:	*string		Pointer to string
	Returns:	i			new offset into IOPCommandData past filename
***********************************************************************************/
int SOUND_AddString(const char *string)
{
int i;
char *ptr;
	if (SOUND_BufferFull==1)
	{
		MSERROR(("Error: SOUND_AddString\n"));
		MSERROR(("RPC buffer full. Call SOUND_FlushIOPCommand\n"));
		return(0);
	}

	ptr=(char*)IOPCommandData;	/* Pointer to start of command buffer */
	ptr+=SOUND_DataCounter*2;	/* Move to current position through buffer */
	strcpy (ptr,string);		/* Copy the string */
	i=(int)strlen(string);			/* Return length of string */
	ptr+=i;						/* Move to end of string */
	*ptr=0;						/* Set a 0 terminator */
	i+=2;
	i/=2;						/* Round offset to a 16 bit value */
	SOUND_DataCounter+=(unsigned int)i;		/* Current offset */
	return(i);
}

/**********************************************************************************
SOUND_PlayStream
	Play a stream

	Requires:	Stream 	   	File ID
				StrmChan	Stream "Channel" (0-n) or STREAM_FIND_FREE
				Channel	   	SPU Channel (0-47) (optional : | SOUND_MASTER_VOLn (n=0-3)
				VL		   	Left Volume (0-0x3fff)
				VR		   	Right Volume (0-0x3fff)
				Spd		   	Pitch (either as SPU, or DEFAULT_PITCH (from FileNames.H))
				flag	   	Looping Flag:
								STREAM_LOOPING (adpcm looping)
								STREAM_ONCE_OFF (adpcm once off)
								STREAM_PCM_LOOPING
								STREAM_PCM_ONCE_OFF
								STREAM_LOAD_EE (load data into EE RAM)
								STREAM_LOAD_IOP (load data into IOP RAM)
								STREAM_LOAD_SPU (or STREAM_RESIDENT) (load data into SPU RAM)
				at		   	Attack value (0-0x4f) - fades sound in
				rl		   	Release value (0-0x1f) - fades sound out after SOUND_StopSound

	Returns:	StrmChan	Everything OK. Passed back stream channel number (useful if STREAM_FIND_FREE is passed)
				-1			SPU Channel out of range or couldn't find a spare stream channel

Note that you can specify which master volume group this stream will be played on
(only if playing ADPCM data), by "or-ing" SOUND_MASTER_VOLn (n=0 to 3) with the SPU Channel.
Not "or-ing" any master group will bypass any group master settings.

Note for playback of PCM:
Channel does nothing (SPU Channel) as PCM playback does not use an SPU Channel
Spd (Pitch) does nothing as playback is fixed at 48khz
at and rl also do nothing as there is no hardware ADSR for PCM playback
pass 0 for these parameters

Note for loading of EE, IOP or SPU RAM:
at,rl, Spd, VL, VR Channel does nothing (SPU channel)
pass 0 for these parameters

***********************************************************************************/
int SOUND_PlayStream(int Stream,int StrmChan, int Channel,int VL,int VR,int Spd,int flag,int at, int rl)
{
int adsr;
int group;
int a=0;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE


	if (StrmChan==STREAM_FIND_FREE)			/* Let MultiStream find an non-playing stream? */
		StrmChan=SOUND_FindFreeStream();	/* Try and find one. */
	else if (StrmChan==STREAM_FIND_FREE_DATA_STREAM)
	{
		while(1)
		{
			StrmChan=SOUND_FindFreeStreamRange(a,SOUND_LastStream-1);
			if ((StrmChan!=-1)&&(SOUND_StreamType[StrmChan]==SOUND_DATA_STREAM))
				break;
			a=StrmChan+1;
			if (a==SOUND_LastStream)
			{
				a=-1;
				break;
			}
		}
	}
	else if (StrmChan==STREAM_FIND_FREE_AUDIO_STREAM)
	{
		while(1)
		{
			StrmChan=SOUND_FindFreeStreamRange(a,SOUND_LastStream-1);
			if ((StrmChan!=-1)&&(SOUND_StreamType[StrmChan]==0))
				break;
			a=StrmChan+1;
			if (a==SOUND_LastStream)
			{
				a=-1;
				break;
			}
		}
	}


	if (StrmChan<0)	/* Stream channel valid? */
	{
		MSERROR(("SOUND_PlayStream\n"));	/* No.. */
		MSERROR(("No free stream channels\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	if (StrmChan>=SOUND_LastStream)	/* Stream out of range? */
	{
		MSERROR((">>>>>ERROR: SOUND_PlayStream\n"));	/* Yes.. */
		MSERROR(("Stream (%d) out of range\n",StrmChan));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	SOUND_STREAM_STATUS[StrmChan]=STREAM_STATUS_EE_REQPLAY;		/* Mark stream as "used". */
	SOUND_STREAM_PRIORITY[StrmChan]=SOUND_PRIORITY_INIT|0x8000;

/* Stream not active (only active when data is preloaded) */
	SOUND_STREAM_ACTIVE[StrmChan]=0;

	group=(int)(Channel&0xffff0000);	/* Master volume subgroup */
	Channel&=0xffff;			/* SPU Channel */

	if ((Channel<0)||(Channel>47))	/* SPU Channel in range? */
	{
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);	/* No.. */
	}

	if ((flag==STREAM_ONCE_OFF)||(flag==STREAM_LOOPING))	/* Playing ADPCM stream? */
	{
/* This marks the SPU Channel as used, so that a call to SOUND_FindFreeSPUChannel would not */
/* return this Channel - even though it hasn't actually started playing yet. */
		SOUND_SPUKeyStatus[Channel]=SPU_KEY_STATUS_EE_REQUEST;

		SOUND_SetChannelMasterVolumeGroup(Channel,(unsigned int)group);	/* Set subgroup for Channel to use */
		SOUND_SetSPUChannelVolume(Channel,(short)VL,(short)VR);	/* scale volume with subgroup volume */
		VL=SOUND_MasterL;
		VR=SOUND_MasterR;
	}
	SOUND_SPU2StreamRef[Channel]=(char)StrmChan;	/* cross reference spu Channels and stream channels */

	adsr=at;
	adsr+=(rl<<8);				/* adsr = release + attack rates. */
	Channel+=(StrmChan<<8);		/* Channel = SPU Channel and stream channel. */

	if (flag==STREAM_LOAD_EE)	/* Loading data to EE RAM? */
		SOUND_STREAM_EE_SIZE[StrmChan]=0;	/* Current total of data loaded to EE =0 */

	SOUND_StartCommand(SND_PLAY_STREAM);	/* Create command to send to IOP */
	SOUND_AddLongData((unsigned int)Stream);
	SOUND_AddData((short)Channel);
	SOUND_AddData((short)VL);
	SOUND_AddData((short)VR);
	SOUND_AddData((short)Spd);
	SOUND_AddData((short)flag);
	SOUND_AddData((short)adsr);
	SOUND_EndCommand();

/* Returns STREAM CHANNEL. So, you now know the channel if passing STREAM_FIND_FREE */
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(StrmChan);
}

/**********************************************************************************
SOUND_LoadFile
	An easier way to handle loading resident data to the SPU RAM, EE RAM or IOP RAM
	Calls both SOUND_SetWriteAddress (EE, SPU or IOP) and SOUND_PlayStream in one
	call.

	Requires:		dest		STREAM_LOAD_EE
								STREAM_LOAD_IOP
								STREAM_LOAD_SPU (or STREAM_RESIDENT)
					stream		Stream channel to load data with (or STREAM_FIND_FREE)
					FileID		File to load
					address		address to load data to	(* pass 0 to use last address)

	Returns:		strmchan	Stream channel used for loading data (passed from SOUND_PlayStream)
					-1			Failed in SOUND_PlayStream
					-2			Failed (dest type not valid)

* Note: The load addresses are updated each time a file is loaded, so if you want
to load multiple files at consecutive RAM addresses, there is no need to set
an address after the first call.
***********************************************************************************/
int SOUND_LoadFile(u_int dest,u_int stream,int FileID, u_int address)
{
int ret;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE


	if ((dest!=STREAM_LOAD_EE)&&		/* Valid desitination? */
		(dest!=STREAM_LOAD_EE_LOOP)&&
		(dest!=STREAM_LOAD_IOP)&&
		(dest!=STREAM_LOAD_SPU)&&
		(dest!=STREAM_RESIDENT))
	{
		MSERROR(("Error: SOUND_LoadFile\n"));	/* No.. */
		MSERROR(("Destination flag not found\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-2);
	}


	if (address!=0)	/* Passed destination address? */
	{
		if (dest==STREAM_LOAD_EE)	/* Yes..Is it EE address? */
			SOUND_SetEEWriteAddress(address);
		else if ((dest==STREAM_LOAD_SPU)||(dest==STREAM_RESIDENT))	/* SPU address? */
			SOUND_SetSPUWriteAddress(address);
		else if (dest==STREAM_LOAD_IOP)
			SOUND_SetIOPWriteAddress(address);	/* IOP address? */
	}

	ret=SOUND_PlayStream(FileID,(int)stream,0,0,0,0,(int)dest,0,0);	/* Start stream.. */
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(ret);
}

/**********************************************************************************
SOUND_PlayStreamFromSFX
	Plays a stream as with SOUND_PlayStream...BUT also:

	Does not perform a keyon. Instead, it sets the LSAX for the requested SPU Channel to
	the start of the streaming buffer data. This allows you to do the following:

	a) Play a LOOPING SFX (Resident data)
	b) SOUND_PlayStreamFromSFX
	c) When reaching the end of the looping SFX, it will start playing the stream data straight away.

	This can be used for, say, getting around the delay of preloading a stream before playing.
	You have a chunk of audio data stored as a SFX, which is played while the stream is preloading.
	The playback then jumps to the actual stream data when reaching the end of the SFX.
	(Great for crowd cheer / Goal scored sounds...So they happen straight away)
	Note that you will need to make sure that your looping SFX is long enough so that preloading of
	stream data is completed by the time the SFX has finished. If this is not the case, the looping
	SFX will play again, and then it will jump to the stream data when it reaches its loop pointer again.

	Note that this function does NOT require Pitch,Volume, Attack or Release values. This is because these are passed
	when actually playing the SFX.

	Requires:	FileID 	   	File ID
				StrmChan	Stream "Channel" (0-n) or STREAM_FIND_FREE
				Channel	   	SPU Channel (0-47)
				flag	   	Looping Flag (LOOPING, ONCE_OFF)

	Returns:	StrmChan	Everything OK. Passed back stream channel number (useful if STREAM_FIND_FREE is passed)
				-1			SPU Channel out of range or couldn't find a spare stream channel
***********************************************************************************/
int SOUND_PlayStreamFromSFX(int FileID,int StrmChan, int Channel,int flag)
{
	if ((flag!=STREAM_LOOPING)&&(flag!=STREAM_ONCE_OFF))	/* Valid loop flag? */
	{
		MSERROR(("SOUND_PlayStreamFromSFX\n"));	/* No. */
		MSERROR(("flag type is neither STREAM_LOOPING or STREAM_ONCE_OFF\n"));
		MSERROR(("aborting..\n"));
		return(-1);
	}
	StrmChan=SOUND_PlayStream(FileID,StrmChan,Channel,0,0,0,flag,0,SOUND_PLAY_STREAM_FROM_SFX);
/* Returns STREAM CHANNEL. So, you now know the channel if passing STREAM_FIND_FREE */
	return(StrmChan);
}

/**********************************************************************************
SOUND_FindFreeStream
	Returns a free stream (one that isn't playing anything)
	Requires:	Nothing
	Returns:	Stream 		number 0-n (n defined with SOUND_SetMaxStreamLimit)
				-1			No Free streams available
x
***********************************************************************************/
int SOUND_FindFreeStream(void)
{
int i;

	for (i=0;i<SOUND_LastStream;i++)	/* Loop through all streams */
	{
		if ((SOUND_STREAM_STATUS[i]==STREAM_STATUS_OFF)||
			(SOUND_STREAM_STATUS[i]==STREAM_STATUS_EE_REQSTOP))
		{
			return(i);	/* Found one that isn't playing! */
		}
	}

	MSERROR(("SOUND_FindFreeStream\n"));
	MSERROR(("No Spare streams free\n"));
	return (-1);
}


/**********************************************************************************

SOUND_FindFreeStreamRange

Returns a free stream (one that isn't playing anything) between a specified range.
(Thanks to Darryl and Peter @ hb-studios for this routine)

	Requires:	iMin		First stream channel
				iMax		Last stream channel

	Returns:	Stream number iMin-iMax
				-1 No Free streams available

***********************************************************************************/

int SOUND_FindFreeStreamRange( int iMin, int iMax )

{

int i=0;

	if( iMax >= SOUND_LastStream )
	{
		MSERROR(( "SOUND_FindFreeStreamRange(): Error, maximum exceeds available streams.\n" ));
		return -1;
	}

	for( i=iMin; i <= iMax; i++ ) /* Loop through all streams */
	{
		if ((SOUND_STREAM_STATUS[i]==STREAM_STATUS_OFF)||(SOUND_STREAM_STATUS[i]==STREAM_STATUS_EE_REQSTOP))
		{
			return(i); /* Found one that isn't playing! */
		}
	}

	MSERROR(("SOUND_FindFreeStream\n"));
	MSERROR(("No Spare streams free\n"));
	return (-1);
}

/**********************************************************************************
SOUND_PlaySFX
	Play a resident SFX (Spot FX).

	Requires:	ID		ID of SFX (see SOUND_PatchSFX)
				Chan  	SPU Channel (0-47) (optional : | SOUND_MASTER_VOLn (n=0-3)
				VL	 	Left Volume (0-0x3fff)
				VR	 	Right Volume (0-0x3fff)
				Spd	 	Pitch (in SPU format only)
				at	 	Attack value (0-0x4f) - fades sound in
				rl	 	Release value (0-0x1f) - fades sound out after SOUND_StopSound

	Returns:	0			Everything OK.
				-1			SPU Channel out of range

Note that you can specify which master volume group this SFX will be played on
by "or-ing" SOUND_MASTER_VOLn (n=0 to 3) with the SPU Channel
Not "or-ing" any master group will bypass any group master settings.

***********************************************************************************/
int SOUND_PlaySFX(u_int ID,int Chan,int VL,int VR,int Spd,int at,int rl)
{
int adsr;
u_int group;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	group=Chan&0xffff0000;	/* Master volume subgroup */
	Chan&=0xffff;			/* SPU Channel */

	if ((Chan<0)||(Chan>47))	/* Valid SPU Channel? */
	{
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);	/* No. */
	}

/* This marks the SPU Channel as used, so that a call to SOUND_FindFreeSPUChannel would not */
/* return this channel - even though it hasn't actually started playing yet. */

	SOUND_SPUKeyStatus[Chan]=SPU_KEY_STATUS_EE_REQUEST;	/* Mark SPU Channel as used */

	adsr=at;
	adsr+=(rl<<8);		/* adsr = attack and release rate */

	SOUND_SFXID[Chan]=ID;

	SOUND_SetChannelMasterVolumeGroup(Chan,group);	/* Set subgroup for Channel to use */
	SOUND_SetSPUChannelVolume(Chan,(short)VL,(short)VR);	/* scale volumes with subgroup volume */

	SOUND_StartCommand(SND_PLAY_SFX);
	SOUND_AddLongData(ID);
	SOUND_AddData((short)Chan);
	SOUND_AddData((short)SOUND_MasterL);
	SOUND_AddData((short)SOUND_MasterR);
	SOUND_AddData((short)Spd);
	SOUND_AddData((short)adsr);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_PlaySFXLoop
	Play a resident SFX (Spot FX).
	The same as SOUND_PlaySFX, but also requires a loop counter. The SFX will then play
	n times before stopping. Note that all sounds using this function need to be created
	as LOOPING.

	Requires:	ID		ID of SFX (see SOUND_PatchSFX)
				Chan  	SPU Channel (0-47) (optional : | SOUND_MASTER_VOLn (n=0-3)
				VL	 	Left Volume (0-0x3fff)
				VR	 	Right Volume (0-0x3fff)
				Spd	 	Pitch (in SPU format only)
				at	 	Attack value (0-0x4f) - fades sound in
				rl	 	Release value (0-0x1f) - fades sound out after SOUND_StopSound
				Loop	Loop count (0=Infinite, 1=play once, 2=play twice...max 0xffff)

	Returns:	0			Everything OK.
				-1			SPU Channel out of range
				-2			Loop counter out of range

Note that you can specify which master volume group this SFX will be played on
by "or-ing" SOUND_MASTER_VOLn (n=0 to 3) with the SPU Channel.
Not "or-ing" any master group will bypass any group master settings.

***********************************************************************************/
int SOUND_PlaySFXLoop(u_int ID,int Chan,int VL,int VR,int Spd,int at,int rl,u_int Loop)
{
int adsr;
u_int group;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	group=Chan&0xffff0000;		/* Master volume subgroup */
	Chan&=0xffff;				/* SPU channel */

	if ((Chan<0)||(Chan>47))	/* Valid SPU channel? */
	{
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);		/* No.. */
	}

	if (Loop>0xffff)	/* Loop counter out of range? */
	{
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-2);		/* Yes.. */
	}

/* This marks the SPU channel as used, so that a call to SOUND_FindFreeSPUChannel would not */
/* return this channel - even though it hasn't actually started playing yet. */
	SOUND_SPUKeyStatus[Chan]=SPU_KEY_STATUS_EE_REQUEST;

	adsr=at;
	adsr+=(rl<<8);		/* adsr = attack and release rate */

	SOUND_SFXID[Chan]=ID;

	SOUND_SetChannelMasterVolumeGroup(Chan,group);	/* set subgroup for channel to use */
	SOUND_SetSPUChannelVolume(Chan,(short)VL,(short)VR);			/* scale volume with subgroup master vol */

	SOUND_StartCommand(SND_PLAY_SFX_LOOP);
	SOUND_AddLongData(ID);
	SOUND_AddData((short)Chan);
	SOUND_AddData((short)SOUND_MasterL);
	SOUND_AddData((short)SOUND_MasterR);
	SOUND_AddData((short)Spd);
	SOUND_AddData((short)adsr);
	SOUND_AddData((short)Loop);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_SetChannelVolume
	Set volume of channel

	Requires:	Chan		SPU Channel (0-47)
				VL			Left Volume (0-0x3fff)
				VR			Right Volume (0-0x3fff)

	Returns:	0			Everything OK.
				-1			SPU Channel out of range

***********************************************************************************/
int SOUND_SetChannelVolume(int Chan,int VL,int VR)
{

	Chan&=0xffff;		/* SPU channel */

	if ((Chan<0)||(Chan>47))	/* Is SPU channel valid? */
		return(-1);	/* No. */

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_SetSPUChannelVolume(Chan,(short)VL,(short)VR);	/* scale volume with subgroup master volume */

	SOUND_StartCommand(SND_SET_VOL_LR);
	SOUND_AddData((short)Chan);
	SOUND_AddData((short)SOUND_MasterL);
	SOUND_AddData((short)SOUND_MasterR);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_SetChannelPitch
	Set pitch of channel

	Requires:	Chan		SPU Channel (0-47)
				Pch			SPU Pitch

	Returns:	0			Everything OK.
				-1			SPU Channel out of range
x
***********************************************************************************/
int SOUND_SetChannelPitch(int Chan,int Pch)
{
	if ((Chan<0)||(Chan>47))	/* Is SPU channel valid? */
		return(-1);	/* No.. */

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_PITCH);
	SOUND_AddData((short)Chan);
	SOUND_AddData((short)Pch);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_StopStream
	Stops a stream

	Requires:	Chan	Stream Channel stream is playing on
						OR Chan|SPU_CH (to stop stream using requested SPU channel)

	Returns:	0			Everything OK.
				-1			SPU Channel out of range
x
***********************************************************************************/
int SOUND_StopStream(int Chan)
{
int a;

	if (Chan<0)	/* Is stream channel valid? */
		return(-1);	/* No.. */

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (Chan>=SPU_CH)	/* Passed SPU channel rather than stream channel? */
	{
		Chan-=SPU_CH;	/* Yes. */
		a=SOUND_GetStreamChannel((unsigned int)Chan);
		if (a>=0)	/* Thanks to Dan Pinal @ massmedia! (was a>0) */
		{
			SOUND_SPU2StreamRef[Chan]=-1;		/* Mark stream channel as off */
			SOUND_STREAM_STATUS[a]=STREAM_STATUS_EE_REQSTOP;	/* Request channel to stop */
			Chan=a;	/* Now pass stream channel, rather than SPU channel */
		}
		else
		{
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(-1);	/* No streams using this SPU channel */
		}
	}
	else
	{
/* Passed stream channel. Request stream channel to stop */
		SOUND_STREAM_STATUS[Chan]=STREAM_STATUS_EE_REQSTOP;

	}

	SOUND_StartCommand(SND_STOP_STREAM);
	SOUND_AddData((short)Chan);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_StopSound
	Stops a sound (it enters a keyoff state - may fade out due to Release value)

	Requires:	Chan	SPU Channel which stream is playing on (0-47)

	Returns:	0			Everything OK.
				-1			SPU Channel out of range
x
***********************************************************************************/
int SOUND_StopSound(int SPUChannel)
{
	if ((SPUChannel<0)||(SPUChannel>47))	/* Valid Stream channel? */
		return(-1);			/* No.. */

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_STOP_SFX);
	SOUND_AddData((short)SPUChannel);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_GetStatus
	Fill a buffer with info about which streams are playing/spu address/envelope..
	AllowLoad =-1 If no stream is requested for loading from the IOP
			  =n  Stream number that IOP has requested data for
	reqCheck  =	Value passed from IOP (SOUND_IOP_DATA_CHECK). Used only if loading
				from external source. Passing the same value back as the IOP sent
				along with the AllowLoad value will then keep the IOP and EE in
				sync. Without this check, it may be possible for you to send data
				to the IOP for a stream that has since closed down and reopened
				asking for different data.
x
***********************************************************************************/
void SOUND_GetStatus(int AllowLoad,int reqcheck)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (AllowLoad!=-1)	/* Passed a stream number? */
	{
		SOUND_CD_STATUS=1;			/* Yes. CD is busy */
		SOUND_IOP_REQUEST_LOAD=-1;	/* Stop multiple checks for stream. */
	}


	SOUND_StartCommand(SND_GET_CD_STATUS);
	SOUND_AddData((short)AllowLoad);
	SOUND_AddData((short)reqcheck);
	SOUND_EndCommand();

	SOUND_GETSTATUS_FLAG=1;	/* Stop SOUND_FlushIOPCommand from calling this routine. */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}

/**********************************************************************************
SOUND_Pause
	Pauses all 48 channels
x
***********************************************************************************/
void SOUND_Pause(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_PAUSE);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}

/**********************************************************************************
SOUND_Resume
	Resumes all 48 channels
x
***********************************************************************************/
void SOUND_Resume(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_RESUME);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}
/**********************************************************************************
SOUND_InitSPU
	Sets master volume/core attributes
x
***********************************************************************************/
void SOUND_InitSPU(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_SPU);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_InitStreamData
	Initialises stream data, kicks off IOP interrupts
	Requires:	loadtype	SND_LOAD_INTERNAL	Uses MultiStream IOP loading code
							SND_LOAD_EXTERNAL	IOP passes back data so you can use your
												own cd/host loading routines.
							maxfiles			Allocates space on IOP for up to maxfiles
							maxsfx				Allocates space on IOP for up to maxsfx
x
***********************************************************************************/
void SOUND_InitStreamData(int loadtype, int maxfiles,int maxsfx)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_STREAM);
	SOUND_AddData((short)loadtype);	/* INTERNAL or EXTERNAL loading as default? */
	SOUND_AddData((short)maxfiles);	/* Maximum number of files to allocate */
	SOUND_AddData((short)maxsfx);		/* Maximum number of SFX to allocate */
	SOUND_AddData((short)SOUND_IOPThreadPriority);	/* Thread priority to run the IOP code at.. */
	SOUND_EndCommand();
	SOUND_StreamInit=1;

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_CloseStreamBuffer
	Free IOP memory for Stream buffer n.

	Requires:	Strm	Stream number (0-47)
	Returns:	0		OK
				-1		Stream number out of range
x
***********************************************************************************/
int SOUND_CloseStreamBuffer(int strm)
{
	if ((strm<0)||(strm>47))
	{
		MSERROR(("ERROR: SOUND_CloseStreamBuffer\n"));
		MSERROR(("Stream channel %d out of range\n",strm));
		MSERROR(("Must range from 0-47\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_IOPInitialBufferSizes[strm]=0;
	SOUND_IOPCurrentBufferSizes[strm]=0;
	SOUND_SPUBufferSizes[strm]=0;

	SOUND_StreamType[strm]=0;
	SOUND_StartCommand(SND_CLOSE_STREAM_BUFFER);
	SOUND_AddData((short)strm);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_SetMaxStreamLimit
	Sets the amount of streams which are available. This is used if you use the
	STREAM_FIND_FREE parameter instead of the stream channel number when calling
	PlayStream. STREAM_FIND_FREE will then search streams from 0-n for a stream
	which isn't playing anything.
x
***********************************************************************************/
int SOUND_SetMaxStreamLimit(u_int limit)
{
	if (limit>47)		/* Valid limit? */
	{
		MSERROR(("ERROR: SOUND_SetMaxStreamLimit\n"));
		MSERROR(("Limit (0x%x) out of range (must be 0-47)\n",limit));
		return(-1);		/* No. */
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_LastStream=(int)limit;	/* Set global limit */
	SOUND_StartCommand(SND_SET_MAX_STREAM_LIMIT);
	SOUND_AddData((short)limit);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return (0);
}

/**********************************************************************************
SOUND_SetStreamBuffer

	(Written by Cory Bloyd @ High Voltage)

	Sets the stream to use a pre-allocated buffer. Also sets stream SPUAddress
	Requires:	strm		Stream number to allocate (0-47)
				iopaddr		IOP Address to use for start of stream (must be 4 byte aligned)
				iopsize		IOP Buffer size  (must be 64 byte aligned)
				spuaddr		SPU Address to use for start of stream (must be 16 byte aligned)
							SOUND_DATA_STREAM to mark this stream as a data stream only
				spusize		SPU Buffer size  (must be 64 byte aligned)

	Returns:	0			OK
				-1			Failed
x
***********************************************************************************/
int SOUND_SetStreamBuffer(int strm, u_int iopaddr, u_int iopsize, u_int spuaddr, u_int spusize)
{
	if (strm>47)
	{
		MSERROR((">>>>>ERROR: SOUND_SetStreamBuffer\n"));
		MSERROR(("Stream out of range. (%d)\n",strm));
		MSERROR(("Stream must range from 0-47\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_IOPInitialBufferSizes[strm]=iopsize;
	SOUND_IOPCurrentBufferSizes[strm]=iopsize;
	SOUND_SPUBufferSizes[strm]=spusize;

	if (spuaddr==SOUND_DATA_STREAM)
	{
		spuaddr=0;
		SOUND_StreamType[strm]=SOUND_DATA_STREAM;
	}
	else
		SOUND_StreamType[strm]=0;

	SOUND_StartCommand(SND_SET_STREAM_BUFFER);
	SOUND_AddData((short)strm);
	SOUND_AddLongData(iopaddr);
	SOUND_AddLongData(iopsize);
	SOUND_AddLongData(spuaddr);
	SOUND_AddLongData(spusize);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_AllocateStreamBuffer
	Allocates memory for stream buffer. Also sets stream SPUAddres
	Requires:	strm		Stream number to allocate (0-47)
				spuaddr		SPU Address to use for start of stream (must be 16 byte alligned)
							SOUND_DATA_STREAM to mark this stream as a data stream only
				size		IOP Buffer size  (must be 64 byte alligned)

	Returns:	0			OK
				-1			Failed
x
***********************************************************************************/
int SOUND_AllocateStreamBuffer(int strm,u_int spuaddr, u_int size)
{
	if (strm>47)
	{
		MSERROR((">>>>>ERROR: SOUND_AllocateStreamBuffer\n"));
		MSERROR(("Stream out of range. (%d)\n",strm));
		MSERROR(("Stream must range from 0-47\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_IOPInitialBufferSizes[strm]=size;
	SOUND_IOPCurrentBufferSizes[strm]=size;
	SOUND_SPUBufferSizes[strm]=size;

	if (spuaddr==SOUND_DATA_STREAM)
	{
		spuaddr=0;
		SOUND_StreamType[strm]=SOUND_DATA_STREAM;
	}
	else
		SOUND_StreamType[strm]=0;

	SOUND_StartCommand(SND_ALLOC_STREAM_BUFFER);
	SOUND_AddData((short)strm);
	SOUND_AddLongData(spuaddr);
	SOUND_AddLongData(size);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_ResizeStreamBuffer
	Allows you to change the size of a stream buffer. For example, if you are using
	multiple interleaved data files (MIB's), which have different interleaved sizes,
	you can allocated a buffer which is the size of the largest MIB interleaved size
	and then use this command to modify the size which is used in this buffer for
	the smaller MIB files.

	Requires:	strm	Stream channel
				size	New size to use
						(pass 0 to use default size when calling SOUND_AllocateStreamBuffer)
	Returns		0		OK
				-1		Failed

***********************************************************************************/
int SOUND_ResizeStreamBuffer(int strm, u_int size)
{
	if (strm>=SOUND_LastStream)	/* Stream out of range? */
	{
		MSERROR((">>>>>ERROR: SOUND_ResizeStreamBuffer\n"));
		MSERROR(("Stream (%d) out of range\n",strm));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}

	if (size>SOUND_IOPInitialBufferSizes[strm])
	{
		MSERROR((">>>>>ERROR: SOUND_ResizeStreamBuffer\n"));
		MSERROR(("Size (0x%x) is larger than original stream IOP buffer size (0x%x)\n",size,
			SOUND_IOPInitialBufferSizes[strm]));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_IOPCurrentBufferSizes[strm]=size;	/* Resize IOP buffer  */
	if (size<SOUND_SPUBufferSizes[strm])
		SOUND_SPUBufferSizes[strm]=size;	/* Resize SPU buffer if its now larger than IOP buffer */

	SOUND_StartCommand(SND_RESIZE_STREAM_BUFFER);
	SOUND_AddData((short)strm);
	SOUND_AddLongData(size);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_ResizeSPUBuffer
	As a default, the SPU buffer size for ADPCM streaming is set to the IOP
	buffer size. For V6+, you can now make the SPU buffer smaller than this value
	(but not larger).
	Note that for streaming PARENT or CHILD streams, the size has to be a maximum of
	half of the IOP buffer size.

	Requires	strm	Stream channel
				size	New SPU buffer size (smallest value is 0x400)
						(pass 0 to use default half IOP buffer size)
	Returns		0		OK
				-1		Failed
				-2		Size too small

	Note that if you make this value too small, the audio will skip (due to it playing
	data more than once due to not getting data from the CD fast enough). A value
	of around 4096 seems to be the minimum size which still worked without glitching.
	Also note that the value you pass has to be a multiple of 64. If you do not make
	this so, you will be warned, but the actual SPU buffer size will be rounded up to
	the next multiple of 64 automatically.
	If any streams are currently playing ADPCM data during this call, their stream is
	automatically stopped.

***********************************************************************************/
int SOUND_ResizeSPUBuffer(int strm, u_int size)
{
u_int a;

	if (strm>=SOUND_LastStream)	/* Stream out of range? */
	{
		MSERROR((">>>>>ERROR: SOUND_ResizeSPUBuffer\n"));
		MSERROR(("Stream (%d) out of range\n",strm));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}

	if ((size<0x400)&&(size!=0))
	{
		MSERROR((">>>>>Error: SOUND_ResizeSPUBuffer\n"));
		MSERROR(("size 0x%x is too small\n",size));
		MSERROR(("Size must be at least 0x400 (1024)\n"));
		return(-2);
	}

	if (SOUND_IOPInitialBufferSizes[strm]==0)
	{
		MSERROR((">>>>>Error: SOUND_ResizeSPUBuffer\n"));
		MSERROR(("SOUND_AllocateStreamBuffer has not been called for stream 0x%x\n",strm));
		return(-1);
	}

	a=(size+63)&~63;
	if (size!=a)
	{
		MSERROR((">>>>>WARNING: SOUND_ResizeSPUBuffer\n"));
		MSERROR(("Size (0x%x) is not a multiple of 64\n",size));
		MSERROR(("Setting size as 0x%x\n",a));
	}

	if (a>SOUND_IOPCurrentBufferSizes[strm])
	{
		MSERROR((">>>>>Error: SOUND_ResizeSPUBuffer\n"));
		MSERROR(("SPU buffer size (0x%x) would be larger than current IOP buffer size (0x%x)\n",size,
		SOUND_IOPCurrentBufferSizes[strm]));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_SPUBufferSizes[strm]=a;

	SOUND_StartCommand(SND_RESIZE_SPU_BUFFER);
	SOUND_AddData((short)strm);
	SOUND_AddLongData(a);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_SetSPUWriteAddress
	Sets address where resident (sfx) samples will be transfered to SPU RAM.
	This address is automatically updated after each write of a sample.
x
***********************************************************************************/
void SOUND_SetSPUWriteAddress(u_int spuaddr)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_SPUAddrSet=1;		/* Mark address as updated, to stop IOP wiping over it.. */
	SOUND_SPU_ADDR=spuaddr;	/* Set global SPU address */

	SOUND_StartCommand(SND_SET_SPU_START_ADDRESS);
	SOUND_AddLongData(spuaddr);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

int wwdd=0;

/**********************************************************************************
CopyIOPBuffer
	Copy contents of buffer sent from IOP to more meaningful names..
***********************************************************************************/
int SOUND_DSP_CHECKSUM=0;
int SOUND_DSP_CHECKCOUNT=0;

void SOUND_CopyIOPBuffer(void)
{
int i,j,k,l;
char spuchan;

int streams;
u_char streamnum;
int count;

/* Start by saying that the CD is not being used. This will be set later on, if a stream */
/* channel is using it. */
	SOUND_TransFlag[0]=0;

	if (SOUND_DSP_CHECKSUM==2)
	{
		SOUND_DSP_CHECKSUM=0;
		SOUND_DSP_CHECKCOUNT=0;
	}

	SOUND_STREAM_CD_ACCESS=0;

	streams=(int)sbuff2[0]&0xff;			/* number of streams sent from IOP. */
	count=streams*9;			/* Skip stream info */

	SOUND_IOP_COUNTER=(int)sbuff2[count+1];	/* Counter sent from IOP SOUND_GetStatus */


/* This should never be true, as SOUND_GetStatus is always called on a SOUND_FlushIOPCommand.. */
	if (SOUND_IOP_COUNTER==SOUND_LastCounter)	/* New info sent from IOP ? */
		return;									/* No.. */
	SOUND_LastCounter=SOUND_IOP_COUNTER;		/* Copy new counter value */

	for(i=0;i<48;i++)	/* Loop for each stream */
	{
/* Turn off playing streams  (code below will overwrite any active ones..) */

		if (SOUND_STREAM_STATUS[i]==STREAM_STATUS_EE_REQPLAY2)
		{
			SOUND_STREAM_TIMER[i]--;
			if (SOUND_STREAM_TIMER[i]==0)
			{
				SOUND_STREAM_STATUS[i]=STREAM_STATUS_OFF;
			}
		}
		if (SOUND_STREAM_STATUS[i]==STREAM_STATUS_ON)
		{
			SOUND_STREAM_TIMER[i]=3;	// Not really necessary, but just for a fail safe...(MS7.1)
			SOUND_STREAM_STATUS[i]=STREAM_STATUS_OFF;
		}
		else if (SOUND_STREAM_STATUS[i]==STREAM_STATUS_EE_REQPLAY)
		{
			SOUND_STREAM_STATUS[i]=STREAM_STATUS_EE_REQPLAY2;
		}
		SOUND_SPU2StreamRef[i]=-1;
	}

	count=0;
	for (i=0;i<streams;i++)		/* Loop for all streams when are playing */
	{
		j=(int)sbuff2[1+count];		/* j holds lots of info..! */
		streamnum=(unsigned char)((j>>4)&63);	/* Stream channel number */

/* Has EE requested stream to stop? */
		if (SOUND_STREAM_STATUS[streamnum]!=STREAM_STATUS_EE_REQSTOP)
			SOUND_STREAM_STATUS[streamnum]=STREAM_STATUS_ON;	/* No..Stream ON */
		else
		{
/* EE has requested for stream to stop, but IOP hasn't processed it yet. */
			SOUND_STREAM_STATUS[streamnum]=STREAM_REQTEST;
		}

		spuchan=(char)((j>>10)&63);	/* SPU channel that stream is using */
		SOUND_STREAM_PLAY_HALF[streamnum]=(char)((j>>2)&3);	/* Playing half of data buffer */
		if ((j&3)!=0)			/* Is this stream using the CD? */
		{
			SOUND_STREAM_CD_ACCESS=(j&3);			/* Yes..Set or seek/load */
			SOUND_STREAM_CD_ACCESS_CHAN=streamnum;	/* stream number which is using CD */
		}
		SOUND_STREAM_ENV[streamnum]=(unsigned short)(((j>>16)&0xffff));	/* Envelope value */
		SOUND_STREAM_SPU_ADDR[streamnum]=(int)(sbuff2[1+count+1]&0xffffff);	/* Current SPU playback address */
		SOUND_STREAM_ID[streamnum]=(int)(sbuff2[1+count+2]);	/*&0xffff;	// File ID used by stream */
/* ACTIVE = 1 if data is preloaded (or stream is keyed) */
		SOUND_STREAM_TYPE[streamnum]=(char)(sbuff2[1+count+3]&0x7fffffff);	/* AUDIO / EE / IOP / SPU (resident) */
		SOUND_STREAM_ACTIVE[streamnum]=(char)((sbuff2[1+count+3]>>31)&1);
		if (SOUND_STREAM_TYPE[streamnum]==STREAM_AUDIO)	/* Is it audio? */
		{
/* cross reference spu and stream channels */
			SOUND_SPU2StreamRef[SOUND_STREAM_SPU_CHAN[streamnum]]=(char)streamnum;
		}
		SOUND_STREAM_SPU_CHAN[streamnum]=(unsigned char)spuchan;	/* SPU channel that stream is using. */
/* Write address (either SPU, EE or IOP RAM address) */
		SOUND_STREAM_WADDR[streamnum]=sbuff2[1+count+4];

/* Current play offset. Use this value if you want to call SOUND_SetStreamStartPosition */
/* Not the actual play offset, by the offset into the file for data read. */
/* Can't use the actual play offset, as it wouldn't work for interleaved files. This way */
/* is much safer, and close enough... */
		SOUND_STREAM_POFFSET[streamnum]=sbuff2[1+count+5];

		if (SOUND_STREAM_STATUS[streamnum]==STREAM_STATUS_ON)
			SOUND_STREAM_EE_SIZE[streamnum]=sbuff2[1+count+6];
		else
			SOUND_STREAM_EE_SIZE[streamnum]=0;

		k=(short)(sbuff2[1+count+7]);
		SOUND_STREAM_SPU_PITCH[streamnum]=(short)(k&0xffff);
		k=(int)(sbuff2[1+count+7]);
		k>>=16;
		k&=0xffff;
		if ((SOUND_STREAM_PRIORITY[streamnum]&0x8000)==0)
			SOUND_STREAM_PRIORITY[streamnum]=(u_short)k;
		else
			SOUND_STREAM_PRIORITY[streamnum]&=0x7fff;

		SOUND_STREAM_TIME[streamnum]=(int)sbuff2[1+count+8];

		count+=9;
	}

	for(i=0;i<48;i++)	/* Loop for each stream. */
	{
		if (SOUND_STREAM_STATUS[i]==STREAM_REQTEST)
		{
/* EE has requested stream to stop. But IOP hasn't processed it yet. */
			SOUND_STREAM_STATUS[i]=STREAM_STATUS_EE_REQSTOP;
		}
		else if (SOUND_STREAM_STATUS[i]==STREAM_STATUS_EE_REQSTOP)
		{
/* EE has requested stream to stop. And it has (or it was off already) */
			SOUND_STREAM_STATUS[i]=STREAM_STATUS_OFF;
		}
	}

	SOUND_IOP_REQUEST_LOAD=(int)sbuff2[count+2];	/* Stream channel which wants more data */
	SOUND_CD_STATUS=(int)sbuff2[count+3];		/* Current CD status (Free or Busy) */

	if (SOUND_SPUAddrSet==0)	/* Has EE updated SPU write address? */
		SOUND_SPU_ADDR=sbuff2[count+4];	/* No. Get current */
	else
		SOUND_SPUAddrSet=0;

/* Does this flag need access from other programs? */
	SOUND_STEREO_READY_FLAG=(int)sbuff2[count+5];	/* 0=stereo started, 1=not started */

	for(i=0;i<48/16;i++)	/* Loop for each SPU channel */
	{
		for(k=0;k<16;k++)	/* data stored in u_int's.. */
		{
			l=(int)sbuff2[count+6+(i)];
			l>>=(30-(k*2));	/* Each SPU channel status is stored in 2 bits.. */
			l&=3;
			if ((l==0)&&(SOUND_SPUKeyStatus[(i*16)+k]==SPU_KEY_STATUS_EE_REQUEST))
			{
/* Requested to play by EE, but IOP hasn't played it yet..Wait for IOP to update again.. */
				SOUND_SPUKeyStatus[(i*16)+k]=SPU_KEY_STATUS_IOP_KEY_ON;
			}
			else if ((l==0)&&(SOUND_SPUKeyStatus[(i*16)+k]==SPU_KEY_STATUS_IOP_KEY_ON))
			{
					SOUND_SPUKeyStatus[(i*16)+k]=SPU_KEY_STATUS_OFF;
			}
			else
				SOUND_SPUKeyStatus[(i*16)+k]=(unsigned char)l;		/* Store SPU KeyStatus */
		}
	}

/* Requests for data loading from an external source: */
	SOUND_IOP_DATA_ADDRESS=sbuff2[count+9];	/* Address of data to be transferred in IOP RAM */
	SOUND_IOP_DATA_SIZE=sbuff2[count+10];		/* Size of data to be loaded */
	SOUND_IOP_DATA_CHECK=sbuff2[count+11];		/* Counter - used to keep the EE and IOP in sync */

	j=count+12;
	for (i=0;i<9;i++)		/* Chain info for EXTERNAL loading */
	{
		SOUND_IOP_DATA_SEEK[i]=sbuff2[j+i];
		SOUND_IOP_DATA_ID[i]=(int)sbuff2[j+i+9];
		SOUND_IOP_DATA_PLAYSIZE[i]=sbuff2[j+i+18];
		SOUND_IOP_DATA_LSN[i]=sbuff2[j+i+27];
	}
	j+=36;

	SOUND_IOP_DATA_CHAIN_COUNT=sbuff2[j];
	SOUND_IOP_DATA_CHAIN_POS=sbuff2[j+1];

	SOUND_MAX_IOP_RAM=sbuff2[j+2];	/* Maximum amount of IOP RAM available. */

	SOUND_FILE_COUNTER=(int)sbuff2[j+3]>>8;	/* Returned from SOUND_GetFileInfo */
	SOUND_FILE_SOURCE=(int)sbuff2[j+3]&255;
	SOUND_FILE_SIZE=sbuff2[j+4];
	SOUND_FILE_LSN=sbuff2[j+5];
	SOUND_IOP_DATA_REMAIN=sbuff2[j+6];	/* Size of data to be loaded from current file */
	SOUND_IOP_DATA_OFFSET=sbuff2[j+7];	/* Offset into current file to start loading from */

	if (SOUND_EEAddrSet==0)			/* Has EE updated EE Write address? */
		SOUND_EE_ADDR=sbuff2[j+8];	/* No..Get current */
	else
		SOUND_EEAddrSet=0;
	if (SOUND_IOPAddrSet==0)		/* Has EE updated IOP write address? */
		SOUND_IOP_ADDR=sbuff2[j+9];	/* No..Get current */
	else
		SOUND_IOPAddrSet=0;

	SOUND_CD_ERROR=(unsigned char)(sbuff2[j+10]&1);			/* CD error? (top level) */
	SOUND_CD_IERROR=(unsigned char)((sbuff2[j+10]>>1)&1);	/* CD error? (MultiStream level) */
	SOUND_CD_STAT=(unsigned char)((sbuff2[j+10]>>2)&1);		/* CD error..Current CD status */
/* STREAM_LOAD_EE or  STREAM_LOAD_IOP (If EXTERNAL loading). STREAM_LOAD_MS (if internal load) */
	SOUND_IOP_LOAD_TYPE=sbuff2[j+11];

	SOUND_DTS_STATUS=(int)sbuff2[j+12];			/* Current DTS status */
/* Last transfer size. Note that this can't be put in the stream channel info, as the stream */
/* may have just stopped after its final transfer. So you wouldn't know the size of its */
/* last transfer. */
	SOUND_LAST_EE_TRAN_SIZE=sbuff2[j+13];
	SOUND_EE_TRAN_COUNT=sbuff2[j+14];		/* Amount of IOP->EE transfers completed */

	SOUND_PCM_IOP_ADDR=sbuff2[j+15];		/* PCM buffer address */
	SOUND_PCM_SIZE=sbuff2[j+16];			/* PCM buffer size */
	SOUND_PCM_CURRENT_ADDR=sbuff2[j+17];	/* PCM playback current address */
	SOUND_PCM_STATUS=sbuff2[j+18];			/* PCM playback status */

	k=(int)sbuff2[j+19];
	for (i=0;i<k;i++)	/* Loop for each stream */
	{
		SOUND_STREAM_IOP_BUFFER_ADDR[i]=sbuff2[j+20+i];	/* Stream IOP buffer address */
	}
	j+=i;
	SOUND_USER_TRANSFER_STATUS=sbuff2[j+21];	/* User Transfer status */

	for (i=0;i<48;i++)
	{
		SOUND_SPU_NAX[i]=sbuff2[j+22+i];
	}
	j+=i;

	SOUND_DEBUG_SCAN[0]=sbuff2[j+23];
	SOUND_DEBUG_SCAN[1]=sbuff2[j+24];

	for (i=0;i<8;i++)
	{
		SOUND_DSP_IOP_INFO[i]=sbuff2[j+25+i];
	}

	SOUND_DSP_IOP_BUFFER=sbuff2[j+33];

	j+=34;
	l=0;
	k=0;
	SOUND_DSPCount=(int)sbuff2[j];
	for (i=0;i<SOUND_DSPCount;i++)
	{
		if (k==0)
		{
			SOUND_DSPData[l].Counter|=0x8000;	// Mark packet as sent to IOP
			SOUND_DSPData[l].Counter=(int)sbuff2[j+1+(i*3)];
			SOUND_DSPData[l].IOPAddress=(int)sbuff2[j+2+(i*3)];
			SOUND_DSPData[l].EEAddress=(int)sbuff2[j+3+(i*3)];
			l++;
		}
	}
	j+=1+(i*3);

// Next reference = sbuff2[j]
	SOUND_DSP_STATUS=(u_char)sbuff2[j];


	SOUND_CD_ERRORCODE=sbuff2[j+1];	//(sbuff2[j+1]>>16)&0xffff;
	SOUND_CD_ERRORCOUNT=(u_int)j+1;	//sbuff2[j+1]&0xffff;

	SOUND_FILE_AT_OPEN=(int)sbuff2[j+2];			// ATWinMon file open flag (1=open, 0=closed)
	SOUND_FILE_AT_ID=(int)sbuff2[j+3];			// ATWinMon file handle (or error code if file failed to open)
}

#if 0
int SOUND_SearchDSP(int v)
{
int i,a;
	for (i=0;i<SOUND_DSPCounter;i++)
	{
		a=SOUND_DSPData[i].Counter;
		if (a>=0x8000)
		{
			a&=0x7fff;
			if (a==v)
				return(-1);
		}
	}
	return(0);
}

#endif

/**********************************************************************************
SOUND_FindFreeSPUChannel
	Finds a free SPU channel between two given points.
	Puts a temporary marker in SOUND_SPUKeyStatus for that channel to mark it as
	requested by EE. This stops any other calls to this function also returning the
	same SPU Channel, and discards the need to call SOUND_FlushIOPCommand to get the
	"real" SPU channel status. The temporary marker will then be replaced by the
	real SPU channel status when SOUND_FlushIOPCommand is called next.

	Requires:	start	First SPU channel to check (0-47)
				end		Last SPU channel to check (0-47)
	Returns:	-1		No Free SPU channels between start and end points
				-2		First SPU channel out of range
				-3		Last SPU channel out of range (or less than first)
				0-47	Inactive SPU channel found between start and end points
x
***********************************************************************************/
int SOUND_FindFreeSPUChannel(int start,int end)
{
int i;
	if ((start<0)||(start>47))	/* 1st SPU channel in range? */
		return(-2);
	if ((end<start)||(end>47))	/* 2nd SPU channel in range? */
		return(-3);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	for (i=start;i<=end;i++)	/* Loop through requested SPU channels */
	{
		if (SOUND_SPUKeyStatus[i]==SPU_KEY_STATUS_OFF && CHANNEL_FLAG_SET(i,SOUND_MSChannelUseMask))	/* Found a free SPU channel? */
		{
			SOUND_SPUKeyStatus[i]=SPU_KEY_STATUS_EE_REQUEST;	/* Yes. Mark as used. */
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(i);
		}
	}

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(-1);		/* No Free SPU Channels between start and end points */
}

/**********************************************************************************
SOUND_GetKeyStatus
	Returns the current status for a specified SPU channel

	Requires:	channel		SPU channel 0-47
	Returns:	0			SPU_KEY_STATUS_OFF	(channel inactive)
				1			SPU_KEY_STATUS_ON	(channel active)
				2			SPU_KEY_STATUS_USED_BY_STREAM (channel requested for use by a stream)
				3			SPU_KEY_STATUS_EE_REQUEST (channel requested for use by EE)
				4			SPU_KEY_STATUS_IOP_KEY_ON (channel being processed by IOP)
				-1			SPU channel out of range

	Notes:	case 2 will change to a 1 once the stream has actually started playing
		  	case 3 will change to a 1 or 2 once the IOP has processed any EE commands
***********************************************************************************/
int SOUND_GetKeyStatus(int channel)
{
	if ((channel<0)||(channel>47))		/* SPU channel valid? */
		return(-1);	/* No. */

	// is this even a channel that multistream is allowed to use?
	if(!CHANNEL_FLAG_SET(channel,SOUND_MSChannelUseMask))
		return(-1);

	return(SOUND_SPUKeyStatus[channel]);
}

/**********************************************************************************
SOUND_CheckAndStartStereo
	Checks two SPU Channels to see if they are ready to play.
	Sets both their pitches if they are.
	Needs to only be called once, as the IOP will constantly poll the channels until
	they are ready to play. A flag is then cleared on the IOP so that it will not
	be called after this.
	Basically, before this call you need to start two streams. One panned hard left,
	the other hard right. Both of these need a pitch of 0, so they will not start
	playing. The pitch that you pass in this function will only be set once the
	two specified SPU Channels have preloaded their data into the SPU RAM.

	NOT REALLY REQUIRED DUE TO V5 INTERLEAVED DATA PLAYBACK

	Requires:	spuchannel1		SPU Channel of first channel (0-47)
				spuchannel2		SPU Channel of second channel (0-47)
				pitch			SPU pitch

	Returns:	0				Everything OK
				-1				spuchannel1 out of range
				-2				spuchannel2 out of range
***********************************************************************************/
int SOUND_CheckAndStartStereo(u_int spuchannel1,u_int spuchannel2, u_int pitch)
{
	if (spuchannel1>47)		/* 1st SPU channel valid? */
		return(-1);
	if (spuchannel2>47)		/* 2nd SPU channel valid? */
		return(-2);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CHECK_STEREO_READY);
	SOUND_AddData((short)spuchannel1);
	SOUND_AddData((short)spuchannel2);
	SOUND_AddData((short)pitch);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_CancelCheckStereo
	Clears the flag on the IOP which checks to know if it needs to set the pitch
	of two channels if they are both ready to play. Use this if you suddenly decide
	to NOT play a stream.
	Probably a good idea to also call it when going between, say, menus and game.
	Just to make sure than any previous request is cleared.

	NOT REALLY REQUIRED DUE TO V5 INTERLEAVED DATA PLAYBACK
x
***********************************************************************************/
void SOUND_CancelCheckStereo(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CANCEL_CHECK_STEREO_READY);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}

/**********************************************************************************
SOUND_FlushIOPCommand
(also FlushIOPCommand for pre-V6 versions..)
	Transfers IOP command/data packet to the IOP via SIFDMA.
	If SOUND_GetStatus has not been called before this function, it will automatically
	be called.

	Requires:	type	0=Wait for IOP to process commands
						SIF_RPCM_NOWAIT= No waiting.
	Returns:
				-1		RPC already running (ie. still processing data from last send)
				oldcnt	Number of command/data packets sent

***********************************************************************************/
int FlushIOPCommand(int type)
{
int ret;
	ret=SOUND_FlushIOPCommand(type);
	return(ret);
}

int SOUND_FlushIOPCommand(int type)
{
int oldcnt,a;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

// Doing to two checks that follow is a good way of checking the RPC status without actually blocking
// the IOP from processing. Calling sceSifCheckStatRpc in a tight loop will actually stop the IOP
// from processing or updating MultiStream, as the IOP is too busy dealing with the CheckStatRpc call.

/* Make sure there is not any Rpc's running already.. */

	if (type==0)	// If blocking, wait for RPC to complete...
		while(SOUND_CheckRPCStatus()==1){}
	else
	{
		if (SOUND_CheckRPCStatus()==1)
		{
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(-1);
		}
	}

/* Make doubly sure - check that RPC is actually running and valid */
	a=sceSifCheckStatRpc((sceSifRpcData*)&jgCd);
	if (a!=0)
	{
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

/* Call SOUND_GetStatus is it hasn't been called before SOUND_FlushIOPCommand */
	if (SOUND_GETSTATUS_FLAG==0)
	{
		SOUND_GetStatus(-1,0);	/* Call it, but don't allow any IOP loading.. */
	}
	SOUND_GETSTATUS_FLAG=0;		/* Clear flag. */

	senddata[0]=(unsigned short)SOUND_MULTISTREAM_VERSION_ID;
	senddata[1]=(unsigned short)SOUND_COMMAND_COUNTER;	/* Amount of commands for IOP to process */

	for (a=0;a<IOP_Cnt+2;a++)
	{
		senddata2[a]=senddata[a];
	}

	SOUND_TransFlag[0]=1;

	if (SOUND_DSP_CHECKSUM==1)
		SOUND_DSP_CHECKSUM=2;

	SOUND_SIFTransfer( SOUND_SETPARAMS,(int)senddata2,type);
	oldcnt=IOP_Cnt;	/* Size of data transferred to return from this function */
	IOP_Cnt=0;		/* Clear offset, so new commands write from the start of the buffer */
	SOUND_COMMAND_COUNTER=0;	/* Clear counter for amount of commands to send. */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return (oldcnt);
}

/**********************************************************************************
SOUND_EnableEffects
	Initialises hardware effects on Core_n
	Each core effects 24 channels: Core0 = SPU Channel 0-23, Core1 = SPU Channel 24-47

	SOUND_FX_OFF 0		size = 0x80
	SOUND_FX_ROOM 1		size = 0x26c0
	SOUND_FX_STUDIO_A 2	size = 0x1f40
	SOUND_FX_STUDIO_B 3	size = 0x4840
	SOUND_FX_STUDIO_C 4	size = 0x6fe0
	SOUND_FX_HALL 5		size = 0xade0
	SOUND_FX_SPACE 6	size = 0xf6c0
	SOUND_FX_ECHO 7		size = 0x18040
	SOUND_FX_DELAY 8	size = 0x18040
	SOUND_FX_PIPE  9	size = 0x3c00

	Requires:	core		(0 or 1)
				type		Reverb type (STUDIO_A, HALL etc..)
				depl		Depth Left
				depr		Depth Right
				delay		Delay (type ECHO or DELAY only)
				feedback	Feedback (type ECHO only)

	Returns:	0			OK
				-1			Failed
x
***********************************************************************************/
int SOUND_EnableEffects(int core, int type, int depl, int depr, int delay, int feedback )
{
int b;
	if ((core>1)||(core<0))
	{
		MSERROR(("SOUND_EnableEffects\n"));
		MSERROR(("Core (0x%x) out of range\n",core));
		return(-1);
	}
	else if (type>9)
	{
		MSERROR(("SOUND_EnableEffects\n"));
		MSERROR(("Invalid type (0x%x)\n",type));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	b=1-core;

	if (SOUND_CurrentReverb[b]==0)	/* Other reverb off */
		SOUND_CurrentReverbAddr[core]=SOUND_EffectBuffer[0];	/*0x1fffff;	// Set core to use top SPU RAM address */
	else
	{
		if (SOUND_CurrentReverbAddr[b]==SOUND_EffectBuffer[0])	/*0x1fffff)	// Other reverb On */
			SOUND_CurrentReverbAddr[core]=SOUND_EffectBuffer[1];	/*0x1dffff;	// Use address that isn't being used. */
		else
			SOUND_CurrentReverbAddr[core]=SOUND_EffectBuffer[0];	/*0x1fffff; */
	}
	SOUND_CurrentReverb[core]=(u_int)type;		/* Make a copy of the current reverb type */
	SOUND_CurrentReverbSize[core]=ReverbSizes[type];

	SOUND_StartCommand(SND_ENABLE_FX);
	SOUND_AddData((short)core);
	SOUND_AddData((short)type);
	SOUND_AddData((short)depl);
	SOUND_AddData((short)depr);
	SOUND_AddData((short)delay);
	SOUND_AddData((short)feedback);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_DisableEffects
	Disables hardware effects on core n

	Requires:	core	Core number 0 or 1
x
***********************************************************************************/
void SOUND_DisableEffects(int core)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_CurrentReverb[core]=0;
	SOUND_CurrentReverbSize[core]=0;
	SOUND_StartCommand(SND_DISABLE_FX);
	SOUND_AddData((short)core);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}

/**********************************************************************************
SOUND_SetEffectMasterVolume
	Set volume of effect for core n.

	Requires:	core	Core number 0 or 1
				voll	Left effect volume (0-0x7fff)
				volr	Right effect volume (0-0x7fff)
x
***********************************************************************************/
void SOUND_SetEffectMasterVolume(int core, int voll,int volr)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_FX_MASTER_VOL);
	SOUND_AddData((short)core);
	SOUND_AddData((short)voll);
	SOUND_AddData((short)volr);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}

/**********************************************************************************
SOUND_SetChannelEffectOn
	Turn hardware effects processing ON for individual SPU Channel.
	Channels 0-23 use effects for core 0.
	Channels 24-47 use effects for core 1.
	This call only has to be called once for each channel.

	Requires:	channel		SPU Channel 0-47
x
***********************************************************************************/
void SOUND_SetChannelEffectOn(int channel)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FX_CHAN_ON);
	SOUND_AddData((short)channel);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetChannelEffectOff
	Turn hardware effects processing OFF for individual SPU Channel.
	Channels 0-23 use effects for core 0.
	Channels 24-47 use effects for core 1.
	This call only has to be called once for each channel.

	Requires:	channel		SPU Channel 0-47
x
***********************************************************************************/
void SOUND_SetChannelEffectOff(int channel)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FX_CHAN_OFF);
	SOUND_AddData((short)channel);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_AllChannelEffectsOn
	Turn hardware effects processing ON for all 24 channels.
	Channels 0-23 use effects for core 0.
	Channels 24-47 use effects for core 1.
	This call only has to be called once for each channel.

	Requires:	core	Core number 0 or 1
						(core 0 = SPU Channels 0-23, Core 1 = SPU Channels 24-47)
x
***********************************************************************************/
void SOUND_AllChannelEffectsOn(int core)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FX_ALL_CHANS_ON);
	SOUND_AddData((short)core);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_AllChannelEffectsOff
	Turn hardware effects processing OFF for all 24 channels.
	Channels 0-23 use effects for core 0.
	Channels 24-47 use effects for core 1.
	This call only has to be called once for each channel.

	Requires:	core	Core number 0 or 1
						(core 0 = SPU Channels 0-23, Core 1 = SPU Channels 24-47)
x
***********************************************************************************/
void SOUND_AllChannelEffectsOff(int core)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FX_ALL_CHANS_OFF);
	SOUND_AddData((short)core);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************

SOUND_ChainStreams
	Creates a list of streams to be played after the current one has finished.
	This is useful for, say, playing back commentary - where one sentance may be
	made up of several seperate words. eg "A great goal by","Player 2.","Super!"
	would be made of 3 seperate files, but be played back as one.
	This MUST be called after the SOUND_PlayStream call, as the chaining is initialised
	(set to play with no chaining) within this function. Note also that once a stream
	has requested or started to load its first data packet, it is then too late to call
	this command.
	Note: If you are loading from EXTERNAL, you still need to call this, so the IOP
	knows what data is should be requesting and also so the IOP can handle the removal
	of ADPCM loop marker info at the end of each file.

	Requires:
			Chan		Stream Channel that stream is playing on
			Count		Amount of streams to add (Must range from 1-8)
   			*data		(SOUND_CHAIN_INFO *data) Pointer to the chain data

	Returns:	0		Everything OK
				-1		Channel out of range
				-2		Count out of range

	Note: the *data is a pointer to a SOUND_CHAIN_INFO structure:

typedef struct SOUND_CHAIN_INFO
{
	int		FileID;		 File ID to chain to..
	u_int	Offset;		Offset into file to start playing
	u_int	PlaySize;
} SOUND_CHAIN_INFO;

***********************************************************************************/
int SOUND_ChainStreams(u_int Chan,int Count,const SOUND_CHAIN_INFO *data)
{
int i;

	if ((int)Chan>=SOUND_LastStream)
	{
		MSERROR((">>>>> Error: SOUND_ChainStreams\n"));
		MSERROR(("Stream Channel (%d) out of range\n",Chan));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}

	if ((Count<1)||(Count>8))
	{
		MSERROR((">>>>> Error: SOUND_ChainStreams\n"));
		MSERROR(("Count value (%d) out of range\n",Count));
		MSERROR(("Must range from 1-8\n"));
		return(-2);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CHAIN_STREAMS);
	SOUND_AddData((short)Chan);	/* Stream to add chained data to */
	SOUND_AddData((short)Count);	/* Number of streams to add in chain */

	for (i=0;i<Count;i++)	/* Loop through number of streams */
	{
		SOUND_AddLongData((unsigned int)(data->FileID));		/* File ID */
		SOUND_AddLongData(data->PlaySize);	/* Size of data to play from file */
		SOUND_AddLongData(data->Offset);	/* offset into file to start playing from */
		data++;								/* Move to next SOUND_CHAIN_INFO record */
	}
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_PatchSFX
	This function is to be used if you want to patch the SPU addresses of resident
	SFX yourself.
	For example, if you want to load a single large file containing many VAG files,
	and then transfer that whole file to the SPU in one go (which speeds up the loading
	process a lot!), you still need to let MultiStream know where the sample is in
	RAM and also what ID would want to connect to it.

	Requres:	ID			ID of SFX (0-0xffffffff) used by SOUND_PlaySFX etc..
				SPUAddr		SPU Address of SFX

	Returns:	Nothing

***********************************************************************************/
void SOUND_PatchSFX(u_int ID,u_int SPUAddr)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_PATCH_SFX);
	SOUND_AddLongData(ID);
	SOUND_AddLongData(SPUAddr);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	SOUND_MemCheckForSFXID(ID,SPUAddr);	// Remember ID if using SOUND_MemAlloc functions
}

/**********************************************************************************
SOUND_HzToSPU
	Converts Hz to SPU Pitch values. As FileNames.H no longer exists (MultiStreamV1 - V4.3)
	which used to be a shared file between both EE and IOP, it is now necessary for you
	to call this function and pass the required pitch, rather than using the DEFAULT_PITCH setting.

	Requires:	Pitch (In Hz)	ie..48000 for a 48khz sample

	Returns:	SPU Pitch		ie..0x1000 for a 48khz sample

	Note: This function returns the value straight away. There is no need for
	a SOUND_FlushIOPCommand after this function.
***********************************************************************************/
u_int SOUND_HzToSPU(int hz)
{
	return((u_int)(hz*0x1000)/48000);		/* Convert pitch(hz) to SPU pitch */
}

/**********************************************************************************
SOUND_GetFileInfo
	Returns the LSN and SIZE of the requested file.
	You can then keep a copy of this on the EE, so you only need to do this once for
	each file.
	You can then set the LSN/SIZE for any file ID with SOUND_SetFileInfo.
	SOUND_CreateFileInfo does both SOUND_GetFileInfo and SOUND_SetFileInfo.

	Note, this command block the CD on the IOP as it uses the sceCdSearchFile command.
	Therefore, all GetFileInfo commands should be called before any streams are started.
	Finally, each GetFileInfo command should be followed by a SOUND_FlushIOPCommand. If two or
	more GetFileInfo commands are called before a SOUND_FlushIOPCommand, only the result from the
	last requested file is returned to the EE.

  	Requires:	filename	Name of file to load (including either host0: or cdrom0:)
	Returns:	TagID		ID to be compared with the return value of SOUND_ReturnFileInfo

	Use SOUND_ReturnFileInfo to retrieve this information once this function has been
	processed via the IOP (after SOUND_FlushIOPCommand is called and returned)

	TagID can be used, for example, where you call this command ingame, and then poll this
	value until it returns the value that you passed this function. Then you know that you have new data
	in the other SOUND_FILE fields, and that SOUND_SetFileInfo can then be called..
x
***********************************************************************************/
u_char SOUND_GetFileInfo(const char *filename)
{
u_char TagID;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	TagID=SOUND_GetNextInfoCounter();

	SOUND_StartCommand(SND_GET_FILE_INFO);
	SOUND_AddData((short)TagID);	/*Counter); */
	SOUND_AddString(filename);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(TagID);
}

/**********************************************************************************
SOUND_SetFileInfo (V5)
	Stores file info (LSN/Size and Source (host or cd)) in IOP RAM
	ID passed is the ID that this file will, from this point, be accessed with.

	Requires:	id		File ID (SOUND_CREATE_FILE to let MultiStream create a File ID)
				lsn		File LSN (if loading from cdrom0:). Not used if loading from host0
				size	File size
				source	Either ADPCM_DATA_ON_CD or ADPCM_DATA_ON_HOST
				offset	Offset into file to start streaming/playing data
						(if streaming VAG files, set to 48 to skip VAG header...)

	Returns:	id		File ID

	Notes:

	If using SOUND_CREATE_FILE, do not call this function or SOUND_CreateFileInfo with any other
	type of ID value. Otherwise, the behaviour of the system can not be relied upon.

	If you don't know the LSN/Size of the file, either:

	1)	Call the SOUND_GetFileInfo function before calling this one. Note, that a SOUND_FlushIOPCommand(0);
	 	will be required after the SOUND_GetFileInfo and SOUND_SetFileInfo calls.
	2)	Call SOUND_CreateFileInfo (which calls both the "Get" and "Set" functions on the IOP)


x
***********************************************************************************/
u_int SOUND_SetFileInfo(int ID, u_int LSN, u_int size, int source, u_int offset)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (ID==(int)SOUND_CREATE_FILE)
		ID=(int)SOUND_GetNextFileIDCounter();

	SOUND_StartCommand(SND_SET_FILE_INFO);
	SOUND_AddLongData((unsigned int)ID);
	SOUND_AddLongData(LSN);
	SOUND_AddLongData(size);
	SOUND_AddData((short)source);
	SOUND_AddLongData(offset);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return((unsigned int)ID);
}

/**********************************************************************************
SOUND_CreateFileInfo (V5)
	Get file LSN/SIZE from either host0 or cdrom0:
	Sets file LSN/SIZE in IOP RAM for later use.
	Allocates RAM for filename if loading from host0: (cd loading just used LSN)

	Requires:	ID			File ID (SOUND_CREATE_FILE to let MultiStream create a File ID)
				*filename	pointer to the filename
				offset		offset into file to start streaming/loading (ie. 48 to skip a VAG header..)
	Returns:	id		File ID

	Notes:
		This function basically calls SOUND_GetFileInfo,SOUND_SetFileInfo and then,
		if loading from host0, SOUND_StoreHOST0FileName.

		If using SOUND_CREATE_FILE, do not call this function or SOUND_SetFileInfo with any other
		type of ID value. Otherwise, the behaviour of the system can not be relied upon.

x
***********************************************************************************/
u_int SOUND_CreateFileInfo(int ID,const char *filename,u_int offset)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (ID==(int)SOUND_CREATE_FILE)
		ID=(int)SOUND_GetNextFileIDCounter();
	SOUND_StartCommand(SND_CREATE_FILE_INFO);
	SOUND_AddLongData((unsigned int)ID);
	SOUND_AddLongData(offset);

	SOUND_AddString(filename);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return((unsigned int)ID);
}

/**********************************************************************************
SOUND_StoreHOST0FileName (V5)
	Allocates IOP RAM and stores name of file if loading from host0:
	Sets FileID's filename pointer to point at the allocated address in RAM.
	Only required if loading from host0:

	Requires:	id			FileID to link filename to.
				*filename	pointer to filename
x
***********************************************************************************/
void SOUND_StoreHOST0FileName(int id, const char *filename)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_STORE_HOST0_FILENAME);
	SOUND_AddLongData((unsigned int)id);
	SOUND_AddString(filename);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_FreeFileID (V5)
	Free's requested File ID from link list.
	Stops any stream that is using this stream ID.

	Requires:	ID		ID of File
x
***********************************************************************************/
void SOUND_FreeFileID(int id)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FREE_FILE_ID);
	SOUND_AddLongData((unsigned int)id);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_FreeAllFileIDs (V5)
	Frees all file IDs in IOP RAM.
	Stops all streams that are playing (due to the fact that they can no longer load
	data due to there being no file ID's.

	Requires: Nothing
x
***********************************************************************************/
void SOUND_FreeAllFileIDs(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_SetFileIDCounter=0;
	SOUND_StartCommand(SND_FREE_ALL_FILE_ID);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_AllocateFileMemory
	Allocates IOP RAM to be used by File ID's.
	Each File that MultiStream uses is requested by a unique ID.
	This ID then looks into this File RAM for relevent info about the file.
	This info includes the ID, LSN (if loading from cd), SIZE, SOURCE (host or cd) and
	a pointer to the filename (if loading from host).

	For example, if your ingame audio will use 30 different music streams, set this
	value to 30.
	Note that for SFX, this will need to be set to the maximum amount of SFX you are
	loading. Once they are loaded, you can free this memory (SOUND_FreeFileMemory)
	and then allocate this memory again for streamed files. Once SFX are loaded into
	SPU RAM, there is no longer any need to store their file info.

	Requires:	maxfiles	Maximum amount of files that you will use.
x
***********************************************************************************/
void SOUND_AllocateFileMemory(int maxfiles)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_ALLOCATE_FILE_RAM);
	SOUND_AddData((short)maxfiles);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}
/**********************************************************************************
SOUND_FreeFileMemory
	Frees file memory.
	Also calls SOUND_FreeAllFileID's, just to stop any playing streams and also to
	free any filename RAM (if loading from host0)
x
***********************************************************************************/
void SOUND_FreeFileMemory(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_SetFileIDCounter=0;
	SOUND_StartCommand(SND_FREE_FILE_RAM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_AllocateSpotFXMemory
	Allocates IOP RAM for storing SpotFX info. SpotFX info includes SPU RAM address
	and SFX ID.
	For example, if you have a maximum of 80 SFX in your game at one time, set this
	to 80.

	Requires:	maxfx		Maximum amount of SFX that will be in SPU RAM at one time
***********************************************************************************/
void SOUND_AllocateSpotFXMemory(int maxfx)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_ALLOCATE_SFX_RAM);
	SOUND_AddData((short)maxfx);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_FreeSpotFXMemory
	Free spot fx memory. Nothing else..
x
***********************************************************************************/
void SOUND_FreeSpotFXMemory(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FREE_SFX_RAM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_FreeAllSpotFXIDs
	Frees all spot FX ID's.
x
***********************************************************************************/
void SOUND_FreeAllSpotFXIDs(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FREE_ALL_SFX_ID);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_FreeSpotFXID
	Free single Spot FX ID from list. This ID can then be used again for another SFX

	Requires:	ID		ID to free
x
***********************************************************************************/
void SOUND_FreeSpotFXID(u_int ID)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_FREE_SFX_ID);
	SOUND_AddLongData(ID);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetFileOffsetAndPlaySize
	Sets the file play position and size to play from.
	For example, if you have a single file containing 2 streams, you can set the offset
	to point at the start of the second stream, and the size to be the size of the second
	stream.

	Requires:	ID		File ID to which you want to modify its play start position / play size
				offset	Offset into file which you want to start streaming/loading data from
				size	size of data in file that you want to stream/load.

	Note: Passing 0 for size will force the default offset and size to be set.
		  The default size is the actual whole file length minus the offset originally passed in SOUND_SetFileInfo
		  The default offset is the original offset passed to SOUND_SetFileInfo

	(A bit of a long name for this one, but couldn't think of anything shorter! Sorry!)
x
***********************************************************************************/
void SOUND_SetFileOffsetAndPlaySize(int ID, u_int offset,u_int size)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_FILE_OFFSET_AND_SIZE);
	SOUND_AddLongData((unsigned int)ID);
	SOUND_AddLongData(offset);
	SOUND_AddLongData(size);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_InitCD
	Initialises the CD. Does this:
	sceCdInit(SCECdINIT);
	sceCdMmode(type);
	sceCdDiskReady(0);
	sceCdCallback((void*)_CdStreamInt);

	Requires:	type		SOUND_CD (if loading data from CD)
							SOUND_DVD (if loading data from DVD)
							SOUND_SET_CALLBACK (if CD already initialised)
							SOUND_CD_SPIN_NORMAL (normal CD loading - default)
							SOUND_CD_SPIN_STREAM (stream CD loading)

	SOUND_SET_CALLBACK should be used if your own code has already initialised the cd
	unit. This will then just initialise the CD callback which is required for MultiStream
	to operate correctly.

	For a DVD, SOUND_SET_CD_SPIN_STREAM will load data at a constant rate of approx
	1.5 meg per second. For SOUND_SET_CD_SPIN_NORMAL, in theory, it may be possible to
	load up to 3.5 meg per second, but also this may drop to as low as, say, 500K
	per second. This depends on the state of the CD drive. It also seems that T10Ks
	seems to have more of a problem loading than either debugs or consumer units.
	If possible, SOUND_SET_CD_SPIN_STREAM should be used. Although you will not get a
	maximum load rate above around 1.5 meg per second, at least you will be able to
	constantly load at this speed on any machine of any age (don't quote me on that..)
	For more information with regards to the mode types, please see the relevent
	documention on the sceCdRMode structure in the CD(DVD) docs.

***********************************************************************************/
void SOUND_InitCD(u_int type)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_CD);
	SOUND_AddData((short)type);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}


/**********************************************************************************
SOUND_DisplayStats
	The IOP output PC window output will display various statistics with regards
	to the current MultiStream setup.

	Requires:	Nothing
	Returns:	Nothing

	Displays:	Version number
				Allocated Spot FX details (ID and SPU address)
				Allocated File details (ID, LSN, Size, Offset to load from)
				Allocated Stream details (channel, IOP & SPU address and sizes)
***********************************************************************************/
void SOUND_DisplayStats(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_CD);
	SOUND_AddData((short)SOUND_DISPLAY_INFO);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_DisableCDCallback
	Disables CD callback.
	If you are using another loading system (normally due to using mpeg streaming..)
	when not using MultiStream for loading data, you may need to disable the CD
	callback.
	To restart the callback, use: SOUND_InitCD(SOUND_SET_CALLBACK);
***********************************************************************************/
void SOUND_DisableCDCallback(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_DISABLE_CD_CALLBACK);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_DisableSPUCallback
	Disables SPU callback.
	If you are using another loading system (normally due to using mpeg streaming..)
	when not using MultiStream for loading data, you may need to disable to SPU
	callback.
	To restart the callback, use: SOUND_EnableSPUCallback();
***********************************************************************************/
void SOUND_DisableSPUCallback(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_DISABLE_SPU_CALLBACK);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_EnableSPUCallback
	Enables SPU callback.
	Call to resume SPU callbacks. This should only be called if SOUND_DisableSPUCallback
	has been called previously. This callback is also setup in the SOUND_InitStreamData
	function
***********************************************************************************/
void SOUND_EnableSPUCallback(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_ENABLE_SPU_CALLBACK);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetStreamChannel
	Returns the stream number that is using the requested SPU Channel.
	This is usefull if you use the STREAM_FIND_FREE param when calling SOUND_PlayStream.
	As you can then find out what Stream ID was found for the requested stream.
	This is an EE only call (no requests are done to the IOP).
	The SOUND_SPU2StreamRef memory is filled when the SIFRPC returns from the IOP
	(SOUND_CopyIOPBuffer is called...)

	Requires:		channel			SPU channel 0-47
	Returns			Stream Channel 	0-n
					-1				No stream playing on requested SPU channel
					-2				Requested SPU channel out of range
x
***********************************************************************************/
int SOUND_GetStreamChannel(u_int channel)
{
int stat;
	if (channel>47)		/* Requested channel out of range? */
		return(-2);
	stat=SOUND_SPU2StreamRef[channel];	/* Cross reference stream with SPU channel */
	if (stat==0xff)
		stat=-1;
	return (stat);	/* Return stream number that is using requested SPU channel. */
}

/**********************************************************************************
SOUND_GetMSHSampleCount
	Returns the number of sample info packets in a .MSH file.

	Requires:		HeaderInfo		u_int address of .MSH file
	Returns:		*HeaderPtr		Number of sample info packets in header data
x
***********************************************************************************/
int SOUND_GetMSHSampleCount(u_int HeaderInfo)
{
u_int *HeaderPtr;

	HeaderPtr=(u_int *)HeaderInfo;
/* Skip header size and pad size (pad size is unused data at the end of the MSH file) */
	HeaderPtr+=2;
	return((int)(*HeaderPtr));
}

/**********************************************************************************
SOUND_PatchMSH
	Patch SFX into MultiStream IOP code using .MSH file information.
	This function calls SOUND_PatchSFX to actually pass info to the IOP.
	Therefore, SOUND_FlushIOPCommand is required after this call.

	Requires:	offset		Sample number to patch (0-n) in .MSH file..
				ID			ID to be used to reference SFX (0-0xffff) (see. SOUND_PlaySFX function)
				HeaderInfo	u_int address of .MSH file in EE RAM
				SPUAddr		Base address of .MSB file in SPU RAM

	Returns:	0			Successful
				-1			Failed (offset value is more than the amount of samples in header file)
x
***********************************************************************************/
int SOUND_PatchMSH(u_int offset,u_int ID,u_int HeaderInfo,u_int SPUAddr)
{
u_int *HeaderPtr;
u_int NumberOfSamples;

	HeaderPtr=(u_int *)HeaderInfo;
/* Skip header size and pad size (pad size is unused data at the end of the MSH file) */
	HeaderPtr+=2;
/* Get number of sample packets contained in header file */
	NumberOfSamples=*HeaderPtr++;

	if (offset>=NumberOfSamples)
	{
		MSERROR((">>>> Error: SOUND_PatchMSH\n"));
		MSERROR(("Header file contains %d sample data packets\n",NumberOfSamples));
		return(-1);
	}

	HeaderPtr+=(offset*4);	/* Skip to correct entry in header. */

	if (*HeaderPtr == 0)
	{
// If the sample is a placeholder, return now - Thanks Dave Lomas
		return (0);
	}
/* And then skip SampleSize and ID, so now pointing at SampleOffset */
	HeaderPtr+=2;
	SOUND_PatchSFX((u_int)ID,SPUAddr+*HeaderPtr);	/* Patch SFX to MultiStream system */
	return(0);
}

/**********************************************************************************
SOUND_GetMSHInfo
	Returns information with regards to a .MSH file.

	Requires:	HeaderInfo 	u_int Address of .MSH file in EE RAM
				*buffer	   	Pointer to a SOUND_MSH_INFO structure to be filled with data
				offset	   	Number of sample to put into *buffer structure

	Returns:	0		   	Successful
				-1			Failed (offset value is more than the amount of samples in header file)
x
***********************************************************************************/
int SOUND_GetMSHInfo(u_int HeaderInfo,SOUND_MSH_INFO *buffer,u_int offset)
{
const u_int *HeaderPtr;

	HeaderPtr=(u_int *)HeaderInfo;

	buffer->MSHSize=*HeaderPtr++;	/* Size of header */
	buffer->MSHPad=*HeaderPtr++;	/* Size of unused padding at end of header */
	buffer->NumberOfSamples=*HeaderPtr++;	/* Number of sample info in MSH file */

	if (offset>=buffer->NumberOfSamples)	/* Requested sample offset in range? */
	{
		MSERROR((">>>> Error: SOUND_GetMSHInfo\n"));
		MSERROR(("Header file contains %d sample data packets\n",buffer->NumberOfSamples));
		return(-1);
	}
	HeaderPtr+=(offset*4);			/* Skip to correct entry in header. */

/* Copy requested sample information: */
	buffer->Size=*HeaderPtr++;		/* Sample Size */
	buffer->ID=*HeaderPtr++;		/* ID (can be used for anything you want..) */
	buffer->Offset=*HeaderPtr++;	/* Offset into the .MSB file for the start of the actual sample ADPCM data */
	buffer->Pitch=*HeaderPtr;		/* Pitch is stored as hz - NOT SPU. Use SOUND_HzToSPU to convert it. */
	return(0);
}

/**********************************************************************************
SOUND_SetStreamParent_Int
	Used ONLY if playing interleaved stream data (.MIH/.MIB Files)
	Marks a stream channel as a "Parent". This stream requires an IOP stream buffer
	as with a normal stream.
	The size of the IOP stream buffer needs to be the size of TrackSize*NumberOfFiles.
	Where NumberOfFiles is the amount of different interleaved files in a .MIB file.
	A stream needs to have just been told to play (ie. SOUND_PlayStream) before this call.

	Requires:	StrmChan		Stream Channel number (see SOUND_PlayStream)
				Track			Track to play from interleaved data
				TrackSize		Size of a single track

	Notes:
	If, for example, you had 3 streams interleaved into one file, where the data is
	interleaved at 2048 byte tracks, you would set Track to 0-2 and TrackSize
	to the size of a single track (2048).
x
***********************************************************************************/
void SOUND_SetStreamParent_Int(int StrmChan,int Track,u_int TrackSize)
{
	if (StrmChan>=SOUND_LastStream)	/* Valid stream? */
	{
		MSERROR((">>>>>ERROR: SOUND_SetStreamParent_Int\n"));
		MSERROR(("StrmChan (%d) out of range (0-%d)\n",StrmChan,SOUND_LastStream-1));
		MSERROR(("use SOUND_SetMaxStreamLimit to allow more streams\n"));
		return;
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_STREAM_PARENT);
	SOUND_AddData((short)StrmChan);
	SOUND_AddData((short)Track);
	SOUND_AddLongData(TrackSize);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetStreamChild_Int
	Used ONLY if playing interleaved stream data (.MIH/.MIB Files)
	Marks a stream channel as a "Child". This stream does not require an IOP stream buffer
	as it transfers data from its "Parent" Stream. The "Parent" stream handles the
	loading of the interleaved stream data.

	Requires:	S			Stream channel number (see SOUND_PlayStream)
				Parent		"Parents" Stream channel (what the Parent used when calling SOUND_PlayStream)
				SPUChan	   	SPU Channel (0-47) (optional : | SOUND_MASTER_VOLn (n=0-3)
				Track		Track to play from interleaved data
				VolL		Left Volume
				VolR		Right Volume
				SPUAddr		SPU Address for buffer to load into.
							Pass 0 to use the SPUBuffer allocated with SOUND_AllocateStreamBuffer

	Notes:		The SPUBuffer size needs to be the same size as the Parents buffer size (TrackSize)
				See SOUND_SetStreamParent_Int for more information

Note that you can specify which master volume group this stream will be played on
(only if playing ADPCM data), by "or-ing" SOUND_MASTER_VOLn (n=0 to 3) with the SPU Channel.
Not "or-ing" any master group will bypass any group master settings.
***********************************************************************************/
void SOUND_SetStreamChild_Int(u_int StrmChan,u_int Parent, u_int SPUChan,u_int Track,int VolL,int VolR,u_int SPUAddr)
{
u_int group;

	group=SPUChan&0xffff0000;		/* Master volume subgroup */
	SPUChan&=0xffff;				/* SPU channel */

	if ((int)StrmChan>=SOUND_LastStream)
	{
		MSERROR((">>>>>ERROR: SOUND_SetStreamChild_Int\n"));
		MSERROR(("StrmChan (%d) out of range (0-%d)\n",StrmChan,SOUND_LastStream-1));
		MSERROR(("use SOUND_SetMaxStreamLimit to allow more streams\n"));
		return;
	}
	if (Parent>47)
	{
		MSERROR((">>>>>ERROR: SOUND_SetStreamChild_Int\n"));
		MSERROR(("Parent (%d) out of range (0-47)\n",Parent));
		return;
	}
	if (SPUChan>47)
	{
		MSERROR((">>>>>ERROR: SOUND_SetStreamChild_Int\n"));
		MSERROR(("SPUChan (%d) out of range (0-47)\n",SPUChan));
		return;
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_STREAM_STATUS[StrmChan]=STREAM_STATUS_EE_REQPLAY;		/* Mark stream as "used". */

	SOUND_SPUKeyStatus[SPUChan]=SPU_KEY_STATUS_EE_REQUEST;	/* New */

	SOUND_SetChannelMasterVolumeGroup((int)SPUChan,group);	/* Set SPU channel volume subgroup */
	SOUND_SetSPUChannelVolume((int)SPUChan,(short)VolL,(short)VolR);		/* scale volume with master vol */

	SOUND_StartCommand(SND_SET_STREAM_CHILD);
	SOUND_AddData((short)((StrmChan<<8)|Parent));
	SOUND_AddData((short)SPUChan);
	SOUND_AddData((short)Track);
	SOUND_AddData((short)SOUND_MasterL);
	SOUND_AddData((short)SOUND_MasterR);
	SOUND_AddLongData(SPUAddr);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetMaxIOPRAM
	Returns the largest possible block of IOP RAM that can be allocated.
	Use this to find out how large you can make your IOP stream buffers.
	This is useful for loading .MSB (sample banks), as the larger the IOP buffer,
	the faster the loading will be.

	Requires:	Nothing

	Use function: SOUND_GetStreamInfo to read the result
x
***********************************************************************************/
void SOUND_GetMaxIOPRAM(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_GET_MAX_RAM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetMIHInfo
	Returns information with regards to an interleaved .MIH file.

	Requires:	HeaderInfo 	u_int Address of .MIH file in EE RAM
				*buffer	   	Pointer to a SOUND_MIH_INFO structure to be filled with data
				offset	   	track number to return track ID in *buffer structure

	Returns:	0		   	Successful
				-1			Failed (offset value is more than the amount of tracks in header file)
x
***********************************************************************************/
int SOUND_GetMIHInfo(u_int HeaderInfo,SOUND_MIH_INFO *buffer,u_int offset)
{
const u_int *HeaderPtr;

	HeaderPtr=(u_int *)HeaderInfo;

	buffer->MIHSize=*HeaderPtr++;		/* Size of MIH file */
	buffer->MIHPad=*HeaderPtr;		/* Size of unused 0 padding at end of MIH file */
	buffer->MIHPad&=0xff;
	buffer->EndOffset=*HeaderPtr++;		/* Size of unused 0 padding at end of MIH file */
	buffer->EndOffset>>=8;
	buffer->EndOffset&=0xffffff;
	buffer->NumberOfFiles=*HeaderPtr++;	/* Number of file info's stored in MIH file */
	buffer->Pitch=*HeaderPtr++;			/* Pitch is stored as hz - NOT SPU. Use SOUND_HzToSPU to convert it. */
	buffer->TrackSize=*HeaderPtr++;	/* Single track size (as requested in FPACKER utility) */
	buffer->Tracks=*HeaderPtr++;		/* Number of tracks per interleaved file in .MIB file */

	if (offset>=buffer->NumberOfFiles)	/* Requested sample valid? */
	{
		MSERROR((">>>> Error: SOUND_GetMIHInfo\n"));	/* No.. */
		MSERROR(("Header file contains %d files\n",buffer->NumberOfFiles));
		MSERROR(("You requested ID info for file %d\n",offset));
		return(-1);
	}

	if (buffer->EndOffset<(buffer->TrackSize/2))
	{
		MSERROR(("---------------------------------------------------------------------\n"));
		MSERROR((">>>> WARNING: SOUND_GetMIHInfo\n"));	/* No.. */
		MSERROR(("End offset (0x%x)is not >= to half the track size (0x%x)!!\n",buffer->EndOffset,buffer->TrackSize/2));
		MSERROR(("(TrackSize = 0x%x)\n",buffer->TrackSize));
		MSERROR(("Forcing end offset to be 0x%x\n",buffer->TrackSize/2));
		MSERROR(("You may want to recreate data with FPacker..\n"));
		MSERROR(("---------------------------------------------------------------------\n"));
		buffer->EndOffset=buffer->TrackSize/2;
	}

	HeaderPtr+=offset;			/* Skip to correct entry in header. */

/* Copy requested sample information: */
	buffer->ID=*HeaderPtr;		/* ID (can be used for anything you want..) */
	return(0);
}

/**********************************************************************************
SOUND_SetMIBEndOffset
	Sets the offset of the final data packet in an interleaved data file.

	Requires:	i			Stream channel
				Offset		Offset through final .MIB data packet where actual data ends
							and zero padding starts.

	Returns:	0			OK
				-1			Failed (stream out of range or invalid offset)

	Note:	The offset can be found in the .MIH file, and can be found from calling
			SOUND_GetMIHInfo, and checking the buffer->MIHEndOffset.
			If this routine is not called, the IOP code will manualy search through
			the last data packet loaded for the end of data. Problems can occure here
			if:
			(a) The files used to create the MIB file are of different lengths
			(b) The files used have long periods of 0's at the end of their data
				(maybe caused by fading out a song)

			This function must be called after SOUND_SetStreamParent_Int.
			The stream channel passed can then be either the parent or any of its
			child streams

***********************************************************************************/
int SOUND_SetMIBEndOffset(u_int i, u_int Offset)
{
	if ((int)i>=SOUND_LastStream)	/* Valid stream? */
	{
		MSERROR((">>>>>ERROR: SOUND_SetMIBEndOffset\n"));
		MSERROR(("Stream Channel (%d) out of range (0-%d)\n",i,SOUND_LastStream-1));
		MSERROR(("use SOUND_SetMaxStreamLimit to allow more streams\n"));
		return(-1);
	}
	else if (Offset==0)
	{
		MSERROR((">>>>>WARNING: SOUND_SetMIBEndOffset\n"));
		MSERROR(("Offset = 0. Are you using a valid MIH file?\n"));
		MSERROR(("Maybe using an old version of FPacker?\n"));
		MSERROR(("Not storing offset\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_MIB_END);
	SOUND_AddData((short)i);
	SOUND_AddLongData(Offset);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_GetMIHFileID
	Returns the ID for requested file in .MIH file.
	This ID isn't used for anything specific, so can therefore be used for your own
	purposes. Such as a flag if reverb is required for this stream...

	Requires:		HeaderInfo		u_int address of .MIH file
	Returns:		*HeaderPtr		ID for requested file.
x
***********************************************************************************/
int SOUND_GetMIHFileID(u_int file,u_int HeaderInfo)
{
u_int *HeaderPtr;
u_int FileCount;
	HeaderPtr=(u_int *)HeaderInfo;
	HeaderPtr+=2;		/* Skip header size and pad size (pad size is unused data at the end of the MIH file) */
	FileCount=*HeaderPtr++;		/* HeaderPtr now currently points to "Pitch" record */
	if (file>=FileCount)
	{
		MSERROR((">>>> Error: SOUND_GetMIHFileID\n"));
		MSERROR(("Header file contains %d files\n",FileCount));
		MSERROR(("You requested ID info for file %d\n",file));
		return(-1);
	}
	HeaderPtr+=(3+file);	/* Skip to correct ID value in header */
	return((int)(*HeaderPtr));
}

/*****************************************************************************
SOUND_TransferDataToIOP
	This will transfer data to from EE to IOP RAM.
	Requires:	source	EE data address
				dest	IOP data address
				size	size of data to be transferred.
				wait	SOUND_DMA_WAIT	wait for transfer to complete before returning
						SOUND_DMA_NO_WAIT	return without waiting for transfer to complete
	Returns:	0		Transfer OK
				-1		Transfer failed or size too large

	Note: size has to be less than 1Mb (see docs on sceSetSifDma for more info)
x
*****************************************************************************/
int SOUND_did;
int SOUND_Previous=0;

int SOUND_TransferDataToIOP(unsigned int source,unsigned int dest, unsigned int size,int wait)
{
sceSifDmaData JDMA;

	if ((wait!=SOUND_DMA_WAIT)&&(wait!=SOUND_DMA_NO_WAIT))	/* Valid wait flag? */
	{
		MSERROR(("SOUND_TransferDataToIOP\n"));
		MSERROR(("Incorrect WAIT flag\n"));
		MSERROR(("Needs to be SOUND_DMA_WAIT or SOUND_DMA_NO_WAIT\n"));
		return (-1);
	}

	if (size>=(1024*1024))
	{
		MSERROR(("SOUND_TransferDataToIOP\n"));
		MSERROR(("size (%d) too large. Has to be less than 1Meg (1048576)\n",size));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	FlushCache(0);
	if (SOUND_Previous!=0)	/* Has a previous transfer taken place? */
	 	while(sceSifDmaStat((unsigned int)SOUND_did) >= 0){}	/* Wait for it to complete */

	SOUND_Previous=1;	/* Previous DMA taken place. */
	FlushCache(0);

	JDMA.data = source;
	JDMA.addr = dest;
	JDMA.size = size;
	JDMA.mode = 0;
	if (!(SOUND_did = (int)sceSifSetDma(&JDMA, 1)))
	{
		MSERROR(("SOUND_TransferDataToIOP\n"));
		MSERROR(("Transfer to IOP Failed\n"));
		SOUND_Previous=0;	/* Clear previous flag.. */
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return (-1);
	}

	if (wait==SOUND_DMA_WAIT)	/* Wait for EE->IOP DMA to complete? */
	 	while(sceSifDmaStat((unsigned int)SOUND_did) >= 0){}	/* Yes.. */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_CheckIOPTransfer
	Checks to see if EE->IOP transfer is completed.
	Use if you have called SOUND_TransferDataToIOP with SOUND_DMA_NO_WAIT.

	Requires:	Nothing
	Returns:	0		EE->IOP transfer complete
				1		EE->IOP transfer not complete
***********************************************************************************/
int SOUND_CheckIOPTransfer(void)
{
int check;
	if (SOUND_Previous!=0)	/* Was a transfer taking place? */
	{
	 	check=sceSifDmaStat((unsigned int)SOUND_did);		/* Yes..Get current transfer status */
		if (check>=0)	/* Still transferring? */
			return(1);	/* Yes.. */
		else
		{
			SOUND_Previous=0;	/* Transfer complete. Clear transfer flag */
		}
	}
	return(0);	/* Transfer completed (or no transfer was ever active in the first place) */
}

/**********************************************************************************
SOUND_StreamAllowKeyOn
	Key ON all channels used by a stream (both parent and children) or just single
	stream.
	Normally, a stream is keyed on once its buffers are full of data. By using this
	function along with SOUND_StreamDisableKeyOn you can, for example, wait for the
	buffers to be filled with data, start of a graphical animation and, by calling
	this command, keep everything synced together, as you know that when you call
	this function, the stream will start playing straight away.
	To know when a stream has preloaded data..
	if (SOUND_STREAM_ACTIVE[stream]!=0)
	{
		Stream preloaded..performing key on now will start stream straight away..
	}

	Requires:	stream		Stream channel
	Returns:	0			All ok
				-1			Stream channel out of range
x
***********************************************************************************/
int SOUND_StreamAllowKeyOn(u_int channel)
{
	if ((int)channel>=SOUND_LastStream)	/* Valid stream channel? */
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_ALLOW_KON);
	SOUND_AddData((short)channel);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_StreamDisableKeyOn
	Stops a stream from performing a key on (ie. starting the stream) when its
	buffers are preloaded.
	You can then use SOUND_StreamAllowKeyOn at any time to perform the key on
	(ie. start the stream straight away).
	Using these two commands together with checking SOUND_STREAM_ACTIVE[stream], you
	can sync graphics to audio streams, as you know that when you call the function:
	SOUND_StreamAllowKeyOn that audio will start playing straight away.
	See SOUND_StreamAllowKeyOn for more info.

	Requires:	stream		Stream channel
	Returns:	0			OK
				-1			Channel out of range
x
***********************************************************************************/
int SOUND_StreamDisableKeyOn(u_int channel)
{
	if ((int)channel>=SOUND_LastStream)	/* Valid stream channel? */
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_DISABLE_KON);
	SOUND_AddData((short)channel);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_SetStreamTrack_Int
	Set a Stream (which has been previously set up to play interleaved data files as
	either a Parent or Child) to use requested track data.
	The orignal track number was passed with either SOUND_SetStreamChild_Int
	or SOUND_SetStreamParent_Int.
	By changing this value, data from another track will be loaded and played.
	Please note that playback of this data will continue from the current seek
	point through the file. Also note that the requested track will not be heard
	until its data has been loaded and played in SPU RAM.

	Requires:	stream		Stream channel
				track		Track to play from interleaved data file
	Returns:	0			OK
				-1			Channel out of range
 x
***********************************************************************************/
int SOUND_SetStreamTrack_Int(u_int channel,u_int track)
{
	if ((int)channel>=SOUND_LastStream)	/* Valid stream channel? */
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_INT_TRACK);
	SOUND_AddData((short)channel);
	SOUND_AddData((short)track);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_GetStreamInfo
	Fills a structure of information about a requested stream channel.

	Requires:	i			Stream channel number
				*buffer		Pointer to a SOUND_STREAM_INFO structure

	Returns		0			OK
				-1			Failed (Stream out of range)


	These values are sent back, whatever the return value:

	buffer->MaxIOPRAM		Max IOP RAM available
	buffer->CDChannel		Stream channel which CD is loading data for
	buffer->UserTransferStatus 0 = trans completed, 1=IOP still transferring, 2=EE request transfer
	buffer->CDAccess		0 = CD free, 1 = CD seeking, 2 = CD reading
	buffer->CDStatus		0 = Not used by MultiStream, 1 = Used by MultiStream
	buffer->CDError			1 = If using INTERNAL loading, and an error has occured during load.
	buffer->CDReady			Returned when calling SOUND_CheckCDError(); (1-CD drive not ready, 0= CD drive ready)
	buffer->CDInternalError	0 = MultiStream internal system back to normal after CD error restart. 1 = Not ready yet
	buffer->EETranSize		Transfer size of last data packed sent from IOP to EE
	buffer->EETranCount		Counter for IOP->EE transfers completed.

	If returned 0...

	buffer->Status			0 = Not playing, 1 = playing
	buffer->IOPAddress		IOP address of stream
	buffer->Type			STREAM_AUDIO,STREAM_LOAD_SPU,STREAM_LOAD_IOP or STREAM_LOAD_EE
	buffer->Active			0 = Preload not complete, 1 = preload completed
	buffer->SPUChannel		SPU channel used by stream
	buffer->FileID			File ID that stream is playing
	buffer->SPUAddress		Current SPU playback address for SPU channel
	buffer->DestinationAddress	Destination address for transfer
	buffer->PlayHalf		Current playing half of SPU buffer
	buffer->Envelope		Current SPU envelope
	buffer->WriteAddress	Current write address (so you can know how much of a file has loaded into EE RAM)
	buffer->PlayOffset		Current load offset through file
	buffer->EEDataSize		Total transfer size taken place from IOP->EE
	buffer->SPUPitch		SPU pitch
	buffer->Priority		Stream priority
x
***********************************************************************************/
int SOUND_GetStreamInfo(u_int stream,SOUND_STREAM_INFO *buffer)
{
u_int m;

/* Non-Stream specific information: */

	buffer->MaxIOPRAM=SOUND_MAX_IOP_RAM;		/* Max IOP RAM available. */
	buffer->CDChannel=(unsigned char)SOUND_STREAM_CD_ACCESS_CHAN;	/* Stream channel which CD is loading data for */
	buffer->CDAccess=(unsigned char)SOUND_STREAM_CD_ACCESS;		/* 0-CD not busy, 1 CD seeking, 2 CD reading */
	buffer->CDStatus=(unsigned char)SOUND_CD_STATUS;				/* 1-CD is busy loading data or transfer to EE or SPU in progress */
	buffer->CDError=SOUND_CD_ERROR;					/* 1-if using INTERNAL loading, and an error has occured */
	buffer->CDReady=SOUND_CD_STAT;					/* Returned when calling SOUND_CheckCDError(); (1-not ready,0-ready) */
	buffer->CDInternalError=SOUND_CD_IERROR;		/* 0-MultiStream internal system back to normal after error. 1-not */
	buffer->EETranSize=SOUND_LAST_EE_TRAN_SIZE;		/* Last IOP->EE transfer size */
	buffer->EETranCount=SOUND_EE_TRAN_COUNT;		/* Counter for IOP->EE transfers complete	 */
	buffer->UserTransferStatus=SOUND_USER_TRANSFER_STATUS;	/* 0 = trans completed, 1=IOP still transferring, 2=EE request transfer */

	if ((int)stream>=SOUND_LastStream)	/* Valid stream? */
	{
		MSERROR((">>>>>ERROR: SOUND_GetStreamInfo\n"));
		MSERROR(("Stream (%d) out of range\n",stream));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		MSERROR(("Only NON-STREAM related info is valid\n"));
		MSERROR(("(such as CD status etc..)\n"));
		return(-1);
	}

/* Stream SPU key status has to be either ON or OFF.. */
	if ((SOUND_STREAM_STATUS[stream]==STREAM_STATUS_OFF)||
		(SOUND_STREAM_STATUS[stream]==STREAM_STATUS_EE_REQSTOP))
	{
		buffer->Status=STREAM_STATUS_OFF;
		buffer->SPUPitch=0;
		buffer->Time_Frames=0;
		buffer->Time_Seconds=0;
		buffer->Time_Minutes=0;
		buffer->Time_Hours=0;
	}
	else if ((SOUND_STREAM_STATUS[stream]==STREAM_STATUS_EE_REQPLAY)||
		(SOUND_STREAM_STATUS[stream]==STREAM_STATUS_EE_REQPLAY2))
	{
		buffer->Status=STREAM_STATUS_WAITING_TO_PLAY;
		buffer->SPUPitch=0;
		buffer->Time_Frames=0;
		buffer->Time_Seconds=0;
		buffer->Time_Minutes=0;
		buffer->Time_Hours=0;
	}
	else
	{
		buffer->Status=STREAM_STATUS_ON;
		buffer->SPUPitch=(short)SOUND_STREAM_SPU_PITCH[stream];
		m=(unsigned int)SOUND_STREAM_TIME[stream];

		buffer->Time_Frames=(u_char)(m%60);
		buffer->Time_Seconds=(u_char)((m/60)%60);
		buffer->Time_Minutes=(u_char)((m/3600)%60);
		buffer->Time_Hours=(u_char)(m/216000);
	}

	buffer->Priority=(u_short)(SOUND_STREAM_PRIORITY[stream]&0x7fff);

	buffer->IOPAddress=SOUND_STREAM_IOP_BUFFER_ADDR[stream];
	buffer->WriteAddress=SOUND_STREAM_WADDR[stream];
	buffer->Type=(unsigned char)SOUND_STREAM_TYPE[stream];		/* STREAM_AUDIO, STREAM_LOAD_SPU, STREAM_LOAD_IOP or STREAM_LOAD_EE */
	buffer->Active=(unsigned char)SOUND_STREAM_ACTIVE[stream];
	buffer->SPUChannel=SOUND_STREAM_SPU_CHAN[stream];
	buffer->FileID=(unsigned int)SOUND_STREAM_ID[stream];

	buffer->SPUAddress=(unsigned int)SOUND_STREAM_SPU_ADDR[stream];
	buffer->DestinationAddress=(unsigned int)SOUND_STREAM_SPU_ADDR[stream];
	buffer->PlayHalf=(unsigned char)SOUND_STREAM_PLAY_HALF[stream];
	buffer->Envelope=SOUND_STREAM_ENV[stream];
	buffer->PlayOffset=SOUND_STREAM_POFFSET[stream];
	buffer->EEDataSize=SOUND_STREAM_EE_SIZE[stream];
	return(0);
}

/**********************************************************************************
SOUND_GetEXTERNALInfo
	Fills a structure of information if using EXTERNAL loading

	Requires:	*buffer		Pointer to a SOUND_EXTERNAL_INFO structure

	buffer->Buffer			Address of where data must be sent to in either EE or IOP RAM
	buffer->Destination		STREAM_LOAD_IOP or STREAM_LOAD_EE (buffer->Buffer address)
	buffer->BufferSize		Amount of data which needs to be loaded into buffer
	buffer->FirstSeek		Seek position through file to start loading
	buffer->ChainPos		Position through chain list
	buffer->ChainCount		Amount of entries in chain list
	buffer->FirstSize		Amount of data to load for first load
	buffer->PlaySize[n]		Size of data to load for each file
	buffer->LSN[n]			LSN of file on CD
	buffer->FileID[n]		FileID of file
	buffer->FileSeek		Seek position to start of data to be loaded
x
***********************************************************************************/
void SOUND_GetEXTERNALInfo(SOUND_EXTERNAL_INFO *EXT_Info)
{
int i;

	EXT_Info->Buffer=SOUND_IOP_DATA_ADDRESS;		/* Could be EE or IOP buffer address */
	EXT_Info->Destination=(unsigned char)SOUND_IOP_LOAD_TYPE; 		/* STREAM_LOAD_IOP or STREAM_LOAD_EE (where to send data to..) */
	EXT_Info->BufferSize=SOUND_IOP_DATA_SIZE;
	EXT_Info->FirstSeek=SOUND_IOP_DATA_OFFSET;
	EXT_Info->ChainPos=(unsigned char)SOUND_IOP_DATA_CHAIN_POS;
	EXT_Info->ChainCount=(unsigned char)SOUND_IOP_DATA_CHAIN_COUNT;
	EXT_Info->FirstSize=SOUND_IOP_DATA_REMAIN;

	for (i=0;i<9;i++)	/* Copy Chain info */
	{
		EXT_Info->PlaySize[i]=SOUND_IOP_DATA_PLAYSIZE[i];
		EXT_Info->LSN[i]=SOUND_IOP_DATA_LSN[i];
		EXT_Info->FileID[i]=SOUND_IOP_DATA_ID[i];
		EXT_Info->FileSeek[i]=SOUND_IOP_DATA_SEEK[i];
	}
}

/**********************************************************************************
SOUND_GetNextInfoCounter
	Called by SOUND_GetFileInfo & SOUND_GetFileIDInfo.
***********************************************************************************/
u_char SOUND_GetNextInfoCounter(void)
{
u_char a;
	a=SOUND_GetInfoCounter;
	SOUND_GetInfoCounter++;
	return(a);
}

/**********************************************************************************
SOUND_GetNextFileIDCounter
	Called by SOUND_SetFileInfo & SOUND_CreateFileInfo.
***********************************************************************************/
u_int SOUND_GetNextFileIDCounter(void)
{
int a;
	a=SOUND_SetFileIDCounter;
	SOUND_SetFileIDCounter++;
	if (SOUND_SetFileIDCounter==(int)0xffffffff)
		SOUND_SetFileIDCounter=0;
	return((u_int)a);
}

/**********************************************************************************
SOUND_ReturnFileInfo
	Fills a structure of information about a file requested with SOUND_GetFileInfo

	Requires:	*FileInfo		Pointer to a SOUND_FILE_INFO structure
	Returns:	Counter			TagID value passed to SOUND_GetFileInfo or SOUND_GetFileIDInfo

	Note: If a file does not exist, Size and LSN will be set to 0.
x
***********************************************************************************/
u_char SOUND_ReturnFileInfo(SOUND_FILE_INFO *FileInfo)
{
	FileInfo->LSN=SOUND_FILE_LSN;
	FileInfo->Size=SOUND_FILE_SIZE;
	FileInfo->Source=(unsigned int)SOUND_FILE_SOURCE;
	FileInfo->ATOpenFlag=SOUND_FILE_AT_OPEN;
	FileInfo->ATOpenID=SOUND_FILE_AT_ID;
	FileInfo->Counter=(unsigned int)SOUND_FILE_COUNTER;
	return((unsigned char)SOUND_FILE_COUNTER);
}

/**********************************************************************************
SOUND_SetEEWriteAddress
	Sets address where data will be loaded into EE RAM (using SOUND_LOAD_EE as the
	loop parameter when calling SOUND_PlayStream)
	This address is automatically updated after each write of data.

	Requires:	eeaddr		Address of EE RAM
x
***********************************************************************************/
void SOUND_SetEEWriteAddress(u_int eeaddr)
{

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_EEAddrSet=1;	/* Mark as EE updated (Stop CopyIOPBuffer from overwriting) */
	SOUND_EE_ADDR=eeaddr;

	SOUND_StartCommand(SND_SET_EE_START_ADDRESS);
	SOUND_AddLongData(eeaddr);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetIOPWriteAddress
	Sets address where data will be loaded into IOP RAM (using SOUND_LOAD_IOP as the
	loop parameter when calling SOUND_PlayStream)
	This address is automatically updated after each write of data.

	Requires:	iopaddr		Address of IOP RAM
x
***********************************************************************************/
void SOUND_SetIOPWriteAddress(u_int iopaddr)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_IOPAddrSet=1;	/* Mark as EE updated (Stop CopyIOPBuffer from overwriting) */
	SOUND_IOP_ADDR=iopaddr;

	SOUND_StartCommand(SND_SET_IOP_START_ADDRESS);
	SOUND_AddLongData(iopaddr);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetFileIDInfo
	Same as the SOUND_GetFileInfo command, but requires just the ID of a file which
	has previously been set with either SOUND_SetFileInfo or SOUND_CreateFileInfo.

	Requires:	FileID		ID of file (see SOUND_SetFileInfo)
	Returns:	TagID		See SOUND_GetFileInfo for more information
***********************************************************************************/
u_char SOUND_GetFileIDInfo(int FileID)
{
u_char TagID;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	TagID=SOUND_GetNextInfoCounter();
	SOUND_StartCommand(SND_GET_FILE_ID_INFO);
	SOUND_AddData((short)TagID);	/*Counter); */
	SOUND_AddLongData((unsigned int)FileID);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(TagID);
}

/**********************************************************************************
SOUND_TransIOPToSPU
	Transfers IOP RAM to SPU RAM.
	Uses DMA channel 1, so it doesn't interfere with MutiStream (which uses DMA 0)

	Requires:	IOPAddress		Address of data in IOP RAM
				SPUAddress		Address to transfer data to in SPU RAM
				Size			Size of data to transfer

	This command blocks until the data has been transfered
x
***********************************************************************************/
void SOUND_TransIOPToSPU(u_int IOPAddress,u_int SPUAddress,u_int Size)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_USER_TRANSFER_STATUS=2;
	SOUND_StartCommand(SND_TRANS_IOP_TO_SPU);
	SOUND_AddLongData(IOPAddress);
	SOUND_AddLongData(SPUAddress);
	SOUND_AddLongData(Size);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_RestartFromCDError
	If a CD error has occured, all streams will be paused. Use this function to
	restart the streams if the CD is valid again (see SOUND_CheckCDError)

	Check the CDError parameter from SOUND_GetStreamInfo
	0 = all OK
	1 = error, streams paused

	This function is also called from SOUND_HandleCDErrors();
x
***********************************************************************************/
void SOUND_RestartFromCDError(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CD_ERROR_RESTART);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_CheckCDError
	If a CD error has occured, this function checks the state of the CD, returning
	0 in SOUND_CD_STAT is all is OK, 1 if not..

	Use the function: SOUND_GetStreamInfo to fill a buffer with relevent information
	regarding the CD status:

	if buffer->CDReady=0	CD system available
	if buffer->CDReady=1	CD system not available


If the CD system is not available, it could be due to it current seeking or loading,
a CD error or it has been ejected.

***********************************************************************************/
void SOUND_CheckCDError(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CD_CHECK);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_EXTERNAL_CDErrorPause
	If the user is using EXTERNAL loading (their own CD loading code) and an error
	occures during loading due to, say, the CD being ejected. Call this function to
	pause all audio streams.
	Once (if?) your CD is replaced back into the PS2 and you have checked to make
	sure the CD is valid, then the audio streams may be restarted.
	Note, that if you are loading MultiStream data when the CD is ejected, you will
	need to reload and send the data to MultiStream before restarting.

	Requires:	Nothing
	Returns:	Nothing
x
***********************************************************************************/
void SOUND_EXTERNAL_CDErrorPause(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CD_ERROR_PAUSE_EX);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_EXTERNAL_CDErrorRestart
	If the user is using EXTERNAL loading (their own CD loading code) and a CD
	is replaced after a being ejected, call this function to restart all audio
	streams.
	Note that if you were loading MultiStream data when an error occured, you need
	to reload this data and send it to the correct destination before calling this
	function

	Requires:	Nothing
	Returns:	Nothing
x
***********************************************************************************/
void SOUND_EXTERNAL_CDErrorRestart(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CD_ERROR_RESTART_EX);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_HandleCDErrors
	If using INTERNAL loading, the IOP code will automatically pause all
	audio streams if, say, the CD is ejected.
	The code below then waits for the CD to be replaced, and then restarts
	MultiStream.

	Requires:	Nothing
	Returns:	0		MultiStream system all running OK
				-1		CD tray open detected
				-2		CD replaced, but last load before error not complete
				n		CD error code (1=Read Error, 2=Tray Opened)

	Notes:
		Return codes for n are shown in the docs for IOPLibRef_Device_*.pdf
		Function: sceCdGetError:

		0x00 SCECdErNO		No error
		0x01 SCECdErABRT	Abort command received
		0x13 SCECdErNORDY	Processing command
		0x14 SCECdErCUD		Not appropriate for disc in drive
		0x20 SCECdErIPI		Sector position is abnormal
		0x21 SCECdERILI 	Number of read sectors is abnormal
		0x30 SCECdErREAD 	Problem occurred during read
		0x31 SCECdErTRMOPN 	Cover opened during playback
		0xfd SCECdErREADCF 	Read command issue failed
x
*****************************************************************************/
int ierror=0;
int eerror=0;
int SOUND_HandleCDErrors(void)
{
int a=-1;
static int ErrorCount=0;

//static u_int SOUND_CD_ERRORCODE=0;
//static u_int SOUND_CD_ERRORCOUNT=0;

//printf("error %x\n",SOUND_CD_ERRORCODE);

	if (ErrorCount!=(int)SOUND_CD_ERRORCOUNT)	// CD error occured?
	{
	}


	if (SOUND_CD_ERROR==1)	/* Has an error occured during loading? */
	{
		SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

		if (eerror==0)
			MSERROR(("\nMultiStream CD Error detected. All audio streams are now paused\n"));
		eerror=SOUND_CD_ERROR;

		SOUND_CheckCDError();			/* Check the status of the CD */
/* (Just incase it was called before this function..so do it again, to get good results) */
//		SOUND_GetStatus(-1,0);

/* Wait for SOUND_FlushIOPCommand to be processed	(may just have been called with non-blocking, so the while loop waits */
/* until this function has definately been processed. */
 		while (a<0)
		{
			a=SOUND_FlushIOPCommand(0);
		}
		if (SOUND_CD_STAT==0)	 	/* Is the CD valid yet? */
		{
			MSERROR(("CD is valid. IOP will now request last stream again..\n"));
/* Its ready again..Tell MultiStream to restart. At this point, the IOP code will attempt to reload the last block */
/* of data by re-requesting it in the usual way. Once the data is reloaded, all audio streams will be restarted. */
			SOUND_RestartFromCDError();
			SOUND_FlushIOPCommand(0);
		}
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	}
	else
	{
		eerror=0;
	}

/* If this flag is now clear, we know that all audio streams have restarted. Therefore everything is back to normal. */

	if ((ierror==1)&&(SOUND_CD_IERROR==0))
	{
		MSERROR(("Data requested during CD error is loaded\n"));
		MSERROR(("MultiStream fully functional again\n"));
	}
	ierror=SOUND_CD_IERROR;		/* Make a copy of MultiStream's internal error checking flag */

	if (SOUND_CD_ERROR==1)
		return(-1);
	if (SOUND_CD_IERROR==1)
		return(-2);

	return((int)SOUND_CD_ERRORCODE);
}


/*****************************************************************************
SOUND_ModifyEETransferAddress

	Modify currently playing streams EE transfer address (only works if stream
	is loading resident data into EE RAM).
	Should be called BEFORE a SOUND_GetStatus call, and only if a load has been
	requested for this stream (SOUND_IOP_REQUEST_LOAD = StreamChannel).
	Allows you to effectively handle double buffering of files, so that each
	load of data (which is the size of the stream buffer), can be sent to a
	specific EE address.

	Requires:	channel		Stream channel
				addr		EE address

	Returns:	0			OK
				-1			Stream channel out of range.

*****************************************************************************/
int SOUND_ModifyEETransferAddress(int channel, u_int addr)
{
	if ((channel<0)||(channel>=SOUND_LastStream))	/* Valid stream? */
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_EE_TRANS_ADDRESS);
	SOUND_AddData((short)channel);
	SOUND_AddLongData(addr);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_SFXDisableKeyOn

	Disables the KeyOn of any SFX.
	Any SOUND_PlaySFX command will set up everything as usual, but will not
	key the SPU channel on.
	Use SOUND_KeyOnChannel to play the SPU channel(s).
	Can be used so that multiple SFX can be played at exactly the same time,
	as SOUND_KeyOnChannel will key on all reqested SPU channels in one call.

*****************************************************************************/
void SOUND_SFXDisableKeyOn(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_KEY_ON_FLAG);
	SOUND_AddData((short)1);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_SFXEnableKeyOn

	Enables the KeyOn of any SFX.
	Allows SOUND_PlaySFX to also key on the SPU channel (default mode).

*****************************************************************************/
void SOUND_SFXEnableKeyOn(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_KEY_ON_FLAG);
	SOUND_AddData((short)0);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_KeyOnChannel
	This allows the keying on of a reqested SPU channel to happen.
	Use this if you have disabled the KeyOn in SOUND_PlaySFX (by calling
	SOUND_SFXDisableKeyOn).
	What this allows you to then do is play multiple SFX which all start at
	the same time.
	Example:
		SOUND_SFX_DisableKeyOn();
		SOUND_PlaySFX(1..);
		SOUND_PlaySFX(2..);
		SOUND_KeyOnChannel(1);
		SOUND_KeyOnChannel(2);
		SOUND_FlushIOPCommand(0);

	So, both SFX will be keyed on once the SOUND_FlushIOPCommand call has been processed.
	This is good for playing surround sound SFX..

	Requires:	SPUChan		Channel to KeyOn (0-47)

	Returns:	0			ok
				-1			SPU channel out of range

*****************************************************************************/
int SOUND_KeyOnChannel(int SPUChan)
{
	if ((SPUChan<0)||(SPUChan>47))	/* Valid SPU channel? */
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_KEY_ON_CHAN);
	SOUND_AddData((short)SPUChan);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_SetOutputPCM
	Sets the output mode to PCM.

	Requires:	Nothing
	Returns:	Nothing

*****************************************************************************/
void SOUND_SetOutputPCM(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_OUTPUT);
	SOUND_AddData((short)0);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_SetOutputBitStream
	Sets the output mode to Bitstream mode.

	Requires:	Nothing
	Returns:	Nothing

*****************************************************************************/
void SOUND_SetOutputBitStream(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_OUTPUT);
	SOUND_AddData((short)1);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_AppendStream
	Appends another File onto a currently playing stream.
	Requires:	stream		Stream channel
				FileID		FileID of file to stream
				flag		SOUND_APPEND_NOW = Swap to new file straight away
							SOUND_APPEND_AT_LOOP = Swap to new file when current playback reaches end
	Returns		0			OK
				-1			Stream channel out of range
				-2			Invalid Flag type

	Note, due to the buffering of the audio data, you may have to wait a while
	before your new audio file actually starts playing.
***********************************************************************************/
int SOUND_AppendStream(int stream,int fileID,int flag)
{
	if ((stream<0)||(stream>=SOUND_LastStream))	/* Valid stream? */
		return(-1);

	if ((flag!=SOUND_APPEND_NOW)&&(flag!=SOUND_APPEND_AT_LOOP))	/* Valid flag? */
		return(-2);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_APPEND_STREAM);
	SOUND_AddData((short)stream);
	SOUND_AddLongData((unsigned int)fileID);
	SOUND_AddData((short)flag);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_StreamAddSPUChannel
	Adds another SPU channel to play the same data as a stream. This can
	be used for surround sound, where more than one SPU channel is required to
	play the same stream data.
	A maximum of 3 Additional SPU channels can be gived to each audio stream.

	Requires:	StrmChan	Stream channel currently playing audio stream
				SPUChan	   	SPU Channel (0-47) (optional : | SOUND_MASTER_VOLn (n=0-3)
				VolL		Left volume
				VolR		Right volume

	Returns:	0			OK
				-1			SPU channel out of range
				-2			Stream channel out of range

	Note:	This function needs to be called straight after a SOUND_PlayStream
			function. As the SPU channel needs to be keyed on at the same
			time as the SPU channel passed in SOUND_PlayStream.
			Also note that the pitch and ADSR settings for the SPU channel
			passed in SOUND_PlayStream are also used for this SPU channel.

*****************************************************************************/
int SOUND_StreamAddSPUChannel(int StrmChan,int SPUChan,int VolL,int VolR)
{
u_int group;

// Updated 22 April 2003 - Now takes master volume group in SPU channel..

	group=SPUChan&0xffff0000;	/* Master volume subgroup */
	SPUChan&=0xffff;			/* SPU Channel */

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_SetChannelMasterVolumeGroup(SPUChan,(unsigned int)group);
	SOUND_SetSPUChannelVolume(SPUChan,(short)VolL,(short)VolR);
	VolL=SOUND_MasterL;
	VolR=SOUND_MasterR;

	if ((SPUChan<0)||(SPUChan>47))	/* Valid SPU channel? */
		return(-1);
	if ((StrmChan<0)||(StrmChan>=SOUND_LastStream))	/* Valid stream? */
		return(-2);

	SOUND_StartCommand(SND_STRM_ADD_CH);
	SOUND_AddData((short)StrmChan);
	SOUND_AddData((short)SPUChan);
	SOUND_AddData((short)VolL);
	SOUND_AddData((short)VolR);
	SOUND_EndCommand();
	return(0);
}

/**********************************************************************************
SOUND_SetStreamLoadSource
	Allows user to set each streams load source individually. So files can be loaded
	from either your own CD code (EXTERNAL) or MultiStreams own CD loading code
	(INTERNAL)

	Requires:	stream		Stream number
				source		SND_LOAD_INTERNAL (use MultiStreams CD code)
							SND_LOAD_EXTERNAL (use your own CD code)

	Returns:	0			ok
				-1			Invalid stream channel
				-2			Invalid source

***********************************************************************************/
int SOUND_SetStreamLoadSource(int stream,int source)
{
	if ((stream<0)||(stream>=SOUND_LastStream))	/* Valid stream? */
		return(-1);
	if ((source!=SND_LOAD_INTERNAL)&&(source!=SND_LOAD_EXTERNAL))	/* Valid SPU channel? */
		return(-2);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_STREAM_LOAD_SOURCE);
	SOUND_AddData((short)stream);
	SOUND_AddData((short)source);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_InitPCMPlayback

Initialises PCM playback. Allocates Stream buffer which is the same size (or twice
the size if you want to stream MONO files). Sets flags for stereo/mono and format
(WAV or PS2 PCM)

	Requires:		stream	Stream number to use for PCM playback
					format	SOUND_WAV or SOUND_PCM
					stereo	SOUND_STEREO or SOUND_MONO

***********************************************************************************/
int SOUND_InitPCMPlayback(int stream, int format, int stereo)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_PCM);
	SOUND_AddData((short)stream);
	SOUND_AddData((short)format);
	SOUND_AddData((short)stereo);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_InitPCMPlaybackNoStream

Initialises PCM playback. Allocates Stream buffer which is a given size (rather than
the size depending on a stream buffer)

	Requires:		size	size (in bytes) of buffer.
					mode	SOUND_PCM or SOUND_BitStream

	Returns:		0		OK
					-1		Error

	Notes:			size must be a multiple of 2048.
***********************************************************************************/
int SOUND_InitPCMPlaybackNoStream(u_int size,u_int mode)
{
	if (size<2048)	/* Size too small? */
	{
		MSERROR(("SOUND_InitPCMPlayBackNoStream\n"));
		MSERROR(("Size 0x%x is too small. Must be 2048 or greater\n",size));
		return(-1);
	}
	else if ((size&0x7ff)!=0)	/* Size a multiple of 2048? */
	{
		MSERROR(("SOUND_InitPCMPlayBackNoStream\n"));
		MSERROR(("Size 0x%x is not a multiple of 2048\n",size));
		return(-1);
	}
	if ((mode!=SOUND_PCM)&&(mode!=SOUND_BITSTREAM))
	{
		MSERROR(("SOUND_InitPCMPlayBackNoStream\n"));
		MSERROR(("Mode (0x%x) is neither SOUND_PCM or SOUND_BITSTREAM\n",mode));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_PCM_NO_STREAM);
	SOUND_AddLongData(size);
	SOUND_AddData((short)mode);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_ClosePCMPlayback
	Free IOP RAM PCM buffer. Stops any PCM playback. Stops PCM callbacks.
	Stops a stream if its used for PCM playback
	(Thanks Borden)
***********************************************************************************/
void SOUND_ClosePCMPlayback(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CLOSE_PCM_PLAYBACK);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_PlayPCM

Starts playing PCM data
***********************************************************************************/
void SOUND_PlayPCM(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_PLAY_PCM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_StopPCM

Stops playing PCM data
***********************************************************************************/
void SOUND_StopPCM(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_STOP_PCM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetPCMInfo

Fills a SOUND_PCM_INFO buffer with relevent PCM information:

void SOUND_GetPCMInfo(SOUND_PCM_INFO *PCMInfo)

	Requires:	PCMInfo					Pointer to a SOUND_PCM_INFO structure
	Returns:	PCMInfo->IOPAddress		IOP Address of PCM data buffer
				PCMInfo->Size			Size of PCM data buffer
				PCMInfo->IOPCurrent		Current playback address of PCM data
				PCMInfo->Status			SOUND_PCM_ON (playing)
										SOUND_PCM_OFF (not playing)
										SOUND_PCM_BUFFER_NOT_ALLOCATED (No PCM buffer allocated)
***********************************************************************************/
void SOUND_GetPCMInfo(SOUND_PCM_INFO *PCMInfo)
{
	PCMInfo->Status=SOUND_PCM_STATUS;	/* Current PCM playback status */
	PCMInfo->IOPAddress=SOUND_PCM_IOP_ADDR;	/* IOP PCM buffer address */
	PCMInfo->Size=SOUND_PCM_SIZE;		/* IOP PCM buffer size */
	PCMInfo->IOPCurrent=SOUND_PCM_CURRENT_ADDR;	/* IOP PCM playback current address */
}

/**********************************************************************************
SOUND_SetPCMType
Sets PCM playback type (WAV or PS2 PCM format, Mono or Stereo)

	Requires:	Format	SOUND_WAV or SOUND_PCM
				Stereo	SOUND_MONO or SOUND_STEREO

***********************************************************************************/
void SOUND_SetPCMType(int Format, int Stereo)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_PCM_TYPE);
	SOUND_AddData((short)Format);
	SOUND_AddData((short)Stereo);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetPCMVolume
Sets the volume for PCM playback

	Requires:	VolL		Left volume (0-0x7fff)
				VolR		Right volume (0-0x7fff)

***********************************************************************************/
void SOUND_SetPCMVolume(int VolL,int VolR)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_PCM_VOLUME);
	SOUND_AddData((short)VolL);
	SOUND_AddData((short)VolR);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetGroupMasterVolume
	Sets the master left and right volume for a volume "group".
	Each stream or SFX can be directed to one of four volume master groups.
	Each master group has its own overall volume.
	This allows you to, for example, group together SFX into one group, music into
	another and so on. Then have their overall master volumes controlled seperately.
	This master volume level can be part of your option screen volume settings.

	Requires:	group		SOUND_MASTER_VOLn (n=0-3)
				VolL		Left volume (0-4096)
				VolR		Right volume (0-4096)

	Returns:	0			OK
				-1			group out of range
				-2			Left Volume scale out of range
				-3			Right Volume scale out of range

	Note that the Volume levels are scale factors. Passing 0 give 0 volume, passing
	4096 will give full volume (ChannelVolume=(ChannelVolume*)scale/4096)
***********************************************************************************/
int SOUND_SetGroupMasterVolume(u_int group, u_int VolL, u_int VolR)
{
	if (((group>>16)>4)||(group==SOUND_MASTER_VOL_OFF))
	{
		MSERROR(("SOUND_SetGroupMasterVolume\n"));
		MSERROR(("Group 0x%x out of range\n",group>>16));
		return(-1);
	}
	if (VolL>SOUND_MASTER_VOL_FULL)	/* Left Vol in range? */
	{
		MSERROR(("SOUND_SetGroupMasterVolume\n"));
		MSERROR(("Left Volume (0x%x) out of range (must be 0-0x1000)\n",VolL));
		return(-2);
	}
	if (VolR>SOUND_MASTER_VOL_FULL)	/* Right Vol in range? */
	{
		MSERROR(("SOUND_SetGroupMasterVolume\n"));
		MSERROR(("Right Volume (0x%x) out of range (must be 0-0x1000)\n",VolR));
		return(-3);
	}

	SOUND_MasterVolumeLeft[(group>>16)-1]=(short)VolL;		/* Set subgroup volume */
	SOUND_MasterVolumeRight[(group>>16)-1]=(short)VolR;
	SOUND_MixVolumes((int)group);
	return(0);
}

/**********************************************************************************
SOUND_GetGroupMasterVolume
	Returns the current Left and Right master volumes for a specified group

	Requires:	group		SOUND_MASTER_VOLn (n=0-3)
	Returns:	-1			group out of range
				VolLR		(u_int)top 16 bits=LeftVol, bottom 16 bits = RightVol;

***********************************************************************************/
int SOUND_GetGroupMasterVolume(u_int group)
{
int VolLR;

	if (((group>>16)>4)||(group==SOUND_MASTER_VOL_OFF))
	{
		MSERROR(("Error: SOUND_GetGroupMasterVolume\n"));
		MSERROR(("Group value 0x%x not a master group number\n",group));
		return(-1);
	}
	VolLR=(SOUND_MasterVolumeLeft[(group>>16)-1])<<16;
	VolLR|=(SOUND_MasterVolumeRight[(group>>16)-1]);
	return(VolLR);
}

/**********************************************************************************
SOUND_MixVolumes
	Called from internal routines
	When modifying group master volumes, it is necessary to also modify any currently
	playing audio which is using the group specified.
	This routine checks all SPU channels and modifies their volume if required

	Requires:	group		SOUND_MASTER_VOLn (n=0-3)

***********************************************************************************/
void SOUND_MixVolumes(int group)
{
int i;

	for (i=0;i<48;i++)
	{
		if (((int)(SOUND_SPU_MasterVol[i])==group)&&(SOUND_SPUKeyStatus[i]!=SPU_KEY_STATUS_OFF))
		{
			SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

			SOUND_MixVol(group,i);
			SOUND_StartCommand(SND_SET_VOL_LR);
			SOUND_AddData((short)i);
			SOUND_AddData((short)SOUND_MasterL);
			SOUND_AddData((short)SOUND_MasterR);
			SOUND_EndCommand();

			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		}
	}
}

/**********************************************************************************
SOUND_SetChannelMasterVolumeGroup
	Called from internal routines.
	Sets the current group channel for a SPU channel.
	This is set when routines such as SOUND_PlaySFX or SOUND_PlayStream are called.

	Requires:	SPUChan		SPU channel (0-47)
				group		SOUND_MASTER_VOLn (n=0-3)

***********************************************************************************/
void SOUND_SetChannelMasterVolumeGroup(int SPUChan,u_int group)
{
	SOUND_SPU_MasterVol[SPUChan]=group;
}

/**********************************************************************************
SOUND_MixVol
	Called from internal routines.
	Scales both the left and right volumes for a given SPU channel.

	Requires:	group		SOUND_MASTER_VOLn (n=0-3)
				i			SPU channel (0-47)

	Returns:	*Nothing.

* Note that the returned volume levels are stored in the global variables:

SOUND_MasterL
SOUND_MasterR

***********************************************************************************/
void SOUND_MixVol(int group, int i)
{
	group>>=16;
	group--;

	SOUND_MasterL=SOUND_ScaleVol(SOUND_MasterVolumeLeft[group],SOUND_VolL[i]);
	SOUND_MasterR=SOUND_ScaleVol(SOUND_MasterVolumeRight[group],SOUND_VolR[i]);
}

/**********************************************************************************
SOUND_SetSPUChannelVolume
	Called from internal routines (SOUND_PlaySFX, SOUND_PlayStream and so on..)
	Scales the given volume using the group master volume settings.

	Requires:	SPUChan		SPU channel (0-47)
				VolL		Left volume (passed to SOUND_PlaySFX and so on)
				VolR		Right volume

	Returns:	*Nothing

* Note that the returned volume levels are stored in the global variables:

SOUND_MasterL
SOUND_MasterR

***********************************************************************************/
void SOUND_SetSPUChannelVolume(int SPUChan,short VolL,short VolR)
{
int group;


	SOUND_VolL[SPUChan]=VolL;
	SOUND_VolR[SPUChan]=VolR;

	group=(int)SOUND_SPU_MasterVol[SPUChan];
	if (group==SOUND_MASTER_VOL_OFF)
	{
		SOUND_MasterL=VolL;
		SOUND_MasterR=VolR;
		return;
	}

	SOUND_MixVol(group,SPUChan);
}

/**********************************************************************************
SOUND_ScaleVol
	Called from interal routines.
	Scales a volume using a passed scale value from a group.

	Requires:	MixVol		group scale value (0-4096)
				ChanVol		original SPU channel volume

	Returns:	ChanVol		Channel volume after scaling

Note that the code also takes care of the reverse phase channel volume values also.

***********************************************************************************/
int SOUND_ScaleVol(int MixVol,int ChanVol)
{
int phaseflag=0;

	if (ChanVol>=0x4000)				/* Is current volume using reverse phase? */
	{
		ChanVol=0x7fff-ChanVol;			/* Reverse phase to "normal" value */
		phaseflag=1;
	}

	ChanVol=(ChanVol*MixVol)/SOUND_MASTER_VOL_FULL;	/* Scale volume */
	if (phaseflag==1)
		ChanVol=0x7fff-ChanVol;			/* Reverse phase back */

	return(ChanVol);
}

/**********************************************************************************
SOUND_GetWAVHeaderInfo
	Returns info on WAV header

	Requires:	addr		EE address of WAV data
				*WAVInfo	Pointer to a SOUND_WAV_INFO structure

	Returns:	WAVInfo->Size		WAV data playback size
				WAVInfo->Offset		Offset past WAV header to start playing audio
				WAVInfo->Stereo		Stereo or mono flag (0x1234 if neither)
***********************************************************************************/
void SOUND_GetWAVHeaderInfo(u_int addr, SOUND_WAV_INFO *WAVInfo)
{
const SOUND_WAV_HEADER *wh;
int st;

	wh=(SOUND_WAV_HEADER *)addr;

	WAVInfo->Size= wh->dataHdr.chunkSize;
	WAVInfo->Offset = (unsigned int)&(wh->dataHdr.data) -(unsigned int)addr;
	st = wh->fmtHdr.channel;	/* 1=Mono, 2=Stereo */
	if (st==1)
		WAVInfo->Stereo = SOUND_MONO;
	else if (st==2)
		WAVInfo->Stereo = SOUND_STEREO;
	else
	{
		MSERROR(("SOUND_GetWAVHeaderinfo\n"));
		MSERROR(("Not sure if data is Stereo or Mono\n"));
		MSERROR(("May not be a valid WAV header?\n"));
		WAVInfo->Stereo = 0x1234;	/* Not stereo or mono... */
	}
}

/**********************************************************************************
SOUND_SetStreamStartPosition
	Sets the playback start position though a file.
	The offset passed is added to the offset which was passed to
	SOUND_SetFileOffsetAndPlaySize or SOUND_CreateFileInfo.
	This allows you to play back audio from a specific point through a file.
	Note that for ADPCM playback, the offset has to be a multiple of 16.

	Requires:	i		Stream number
				offset	Offset (in bytes) through file to start playing

***********************************************************************************/
int SOUND_SetStreamStartPosition(int i, u_int offset)
{
	if (i>=SOUND_LastStream)	/* Valid stream? */
	{
		MSERROR((">>>>> Error: SOUND_SetStreamStartPosition\n"));
		MSERROR(("Stream Channel (%d) out of range\n",i));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_STREAM_START_POS);
	SOUND_AddData((short)i);
	SOUND_AddLongData(offset);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_SetWaitUpdate
	Sets the current EE counter value to the same value as the IOPs counter.
	This allows SOUND_CheckForUpdate to return the correct result when it is
	first called.

	Requires:	Nothing
	Returns:	Nothing
*****************************************************************************/
void SOUND_SetWaitUpdate(void)
{
volatile int *ssp=(int*)((int)SOUND_MSUpdate|0x20000000);	/* Uncached mem. */

	SOUND_CurrentMSUpdate=(unsigned int)ssp[0];	/* EE counter = IOP counter */
}

/*****************************************************************************
SOUND_CheckForUpdate
	Checks to see if the IOP is capable of receiving more data.
	SOUND_SetWaitUpdate should be called before this function (normally outside
	of a while loop for example). Then, this function should be called inside
	the loop instead of a sceGsSyncV function.

	Requires:	Nothing
	Returns:	0	MultiStream IOP Thread is not updated since last check
				1	MultiStream IOP Thread has been updated since last check
*****************************************************************************/
int SOUND_CheckForUpdate(void)
{
volatile int *ssp=(int*)((int)SOUND_MSUpdate|0x20000000);

	if (ssp[0]!=(int)SOUND_CurrentMSUpdate)	/* Has the IOP MultiStream thread been called again? */
	{
		SOUND_CurrentMSUpdate=(unsigned int)ssp[0];	/* Yes (Copy IOP counter into current EE counter) */
		return(1);
	}
	return(0);	/* No */
}

/*****************************************************************************
SOUND_InitWaitUpdate
	Initialises the SOUND_Wait functions.
	Passes an address to the IOP for it to send back a counter value.
	This counter is increased each time the main MultiStream thread is
	executed on the IOP. This allows you to check this value on the EE to know
	when it is safe to call a SOUND_FlushIOPCommand. Very useful if you are waiting
	in a tight loop when transfering SFX, for example. This code used to be
	handled by waiting for the next frame (pre V5.2)

	Requires:	Nothing
	Returns:	Nothing
*****************************************************************************/
void SOUND_InitWaitUpdate(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_WAIT);
	SOUND_AddLongData((u_int)(u_int*)SOUND_MSUpdate);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_WaitForFileToLoad
	Waits until a file load has completed (ie. wait for the stream channel to turn off)
	Should only be called if using INTERNAL loading (obviously!).
	Works for both FASTLOAD and Non-FASTLoad loading.

	Requires:		chan	Stream channel
							(or chan|SOUND_CHAN_LOAD_ONLY)
					flag	SOUND_WAIT_COLD (calls both SOUND_InitWaitUpdate and SOUND_CloseWaitUpdate)
							SOUND_WAIT_HOT (does not call the above functions, as user has done so already)

	Returns:		-1		Failed
					0		OK
					1		EXTERNAL load required

	Notes:
		This function uses the SOUND_InitWaitUpdate, SOUND_SetWaitUpdate,SOUND_CheckForUpdate and
		SOUND_CloseWaitUpdate commands to know when it is safe to poll the IOP via SOUND_FlushIOPCommand.
		If the user passes SOUND_WAIT_COLD as a parameter, both SOUND_InitWaitUpdate and SOUND_CloseWaitUpdate
		will be called. If SOUND_WAIT_HOT is passed, neither of these two functions will be called, as it is
		presumed that the user has already called SOUND_InitWaitUpdate, and would not like the
		SOUND_CloseWaitUpdate function to be called at the end of this function. Basically, it just uses
		the update commands without either initialising or closing them.

		Passing SOUND_CHAN_LOAD_ONLY along with the channel number, will force this function to not allow
		any othe streams to load during this time. For example, by not using this flag, if you are loading
		an audio stream and a data stream, the audio stream may request a load midway through the loading
		of the data stream. Normally, SOUND_WaitForFileToLoad will allow such things to happen, so to
		keep the audio updated as required (to stop any audio skipping), but by passing SOUND_CHAN_LOAD_ONLY
		any other stream requests will be ignored. Note that the IOP side of MultiStream will eventually
		realise that this streams load request is not allowed and will cycle around to the next stream.

		Care must be taken to make sure that stream priorities will not cause any issues, where only
		allowing a single stream to load may mean that SOUND_WaitForFileToLoad seems to lock up.


*****************************************************************************/
int SOUND_WaitForFileToLoad(u_int chan,int flag)
{
SOUND_STREAM_INFO buffer;
SOUND_STREAM_INFO *StreamInfo;
int a;
int chanflag;


SOUND_EXTERNAL_INFO buf;
SOUND_EXTERNAL_INFO *EXT_Info;

	chanflag=(int)((chan&0xff00)>>8);
	chan&=0xff;

	if ((int)chan>=SOUND_LastStream)	/* Valid stream? */
	{
		MSERROR((">>>>> ERROR: SOUND_WaitforFileToLoad\n"));
		MSERROR(("Stream channel 0x%x out of range\n",chan));
		return(-1);
	}

	StreamInfo=&buffer;
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

/* Wait for any FlushIOPCommand to finish processing.. */

	a=SOUND_CheckRPCStatus();
	while(a==1)
	{
		a=SOUND_CheckRPCStatus();
	};

	if (flag==SOUND_WAIT_COLD)
	{
		SOUND_InitWaitUpdate();
	}

	SOUND_GetStatus(-1,0);			// MS7.1 FIX!! (Make sure we get valid stream data)
	a=SOUND_FlushIOPCommand(0);

	SOUND_SetWaitUpdate();
	SOUND_GetStreamInfo(chan,StreamInfo);	/* Get Stream info */

	EXT_Info=&buf;

  	while (StreamInfo->Status!=STREAM_STATUS_OFF)		// MS7.1 FIX!! (was==1)
  	{
		if (SOUND_CheckForUpdate()==1)	/* Is it safe to do another RPC without thrashing the IOP? */
		{
			a=SOUND_GetLoadRequest();
			if (a!=-1)
			{

printf("a=%x\n",a);
				if ((chanflag==0)||(a==(int)chan))
				{
					SOUND_GetEXTERNALInfo(EXT_Info);
					if (EXT_Info->Destination!=STREAM_LOAD_MS)		/* MultiStream EXTERNAL load required? */
					{
						if (flag==SOUND_WAIT_COLD)
						{
							SOUND_CloseWaitUpdate();
							SOUND_FlushIOPCommand(0);
						}
						SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
						return(a+1);
					}
					SOUND_GetStatus(a,0);
				}
			}
	  		SOUND_FlushIOPCommand(0);			/* Yes.. */
			SOUND_HandleCDErrors();
		}
		SOUND_GetStreamInfo(chan,StreamInfo);	/* Get Stream info */
	}

	if (flag==SOUND_WAIT_COLD)
	{
		SOUND_CloseWaitUpdate();
		SOUND_FlushIOPCommand(0);
	}
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}


void SOUND_WaitForCDFree(int flag)
{
int a;
SOUND_STREAM_INFO buffer;
SOUND_STREAM_INFO *StreamInfo;


	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	StreamInfo=&buffer;

	a=SOUND_CheckRPCStatus();
	while(a==1)
	{
		a=SOUND_CheckRPCStatus();
	};

	if (flag==SOUND_WAIT_COLD)
	{
		SOUND_InitWaitUpdate();
	}

	SOUND_GetStatus(-1,0);			// MS7.1 FIX!! (Make sure we get valid stream data)
	a=SOUND_FlushIOPCommand(0);

	SOUND_SetWaitUpdate();
	do{
		if (SOUND_CheckForUpdate()==1)	/* Is it safe to do another RPC without thrashing the IOP? */
		{
	  		SOUND_FlushIOPCommand(0);			/* Yes.. */
		}
		SOUND_GetStreamInfo(0,StreamInfo);	/* Get Stream info (channel not important)*/
	}while (StreamInfo->CDStatus==1);
	if (flag==SOUND_WAIT_COLD)
	{
		SOUND_CloseWaitUpdate();
		SOUND_FlushIOPCommand(0);
	}

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_CloseWaitUpdate
	Stops the IOP thread sending any more counter values to the specified EE
	address.
		Requires:	Nothing
		Returns:	Nothing
*****************************************************************************/
void SOUND_CloseWaitUpdate(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_WAIT);
	SOUND_AddLongData(0);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_StreamIgnoreVAGPitch

Ignores the VAG Header pitch value.
Normally, if a VAG header is read when playing an audio stream, its pitch value is
used as the default pitch setting for the required stream. By calling this after the
SOUND_PlayStream function, the pitch setting in the VAG header is ignored.
Note also, that if a VAG header is detected when playing back ADPCM audio as a stream,
the 48 bytes of header info is automatically skipped. BUT, when loading/transferring
VAG data to be used as SFX (ie. held in SPU RAM), the VAG header is not automatically
skipped.

	Requires:	i	Stream number
	Returns:	0	OK
				-1	Stream out of range
***********************************************************************************/
int SOUND_StreamIgnoreVAGPitch(int i)
{
	if (i>=SOUND_LastStream)	/* Valid stream? */
	{
		MSERROR((">>>>> Error: SOUND_StreamIgnoreVAGPitch\n"));
		MSERROR(("Stream Channel (%d) out of range\n",i));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_IGNORE_VAG_PITCH);
	SOUND_AddData((short)i);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_ReadyToLoad

Should be called if you are ever using EXTERNAL loading.
Checks to see if MultiStream wants data.
If it does, allow the load (if INTERNAL loading), or check to make sure load
information is valid before allowing an EXTERNAL load.


	Requires:	Nothing
	Returns:	SND_LOAD_INTERNAL	MultiStream INTERNAL load required
				SND_LOAD_EXTERNAL	MultiStream EXTERNAL load required
				-1					No stream data required
*****************************************************************************/
int SOUND_ReadyToLoad(void)
{
SOUND_EXTERNAL_INFO buf;
SOUND_EXTERNAL_INFO *EXT_Info;

	if (SOUND_IOP_REQUEST_LOAD==-1)		/* No request for more data..? */
	{
		SOUND_TempStream=-1;
		return(-1);
	}

	EXT_Info=&buf;
	SOUND_GetEXTERNALInfo(EXT_Info);
	if (EXT_Info->Destination==STREAM_LOAD_MS)		/* MultiStream INTERNAL load? */
	{
		SOUND_TempStream=SOUND_IOP_REQUEST_LOAD;
		SOUND_TempCounter=SOUND_IOP_DATA_CHECK;
		return(SND_LOAD_INTERNAL);
	}

	if (SOUND_TempCounter==SOUND_IOP_DATA_CHECK)	/* Same data already requested ? */
	{
		return(-1);
	}

	SOUND_TempStream=SOUND_IOP_REQUEST_LOAD;
	SOUND_TempCounter=SOUND_IOP_DATA_CHECK;
	return(SND_LOAD_EXTERNAL);
}

/*****************************************************************************
SOUND_LoadComplete

Call this after loading data (if using EXTERNAL mode).
Should be called if you are ever using EXTERNAL loading.

	Requires:	Pointer to a SOUND_EXTERNAL_INFO structure
	Returns:	0		Load allowed
				-1		Load not allowed

	Also:	EXT_Info->StreamRequest		Stream to load
			EXT_Info->RequestCount		Stream Counter

	These two values should be passed to SOUND_GetStatus if the load is allowed

	Notes:
	This function checks to see if the loaded data is still valid. For example,
	If you start loading data, and then request a stream to play a different file
	during this period, the data you have loaded into EE RAM will be no longer required.
*****************************************************************************/
int SOUND_LoadComplete(SOUND_EXTERNAL_INFO *EXT_Info)
{
	SOUND_GetEXTERNALInfo(EXT_Info);
	if ((SOUND_IOP_REQUEST_LOAD==SOUND_TempStream)&&	/* Stream data still valid? */
		(SOUND_IOP_DATA_CHECK==SOUND_TempCounter))
	{
		EXT_Info->StreamRequest=(unsigned int)SOUND_TempStream;		/* Yes.. */
		EXT_Info->RequestCount=SOUND_TempCounter;
		return(0);
	}
/* MultiStream requesting a different stream to what you have just loaded (probably due to */
/* a different stream starting on this stream channel, or the stream channel has stopped */
	return(-1);
}


/*------------------ DTS Specific -------------------- */

/*****************************************************************************
SOUND_Init_EE_DTS

	Initialise the DTS system on the EE (creates a thread and RPC callback).
	Also initialises the DTS library
	Requires the DTS middleware library to work.

	Requires:	DTSMode		SOUND_DTS_51	(5.1 audio)
							SOUND_DTS_40	(4.0 audio)
				Quality		0-100			(quality of audio..100=highest)
	Returns:	0			OK
				-1			Failed

	Note, see DTS documentation for more details

*****************************************************************************/

int permanentsize;
int SOUND_Init_EE_DTS(u_int DTSMode,int quality)
{

#if SOUND_DTS_ENABLE

int temporarysize;
int errorcode;
u_int mode;

	if (DTSMode==SOUND_DTS_40)		/* 4.0 DTS audio? */
		mode=DTS_MODE_L_R_LS_RS;
	else if (DTSMode==SOUND_DTS_51)	/* 5.1 DTS audio? */
		mode=DTS_MODE_C_L_R_LS_RS_LFE;
	else
	{
		MSERROR(("Error: SOUND_Init_EE_DTS\n"));
		MSERROR(("DTSMode (0x%x) not valid\n",DTSMode));
		return(-1);
	}

	if ((quality<0)||(quality>100))	/* Quality in range? */
	{
		MSERROR(("Error: SOUND_Init_EE_DTS\n"));
		MSERROR(("Quality (%d) out of range (must be 0-100)\n",quality));
		return(-1);
	}

	SOUND_DTS_SUR_MODE=DTSMode;	/* Copy DTS surround mode. */

	SOUND_StartCommand(SND_SET_IOP_DTS_INFO);	/* Request IOP to setup correct mode */
	SOUND_AddData((short)DTSMode);
	SOUND_EndCommand();

    /* Query the memory requirements for the DTS encoder. */
    errorcode = DTS_querymemsize(mode,quality, &permanentsize,&temporarysize);

/*    scePrintf("DTS_querymemsize() permanent size is %i, temporary size is %i, returned %i\n",  */
/*        permanentsize, temporarysize, errorcode); */


/****************
MAYBE RETURN HERE, AND FILL A STRUCTURE WITH permanentsize & temporarysize.
THEN, LET THE USER MALLOC THIS MEMORY, AND THEN CALL THE THE REST OF THE FOLLOWING CODE..
****************/

//    DTS_ppermanentbuf = (void *)malloc(permanentsize);
//    DTS_ptemporarybuf = (void *)malloc(temporarysize);
    DTS_ppermanentbuf = (void *)SOUND_AllocMemEE( 4, permanentsize );
    DTS_ptemporarybuf = (void *)SOUND_AllocMemEE( 4, temporarysize );

    /* Initialize the DTS encoder. */
    errorcode = DTS_init(mode,quality,DTS_ppermanentbuf);

    DTS_inited = 1;

	SOUND_CreateDTS_RPCThread();	/* Start DTS EE thread */
#else
(void)quality;
(void)DTSMode;
	SOUND_DisplayDTSMessage();
#endif
	return(0);
}

/*****************************************************************************
SOUND_SetDTSMode
	Sets DTS..

	Requires mode	DTS_INIT	Initialise DTS system/thread
					DTS_START	Starts the whole callbacks..
					DTS_OFF		stops DTS
			flag	0			DTS_STOP - shut down system, stop callback and blocktrans
					1			as with (0), but will also close DTS IOP thread
					2			only close DTS thread
					spuchan		0-47 SPU channel required when using DTS_START

	Note. DTS requires the use of DMA channel 0 for its own DMA callbacks.
	This leaves MultiStream only the use of DMA channel 1.
	Also note that no hardware reverb can be used in this mode.

	When using DTS_START, the initialisation of the block transfer requires
	a SPU channel to play white noise for a short time. So, you need to specify
	which SPU channel you want this to use.

*****************************************************************************/
void SOUND_SetDTSMode(int mode,int flag)
{
#if SOUND_DTS_ENABLE

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_INIT_DTS);
	SOUND_AddData((short)mode);
	SOUND_AddData((short)flag);
	SOUND_EndCommand();

	if (mode==SOUND_DTS_OFF)		/* Turning DTS OFF? */
		mode=SOUND_DTS_CLOSING;
	SOUND_DTS_STATUS=mode;			/* Set mode on EE side (will be overwritten from IOP) */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

#else
(void)flag;
(void)mode;
	MSERROR(("ERROR: SOUND_SetDTSMode\n"));
	SOUND_DisplayDTSMessage();
#endif
}

/*****************************************************************************
SOUND_GetDTSStatus

	Returns the current status of the DTS system to the user:

	Requires:	Nothing
	Returns:	0			DTS_OFF
				1			DTS_ON
				4			DTS_CLOSING
				5			DTS_READY_TO_DIE
				6			DTS_START_FAILED

*****************************************************************************/
int SOUND_GetDTSStatus(void)
{
#if SOUND_DTS_ENABLE
	return(SOUND_DTS_STATUS);
#else
	MSERROR(("ERROR: SOUND_GetDTSStatus\n"));
	SOUND_DisplayDTSMessage();
	return(SOUND_DTS_OFF);
#endif
}

/*****************************************************************************
SOUND_DTS_Thread
	DTS main thread loop
*****************************************************************************/
void SOUND_DTS_Thread (void)
{
#if SOUND_DTS_ENABLE
int threadid;

	threadid = GetThreadId();
    sceSifSetRpcQueue(&DTS_rpcqd, threadid);
    sceSifRegisterRpc(&DTS_rpcsd, DTS_RPC_DEVICE, DTS_RPC, (void *)DTS_rpcarg, 0,
        0, &DTS_rpcqd);
	sceSifRpcLoop(&DTS_rpcqd);
#else
	MSERROR(("ERROR: SOUND_DTS_Thread\n"));
	SOUND_DisplayDTSMessage();
#endif
}

#if SOUND_DTS_ENABLE
char *DTS_Stack;
#endif

/*****************************************************************************
SOUND_CreateDTS_RPCThread
	Creates DTS thread.
	Sets the main thread priority to 10
	Sets DTS priority to 8 (HAS to be high!)
*****************************************************************************/
int SOUND_CreateDTS_RPCThread (void)
{
#if SOUND_DTS_ENABLE
struct ThreadParam param;
int th;
void *addr;

//    addr=memalign(64,8*1024);
	addr=(void *)SOUND_AllocMemEE(64,8*1024);
	DTS_Stack=(void *)addr;

/* Set Main Thread priority to 10 */
	ChangeThreadPriority(GetThreadId(),10);

    param.entry			= (void*)SOUND_DTS_Thread;
    param.initPriority 	= 8;	/* Give DTS thread a higher priority than the main thread. */
	param.stack			= DTS_Stack;
    param.stackSize		= 1024*8;
    param.gpReg			= &_gp;

    th = CreateThread (&param);
    if (th > 0)
    {
		StartThread (th, 0);
		return 0;
    }
    else
    {
		return 1;
    }
#else
	MSERROR(("ERROR: SOUND_CreateDTS_RPCThread\n"));
	SOUND_DisplayDTSMessage();
	return(1);
#endif
}

/*****************************************************************************
DTS_RPC
	Handles encoding PCM data into DTS format.
	Requires DTS middleware libraries to work.

*****************************************************************************/
#if SOUND_DTS_ENABLE
sceVu0FVECTOR ACC;
#endif

void *DTS_RPC(unsigned int command, void *pdata, int size)
{
#if SOUND_DTS_ENABLE

short *pppcm[6];
int i,j;
static sceDevVu0Cnd VU0_SaveData;

	if (SOUND_DTS_SUR_MODE==SOUND_DTS_40)		/* DTS 4.0 audio? */
		j=4;
	else
		j=6;		/* DTS 5.1 audio.. */

    switch (command)
    {
        case DTS_RPC_ENCODE:

            if (DTS_inited)
            {
                for (i = 0; i < j; i++)
				{
                    pppcm[i] = (short *)((char *)pdata + i * 1024);
				}

sceDevVu0Pause();
sceDevVu0GetCnd(&VU0_SaveData); /* SAVE THE VU0  registers */

asm __volatile__("
SQC2 $vf00, 0x0(%0)
SQC2 $vf01, 0x10(%0)
SQC2 $vf02, 0x20(%0)
SQC2 $vf03, 0x30(%0)
SQC2 $vf04, 0x40(%0)
SQC2 $vf05, 0x50(%0)
SQC2 $vf06, 0x60(%0)
SQC2 $vf07, 0x70(%0)
SQC2 $vf08, 0x80(%0)
SQC2 $vf09, 0x90(%0)
SQC2 $vf10, 0xa0(%0)
SQC2 $vf11, 0xb0(%0)
SQC2 $vf12, 0xc0(%0)
SQC2 $vf13, 0xd0(%0)
SQC2 $vf14, 0xe0(%0)
SQC2 $vf15, 0xf0(%0)
SQC2 $vf16, 0x100(%0)
SQC2 $vf17, 0x110(%0)
SQC2 $vf18, 0x120(%0)
SQC2 $vf19, 0x130(%0)
SQC2 $vf20, 0x140(%0)
SQC2 $vf21, 0x150(%0)
SQC2 $vf22, 0x160(%0)
SQC2 $vf23, 0x170(%0)
SQC2 $vf24, 0x180(%0)
SQC2 $vf25, 0x190(%0)
SQC2 $vf26, 0x1a0(%0)
SQC2 $vf27, 0x1b0(%0)
SQC2 $vf28, 0x1c0(%0)
SQC2 $vf29, 0x1d0(%0)
SQC2 $vf30, 0x1e0(%0)
SQC2 $vf31, 0x1f0(%0)
"
:: "r"(&VU0_SaveData));

asm __volatile__("
VMADDx $vf08, $vf00, $vf00x
SQC2 $vf08, 0x0(%0)"
:: "r"(ACC));

                if (DTS_encode(pppcm, DTS_packet, (void *)DTS_ptemporarybuf)
                    != DTS_OK)
                {
                    MSERROR(("Failed DTS encoding.\n"));
                }

asm __volatile__("
LQC2 $vf08, 0x0(%0)
VADDAx ACC, $vf08, $vf00x
"
:: "r"(ACC));
sceDevVu0PutCnd(&VU0_SaveData); /*  RESTORE THE VUO  register values */
sceDevVu0Continue();

                FlushCache(0);
			}
            break;

        default:
            break;
    }

    /* Return the DTS data to the IOP. */
    return ((void *)DTS_packet);
#else
(void)size;
(void)pdata;
(void)command;
	return ((void *)0);
#endif
}

void SOUND_DisplayDTSMessage(void)
{
	MSERROR(("ERROR: SOUND_Init_EE_DTS\n"));
	MSERROR(("DTS not enabled. Set SOUND_DTS_ENABLE to 1 (in Sound.C)\n"));
	MSERROR(("The DTS encode routine that you are attempting to call\n"));
	MSERROR(("is a propriety technology. In order to utilize this\n"));
	MSERROR(("technology a licensing agreement is required.\n"));
	MSERROR(("The DTS SDK can be obtained from DTS.\n"));
}

/*****************************************************************************
SOUND_InitINTERNAL_RPC
	Called by SOUND_InitFastLoad
*****************************************************************************/
void SOUND_InitFastLoad_RPC(void)
{
int threadid;

	threadid = GetThreadId();
    sceSifSetRpcQueue(&SOUND_rpcqd, threadid);
    sceSifRegisterRpc(&SOUND_rpcsd, SOUND_FASTLOAD_RPC_DEVICE, SOUND_FASTLOAD_RPC, (void *)SOUND_rpcarg, 0,
        0, &SOUND_rpcqd);
	sceSifRpcLoop(&SOUND_rpcqd);
}

/*****************************************************************************
SOUND_InitFastLoad
	Creates a new thread/RPC for handling fast loading if using INTERNAL loading.
	Also requests the IOP to bind this thread to complete IOP->EE communication.

	Requires:	u_int ThreadPriority		Priority with which you require the RPC thread to run
				u_int addr		address of area to be used as a stack buffer
				u_int size				size of stack buffer

	Returns:	0		ok
				-1		failed

	Note:
		FastLoad needs a higher thread priority than your main thread.
		To change your thread priority, to, say, 10. call:
			ChangeThreadPriority(GetThreadId(),value);

		Then, you can call this routine, passing 9 as a priority.
*****************************************************************************/

int SOUND_InitFastLoad(int ThreadPriority,int addr, int size)
{
struct ThreadParam param;


	SOUND_INTERNALStack= (char*)addr;

	param.entry			=  (void (*)(void *))SOUND_InitFastLoad_RPC;
    param.initPriority 	= ThreadPriority;	/* Thread MUST be a higher priority than the main thread. */
	param.stack			= SOUND_INTERNALStack;
    param.stackSize		= size;
    param.gpReg			= &_gp;

	SOUND_FastLoad.EEStatus=SOUND_FASTLOAD_OFF;
    SOUND_RPC_th = CreateThread (&param);

    if (SOUND_RPC_th > 0)
    {
		SOUND_FastLoad.EEStatus=SOUND_FASTLOAD_ON;
		StartThread (SOUND_RPC_th, 0);
		SOUND_FastLoad.IOPStatus=SOUND_FASTLOAD_OFF;

		SOUND_StartCommand(SND_INTERNAL_FASTLOAD);
		SOUND_AddData((short)SOUND_FASTLOAD_BIND_RPC);
		SOUND_AddData((short)SOUND_FASTLOAD_OFF);
		SOUND_EndCommand();
		return (0);
    }
	MSERROR(("SOUND_InitINTERNALFastLoad\n"));
	MSERROR(("Failed to create thread\n"));
	return (-1);
}

/*****************************************************************************
SOUND_SetFastLoadCallback
	Sets a EE routine to be called when a packet of data has been sent from
	IOP to EE.

	Requires:	(void*)Function		Pointer to function
									(Or NULL to turn callback OFF)
	Returns:	Nothing

	Notes:
	Your callback routine needs to return the following:

	SOUND_FASTLOAD_STOP = Don't allow any more loading (Stream goes into a wait state)
	SOUND_FASTLOAD_CONTINUE = Allow loading to contine
	0 - Do nothing (use last FASTLOAD mode to know if to continue loading data or not)
	EE Address - Passing an EE address (which must be a multiple of 16. (64 Preferably!)
		will force the next IOP->EE transfer to use this address. (Thanks to Ben Diamond for this one)

	Note that if you use SOUND_FASTLOAD_STOP, you can continue loading by calling
	SOUND_GetStatus(StreamChannel,0);

*****************************************************************************/
void SOUND_SetFastLoadCallback(SOUND_RPCFunc callback)
{
	SOUND_UserRPC_Callback=callback;
}

/*****************************************************************************
SOUND_FASTLOAD_RPC
	RPC called by IOP if using FASTLOAD (INTERNAL loading only)

*****************************************************************************/
void *SOUND_FASTLOAD_RPC(unsigned int command, void *pdata, int size)
{
u_int *ptr;
int ret;
int addr;

(void)size;
(void)command;

	SOUND_FLoad=1;	/* Set flag to say that more data has been transferred to EE */

	ptr = (u_int *)((char *)pdata);			/* Point to data packet sent over from IOP RPC */

	SOUND_FastLoad.StreamChannel=*ptr++;	/* Stream channel used for loading data */
	SOUND_FastLoad.TotalSize=*ptr++;		/* Total size currently transferred */
	SOUND_FastLoad.LoadSize=*ptr++;			/* Size of last load of data */
	SOUND_FastLoad.Status=*ptr++;			/* Current Status (0=still running, 1=loading completed) */
	SOUND_FastLoad.EEAddress=*ptr++;		/* EE address last data packet has been transferred to */
	SOUND_FastLoad.Counter=*ptr++;
	SOUND_FastLoad.FileID=*ptr;

	if (SOUND_FastLoad.StreamChannel==999)	/* performing SOUND_FASTLOAD_INVALID_DCACHE */
	{
		InvalidDCache((void *)SOUND_FastLoad.EEAddress,(void *)(SOUND_FastLoad.EEAddress+SOUND_FastLoad.LoadSize-1));
	    return ((void *)SOUND_packet);
	}

	if (SOUND_UserRPC_Callback!=NULL)
	{
		SOUND_FastLoadInCallback=1;		/* Set flag for SOUND_GetFastLoadInfo */
		SOUND_packet[2]=0;				// Set if user calls SOUND_SetFastLoadCallback_NextLoadEE
		SOUND_packet[6]=0;				// Set if user calls SOUND_SetFastLoadCallback_OAPS
		ret=SOUND_UserRPC_Callback();	/* Call user callback */
		addr=(int)(ret&0xfffffff0);			/* Mask off STOP/CONTINUE flags.. */
		ret&=0xf;
		SOUND_packet[1]=(u_int)addr;	/* Mask off EE address */
		SOUND_FastLoadInCallback=0;		/* Clear flag for SOUND_GetFastLoadInfo */

		if ((ret==SOUND_FASTLOAD_STOP)||(ret==SOUND_FASTLOAD_CONTINUE))	/* Check user callback return code */
		{
			SOUND_FastLoad.AllowLoad=(unsigned int)ret;	/* Set new load type. */
		}
	}
	else
		SOUND_packet[1]=0;				/* THANKS DAVE LOMAS! 22/Apr/2003 */


	if (SOUND_FastLoad.AllowLoad==SOUND_FASTLOAD_SINGLE)	/* EE controls loading AFTER the next load? */
		SOUND_FastLoad.AllowLoad=SOUND_FASTLOAD_STOP;		/* Yes..No more transfers allowed after this one */

	if (SOUND_FastLoad.AllowLoad!=SOUND_FASTLOAD_STOP)
	{
		SOUND_packet[0]=1;		/* Allow IOP to load */
	}
	else
	{
		SOUND_packet[0]=0;		/* Don't allow IOP to load */
	}

    return ((void *)SOUND_packet);
}


/*****************************************************************************
SOUND_SetFastLoadCallback_LoadFile

	This routine can ONLY be called from a FastLoad callback routine.
	Sets up the next file to be loaded to EE RAM once the current file has finished. This allows
	you to automatically start loading the next file once the current one has loaded via the FastLoad
	callback routine.
	Just call this in the callback routine, and the relevent info will be sent back to the IOP
	at the end of the callback, and then, this info will be used once the current file has completed
	its load.

	Requires:		dest		STREAM_LOAD_EE
								STREAM_LOAD_IOP
								STREAM_LOAD_SPU (or STREAM_RESIDENT)
					FileID		File to load
					Address		Address to load data to	(* pass 0 to use last address)

	Returns:		0			OK
					-1			Not called from FastLoad callback routine


* Note: The load addresses are updated each time a file is loaded, so if you want
to load multiple files at consecutive RAM addresses, there is no need to set
an address after the first call.
***********************************************************************************/
int SOUND_SetFastLoadCallback_LoadFile(u_int dest,u_int FileID,u_int Address)
{
	if (SOUND_FastLoadInCallback==0)	/* In a FastLoad callback ?*/
		return(-1);
	SOUND_packet[6]=1;
	SOUND_packet[7]=dest;
	SOUND_packet[8]=FileID;
	SOUND_packet[9]=Address;
	return(0);
}

/*****************************************************************************
SOUND_SetFastLoadCallback_FOAPS

	This routine can ONLY be called from a FastLoad callback routine.
	Performs the equivelent of SOUND_SetFileOffsetAndPlaySize.
	See info on SOUND_SetFileOffsetAndPlaySize for more info.
	(FOAPS = FileOffsetAndPlaySize)

	Requires:		FileID		ID of file to modify
					Offset		Offset into file to start loading from (uses default if Size=0)
					Size		Size of data to load from file (uses default if Size=0)

	Notes:	The default offset and size are the values passed to either SOUND_SetFileInfo or
			SOUND_CreateFileInfo.

	Returns:		0			OK
					-1			Not called from FastLoad callback routine

***********************************************************************************/
int SOUND_SetFastLoadCallback_FOAPS(u_int FileID,u_int Offset,u_int Size)
{
	if (SOUND_FastLoadInCallback==0)	/* In a FastLoad callback ?*/
		return(-1);
	SOUND_packet[2]=1;
	SOUND_packet[3]=FileID;
	SOUND_packet[4]=Offset;
	SOUND_packet[5]=Size;
	return(0);
}

/*****************************************************************************
SOUND_SetFastLoadMode

	Sets the current mode in which fastload will handle loading data.

	Requires:	type	SOUND_FASTLOAD_STOP	(don't allow IOP to automatically load)
						SOUND_FASTLOAD_SINGLE (do a single bank load/transfer and then wait)
						SOUND_FASTLOAD_CONTINUE (constantly load data to EE)
						SOUND_FASTLOAD_OFF (turns IOP fastloading OFF)
						SOUND_FASTLOAD_ON (turns IOP fastloading ON)
						SOUND_FASTLOAD_INVALID_DCACHE_ON (invalidates DCache for required EE RAM before
						transfering of data from IOP to EE)
						SOUND_FASTLOAD_INVALID_DCACHE_OFF (doesn't invalidate DCahce for required EE RAM)

	Returns:	0		ok
				-1		failed

	Notes:		When transfering data from IOP to EE, it is possible to get data errors if the EE has
				not performed either a FlushDCache(0) or a InvaidDCache (passing the correct EE address
				and size). By using SOUND_FASTLOAD_INVALID_DCACHE, an EE callback will be called BEFORE
				the data is transfered, which will invalidate the EE RAM area where the data will be
				transfered to.
*****************************************************************************/
int SOUND_SetFastLoadMode(int type)
{
	if ((type==SOUND_FASTLOAD_OFF)||(type==SOUND_FASTLOAD_ON)||(type==SOUND_FASTLOAD_INVALID_DCACHE_ON)||
		(type==SOUND_FASTLOAD_INVALID_DCACHE_OFF))
	{
		if (SOUND_FastLoad.EEStatus==SOUND_FASTLOAD_ON)
		{
			SOUND_FastLoad.IOPStatus=(unsigned int)type;
			SOUND_StartCommand(SND_INTERNAL_FASTLOAD);
			SOUND_AddData((short)SOUND_FASTLOAD_ON_OFF);
			SOUND_AddData((short)type);
			SOUND_EndCommand();
			if ((type!=SOUND_FASTLOAD_INVALID_DCACHE_ON)&&(type!=SOUND_FASTLOAD_INVALID_DCACHE_OFF))
				SOUND_FastLoad.AllowLoad=SOUND_FASTLOAD_CONTINUE;
			return(0);
		}
		else	/* SOUND_InitINTERNALFastload not called (or failed) */
		{
			MSERROR(("SOUND_SetINTERNALFastLoad\n"));
			MSERROR(("EE Thread not initialised\n"));
			return(-1);
		}
	}

	if ((type!=SOUND_FASTLOAD_STOP)&&(type!=SOUND_FASTLOAD_SINGLE)
		&&(type!=SOUND_FASTLOAD_CONTINUE))
	{
		MSERROR(("SOUND_SetINTERNALFastLoad\n"));
		MSERROR(("type (0x%x) not valid\n",type));
		return(-1);
	}
	SOUND_FastLoad.AllowLoad=(unsigned int)type;
	return(0);
}


/*****************************************************************************
SOUND_CloseFastLoad
	Closes thread/RPC.
	Returns:	0		ok
				-1		failed
*****************************************************************************/
int SOUND_CloseFastLoad(void)
{
int ret;
sceSifServeData *sifret;

	if (SOUND_FastLoad.EEStatus==SOUND_FASTLOAD_ON)
	{
		SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

		SOUND_SetFastLoadMode(SOUND_FASTLOAD_OFF);	/* Turn IOP FASTLOAD off.. */
		SOUND_FlushIOPCommand(0);		/* Make sure this is processed now, so no more requests happen.. */
		sifret=sceSifRemoveRpc(&SOUND_rpcsd,&SOUND_rpcqd);	/* Remove FASTLOAD RPC */

		if (sifret==NULL)
		{
			MSERROR((">>>>>Error: SOUND_CloseFastLoad\n"));
			MSERROR(("sceSifRemoveRPC FAILED\n"));
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(-1);
		}

		ret=TerminateThread(SOUND_RPC_th);
		if (ret==-1)
		{
			MSERROR((">>>>>Error: SOUND_CloseFastLoad\n"));
			MSERROR(("TermainateThread FAILED\n"));
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(-1);
		}
		ret=DeleteThread(SOUND_RPC_th);					/* Delete FASTLOAD thread */
		if (ret==-1)
		{
			MSERROR((">>>>>Error: SOUND_CloseFastLoad\n"));
			MSERROR(("DeleteThread FAILED\n"));
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(-1);
		}
		SOUND_FastLoad.EEStatus=SOUND_FASTLOAD_OFF;	/* Turn FASTLOAD EE status off.. */
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(0);
	}
	else
	{
		MSERROR((">>>>>Error: SOUND_CloseFastLoad\n"));
		MSERROR(("Can not close FastLoad as it hasn't been started.\n"));
		return(-1);
	}
}

/*****************************************************************************
SOUND_GetFastLoadInfo

	Requires:	*info	Pointer to SOUND_FASTLOAD_INFO structure
	Returns:	0		No data has been transferred since the last call to this function
				1		More data has been transferred since the last call to this function

	Notes:
		EEStatus		SOUND_FASTLOAD_ON or SOUND_FASTLOAD OFF
						(set to ON when SOUND_InitFastLoad is called)
		IOPStatus		SOUND_FASTLOAD_ON or SOUND_FASTLOAD_OFF
						(type set when SOUND_SetFastLoadMode is called)
		StreamChannel	Stream channel number which is streaming data to EE RAM
		TotalSize		Total size of data currently transferred to EE
		LoadSize		Size of data packet last sent from IOP to EE RAM
		Status			0 = More data to be sent, 1 = All data sent
		LoadStatus		SOUND_FASTLOAD_SINGLE,SOUND_FASTLOAD_CONTINUE, SOUND_FASTLOAD_OFF
		EEAddress		EE address where last data packet was transfered to from IOP
		Counter			Amount of IOP->EE transfers taken place for stream

*****************************************************************************/
int SOUND_GetFastLoadInfo(SOUND_FASTLOAD_INFO *info)
{
int ret=0;

	ret=SOUND_FLoad;
	if (SOUND_FastLoadInCallback==0)
	{
		do	/* Make sure that no callback is called during getting info. */
		{
			SOUND_FLoad=0;
			SOUND_CopyFastLoadInfo(info);
		}while(SOUND_FLoad==1);
	}
	else
		SOUND_CopyFastLoadInfo(info);
	return(ret);
}

void SOUND_CopyFastLoadInfo(SOUND_FASTLOAD_INFO *info)
{
	info->EEStatus=SOUND_FastLoad.EEStatus;	/* SOUND_FASTLOAD_ON or SOUND_FASTLOAD_OFF */
	info->IOPStatus=SOUND_FastLoad.IOPStatus;	/* SOUND_FASTLOAD_ON or SOUND_FASTLOAD_OFF */
	info->StreamChannel=SOUND_FastLoad.StreamChannel;	/* Stream channel currently doing EE load */
	info->TotalSize=SOUND_FastLoad.TotalSize;		/* Current total size transferred */
	info->LoadSize=SOUND_FastLoad.LoadSize;			/* Last transfer size */
	info->Status=SOUND_FastLoad.Status;				/* Status (0=still running, 1=finished) */
	info->LoadStatus=SOUND_FastLoad.AllowLoad;		/* CONTINUE / SINGLE / OFF */
	info->EEAddress=SOUND_FastLoad.EEAddress;
	info->Counter=SOUND_FastLoad.Counter;
	info->FileID=SOUND_FastLoad.FileID;
}


/*****************************************************************************
SOUND_AllChannelOutputsOff
	Turns all ADPCM output off for dry mixing (VMIX_L/R)=0
	This allows you to, say, have no dry mixing output for one channel, but
	still allow its effects (wet) mixing to be played
	As a default, these are all turned ON
	Thankyou to Patrick Bergeron @ Digital Fiction for this routine.

	Requires:	core		core number 0 or 1
*****************************************************************************/
void SOUND_AllChannelOutputsOff(int core)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_OUT_ALL_CHANS_OFF);
	SOUND_AddData((short)core);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_AllChannelOutputsOn
	Turns all ADPCM output on for dry mixing (VMIX_L/R)=0
	This allows you to, say, have no dry mixing output for one channel, but
	still allow its effects (wet) mixing to be played
	As a default, these are all turned ON
	Thankyou to Patrick Bergeron @ Digital Fiction for this routine.

	Requires:	core		core number 0 or 1
*****************************************************************************/
void SOUND_AllChannelOutputsOn(int core)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_OUT_ALL_CHANS_ON);
	SOUND_AddData((short)core);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_SetChannelOutputOff
	Turns ADPCM output off for dry mixing (VMIX_L/R)=0 on a specified SPU channel
	This allows you to, say, have no dry mixing output for one channel, but
	still allow its effects (wet) mixing to be played
	As a default, these are all turned ON
	Thankyou to Patrick Bergeron @ Digital Fiction for this routine.

	Requires:	channel		SPU channel 0-47
*****************************************************************************/
void SOUND_SetChannelOutputOff(int channel)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_OUT_CHAN_OFF);
	SOUND_AddData((short)channel);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_SetChannelOutputOn
	Turns ADPCM output on for dry mixing (VMIX_L/R)=0 on a specified SPU channel
	This allows you to, say, have no dry mixing output for one channel, but
	still allow its effects (wet) mixing to be played
	As a default, these are all turned ON
	Thankyou to Patrick Bergeron @ Digital Fiction for this routine.

	Requires:	channel		SPU channel 0-47
*****************************************************************************/
void SOUND_SetChannelOutputOn(int channel)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_OUT_CHAN_ON);
	SOUND_AddData((short)channel);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_IsFreeSPUChannel
	Returns if an SPU channel is free (ie. not playing anything, or requested to play)
	Thankyou to Patrick Bergeron @ Digital Fiction for this routine.

	Requires:	channel			SPU channel 0-47
	Returns:	0				Being used
			    1				Free to use
				-1				SPU channel out of range

***********************************************************************************/
int SOUND_IsFreeSPUChannel(u_int channel)
{
	if ((channel<0)||(channel>47)) /* SPU channel in range? */
		return (-1);	/* No.. */

	if (SOUND_SPUKeyStatus[channel]==SPU_KEY_STATUS_OFF)
		return (1);	/* SPU channel is free to use */

	return (0);	/* SPU channel is playing (or requested to play) */
}

/*****************************************************************************
SOUND_SetTVOutputOn
	Allows the output from the SPU2 to go to the TV speakers (as default)

	Requires:		Nothing
	Returns:		Nothing
*****************************************************************************/
void SOUND_SetTVOutputOn(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_TV_OUTPUT_ON);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_SetTVOutputOff
	Stops the output from the SPU2 to go to the TV speakers. Can be useful, if
	for example you're playing surround sound via the SPDIF (for DTS playback)
	and do no want any audio to come from the TV during this time.

	Requires:		Nothing
	Returns:		Nothing
*****************************************************************************/
void SOUND_SetTVOutputOff(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_TV_OUTPUT_OFF);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_PausePCM
	Pauses PCM channel
***********************************************************************************/
void SOUND_PausePCM(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_PAUSE_PCM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_ResumePCM
	Resumes PCM channel
***********************************************************************************/
void SOUND_ResumePCM(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_RESUME_PCM);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_IOPProcess
	Does EXACTLY the same as SOUND_GetStatus, but this name makes a little more
	sense. SOUND_GetStatus does more than just return the current stream status
	of the IOP to the EE. It also allows the IOP to continue loading data after it
	requests to start a load from the EE. Due to this, the name SOUND_GetStatus is
	a little meaningless, but for backwards compatibility, this is still available
	to the user.

	Fill a buffer with info about which streams are playing/spu address/envelope..
	AllowLoad	=-1 If no stream is requested for loading from the IOP
			 	=n	Stream number that IOP has requested data for

	reqCheck  =		Value passed from IOP (SOUND_IOP_DATA_CHECK). Used only if loading
					from external source. Passing the same value back as the IOP sent
					along with the AllowLoad value will then keep the IOP and EE in
					sync. Without this check, it may be possible for you to send data
					to the IOP for a stream that has since closed down and reopened
					asking for different data.

	call SOUND_GetLoadRequest to see if streams need data.

***********************************************************************************/
void SOUND_IOPProcess(int AllowLoad,int reqcheck)
{
	SOUND_GetStatus(AllowLoad,reqcheck);
}

/**********************************************************************************
SOUND_SetChannelVolumeSmooth

	Sets a target volume (both left and right) for a given SPU channel
	The routine: SOUND_UpdateSmoothVols (which is called once per frame) will then
	handle fading from the current volume to this value as fast as possible.
	The system can handle both positive and negative volume settings.

	Requires:	i		SPU channel (0-47)
				voll	Left volume
				volr	Right volume

	Returns:	0		OK
				-1		SPU channel out of range
	Notes:
		Calling SOUND_SetChannelVolume will overwrite this function.
***********************************************************************************/
int SOUND_SetChannelVolumeSmooth(short i,short voll,short volr)
{
	if ((i<0)||(i>47))
	{
		MSERROR((">>>>>ERROR:SOUND_SetChannelVolumeSmooth\n"));
		MSERROR(("SPU Channel 0x%x out of range (needs to be 0-47)\n",i));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

// This function sets the SOUND_MasterL & SOUND_MasterR params.
	SOUND_SetSPUChannelVolume(i,(short)voll,(short)volr); /* scale volume with subgroup master volume */
	SOUND_StartCommand(SND_SET_VOL_SMOOTH);
	SOUND_AddData((short)i);
	SOUND_AddData((short)SOUND_MasterL);
	SOUND_AddData((short)SOUND_MasterR);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_SetSwitch
SOUND_SetParam
SOUND_SetAddr
SOUND_SetCoreAttr
SOUND_BlockTrans

Wrapper commands to emulate the LibSDr library.

example:

LibSDr call to set a SPU channel pitch:
    sceSdRemote (1,rSdSetParam, core | (channel << 1) | SD_VP_PITCH, pitch);

MultiStream call:
	SOUND_SetParam(core|(channel<<1)|SD_VP_PITCH,pitch);
***********************************************************************************/

/**********************************************************************************
SOUND_SetSwitch
	Emulates the sceSdRemote function: sceSdRemote(1,rSdSetSwitch...);

	Requires:	coreANDcommand		ie. SD_CORE_0|SD_S_KON
				bitmask				bitmask (24bits)

	Returns:	Nothing
***********************************************************************************/
void SOUND_SetSwitch(u_short coreANDcommand, u_int bitmask)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_SWITCH);
	SOUND_AddData((short)coreANDcommand);
	SOUND_AddLongData((unsigned int)bitmask);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetParam
	Emulates the sceSdRemote function: sceSdRemote(1,rSdSetParam...);

	Requires:	coreANDcommandANDchannel		ie. SD_CORE_0|(channel<<1)|SD_VP_PITCH
				value							value to pass command

	Returns:	Nothing
***********************************************************************************/
void SOUND_SetParam(u_short coreANDcommandANDchannel,u_short value)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_PARAM);
	SOUND_AddData((short)coreANDcommandANDchannel);
	SOUND_AddData((short)value);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetAddr
	Emulates the sceSdRemote function: sceSdRemote(1,rSdSetAddr...);

	Requires:	coreANDcommandANDchannel		ie. SD_CORE_0|(channel<<1)|SD_VA_SSA
				value							value to pass command

	Returns:	Nothing
***********************************************************************************/
void SOUND_SetAddr(u_short coreANDcommandANDchannel,u_int address)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_ADDR);
	SOUND_AddData((short)coreANDcommandANDchannel);
	SOUND_AddLongData((unsigned int)address);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_SetCoreAttr
	Emulates the sceSdRemote function: sceSdRemote(1,rSdSetCoreAttr...);

	Requires:	coreANDcommand		ie. SD_CORE_0|SD_S_KON
				value  				value to pass command

	Returns:	Nothing
***********************************************************************************/
void SOUND_SetCoreAttr(u_short coreANDcommand,u_short value)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_COREATTR);
	SOUND_AddData((short)coreANDcommand);
	SOUND_AddData((short)value);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_BlockTrans
	Emulates the sceSdRemote function: sceSdRemote(1,rSdBlockTrans...);

	Requires:	DMAChan		0 or 1
				Flags		READ/WRITE etc.. (see LibSD documentation for more info)
				IOPAddr		Address to read/write data from in IOP RAM
				Size		Size of IOP buffer to read/write
				Offset		Offset to read/write

	Returns:	Nothing
***********************************************************************************/
void SOUND_BlockTrans(u_short DMAChan,u_short Flags, u_int IOPAddr,u_int Size,u_int Offset)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_BLOCK_TRANS);
	SOUND_AddData((short)DMAChan);
	SOUND_AddData((short)Flags);
	SOUND_AddLongData(IOPAddr);
	SOUND_AddLongData(Size);
	SOUND_AddLongData(Offset);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetLoadRequest
	Returns the current stream channel which is requiring data to be loaded.
	To allow a load, if using INTERNAL loading, pass this value via SOUND_GetStatus.
	If using EXTERNAL loading, pass this value via SOUND_GetStatus to tell MultiStream
	that the required data has been loaded into IOP RAM.

	Requires:	Nothing
	Returns:	Current stream channel (-1 if no stream channels require data)
***********************************************************************************/
int SOUND_GetLoadRequest(void)
{
	return(SOUND_IOP_REQUEST_LOAD);
}

/**********************************************************************************
SOUND_GetEXTERNALChecksum
	To be called if using EXTERNAL loading only.
	Returns the current Checksum value which is required for SOUND_GetStatus

	Requires:	Nothing
	Returns:	Current Checksum
***********************************************************************************/
int SOUND_GetEXTERNALChecksum(void)
{
	return((int)SOUND_IOP_DATA_CHECK);
}

/**********************************************************************************
SOUND_GetIOPCounter

	Returns a counter which relates to the number of times SOUND_FlushIOPCommand has
	been called successfully (ie. data has been sent to the IOP via SIFRPC and then
	data has been sent back from the IOP to EE). This can therefore be used to know
	when a SOUND_FlushIOPCommand(SIF_RPCM_NOWAIT) has been called and completed.

	Requires:	Nothing
	Returns:	Current Checksum
***********************************************************************************/
u_int SOUND_GetIOPCounter(void)
{
	return((u_int)SOUND_IOP_COUNTER);
}

/**********************************************************************************
SOUND_GetSPUAddress
	Returns the current SPU RAM address which would be used for loading resident
	sound effects into SPU RAM. This address is automatically updated in the IOP
	code when a resident SFX has been transfered to SPU RAM.

	Requires:	Nothing
	Returns:	SOUND_SPU_ADDR		SPU RAM address where next stream transfer will write to
***********************************************************************************/
u_int SOUND_GetSPUAddress(void)
{
	return(SOUND_SPU_ADDR);
}
u_int SOUND_GetSPUWriteAddress(void)
{
	return(SOUND_GetSPUAddress());
}

/**********************************************************************************
SOUND_GetIOPAddress
	Returns the current IOP RAM address which would be used for streaming to IOP.
	This address is automatically updated in the IOP code when data is loaded to the IOP

	Requires:	Nothing
	Returns:	SOUND_IOP_ADDR		IOP RAM address where next stream transfer will write to
***********************************************************************************/
u_int SOUND_GetIOPAddress(void)
{
	return(SOUND_IOP_ADDR);
}

/**********************************************************************************
SOUND_GetEEAddress
	Returns the current EE RAM address which would be used for streaming to EE.
	This address is automatically updated in the IOP code when data is transfered to the EE

	Requires:	Nothing
	Returns:	SOUND_EE_ADDR		EE RAM address where next stream transfer will write to
***********************************************************************************/
u_int SOUND_GetEEAddress(void)
{
	return(SOUND_EE_ADDR);
}

/**********************************************************************************
SOUND_InitMultiChannelPitch
	Sets n SPU channels pitches as fast as possible. This helps to cut down on
	possible sync problems when setting SPU channel pitches.
	This function should be called first, passing the required pitch for n SPU channels
	and the first (of many?) SPU channels to be effected with this pitch.

	Requires:	SPUChannel	SPU channel (0-47) to use pitch
				Pitch		SPU pitch

	Returns:	0			OK
				-1			Failed

	Notes: See SOUND_AddMultiChannelPitch and SOUND_SetMultiChannelPitch for more info.
***********************************************************************************/
int SOUND_InitMultiChannelPitch(u_int SPUChannel,int Pitch)
{
	if (SPUChannel>47)
	{
		MSERROR((">>>>> ERROR: SOUND_InitMultiChannelPitch\n"));
		MSERROR(("SPU Channel (%d) out of range. Must be 0-47\n",SPUChannel));
		return(-1);
	}

	SOUND_MCCore0=0;	/* Reset both cores bitmasks */
	SOUND_MCCore1=0;

	SOUND_MCPitch=(u_int)Pitch;	/* Set pitch for all SPU channels to use. */
	if (SPUChannel<24)
		SOUND_MCCore0=(u_int)(1<<SPUChannel);	/* Set correct bitmask */
	else
		SOUND_MCCore1=(u_int)(1<<(SPUChannel-24));

	SOUND_MCStatus=1;	/* Turn on Status */
	return(0);
}

/**********************************************************************************
SOUND_AddMultiChannelPitch

	Adds another SPU channel to use the pitch set in the SOUND_InitMultiChannelPitch command

	Requires:	SPUChannel	SPU channel (0-47) to use pitch

	Returns:	0			OK
				-1			Failed

	Notes: See SOUND_InitMultiChannelPitch and SOUND_SetMultiChannelPitch for more info.
***********************************************************************************/
int SOUND_AddMultiChannelPitch(u_int SPUChannel)
{
	if (SOUND_MCStatus!=1)	/* Has SOUND_InitMultiChannelPitch been called? */
	{
		MSERROR((">>>>> ERROR: SOUND_AddMultiChannelPitch\n"));
		MSERROR(("SOUND_InitMultiChannelPitch not called\n"));
		return(-1);
	}
	if (SPUChannel>47)	/* Valid SPU channel? */
	{
		MSERROR((">>>>> ERROR: SOUND_AddMultiChannelPitch\n"));
		MSERROR(("SPU channel %d out of range (must be 0-47\n",SPUChannel));
		return(-1);
	}

	if (SPUChannel<24)
		SOUND_MCCore0|=(u_int)(1<<SPUChannel);	/* Set bit in core0 */
	else
		SOUND_MCCore1|=(u_int)(1<<(SPUChannel-24));	/* Set bit in core1 */
	return(0);
}

/**********************************************************************************
SOUND_SetMultiChannelPitch

	Builds a command packet to send to the IOP with all required SPU channels to set to use
	required pitch from both the SOUND_InitMultiChannelPitch and SOUND_AddMultiChannelPitch
	commands

	Requires:	Nothing
	Returns:	0			OK
				-1			Failed

	Notes: See SOUND_InitMultiChannelPitch and SOUND_AddMultiChannelPitch for more info.

	Your final code should look something like this:

	SOUND_InitMultiChannelPitch(0,0x1000);
	SOUND_AddMultiChannelPitch(4);
	SOUND_AddMultiChannelPitch(26);
	SOUND_SetMultiChannelPitch();

	The above example would set SPU channels 0,4 and 26 pitch to 0x1000 (48Khz).

***********************************************************************************/
int SOUND_SetMultiChannelPitch(void)
{
	if (SOUND_MCStatus!=1)	/* Has SOUND_InitMultiChannelPitch been called? */
	{
		MSERROR((">>>>> ERROR: SOUND_SetMultiChannelPitch\n"));
		MSERROR(("SOUND_InitMultiChannelPitch not called\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_MULTI_CHAN_PITCH);	/* Build command to send to IOP via FlushIOPCommand */
	SOUND_AddData((short)SOUND_MCPitch);
	SOUND_AddLongData((unsigned int)SOUND_MCCore0);
	SOUND_AddLongData((unsigned int)SOUND_MCCore1);
	SOUND_EndCommand();

	SOUND_MCStatus=0;	/* Turn off Status */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

	return(0);
}

/**********************************************************************************
SOUND_CheckRPCStatus

	Checks to see if the FlushIOPCommand is being processed, so you know if its
	safe to do another SOUND_FlushIOPCommand call without it returning a bad error
	code.

	Requires:	Nothing
	Returns:	0		RPC is not busy
				1		RPC is busy

***********************************************************************************/
int SOUND_CheckRPCStatus(void)
{
	return(SOUND_TransFlag[0]);
}

/**********************************************************************************
SOUND_SetThreadPriority
	Allows user to change the IOP thread priority of MultiStream.

	Requires:	priority		0 (highest) -> 126 (lowest)
								Normal usage is 9 -> 123

	Returns:	0				OK
				-1				Priority out of range

	Notes: Please see the IOP documentation on IOP thread management functions for more information
***********************************************************************************/
int SOUND_SetThreadPriority(int priority)
{
	if ((priority<0)||(priority>126))
	{
		MSERROR((">>>>>Error: SOUND_SetThreadPriority\n"));
		MSERROR(("Thread priority (%d) out of range\n",priority));
		MSERROR(("Value must range from 0->126\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_StreamInit==1)	/* Has SOUND_InitStreamData been called already? */
	{

		SOUND_StartCommand(SND_SET_THREAD_PRIORITY);	/* Yes..So thread is already running. */
		SOUND_AddData((short)priority);	/* In this case, we need to modify the current thread priority */
		SOUND_EndCommand();
	}
	else
		SOUND_IOPThreadPriority=priority;	/* Modify EE thread value to pass when SOUND_InitStreamData is called */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_GetChannelSPUAddress

	Gets the current SPU RAM playback address (NAX) for a required SPU channel.

	Requires:	SPUChannel	(SPU channel 0-47)

	Returns:	0			SPU channel out of range
				addr		SPU channels current SPU RAM playback address

***********************************************************************************/
u_int SOUND_GetChannelSPUAddress(u_int SPUChannel)
{
	if (SPUChannel>47)
	{
		MSERROR((">>>>> ERROR: SOUND_GetChannelSPUAddress\n"));
		MSERROR(("SPU channel %d out of range (must be 0-47)\n",SPUChannel));
		return(0);
	}
	return(SOUND_SPU_NAX[SPUChannel]);
}

/**********************************************************************************
SOUND_SetStreamPriority

	Sets the stream priority. The lower the priority, the higher the priority.
	For multiple streams with the same priority, a round-robin system is used (ie. each
	time MultiStream checks the stream status, it starts by checking the next one in
	the list..)

	Requires:	i			Stream channel
				priority	0-255 (0 = highest priority, 255 = lowest)
							SOUND_STREAM_PRIORITY_DEFAULT	= Use default setting.

	Returns:	0			OK
				-1			Failed


	Notes:

	As default, the following priorities are used:

	Currently active audio streams = 64
	Currently active data streams = 192
	Streams requested to load (via a SOUND_PlayStream or SOUND_LoadFile call) = 128

	Using this method, if you, say, request streams to play over and over, any currently
	playing audio will still update correctly.

	Care must be taken with setting priorities for data streams. If you set them with
	higher priorities than audio streams, the audio streams will not be updated until
	the data stream has completely loaded (ie. the data stream dies)
***********************************************************************************/
int SOUND_SetStreamPriority(u_int i,u_int priority)
{
	if ((int)i>=SOUND_LastStream)
	{
		MSERROR((">>>>> Error: SOUND_SetStreamPriority\n"));
		MSERROR(("Stream Channel (%d) out of range\n",i));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}
	if (priority>0x100)
	{
		MSERROR((">>>>> Error: SOUND_SetStreamPriority\n"));
		MSERROR(("Priority %d out of range. Must be from 0-0x100\n",priority));
		MSERROR(("0x100 will force stream to use default priority setting\n"));
		return(-1);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_STREAM_PRIORITY[i]=(u_short)(priority|0x8000);

	SOUND_StartCommand(SND_PRIORITY_STREAM);
	SOUND_AddData((short)i);
	SOUND_AddData((short)priority);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_GetChannelSPUVolume

	Gets the current SPU Volume for a required SPU channel.

	Requires:	SPUChannel	(SPU channel 0-47)

	Returns:	Vol			Left Volume (top 16 bits), Right Volume (bottom 16 bits)
				0x5a5a5a5a	SPU channel out of range

***********************************************************************************/
u_int SOUND_GetChannelSPUVolume(u_int SPUChannel)
{
u_int Vol;

	if (SPUChannel>47)
	{
		MSERROR(("SOUND_GetChannelSPUVolume\n"));
		MSERROR(("SPU Channel %d out of range\n",SPUChannel));
		MSERROR(("Must range from 0-47\n"));
		return(0x5a5a5a5a);	/* All values are taken for volume range, so just return this.. */
	}

	Vol=(u_int)(SOUND_VolL[SPUChannel]<<16);
	Vol|=SOUND_VolR[SPUChannel];
	return(Vol);
}

/**********************************************************************************
SOUND_PauseSPUChannels

	Pauses SPU channels from a given range.

	Requires:	First		First SPU channel (0-47)
				Last		Last SPU channel (0-47). Must be larger or equal to First.

	Returns:	0			OK
				-1			First SPU channel out of range
				-2			Last SPU channel out of range
				-3			First SPU channel larger than Last SPU channel

	Note:	Pausing any SPU channels which are PARENT streams will also pause SPU channels
			for any CHILD streams belonging to the PARENT. Pausing any CHILD streams will
			not pause their PARENT streams

***********************************************************************************/
int SOUND_PauseSPUChannels(u_int First,u_int Last)
{
	if (First>47)			/* First SPU channel out of range? */
		return(-1);
	else if (Last>47)		/* Last SPU channel out of range? */
		return(-2);
	else if (First>Last)	/* First SPU channel > Last SPU channel? */
		return(-3);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_PAUSE_SPU_CHANS);
	SOUND_AddData((short)First);
	SOUND_AddData((short)Last);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_ResumeSPUChannels

	Pauses SPU channels from a given range.

	Requires:	First		First SPU channel (0-47)
				Last		Last SPU channel (0-47). Must be larger or equal to First.

	Returns:	0			OK
				-1			First SPU channel out of range
				-2			Last SPU channel out of range
				-3			First SPU channel larger than Last SPU channel

	Note:	Resuming any SPU channels which are PARENT streams will also resume SPU channels
			for any CHILD streams belonging to the PARENT. Resuming any CHILD streams will
			not resume their PARENT streams

***********************************************************************************/
int SOUND_ResumeSPUChannels(u_int First,u_int Last)
{
	if (First>47)			/* First SPU channel out of range? */
		return(-1);
	else if (Last>47)		/* Last SPU channel out of range? */
		return(-2);
	else if (First>Last)	/* First SPU channel > Last SPU channel? */
		return(-3);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_RESUME_SPU_CHANS);
	SOUND_AddData((short)First);
	SOUND_AddData((short)Last);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_SetSPUChannelRelease

	Set SPU channel release rate

	Requires:	SPUChannel		0-47
				ReleaseRate		0-0x1f

	Returns:	0			OK
				-1			Release Rate out of range
				-2			SPU channel out of range

	Note:		Allows you to modify the release rate after a KeyOn has been performed

***********************************************************************************/
int SOUND_SetSPUChannelRelease(u_int SPUChannel,u_int ReleaseRate)
{
u_int chan,core;

	if (ReleaseRate>0x1f)
		return(-1);
	if (SPUChannel>47)
		return(-2);

	chan=SPUChannel%24;
	chan=chan<<1;
	core=SPUChannel/24;
	ReleaseRate|=0x1fc0;
	SOUND_SetParam((u_short)(core|chan|SD_VP_ADSR2),(u_short)ReleaseRate);
	return(0);
}


/**********************************************************************************
SOUND_SetEffectBufferAddress

	Sets the hardware effect SPU address of both effect units.
	Care must be taken that the addresses past do not conflict with any SPU RAM
	which is to be used for either ADPCM streams or SFX.
	Addresses must be on a 128K boundary -1 (ie. 0x1fffff is the highest available
	address, 0x1dffff is the address before that..)
	Both addresses must NOT be the same value.

	When calling SOUND_EnableEffects, address1 will be used first. If both
	effect units are active, address2 will be used also.

	Requires:	address1		SPU RAM address (or 0 to use default addresses)
				address2		SPU RAM address

	Returns:	0				OK
				-1				address1 not on a 128K(-1) boundary
				-2				address2 not on a 128K(-1) boundary
				-3				address1 equals address2

	Note:	Passing 0 for address1 will force the system to use default addresses.
	These are: 0x1fffff for address1, 0x1dffff for address2 (the top of SPU RAM)

***********************************************************************************/
int SOUND_SetEffectBufferAddress(u_int address1,u_int address2)
{
u_int a;

	if (address1==0)	/* Use Default SPU RAM addresses? */
	{
		address1=0x1fffff;
		address2=0x1dffff;
	}

	a=address1&0x1ffff;

	if (a!=0x1ffff)
	{
		MSERROR(("SOUND_SetEffectBufferAddress\n"));
		MSERROR(("Address1 (%x) must be aligned to a 2mb value -1\n",address1));
		MSERROR(("Example: 2mb = 0x1fffff\n"));
		return(-1);
	}
	a=address2&0x1ffff;
	if (a!=0x1ffff)
	{
		MSERROR(("SOUND_SetEffectBufferAddress\n"));
		MSERROR(("Address2 (%x) must be aligned to a 2mb value -1\n",address2));
		MSERROR(("Example: 2mb = 0x1fffff\n"));
		return(-2);
	}
	if (address1==address2)
	{
		MSERROR(("SOUND_SetEffectBufferAddress\n"));
		MSERROR(("Both addresses are the same (0x%x)\n",address1));
		MSERROR(("They need to be a minimum of 128K apart\n"));
		return(-3);
	}

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_EffectBuffer[0]=address1;
	SOUND_EffectBuffer[1]=address2;

	SOUND_StartCommand(SND_SET_EFFECT_ADDR);
	SOUND_AddLongData(address1);
	SOUND_AddLongData(address2);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/**********************************************************************************
SOUND_GetEffectBufferInfo

Returns effect buffer information.

	Requires:	*buffer		pointer to a SOUND_EFFECT_BUFFER_INFO structure

	Returns:	Nothing

***********************************************************************************/
void SOUND_GetEffectBuffersInfo(SOUND_EFFECT_BUFFER_INFO *buffer)
{
int i;
	for (i=0;i<2;i++)
	{
		buffer->EndAddress[i]=SOUND_CurrentReverbAddr[i];
		buffer->StartAddress[i]=SOUND_CurrentReverbAddr[i]-SOUND_CurrentReverbSize[i];
		buffer->EffectType[i]=SOUND_CurrentReverb[i];
	}
}

/**********************************************************************************
SOUND_SetFastLoadNext

	Only to be used if FASTLOAD is ON.
	Allows a stream which cd loading has been stopped to continue loading another
	data packet.


	Requires:		i	Stream channel
	Returns:		0	OK
					-1	Stream channel out of range
					-2	FastLoad not ON
***********************************************************************************/
int SOUND_SetFastLoadNext(int i)
{
	if (i>=SOUND_LastStream)
	{
		MSERROR((">>>>> Error: SOUND_SetFastLoadNext\n"));
		MSERROR(("Stream Channel (%d) out of range\n",i));
		MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		return(-1);
	}

	if (SOUND_FastLoad.EEStatus==SOUND_FASTLOAD_ON)
	{
		SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

		SOUND_StartCommand(SND_INTERNAL_FASTLOAD);
		SOUND_AddData((short)SOUND_FASTLOAD_NEXT);
		SOUND_AddData((short)i);
		SOUND_EndCommand();

		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return (0);
	}
	else
	{
		return(-2);
	}
}

/**********************************************************************************
SOUND_FindSFX_ID

	Searches through active SPU channels for a specified SFX ID.

	Requires:	start	First SPU channel to search  (0-47)
				end		Last SPU channel to search (0-47)
				ID		SFX ID required

	Returns:	n		SPU channel
				-1		SFX ID not found between SPU channels "start" and "end"
				-2		start out of range
				-3		end out of range
				-4		start greater than end

	Notes:

		This routine will search from SPU channel "start" through to "end".
		So, to find multiple SPU channels which may be playing the SFX ID, you can
		call this routine with the last SPU channel found+1. Only when this routine
		returns -1 do you know that you have searched through all required SPU channels

***********************************************************************************/
int SOUND_FindSFX_ID(int start, int end ,int ID)
{
int a;
int stat;

	if ((start>47)||(start<0))
		return(-2);
	if ((end>47)||(end<0))
		return(-3);
	if (start>end)
		return(-4);

	for (a=start;a<=end;a++)
	{
		stat=SOUND_GetStreamChannel((u_int)a);	/* SPU channel being used by a stream? */
		if (stat==-1)
		{
			stat=SOUND_GetKeyStatus(a);	/* No..So get its key status.. */
			if (((int)(SOUND_SFXID[a])==ID)&&(stat!=SPU_KEY_STATUS_OFF))	/* Found ID and its playing still.. */
				return(a);
		}
	}
	return(-1);
}

/**********************************************************************************
SOUND_FindStreamFile_ID

	Searches through active SPU channels for a specified SFX ID.

	Requires:	start	First Stream channel to search
				end		Last Stream channel to search
				ID		Stream File ID required

	Returns:	n		Stream channel
				-1		File ID not found between stream channels "start" and "end"
				-2		start out of range
				-3		end out of range
				-4		start greater than end

	Notes:
		This routine will search from stream channel "start" through to "end".
		So, to find multiple stream channels which may be playing the file ID, you can
		call this routine with the last stream channel found+1. Only when this routine
		returns -1 do you know that you have searched through all required stream channels

***********************************************************************************/
int SOUND_FindStreamFile_ID(int start, int end ,int ID)
{
int a;
int stat;
SOUND_STREAM_INFO StreamInfo;

	if (start>end)
		return(-4);
	if (start<0)
		return(-2);
	if (end<0)
		return(-3);

	for (a=start;a<=end;a++)
	{

		stat=SOUND_GetStreamInfo((u_int)a,&StreamInfo);

		if (stat==-1)
		{
			MSERROR((">>>>> Error: SOUND_SetFindStreamFile_ID\n"));
			MSERROR(("Stream Channel (%d) out of range\n",end));
			MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
			return(-3);
		}
		if ((StreamInfo.Status==STREAM_STATUS_ON)&&((int)StreamInfo.FileID==ID))
		{
			return(a);
		}
	}
	return(-1);
}

/**********************************************************************************
SOUND_ATWinMonOpenFile

	Performs the "open" command on the specified file.
	For ATWinMon, this process has been known to be slow. What this command does is
	open the file straight away. The file will then never be opened or closed in
	MultiStreams main code.
	To close the file, call SOUND_ATWinMonCloseFile

	Requires:	id			File ID
	Returns:	Nothing

***********************************************************************************/
void SOUND_ATWinMonOpenFile(u_int id)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_ATWINMON_OPEN);
	SOUND_AddLongData((unsigned int)id);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}


/**********************************************************************************
SOUND_ATWinMonCloseFile

	Performs the "close" command on the specified file.
	For ATWinMon, the open and close process has been known to be slow.
	See SOUND_AtWinMonOpenFile for more information.

	Requires:	id			File ID
	Returns:	Nothing

***********************************************************************************/
void SOUND_ATWinMonCloseFile(u_int id)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_ATWINMON_CLOSE);
	SOUND_AddLongData((unsigned int)id);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/**********************************************************************************
SOUND_GetHardwareEffectSize

	Returns the size of a requested hardware effect type

	Requires:	(int) type		Hardware effect type
	Returns:	(int) size		Hardware effect size
				-1				type not valid.

	Hardware effect types are:

	SOUND_FX_OFF
	SOUND_FX_ROOM
	SOUND_FX_STUDIO_A
	SOUND_FX_STUDIO_B
	SOUND_FX_STUDIO_C
	SOUND_FX_HALL
	SOUND_FX_SPACE
	SOUND_FX_ECHO
	SOUND_FX_DELAY
	SOUND_FX_PIPE

***********************************************************************************/
int SOUND_GetHardwareEffectSize(int type)
{
	if (type>9)
	{
		MSERROR(("SOUND_GetHardwareEffectSize\n"));
		MSERROR(("Invalid type (0x%x)\n",type));
		return(-1);
	}
	return  ((int)ReverbSizes[type]);
}

/*****************************************************************************
SPU RAM MEMORY ALLOCATOR
	The following code is a SPU RAM memory allocator.
*****************************************************************************/
/*#define SOUND_MemAllocateSegments 64 */
/*#define SOUND_MemTotalRAM SOUND_EndOfRAM-SOUND_MemBaseAddress */

/*SOUND_MEM_ALLOC SOUND_MemAlloc[SOUND_MemAllocateSegments+2]; */
static u_short SOUND_MemAllocCounter;
static u_int SOUND_MemNextFree;
static u_int SOUND_MemAllocMax;
static u_int SOUND_MemAllocBuffer=NULL;
//static SOUND_MEM_ALLOC SOUND_MemAllocBuffer = NULL;
/*****************************************************************************
SOUND_MemAllocInit
	Initialises RAM to be used for memory allocation.
	Allocation works via two link lists. One list is for allocated sections,
	the other is for available sections. Each time you allocate or free RAM,
	a link is moved from one side to the other.
	Two links are automatically stored in the list. These can not be removed.
	They are used to be markers for both the start and end of RAM.

	Requires:	(u_int) spaces	Amount of sections required.
								(ie. the amount of mallocs you can do without it complaining)

				(u_int) End		SPU RAM end address:
								Last address which will be used by the memory allocator
								(last possible address = 2*1024*1024)
								Passing: SOUND_AllocAllRAM will set the end address to this value also.

	Returns:	0		OK
				-1		Failed

	Notes:
			The "End" parameter can be used to set the end address which will be used by the memory
			allocator. This can then be used to, say, safeguard an area at the end of SPU RAM which
			may be used by the effect buffers. Note that this is not really required, as there is
			a function SOUND_MemAllocateEffectBuffer which can be used to allocate a memory buffer
			which is also aligned correctly for effect buffer usage.
*****************************************************************************/
int SOUND_MemAllocInit(u_int spaces, u_int End)
{
int i,n;
SOUND_MEM_ALLOC *ptr;
//u_int *ptr;

	n=(int)spaces+2;

/* Allocate RAM for size (n) */

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_MemAllocBuffer!=0)
	{
		MSERROR(("Error: SOUND_MemAllocInit\n"));
		MSERROR(("Memory already allocated. Use SOUND_MemAllocClose to free Memory\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	if (End>2*1024*1024)
	{
		MSERROR(("Error: SOUND_MemAllocInit\n"));
		MSERROR(("RAM End address too large (%d)\n",End));
		MSERROR(("Largest possible size = 2*1024*1024\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}


	SOUND_MemAllocBuffer = (u_int)(SOUND_AllocMemEE( 64,(int)(sizeof (SOUND_MEM_ALLOC) * n) + 63 ));
/*	scePrintf("buffer %x (size %d)\n",SOUND_MemAllocBuffer, sizeof(SOUND_MEM_ALLOC)*n); */

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	for (i=0;i<n;i++)
	{
		ptr->Address=0;
		ptr->Size=0;
		ptr->SFX_ID=0;
		ptr->SFX_ID_Used=0;
		ptr->Next=(u_int)i+1;
		ptr++;
	}

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
   	ptr->Size=SOUND_MemBaseAddress;
	ptr++;
   	ptr->Address=End;
	ptr->Next=1;

	SOUND_MemNextFree=2;
	SOUND_MemAllocCounter=0;
	SOUND_MemAllocMax=spaces;

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_MemCheckForSFXID
	Searches through any allocated SPU RAM blocks to check if the block start
	address is the same as a patched SFX address. If it is, store the ID in
	the relevant MemAlloc block.
	Then, we can call SOUND_MemFreeUsingSFXID to free allocated RAM areas
	without having to keep track of SPU RAM addresses yourself.

	Requires:	ID			SFX ID
				SPUAddr		Address in SPU RAM where you're patching the SFX

	Returns:	0			Found address and copied SFX ID to MemAlloc struct
				-1			Address not found
				-2			No memory allocated for MemAlloc functions


	Notes: Called internally by SOUND_PatchSFX only.

*****************************************************************************/
int SOUND_MemCheckForSFXID(u_int ID, u_int SPUAddr)
{
int i;
SOUND_MEM_ALLOC *ptr;

	if (SOUND_MemAllocBuffer==0)
		return(-2);

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	for (i=0;i<SOUND_MemAllocCounter;i++)
	{
		if (ptr->Address==SPUAddr)	/* Searched passed required address */
		{
			ptr->SFX_ID=(int)ID;
			ptr->SFX_ID_Used=1;		// Due to ID using full 32 bits, set a flag to say its actually the ID.
			return(0);
		}
		ptr++;
	}
	return(-1);
}

/*****************************************************************************
SOUND_MemFreeUsingSFXID
	Searches through any allocated SPU RAM blocks to check if its address
	is the same as where a SFX was patched previously via SOUND_PatchSFX.
	If it is, the memory is free'd.

	Requires:	ID			SFX ID

	Returns:	0			Memory free'd
				-1			SFX ID not found
				-2			No memory allocated for MemAlloc functions

*****************************************************************************/
int SOUND_MemFreeUsingSFXID(u_int ID)
{
int i;
SOUND_MEM_ALLOC *ptr;

	if (SOUND_MemAllocBuffer==0)
		return(-2);

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	for (i=0;i<SOUND_MemAllocCounter;i++)
	{
		if ((ptr->SFX_ID==(int)ID)&&(ptr->SFX_ID_Used==1))	// Found ID ?
		{
			SOUND_MemFree(ptr->Address);	// This function clears the ID and ID_Used parameters also..
			return(0);
		}
		ptr++;
	}
	return(-1);
}

/*****************************************************************************
SOUND_MemAllocateClose
	Closes the SPU RAM allocator
	Frees the EE RAM buffer which was created in SOUND_MemAllocInit
	Allocates RAM for a given size.

	Requires:	Size		Size (in bytes) to allocate
	Returns:	Address		Address allocated
				-1			No spare sections
				-2			RAM not availiable

*****************************************************************************/
int SOUND_MemAllocClose(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_MemAllocBuffer!=0)	/* SOUND_MemAllocInit called sucessfully? */
	{
		SOUND_FreeMemEE((void*)SOUND_MemAllocBuffer);	/* Yes.. Free memory for section buffer */
		SOUND_MemAllocBuffer=0;	/* Clear flag */
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(0);
	}
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(-1);		/* No memory allocated. Can't free anything! */
}

/*****************************************************************************
SOUND_MemAllocate
	Allocates RAM for a given size.

	Requires:	Size		Size (in bytes) to allocate
	Returns:	Address		Address allocated
				-1			No spare sections
				-2			RAM not availiable

*****************************************************************************/
int SOUND_MemAllocate(u_int Size)
{
int i;
int a;
u_int smallestsize;
u_int Addr_Lo,Addr_Hi,Gap;
u_int ReqAddr=0;

SOUND_MEM_ALLOC *ptr;
SOUND_MEM_ALLOC *ptr2;
SOUND_MEM_ALLOC *ptr3=0;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_MemAllocBuffer==0)
	{
		MSERROR((">>>> Error: SOUND_MemAlloc\n"));
		MSERROR(("SOUND_MemAllocInit needs to be called first.\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}
	else if (SOUND_MemAllocCounter==SOUND_MemAllocMax)
	{
		MSERROR((">>>>> Error: SOUND_MemAllocate\n"));
		MSERROR(("No spare slots\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	Size+=63;
	Size&=~(u_int)63;	/* Round up to nearest 64 byte multiple */

/* Now, find the largest available segment which would fit the required size. */

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;

	smallestsize=0;
	for (i=0;i<SOUND_MemAllocCounter+1;i++)
	{
		ptr2=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
		ptr2+=ptr->Next;
		Addr_Lo=ptr->Address+ptr->Size;
		Addr_Hi=ptr2->Address;

		Gap=Addr_Hi-Addr_Lo;	/* Gap between current and next allocated block */
		if (Gap==Size)			/* Found exact size match? */
		{
			ptr3=ptr;
			ReqAddr=Addr_Lo;	/* Make copy of RAM address */
			break;				/* break from loop. It can't get any better than this..! */
		}
		else if ((Gap>Size)&&(Gap>smallestsize))	/* Gap is valid? */
		{
			smallestsize=Gap;	/* Make copy of gap size */
			ptr3=ptr;
			ReqAddr=Addr_Lo;	/* Make copy of RAM address */
		}
		ptr=ptr2;
	}

	if (ReqAddr==0)	/* No gap found which is large enough? */
	{
		MSERROR((">>>>> Error: SOUND_MemAllocate\n"));
		MSERROR(("Size too large\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-2);
	}

/* From here, think of three links as the following: */
/* a = current link to add to link list */
/* b = link before the current link (a) */
/* c = link that (b) was pointing to next */
/* So, (a) has to fit inbetween (b) and (c). Links from b->c have to be diverted through (a). */

	ptr2=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	ptr2+=SOUND_MemNextFree;

	a=(int)SOUND_MemNextFree;	/* Current spare slot to add to link list */
	SOUND_MemNextFree=ptr2->Next;
	ptr2->Size=Size;
	ptr2->Address=ReqAddr;
	ptr2->Next=ptr3->Next;
	ptr3->Next=(u_int)a;
	SOUND_MemAllocCounter++;	/* Increase malloc counter */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return((int)ReqAddr);
}


/*****************************************************************************
SOUND_MemAllocateEffectBuffer
	Allocates RAM for a given hardware effect type size.

	Requires:	Type		Hardware effect type  (SOUND_FX_ECHO, SOUND_FX_STUDIO_A..etc.)
	Returns:	Address		Address allocated
				-1			No spare sections
				-2			RAM not availiable

	Note:		To use this address for an effect buffer:
				Address-=1;
				SOUND_SetEffectBufferAddress(Address..);

*****************************************************************************/
int SOUND_MemAllocateEffectBuffer(int Type)
{
int i,j;
int a;
u_int smallestsize;
u_int Addr_Lo,Addr_Hi,Gap;
u_int ReqAddr=0;
int Size;
int EndOffset;
int StartOffset;
int FirstAddr;

SOUND_MEM_ALLOC *ptr;
SOUND_MEM_ALLOC *ptr2;
SOUND_MEM_ALLOC *ptr3=0;


	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	Gap=0;
	Size=SOUND_GetHardwareEffectSize(Type);
	if (Size==-1)
	{
		MSERROR((">>>> Error: SOUND_MemAlloc\n"));
		MSERROR(("Invalid Hardware effect type\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	if (SOUND_MemAllocBuffer==0)
	{
		MSERROR((">>>> Error: SOUND_MemAlloc\n"));
		MSERROR(("SOUND_MemAllocInit needs to be called first.\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}
	else if (SOUND_MemAllocCounter==SOUND_MemAllocMax)
	{
		MSERROR((">>>>> Error: SOUND_MemAllocate\n"));
		MSERROR(("No spare slots\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

/* Now, find the smallest available segment which would fit the required size. */


	FirstAddr=1024*2048;	// Start at END of SPU RAM
	smallestsize=0;

	for (j=0;j<16;j++)
	{
		ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
		for (i=0;i<SOUND_MemAllocCounter+1;i++)
		{
			EndOffset=FirstAddr-1;	// Effect buffer end addresses MUST end on a 128K-1 boundary
			StartOffset=FirstAddr-Size;

			ptr2=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
			ptr2+=ptr->Next;
			Addr_Lo=ptr->Address+ptr->Size;
			Addr_Hi=ptr2->Address;
			Gap=Addr_Hi-Addr_Lo;	/* Gap between current and next allocated block */

// Check to see if area is unoccupied by any SPU data.
			if (((int)Addr_Hi>EndOffset)&&((int)Addr_Lo<=StartOffset))
			{
				if ((int)Gap==Size)			/* Found exact size match? */
				{
					ptr3=ptr;
					ReqAddr=(u_int)StartOffset;	/* Make copy of RAM address */
					break;				/* break from loop. It can't get any better than this..! */
				}
				if (Gap>smallestsize)
				{
					smallestsize=Gap;
					ptr3=ptr;
					ReqAddr=(u_int)StartOffset;
				}
			}
			ptr=ptr2;
		}
		if ((int)Gap==Size)
			break;

		FirstAddr-=(128*1024);	// Work backwards through SPU RAM to the begining.
	}
	if (ReqAddr==0)	/* No gap found which is large enough? */
	{
		MSERROR((">>>>> Error: SOUND_MemAllocateEffectBuffer\n"));
		MSERROR(("Size too large\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-2);
	}

/* From here, think of three links as the following: */
/* a = current link to add to link list */
/* b = link before the current link (a) */
/* c = link that (b) was pointing to next */
/* So, (a) has to fit inbetween (b) and (c). Links from b->c have to be diverted through (a). */

	ptr2=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	ptr2+=SOUND_MemNextFree;

	a=(int)SOUND_MemNextFree;	/* Current spare slot to add to link list */
	SOUND_MemNextFree=ptr2->Next;
	ptr2->Size=(u_int)Size;
	ptr2->Address=ReqAddr;
	ptr2->Next=ptr3->Next;
	ptr3->Next=(u_int)a;
	SOUND_MemAllocCounter++;	/* Increase malloc counter */

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return((int)ReqAddr);
}


/*****************************************************************************
SOUND_MemFreeAll
	Free all allocated SPU RAM.

	Requires:	Address		RAM address to free
	Returns:	(int) 0		OK
				(int)-1		Error
*****************************************************************************/
int SOUND_MemFreeAll(void)
{
int i;
SOUND_MEM_ALLOC *ptr;
u_int Address;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_MemAllocBuffer==0)
	{
		MSERROR((">>>> Error: SOUND_MemFreeAll\n"));
		MSERROR(("SOUND_MemAllocInit needs to be called first.\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	ptr+=ptr->Next;
	for (i=0;i<SOUND_MemAllocCounter;i++)
	{
		Address=ptr->Address;
		SOUND_MemFree(Address);
	}
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_MemFree
	Free allocated SPU RAM.

	Requires:	Address		RAM address to free
	Returns:	0			OK
				-1			Address not found
*****************************************************************************/
int SOUND_MemFree(u_int Address)
{
int i,j;
SOUND_MEM_ALLOC *ptr;
SOUND_MEM_ALLOC *ptr2;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_MemAllocBuffer==0)
	{
		MSERROR((">>>> Error: SOUND_MemFree\n"));
		MSERROR(("SOUND_MemAllocInit needs to be called first.\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}
	else if (SOUND_MemAllocCounter==0)	/* No sections allocated? */
	{
		MSERROR(("SOUND_MemFree\n"));
		MSERROR(("No SPU RAM allocate - nothing to free\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(-1);
	}

	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	ptr2=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;

	j=(int)ptr->Next;
	ptr+=j;			/* Point to first "real" record */

	for (i=0;i<SOUND_MemAllocCounter;i++)
	{
		if (ptr->Address>Address)	/* Searched passed required address? Drop out now then.. */
		{
			MSERROR(("SOUND_MemFree\n"));
			MSERROR(("Address 0x%x not found\n",Address));
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(-1);
		}
		if (ptr->Address==Address)	/* Found address? */
		{
			ptr->SFX_ID_Used=0;
			ptr->SFX_ID=0;

			SOUND_MemAllocCounter--;	/* Decrease malloc counter */
			ptr2->Next=ptr->Next;
			ptr->Next=SOUND_MemNextFree;
			SOUND_MemNextFree=(u_int)j;		/* Make this the next free link */
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(0);				/* Success! */
		}
		ptr2=ptr;
		j=(int)ptr->Next;
		ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
		ptr+=j;
	}

	MSERROR(("SOUND_MemFree\n"));
	MSERROR(("Address 0x%x not found\n",Address));
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(-1);		/* Address not found */
}


/*****************************************************************************
SOUND_MemFindLargest
	Finds the size of the largest section of free SPU RAM available.

	Requires:					Nothing
	Returns:	(u_int) size	Size of largest free SPU RAM buffer.

*****************************************************************************/
u_int SOUND_MemFindLargest(void)
{
int i,j;
u_int Addr_Lo,Addr_Hi,Gap;
u_int bigsize=0;
SOUND_MEM_ALLOC *ptr;
SOUND_MEM_ALLOC *ptr2;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	if (SOUND_MemAllocBuffer==0)
	{
		MSERROR((">>>> Error: SOUND_MemFindLargest\n"));
		MSERROR(("SOUND_MemAllocInit needs to be called first.\n"));
		SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
		return(0);
	}

	j=0;
	ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
	for (i=0;i<SOUND_MemAllocCounter+1;i++)
	{
		ptr2=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
		ptr2+=ptr->Next;
		Addr_Lo=ptr->Address+ptr->Size;
		Addr_Hi=ptr2->Address;

		Gap=Addr_Hi-Addr_Lo;
		if (Gap>bigsize)
			bigsize=Gap;

		j=(int)ptr->Next;
		ptr=(SOUND_MEM_ALLOC *)SOUND_MemAllocBuffer;
		ptr+=j;
	}
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(bigsize);
}


/*****************************************************************************
SOUND_CloseEverything
	Stops all streams. Free streams IOP RAM buffers
	Free all File ID IOP buffers
	Free all SFX ID IOP buffers
	Free PCM buffer
	Stops any currently playing SPU channels

	Requires:	Nothing
	Returns:	Nothing

	Note: Remember that FlushIOPCommand STILL needs to be called after calling
	this routine!

*****************************************************************************/
void SOUND_CloseEverything(void)
{
int i;

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	for (i=0;i<SOUND_LastStream;i++)
	{
		SOUND_CloseStreamBuffer(i);
	}
	SOUND_FreeFileMemory();
	SOUND_FreeSpotFXMemory();
	SOUND_ClosePCMPlayback();

	for (i=0;i<48;i++)
	{
		SOUND_SetSPUChannelRelease((u_int)i,0);
		SOUND_StopSound(i);
	}
	SOUND_SetMaxStreamLimit(0);
	SOUND_MemAllocClose();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}


/*****************************************************************************
SOUND_CloseIOPResources
	Free hardware timer
	Deletes IOP Sema used by routine: StreamADPCM
	Deletes IOP Thread which StreamADPCM is attached to.

	Requires:	Nothing
	Returns:	Nothing

	Notes: Calling this will then free all timer and thread releated resources
	used by MultiStream IOP module. Calling this after SOUND_CloseEverything
	will then have the effect of completely shutting down the IOP side of things.
*****************************************************************************/
void SOUND_CloseIOPResources(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_CLOSE_IOP_RESOURCES);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/*****************************************************************************
SOUND_SetSFXPlayOffset

	Sets the offset to play a SFX from in SPU RAM.
	The offset value is added to the SPU RAM address past to SOUND_PatchSFX.
	Passing 0 will play the SFX from the original address past to
	SOUND_PatchSFX.
	As there is no information held about the length of a SFX, care must be
	taken not to set the offset to invalid values.


	Requires:	ID			SFX ID to set offset of.
				LoopFlag	SOUND_LOOP_TO_START (loop back to start of sample
							when playback reaches end of an loop marker)
							SOUND_LOOP_TO_OFFSET (loop back to the offset
							position when playback reaches end of an loop marker)
				Offset		Offset into SFX start address to start playback from

	Returns:	0			OK
				-1			Invalid loop flag

	Note:
		Offset must be a multiple of 16. If the Offset is not a multiple of 16,
		its value will be rounded down (the bottom 4 bits are cleared)

		Due to the nature of ADPCM data, clicking or pops can occure when playing
		data from any start offset. The same may happen if looping to the
		offset position also. Care must be taken to make sure that clicking
		does not happen. Setting a slight attack rate when performing SOUND_PlaySFX
		can remove clicking when first playing a SFX.

*****************************************************************************/
int SOUND_SetSFXPlayOffset(u_int ID, u_short LoopFlag,u_int Offset)
{
	if ((LoopFlag!=SOUND_LOOP_TO_START)&&(LoopFlag!=SOUND_LOOP_TO_OFFSET))
	{
		MSERROR(("ERROR: SOUND_SetSFXPlayOffset\n"));
		MSERROR(("Invalid loop flag (0x%x)\n",LoopFlag));
		return(-1);
	}

	Offset&=(u_int)~0xf;	// Make offset a multiple of 16.

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_SFX_OFFSET);
	SOUND_AddLongData(ID);
	SOUND_AddData((short)LoopFlag);
	SOUND_AddLongData(Offset);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_SetStreamForMIBPlayback
	Calculates the IOP stream buffer size required for playing back a specific
	.MIB file. If the stream buffer is larger than the required size, it is
	automatically resized to the size required.
	The streams SPU buffer size is also resized to the .MIH track size
	(the largest size it can be when playing .MIB files)

	Requires:	i				Stream channel
				TrackSize		.MIB interleaved track size
				NumberOfFiles	Number of seperate files which created the .MIB

	Returns:	0				OK
				-1				Failed

	Notes: Use SOUND_GetMIHInfo to find the values for both TrackSize and
		   NumberOfFiles:

		   buffer->TrackSize;
		   buffer->NumberOfFiles

*****************************************************************************/
int SOUND_SetStreamForMIBPlayback(u_int i, u_int TrackSize, u_int NumberOfFiles)
{
int SPUBufferSize;
int IOPBufferSize;

	if ((int)i>SOUND_LastStream)
	{
		MSERROR(("ERROR: SOUND_SetMIBBufferSizes\n"));
		MSERROR(("Stream (%d) out of range\n",i));
		if (i<48)
			MSERROR(("Call SOUND_SetMaxStreamLimit to allow more\n"));
		else
			MSERROR(("Must range from 0-47\n"));
		return(-1);
	}
	if (SOUND_IOPInitialBufferSizes[i]==0)
	{
		MSERROR(("ERROR: SOUND_SetMIBBufferSizes\n"));
		MSERROR(("Stream 0x%x not allocated\n",i));
		return (-1);
	}

	SPUBufferSize=(int)TrackSize;		/* Max size of SPU RAM buffer required to play MIH file */
	IOPBufferSize=(int)(TrackSize*NumberOfFiles*2);

	if ((int)(SOUND_IOPInitialBufferSizes[i])>IOPBufferSize)
	{
		SOUND_ResizeStreamBuffer((int)i,(u_int)IOPBufferSize);
	}
	else if ((int)(SOUND_IOPInitialBufferSizes[i])!=IOPBufferSize)
	{
		MSERROR(("ERROR: SOUND_SetMIBBufferSizes\n"));
		MSERROR(("Stream will require IOP buffer size of 0x%x\n", IOPBufferSize));
		MSERROR(("SOUND_AllocateStreamBuffer was called with size 0x%x\n",
		SOUND_IOPInitialBufferSizes[i]));
		return(-1);
	}
	SOUND_ResizeSPUBuffer((int)i,TrackSize);
	return(0);
}


/*****************************************************************************
SOUND_ReturnMIBBufferSize
	Calculates the IOP stream buffer size required for playing back a specific
	.MIB file.
	This size can then be used when calling SOUND_AllocateStreamBuffer for
	handling the playback of the .MIB file.

	Requires:	i				Stream channel
				TrackSize		.MIB interleaved track size
				NumberOfFiles	Number of seperate files which created the .MIB

	Returns:	0				OK
				BufferSize		IOP buffer size required

	Notes: Use SOUND_GetMIHInfo to find the values for both TrackSize and
		   NumberOfFiles:

		   buffer->TrackSize;
		   buffer->NumberOfFiles

*****************************************************************************/
u_int SOUND_ReturnMIBBufferSize(u_int TrackSize, u_int NumberOfFiles)
{
	return(TrackSize*NumberOfFiles*2);
}

#if 0
/*****************************************************************************
SOUND_SULPHA
	Hook into Oliver Hume's SULPHA audio tool.
	If you attended the Sony Devcon/DevStation2003 and didn't see this, then
	you really missed out. Ah well, serves you right for thinking that all that
	graphics and network stuff was gonna be more impressive.
*****************************************************************************/
void SOUND_SULPHA(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SULPHA);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}
#endif

/*****************************************************************************
SOUND_SetMemHooks
Set up some memory allocation routine hooks.
The default routines are memalign and free, so this does not have to be
called.
Errors are produced if memory has already been allocated and not free'd (ie
it's outstanding)
What this allows is for you to hook in your own memory allocation/free routines
instead of using the usual memalign/free routines

Thanks to Jim Callin @ Climax for this!

	Requires:	allocFunc		Routine to call for allocation of EE RAM
				freeFunc		Routine to call for freeing EE RAM

	Returns:	0				OK
				-1				Failed

	Notes:		Your allocation routine will require two parameters, as with
				memalign (aligment and size). Therefore, to replace a normal
				malloc command, you will need to pass (size,4) to this routine.
				Your free routine just requires the EE address of the data
				block.

*****************************************************************************/
int	SOUND_SetMemHooks( SOUND_ALLOC_FUNC allocFunc, SOUND_FREE_FUNC freeFunc )
{
	if( SOUND_ALLOC_COUNTER != 0 )
	{
		// barf -
		MSERROR(("ERROR: SOUND_SetMemHooks() - Things are probably going to go bang - !\n"));
		MSERROR(("ERROR: you've allocated memory that's not free'd and are now changing the allocation and free routines\n"));
		return(-1);
	}
	else
	{
		SOUND_AllocFunc	=	allocFunc;
		SOUND_FreeFunc	=	freeFunc;
	}
	return(0);
}

/*****************************************************************************
SOUND_AllocMemEE
Alloc some (aligned) memory on the EE
Called internally by sound.c routines.
Thanks to Jim Callin @ Climax for this!

	Requires:	alignment		aligment offset (in bytes) of start of data block
				size			size (in bytes) of data block

	Returns:	(void*)Address	EE address of data block

*****************************************************************************/
void	*	SOUND_AllocMemEE( int alignment, int size )
{
	SOUND_ALLOC_COUNTER++;
	if( SOUND_AllocFunc == NULL )
	{
		return	memalign( (u_int)alignment, (u_int)size );
	}
	else
	{
		return	SOUND_AllocFunc( alignment, size );
	}
}

/*****************************************************************************
SOUND_FreeMemEE
Free some memory on the EE
Called internally by sound.c routines.
Thanks to Jim Callin @ Climax for this!

	Requires:	(void*)Address	Address of data block
	Returns:	Nothing
*****************************************************************************/
void	SOUND_FreeMemEE( void *block )
{
	SOUND_ALLOC_COUNTER--;
	if( SOUND_FreeFunc == NULL )
	{
		free( block );
	}
	else
	{
		SOUND_FreeFunc( block );
	}
}

/*****************************************************************************
SOUND_SetDSP
	Add a DSP effect parameter

	Requires:	slot		0-7 Slot which DSP effect is (or will be) stored in.
				type		DSP effect type
				value		value to store in DSP effect parameter

	Returns:	0			OK
				-1			Failed (Value out of range).

	Notes:
		Valid commands:

	SOUND_SetDSP(0,SOUND_INIT_DSP,0);			// (both 0's are not used)
	SOUND_SetDSP(slot,SOUND_DSP_MUTE,mute);		// 1=mute, 0=un-mute

	SOUND_SetDSP(slot,SOUND_FILTER_TYPE,SOUND_FILTER_LOWPASS);
	SOUND_SetDSP(slot,SOUND_FILTER_TYPE,SOUND_FILTER_HIPASS);
	SOUND_SetDSP(slot,SOUND_FILTER_TYPE,SOUND_FILTER_BANDPASS);
	SOUND_SetDSP(slot,SOUND_FILTER_RESONANCE,0-256);
	SOUND_SetDSP(slot,SOUND_FILTER_FREQ,0-512);

	SOUND_SetDSP(slot,SOUND_COMPRESS_THRESHOLD,0-0x7fff);
	SOUND_SetDSP(slot,SOUND_COMPRESS_RATIO,0-2048);
	SOUND_SetDSP(slot,SOUND_COMPRESS_ATTACK,0-32);
	SOUND_SetDSP(slot,SOUND_COMPRESS_RELEASE,0-32);
	SOUND_SetDSP(slot,SOUND_COMPRESS_GAIN,0-2048);
	SOUND_SetDSP(slot,SOUND_DISTORTION_LEVEL,0-256);

	SOUND_SetDSP(slot,SOUND_FLANGE_DEPTH,0-255);
	SOUND_SetDSP(slot,SOUND_FLANGE_SPEED,0-255);

	SOUND_SetDSP(slot,SOUND_RINGMOD_FREQ,0-0x7fff);

	SOUND_SetDSP(slot,SOUND_NOISEGATE_LEVEL,0-0x7fff);
	SOUND_SetDSP(slot,SOUND_NOISEGATE_RAMP,0-16);

*****************************************************************************/
int SOUND_SetDSP(int slot,int type,u_int value)
{

	if (slot>7)
		return(-3);

	if (type==SOUND_FILTER_FREQ)
	{
		if (value>512)
			return(-1);
	}
	else if (type==SOUND_FILTER_RESONANCE)
	{
		if (value>256)
			return(-1);
	}
	else if (type==SOUND_INIT_DSP)
	{
		slot=SOUND_DSPThreadPriority;
	}
	else if (type==SOUND_COMPRESSOR_ONOFF)
	{
		if (value>1)
			return(-1);
	}
	else if (type==SOUND_DISTORTION_LEVEL)
	{
		if (value>256)
			return(-1);
	}
	else if (type==SOUND_FILTER_TYPE)
	{
		if (value>SOUND_FILTER_BANDPASS)
			return(-1);
	}
	else if (type==SOUND_FLANGE_SPEED)
	{
		if (value>255)
			return(-1);
	}
	else if (type==SOUND_FLANGE_DEPTH)
	{
		if (value>255)
			return(-1);
	}
	else if (type==SOUND_COMPRESS_THRESHOLD)
	{
		if (value>0x7fff)
			return(-1);
	}
	else if (type==SOUND_COMPRESS_GAIN)
	{
		if (value>2048)
			return(-1);
	}
	else if (type==SOUND_COMPRESS_ATTACK)
	{
		if (value==0)
			value++;
		if (value>32)
			return(-1);
	}
	else if (type==SOUND_COMPRESS_RELEASE)
	{
		if (value==0)
			value++;
		if (value>32)
			return(-1);
	}
	else if (type==SOUND_COMPRESS_RATIO)
	{
		if (value>2048)
			return(-1);
	}
	else if (type==SOUND_NOISEGATE_LEVEL)
	{
		if (value>0x7fff)
			return(-1);
	}
	else if (type==SOUND_NOISEGATE_RAMP)
	{
		if (value>16)
			return(-1);
	}
	else if (type==SOUND_DSP_MUTE)
	{
		if (value>1)
			return(-1);
	}
	else if (type==SOUND_RINGMOD_FREQ)
	{
		if (value>0x7fff)
			value=0x7fff;
	}
	else
		return(-2);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_FILTER);
	SOUND_AddData((short)slot);
	SOUND_AddData((short)type);
	SOUND_AddData((short)value);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_SetDSPBuffer
	Used if PCM data is required to be sent to the EE for processing via
	the DSP interface.

	Requires:	buffer		EE RAM address of buffer where data will be sent from IOP.
				flag		SOUND_DSP_ON or SOUND_DSP_OFF
				packets		maximum number of data packets which will be buffered before
							playback starts. The more packets you have, the higher the
							latency will be..

	Returns:	size		size of data which will be allocated on IOP (packets*1024)
				0			Error

	Notes: IOP will allocate buffers also with this command. Therefore, you need to
	use SOUND_DSP_OFF to free these buffers if EE processing is no longer required.

	Your buffer size has to be 1024*packets.

*****************************************************************************/
u_int SOUND_SetDSPBuffer(int buffer,short flag,short packets)
{
	if (packets<0)
		return(0);	// 0 = error.

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_DSPLimit=packets;
	SOUND_StartCommand(SND_SET_DSP_BUFFER);
	SOUND_AddLongData((u_int)buffer);	// EE address
	SOUND_AddLongData((u_int)(u_int*)SOUND_DSPUpdate);
	SOUND_AddData(flag);		// On/Off
	SOUND_AddData(packets);		// On/Off
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return((u_int)packets*1024);	// size of data which will be allocated on IOP side
}

void SOUND_SetDSPCount(u_int c)
{
//printf("SetCount %d\n",c);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_DSP_CHECKSUM=1;
	SOUND_DSP_CHECKCOUNT+=(int)c;

	SOUND_StartCommand(SND_SET_DSP_COUNT);
	SOUND_AddData((short)c);		// Amount of packets sent from EE To IOP
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

static u_int SOUND_DSPCurrentReadCounter=0;
//static u_int SOUND_DSPCurrentWriteCounter=0;
/*****************************************************************************
SOUND_CheckDSPUpdate
	Returns amount of packets of PCM data are in EE RAM

	Requires:	Nothing
	Returns:	Number of packets

*****************************************************************************/
int SOUND_CheckDSPUpdate(void)
{
int i;

	for (i=0;i<SOUND_DSPCount;i++)
	{
		if ((int)SOUND_DSPCurrentReadCounter==SOUND_DSPData[i].Counter)
		{
			return((int)SOUND_DSPCurrentReadCounter);
		}
	}
	return(-1);		// No more DSP data to process
}

/*****************************************************************************
SOUND_GetDSPEEAddress
	Returns EE RAM address for specified PCM data packet

	Requires:	c		Packet number
	Returns:	addr	EE RAM Address
				0		No address for for requested packet
*****************************************************************************/
u_int SOUND_GetDSPEEAddress(int c)
{
int i;

	for (i=0;i<SOUND_DSPCount;i++)
	{
		if (c==SOUND_DSPData[i].Counter)
		{
			return(u_int)(SOUND_DSPData[i].EEAddress);
		}
	}
	return(0);
}

/*****************************************************************************
SOUND_WriteDSPPacket

	Transfers a requested PCM data packet back to the IOP

	Requires:	packet		Data packet number
				source		EE RAM address of packet
				tranflag	SOUND_DMA_WAIT (blocks until transfer complete)
							SOUND_DMA_NO_WAIT (doesn't block)

	Returns:	0			OK
				-1			Packet not found
				-2			Packet not required
				-3			Invalid transflag type
*****************************************************************************/
int SOUND_WriteDSPPacket(u_int packet,u_int source, int tranflag)
{
int i;

	if ((tranflag!=SOUND_DMA_WAIT)&&(tranflag!=SOUND_DMA_NO_WAIT))
		return(-3);
	if (packet!=SOUND_DSPCurrentReadCounter)
		return(-2);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	for (i=0;i<SOUND_DSPCount;i++)
	{
		if ((int)packet==SOUND_DSPData[i].Counter)
		{
			SOUND_DSPData[i].Counter|=0x8000;	// Mark packet as sent to IOP
			SOUND_TransferDataToIOP(source,(u_int)SOUND_DSPData[i].IOPAddress,1024,tranflag);
			SOUND_SetDSPCount(packet);

			SOUND_DSPCurrentReadCounter++;
			SOUND_DSPCurrentReadCounter%=(u_int)SOUND_DSPLimit;
			SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
			return(0);
		}
	}
printf("*** PACKET NOT FOUND ***\n");
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(-1);
}

/*****************************************************************************
SOUND_DSPOnOff
	Turns DSP effects on or off for a specific core.
	Unlike the DSP Mute function, this function also stops any data being read
	from the SPU to IOP RAM also.

	Requires:	core		DSP core 0 or 1
				flag		SOUND_DSP_OFF = off
							SOUND_DSP_ON = on

	Returns:	0			OK
				-1			core or flag out of range
*****************************************************************************/
int SOUND_DSPOnOff(u_int core,u_int flag)
{
int value;

	if (core>1)
		return(-1);
	else if (flag>1)
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	value=(int)(core|(flag<<1));
	SOUND_StartCommand(SND_SET_FILTER);
	SOUND_AddData(0);	// Slot - not required
	SOUND_AddData((short)SOUND_DSP_ONOFF);
	SOUND_AddData((short)value);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_GetDSPCount
	Returns the amount of DSP PCM packets which are in the EE waiting to be
	processed and returned to the IOP.

	Requires:	Nothing
	Returns:	count			Number of packets to process
*****************************************************************************/
int SOUND_GetDSPCount(void)
{
	return(SOUND_DSPCount);
}

/*****************************************************************************
SOUND_DSPClear
	Turns off all DSP effects for a requested core.

	Requires:	core		0 or 1
	Returns:	0			OK
				-1			core out of range
	Notes:

	Does the same thing has calling: SOUND_DSPSetEffect(slot,core,SOUND_FLAG_DSP_OFF);
	for all slots which use the requested core.

*****************************************************************************/
int SOUND_DSPClear(u_int core)
{
	if (core>1)
		return(-1);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_StartCommand(SND_SET_FILTER);
	SOUND_AddData(0);	// Slot - not required
	SOUND_AddData((short)SOUND_DSP_CLEAR);
	SOUND_AddData((short)core);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_DSPSetEffect
	Sets a DSP effect in a required slot, using a specified core.

	Requires:	slot		0-7
				core		0 or 1
				effect		DSP effect type

	Note: Each slot can only effect either core 0 or core 1

	List of effects:

	SOUND_FLAG_DSP_OFF 				Turns DSP effect slot OFF
	SOUND_FLAG_DSP_COMPRESS			Compressor
	SOUND_FLAG_DSP_COMPRESS_SIDE	Side-chain compressor (other core effects selected core)
	SOUND_FLAG_DSP_FILTER			Low/Hi/Band pass filter + resonance
	SOUND_FLAG_DSP_DISTORT			Distortion
	SOUND_FLAG_DSP_FLANGE			Flanger
	SOUND_FLAG_DSP_NOISEGATE		Noise gate
	SOUND_FLAG_DSP_RINGMOD			Ring modulation
	SOUND_FLAG_DSP_PITCH_DETECT		Pitch detection

*****************************************************************************/
int SOUND_DSPSetEffect(u_int slot, u_int core,u_int effect)
{
	if (core>1)
		return(-1);
	if (effect>SOUND_FLAG_DSP_LASTTYPE)
		return(-2);
	if (slot>=SOUND_MAX_DSP)
		return(-3);

	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE
	SOUND_StartCommand(SND_SET_DSP_EFFECT);
	SOUND_AddData((short)core);
	SOUND_AddData((short)slot);
	SOUND_AddData((short)effect);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
	return(0);
}

/*****************************************************************************
SOUND_GetCommandCount
	Returns the amount of commands when are buffered on the EE, waiting to be
	sent to the IOP via SOUND_FlushIOPCommand

	Requires:	Nothing
	Returns:	count		Amount of instructions waiting to be sent

*****************************************************************************/
int SOUND_GetCommandCount(void)
{
	return((int)SOUND_COMMAND_COUNTER);
}

/*****************************************************************************
SOUND_GetDSPInfo
	Returns relevent info for DSP effect type for all 8 DSP slots.

	Requires:	*buffer		(SOUND_DSP_INFO *) pointer to EE buffer
	Returns:	0			IOP DSP currently OFF
				1			IOP DSP currently ON
				2			IOP DSP currently WAITING TO CLOSE
				(buffer->EffectInfo[0-7]) (Relevent info for DSP effect type)
				(buffer->Debug[0-1]) (scan line timings for debug scan)
	Notes:
		Passing NULL as the EE buffer address will only return the current
		DSP engine status.
		For debug scanning, you need to recompile the IOP side, modifying the
		ms_switches.h file to set:

	#define MS_DSP_DEBUG 1
	#define MS_SCANLINE_DEBUG 1

	buffer->Debug[0] = Scan lines taken between each PCM callback
	buffer->Debug[1] = Scan lines taken to process DSP

	buffer->EffectInfo[n] =

	Filter					Nothing
	Distortion				Nothing
	Compressor				Gain level (0-2048. 0 = silence, 2048 = max)
	SideChain Compressor	Gain level (0-2048. 0 = silence, 2048 = max)
	Pitch Detection			Detected pitch in Hz
	Noise Gate				Current gate level (0-1024. 0=silence, 1024 = max)

*****************************************************************************/
int SOUND_GetDSPInfo(SOUND_DSP_INFO *buffer)
{
int i;

	if (buffer!=NULL)
	{
		for (i=0;i<2;i++)
		{
			buffer->Debug[i]=(int)SOUND_DEBUG_SCAN[i];
		}
		buffer->IOPBuffer=SOUND_DSP_IOP_BUFFER;
		for (i=0;i<8;i++)
		{
			buffer->EffectInfo[i]=(int)SOUND_DSP_IOP_INFO[i];
		}
	}
	return(SOUND_DSP_STATUS);
}

/**********************************************************************************
SOUND_CloseDSP
	Request the DSP system to close down.

	Requires:	Nothing
	Returns:	Nothing

	Notes:
		The IOP code may note close the DSP system straight away, as it needs to wait
		until no IOP->SPU data transfers are taking place to allow for audio to play
		as normal.
		Check the return value from SOUND_GetDSPInfo to know when the DSP system
		has actually closed.
***********************************************************************************/
void SOUND_CloseDSP(void)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE
	SOUND_StartCommand(SND_CLOSE_DSP);
	SOUND_EndCommand();
	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END

}
/*****************************************************************************
SOUND_GetRPCBufferSize
	Returns as a percentage, how full the MultiStream EE command buffer is.

	Requires:	Nothing
	Returns:	Size		0-100 (%)

	Each time a SOUND_ command is performed which requires data to be sent
	to the IOP, the command data is added to an EE buffer.
	Only when SOUND_FlushIOPCommand is called does this buffer get sent to the
	IOP.
*****************************************************************************/
u_int SOUND_GetRPCBufferSize(void)
{
u_int size;

	size=(u_int)IOP_Cnt;		// Total size of data which is to be transferred to IOP
	size+=2;			// Always send the number of data packets and version ID

	size*=100;
	size/=(DATA_SIZE_NORMAL/2);
	return(size);
}

/*****************************************************************************
SOUND_MultiThreadSafeCheckStart
	Allows all SOUND_ functions to be multi-thread safe.
	To be called at the start of any SOUND_ command which sends data to the IOP

	Requires:	Nothing
	Returns:	Nothing
*****************************************************************************/
void SOUND_MultiThreadSafeCheckStart(void)
{
int thd;

	thd=GetThreadId();	// Current thread ID.

	if ((SOUND_MTSafe!=-1)&&(SOUND_MTSafe!=thd))	// Is a different thread calling a SOUND_ command?
	{
		DI();										// Disable interrupts
		SOUND_ThreadSleep[SOUND_SleepCount]=thd;	// Store thread ID
		SOUND_SleepCount++;							// increase sleep counter
		EI();										// Enable interrupts

		SleepThread();								// Send this thread to sleep
// No more processing for this thread will take place until a WakeupThread command is issued.
	}
	SOUND_MTSafe=thd;
}

/*****************************************************************************
SOUND_MultiThreadSafeCheckEnd
	Allows all SOUND_ functions to be multi-thread safe.
	To be called at the end of any SOUND_ command which sends data to the IOP

	Requires:	Nothing
	Returns:	Nothing
*****************************************************************************/
void SOUND_MultiThreadSafeCheckEnd(void)
{
int wakeThreadID=0;

	if (SOUND_SleepCount!=SOUND_WakeCount)	// Is there any sleeping threads?
	{
	  DI();          // Disable interrupts
	  wakeThreadID = SOUND_ThreadSleep[SOUND_WakeCount];
	  SOUND_WakeCount++;       // Increase wake counter
	  EI();          // Enable interrupts
	  WakeupThread(wakeThreadID); // Yes. Wake the next one..
	}

	SOUND_MTSafe=-1;
}

/*****************************************************************************
SOUND_SetMultiStreamVoices

	Limits MultiStream to the specified voices. '1' bits mean MultiStream
	controls the voice, '0' bits mean MultiStream leaves the voices alone.
	This function modifes the SOUND_SPUKeyStatus array, marking voices
	MultiStream should not use as "SPU_KEY_STATUS_UNKNOWN".

	Required for SCREAM to run along with MultiStream

    Requires:	core0			voice flags for SPU core 0
				core1           voice flags for SPU core 1
	Returns:	Nothing
*****************************************************************************/
void SOUND_SetMultiStreamVoices(u_int core0, u_int core1)
{
	SOUND_MultiThreadSafeCheckStart();	// MULTITHREAD SAFE CODE

	SOUND_MSChannelUseMask[0] = core0;
	SOUND_MSChannelUseMask[1] = core1;

	SOUND_StartCommand(SND_SET_MULTISTREAM_VOICES);
	SOUND_AddLongData(core0);
	SOUND_AddLongData(core1);
	SOUND_EndCommand();

	SOUND_MultiThreadSafeCheckEnd();	// MULTITHREAD SAFE CODE - END
}

/* ----------------------------------------------------------------
 *	End on File
 * ---------------------------------------------------------------- */
/* This file ends here, DON'T ADD STUFF AFTER THIS */
