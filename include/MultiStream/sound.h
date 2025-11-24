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
 *                            sound.h
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
 */


#ifndef SOUNDHEADER
#define SOUNDHEADER

#ifdef __cplusplus
extern "C" {
#endif

#define SND_PLAY_SFX 0
#define SND_PLAY_STREAM 1
#define SND_SET_VOL_LR 2
#define SND_SET_PITCH 3
#define SND_STOP_SFX 4
#define SND_STOP_STREAM 5
#define SND_TRANSFER_SPOTFX 6
#define SND_INIT_SPU 7
#define SND_CLEAR_SPOTFX 8
#define SND_GET_CD_STATUS 9
#define SND_PAUSE 10
#define SND_RESUME 11
#define SND_INIT_STREAM 12
#define SND_ALLOC_STREAM_BUFFER 13
#define SND_SET_SPU_START_ADDRESS 14
#define SND_CLOSE_STREAM_BUFFER 15
#define SND_SET_MAX_STREAM_LIMIT 16
#define SND_CHECK_STEREO_READY 17
#define SND_CANCEL_CHECK_STEREO_READY 18
#define SND_ENABLE_FX 19
#define SND_DISABLE_FX 20
#define SND_SET_FX_MASTER_VOL 21
#define SND_FX_ALL_CHANS_ON 22
#define SND_FX_ALL_CHANS_OFF 23
#define SND_FX_CHAN_ON 24
#define SND_FX_CHAN_OFF 25
#define SND_PATCH_EXTERNAL_FILE 26
#define SND_CHAIN_STREAMS 27
#define	SND_PATCH_SFX 28	//FLT!
#define SND_GET_FILE_INFO 29
#define SND_SET_FILE_INFO 30
#define SND_CREATE_FILE_INFO 31
#define SND_FREE_FILE_ID 32
#define SND_FREE_ALL_FILE_ID 33
#define SND_STORE_HOST0_FILENAME 34
#define SND_ALLOCATE_FILE_RAM 35
#define SND_FREE_FILE_RAM 36
#define SND_ALLOCATE_SFX_RAM 37
#define SND_FREE_SFX_RAM 38
#define SND_FREE_ALL_SFX_ID 39
#define SND_FREE_SFX_ID 40
#define SND_SET_FILE_OFFSET_AND_SIZE 41
#define SND_INIT_CD 42
#define SND_SET_STREAM_PARENT 43
#define SND_SET_STREAM_CHILD 44
#define SND_GET_MAX_RAM 45
#define SND_ALLOW_KON 46
#define SND_DISABLE_KON 47
#define SND_SET_INT_TRACK 48
#define SND_SET_EE_START_ADDRESS 49
#define SND_SET_IOP_START_ADDRESS 50
#define SND_GET_FILE_ID_INFO 51
#define SND_TRANS_IOP_TO_SPU 52
#define SND_CD_ERROR_RESTART 53
#define SND_CD_ERROR_PAUSE_EX 54
#define SND_CD_CHECK 55
#define SND_CD_ERROR_RESTART_EX 56
#define SND_PLAY_SFX_LOOP 57
#define SND_DISABLE_CD_CALLBACK 58
#define SND_DISABLE_SPU_CALLBACK 59
#define SND_ENABLE_SPU_CALLBACK 60
#define SND_INIT_DTS 61
#define SND_SET_KEY_ON_FLAG 62
#define SND_KEY_ON_CHAN 63
#define SND_STRM_ADD_CH 64
#define SND_SET_OUTPUT 65
#define SND_SET_EE_TRANS_ADDRESS 66
#define SND_APPEND_STREAM 67
#define SND_STREAM_LOAD_SOURCE 68
#define SND_INIT_PCM 69
#define SND_SET_PCM_TYPE 70
#define SND_RESIZE_STREAM_BUFFER 71
#define SND_SET_PCM_VOLUME 72
#define SND_INIT_WAIT 73
#define SND_SET_STREAM_START_POS 74
#define SND_PLAY_PCM 75
#define SND_STOP_PCM 76
#define SND_INIT_PCM_NO_STREAM 77
#define SND_IGNORE_VAG_PITCH 78
#define SND_CLOSE_PCM_PLAYBACK 79
#define SND_SET_IOP_DTS_INFO 80
#define SND_INTERNAL_FASTLOAD 81
#define SND_RESIZE_SPU_BUFFER 82
#define SND_OUT_ALL_CHANS_ON 83	/* Thanks to Patrick Bergeron for these commands (83-86) */
#define SND_OUT_ALL_CHANS_OFF 84
#define SND_OUT_CHAN_ON 85
#define SND_OUT_CHAN_OFF 86
#define SND_TV_OUTPUT_ON 87
#define SND_TV_OUTPUT_OFF 88
#define SND_PAUSE_PCM 89
#define SND_RESUME_PCM 90
#define SND_SET_SWITCH 91
#define SND_SET_PARAM 92
#define SND_SET_ADDR 93
#define SND_SET_COREATTR 94
#define SND_BLOCK_TRANS 95
#define SND_SET_VOL_SMOOTH 96
#define SND_SET_MULTI_CHAN_PITCH 97
#define SND_SET_THREAD_PRIORITY 98
#define SND_SET_MIB_END 99
#define SND_PRIORITY_STREAM 100
#define SND_PAUSE_SPU_CHANS 101
#define SND_RESUME_SPU_CHANS 102
#define SND_SET_EFFECT_ADDR 103
#define SND_ATWINMON_OPEN 104
#define SND_ATWINMON_CLOSE 105
#define SND_SET_SFX_OFFSET 106
#define SND_SULPHA 107	// SPARE!!
#define SND_CLOSE_IOP_RESOURCES 108
#define SND_SET_FILTER 109
#define SND_SET_DSP_EFFECT 110
#define SND_SET_DSP_BUFFER 111
#define SND_SET_DSP_COUNT 112
#define SND_CLOSE_DSP 113
#define SND_SET_MULTISTREAM_VOICES 114
#define SND_SET_STREAM_BUFFER 115

#define SOUND_FILTER_FREQ 0
#define SOUND_FILTER_RESONANCE 1
#define SOUND_INIT_DSP 2
#define SOUND_COMPRESSOR_ONOFF 3
#define SOUND_DISTORTION_LEVEL 4
#define SOUND_FILTER_TYPE 5
#define SOUND_DSP_ONOFF 6
#define SOUND_DSP_CLEAR 7
#define SOUND_FLANGE_DEPTH 8
#define SOUND_FLANGE_SPEED 9
#define SOUND_COMPRESS_THRESHOLD 10
#define SOUND_COMPRESS_GAIN 11
#define SOUND_COMPRESS_ATTACK 12
#define SOUND_COMPRESS_RELEASE 13
#define SOUND_COMPRESS_RATIO 14
#define SOUND_NOISEGATE_LEVEL 15
#define SOUND_NOISEGATE_RAMP 16
#define SOUND_DSP_MUTE 17
#define SOUND_RINGMOD_LEVEL 18
#define SOUND_RINGMOD_FREQ 19

#define SOUND_FLAG_DSP_OFF 0
#define SOUND_FLAG_DSP_FILTER 1
#define SOUND_FLAG_DSP_FLANGE 2
#define SOUND_FLAG_DSP_DISTORT 3
#define SOUND_FLAG_DSP_NOISEGATE 4
#define SOUND_FLAG_DSP_COMPRESS 5
#define SOUND_FLAG_DSP_COMPRESS_SIDE 6
#define SOUND_FLAG_DSP_MIXCORES 7
#define SOUND_FLAG_DSP_RINGMOD 8
#define SOUND_FLAG_DSP_PITCH_DETECT 9
#define SOUND_FLAG_DSP_LASTTYPE 9	// MAKE SURE THIS IS THE SAME AS THE LAST DSP COMMAND!

#define SOUND_FILTER_LOWPASS 0
#define SOUND_FILTER_HIPASS 1
#define SOUND_FILTER_BANDPASS 2

#define SOUND_DSP_OFF 0
#define SOUND_DSP_ON 1
#define SOUND_DSP_WAITING_TO_CLOSE 2
#define SOUND_MAX_DSP 8


#define SOUND_FX_OFF 0		/* size = 0x80 */
#define SOUND_FX_ROOM 1		/* size = 0x26c0 */
#define SOUND_FX_STUDIO_A 2	/* size = 0x1f40 */
#define SOUND_FX_STUDIO_B 3	/* size = 0x4840 */
#define SOUND_FX_STUDIO_C 4	/* size = 0x6fe0 */
#define SOUND_FX_HALL 5		/* size = 0xade0 */
#define SOUND_FX_SPACE 6	/* size = 0xf6c0 */
#define SOUND_FX_ECHO 7		/* size = 0x18040 */
#define SOUND_FX_DELAY 8	/* size = 0x18040 */
#define SOUND_FX_PIPE  9	/* size = 0x3c00  */

#define STREAM_LOAD_SPU 0x7f	/* Flag if loading data to SPU RAM (used to be called STREAM_RESIDENT..) */
#define STREAM_LOAD_IOP 0x7d	/* Use if loading data to IOP RAM */
#define STREAM_LOAD_EE_LOOP 0x7b		/* Use if loading data to EE RAM and you want the file to loop*/
#define STREAM_LOAD_EE 0x7e		/* Use if loading data to EE RAM */
#define STREAM_LOAD_MS	0x7c	/* Use if MultiStream INTERNAL loading */
#define STREAM_RESIDENT 0x7f 	/* Use if loading SpotFX (was 3) */
#define STREAM_LOOPING 0		/* Request for stream to be looping */
#define STREAM_ONCE_OFF 1		/* Request for stream to be once off */
#define STREAM_PCM_LOOPING 2
#define STREAM_PCM_ONCE_OFF 3

#define SOUND_FASTLOAD_BIND_RPC 0
#define SOUND_FASTLOAD_ON_OFF 1

#define SOUND_FASTLOAD_OFF 0
#define SOUND_FASTLOAD_ON 1
#define SOUND_FASTLOAD_STOP 2
#define SOUND_FASTLOAD_SINGLE 3	/* Will do a single buffer load and wait for EE to start another */
#define SOUND_FASTLOAD_CONTINUE 4	/* Continues to load EE data with no waiting for EE */
#define SOUND_FASTLOAD_NEXT 5
#define SOUND_FASTLOAD_INVALID_DCACHE_OFF 6
#define SOUND_FASTLOAD_INVALID_DCACHE_ON 7

#define SOUND_MONO 0
#define SOUND_STEREO 1
#define SOUND_BITSTREAM 2

#define SOUND_PCM 0
#define SOUND_WAV 1

#define STREAM_FIND_FREE 0x80	/* Find a free stream channel to playback - instead of passing stream number */
#define STREAM_FIND_FREE_DATA_STREAM 0x81	/* Find a free stream channel to playback, which was defined as a data stream */
#define STREAM_FIND_FREE_AUDIO_STREAM 0x82	/* Find a free stream channel to playback, which was defined as a data stream */
#define SPU_CH 0x40				/* Pass to stop stream (STREAM_CH+n) otherwise n will be SPU Channel */

#define STREAM_STATUS_OFF 0
#define STREAM_STATUS_ON 1
#define STREAM_STATUS_EE_REQPLAY 2
#define STREAM_STATUS_EE_REQSTOP 3
#define STREAM_REQTEST 4
#define STREAM_STATUS_EE_REQPLAY2 5
#define STREAM_STATUS_WAITING_TO_PLAY 6

#define SOUND_DTS_OFF 0
#define SOUND_DTS_ON 1
#define SOUND_DTS_START 2
#define SOUND_DTS_INIT_THREAD 3
#define SOUND_DTS_CLOSING 4
#define SOUND_DTS_READY_TO_DIE 5
#define SOUND_DTS_START_FAILED 6
#define SOUND_DTS_40	0
#define SOUND_DTS_51	1

#define SOUND_MASTER_VOL_OFF 0
#define	SOUND_MASTER_VOL0 0x00010000
#define	SOUND_MASTER_VOL1 0x00020000
#define	SOUND_MASTER_VOL2 0x00030000
#define	SOUND_MASTER_VOL3 0x00040000
#define SOUND_MASTER_VOL_FULL 4096

#define SOUND_PCM_OFF 0
#define SOUND_PCM_ON 1
#define SOUND_PCM_BUFFER_NOT_ALLOCATED 2

#define SOUND_DMA_WAIT 1		/* Wait for SOUND_TransferDataToIOP to wait for completion */
#define SOUND_DMA_NO_WAIT 0		/* Don't wait for SOUND_TransferDataToIOP to wait */


#define SOUND_CREATE_FILE 0xffffffff	/* Tell MultiStream to create a FileID */

#define SOUND_WAIT_COLD 0
#define SOUND_WAIT_HOT 1

/* Priority loading  */
#define SOUND_FORCE_BEFORE_AUDIO 0
#define SOUND_FORCE_BEFORE_EE_STREAMS 1
#define SOUND_FORCE_SINGLE_TRANSFER 0
#define SOUND_FORCE_UNTIL_STREAM_DIES 1

#define SOUND_PRIORITY_INIT 128
#define SOUND_PRIORITY_AUDIO 64
#define SOUND_PRIORITY_DATA 128+64
#define SOUND_STREAM_PRIORITY_DEFAULT 0x100

/* SOUND_AppendStream flags */
#define SOUND_APPEND_NOW 0
#define SOUND_APPEND_AT_LOOP 1


#define SOUND_MEM_ALLOC_ALL 0
#define SOUND_MEM_ALLOC_1_EFFECT 96*1024
#define SOUND_MEM_ALLOC_2_EFFECT (96*1024)+(128*1024)

#define SOUND_MemBaseAddress 0x5010
#define SOUND_MemEndOfRAM 1024*1024*2

#define SOUND_DATA_STREAM 1

#define SOUND_LOOP_TO_START 1		/* Required for SOUND_SetSFXPlayOffset */
#define SOUND_LOOP_TO_OFFSET 2		/* Required for SOUND_SetSFXPlayOffset */ 

#define SOUND_CHAN_LOAD_ONLY 0x100	/* Flag which can be passed to SOUND_WaitForFileToLoad */
#define SOUND_ALLOCATE_ALL_RAM 2*1024*1024

typedef void *(*SOUND_ALLOC_FUNC)(int size, int alignment);
typedef void(*SOUND_FREE_FUNC)(void *block);

typedef struct SOUND_MEM_ALLOC
{
	u_int	Address;
	u_int	Size;
	u_int	Next;
	int		SFX_ID;
	u_char	SFX_ID_Used;
} SOUND_MEM_ALLOC;


typedef struct SPUDSP_TRANS
{
	int	IOPAddress;
	int	EEAddress;
	int	Counter;
} SPUDSP_TRANS;

typedef struct SOUND_DSP_INFO
{
	int EffectInfo[8];
	int Debug[2];
	u_int IOPBuffer;
} SOUND_DSP_INFO;

/* V5 EXTERNAL Info */
typedef struct SOUND_EXTERNAL_INFO
{
	u_int	Buffer;
	u_char	Destination;
	u_int	BufferSize;
	u_int	FirstSeek;
	u_char	ChainPos;
	u_char	ChainCount;
	u_int	FirstSize;
	u_int	PlaySize[9];
	u_int	LSN[9];
	int		FileID[9];
	u_int	FileSeek[9];
	u_int	StreamRequest;
	u_int	RequestCount;
} SOUND_EXTERNAL_INFO;

/* V5 Stream info */
typedef struct SOUND_STREAM_INFO
{
	u_int	MaxIOPRAM;
	u_char	CDError;			/* 1-if using INTERNAL loading, and an error has occured */
	u_char	CDReady;			/* Returned when calling SOUND_CheckCDError(); (1-not ready,0-ready) */
	u_char	CDInternalError;	/* 0-MultiStream internal system back to normal after error. 1-not */
	u_char	CDAccess;		 	/* is actual CD being used by MultiStream? */
	u_char	CDStatus;			/* Not only CD Status, but if IOP->SPU transfer is taking place also */
	u_char	CDChannel;			/* Stream channel which is loading data from CD */
	u_int	WriteAddress;
	u_char	Type;
	u_char	Status;
	u_char	Active;
	u_char	SPUChannel;
	u_char	PlayHalf;
	u_short	Envelope;
	u_int	FileID;
	u_int	SPUAddress;
	int		SPUPitch;
	u_int	DestinationAddress;
	u_int	EEDataSize;
	u_int	EETranSize;
	u_int	EETranCount;		/* Counter for how many times the IOP has transfered data to the EE */
	u_int	PlayOffset;			/* Current offset of playback through a file */
	u_int	IOPAddress;			/* IOP base address of stream n */
	u_int	UserTransferStatus;	/* Status of user IOP->SPU transfer */
	u_short	Priority;
	u_char	Time_Frames;
	u_char	Time_Seconds;
	u_char	Time_Minutes;
	u_int	Time_Hours;

} SOUND_STREAM_INFO;

/* V6 Get info for effect buffers */

typedef struct SOUND_EFFECT_BUFFER_INFO
{
	u_int	EndAddress[2];
	u_int	StartAddress[2];
	u_int	EffectType[2];
} SOUND_EFFECT_BUFFER_INFO;

/* V5 MSH file information. MSH is the header file from a .MSB file */
typedef struct SOUND_FASTLOAD_INFO
{
	u_int	StreamChannel;
	u_int	TotalSize;
	u_int	LoadSize;
	u_int	Status;
	u_int	AllowLoad;
	u_int	EEStatus;
	u_int	IOPStatus;
	u_int	LoadStatus;
	u_int	EEAddress;
	u_int	Counter;
	u_int	FileID;
} SOUND_FASTLOAD_INFO;

typedef struct SOUND_MSH_INFO
{
	u_int	MSHSize;
	u_int	MSHPad;
	u_int	NumberOfSamples;
	u_int	ID;
	u_int	Size;
	u_int	Offset;
	u_int	Pitch;
} SOUND_MSH_INFO;

/* V5 MSH file information. .MIH is the header file from a .MIB file */
/* To calculate the total .MIB file size: NumberOfFiles*TrackSize*Tracks */
typedef struct SOUND_MIH_INFO
{
	u_int	MIHSize;		/* .MIH file size */
	u_int	MIHPad;			/* Unused data in .MIH file (.MIH is always a multiple of 64 bytes) */
	u_int	NumberOfFiles;	/* Number of files interleaved into a single .MIB file */
	u_int	ID;				/* ID of requested "file" (can be used for anything..) */
	u_int	TrackSize;	/* .MIB Track size */
	u_int	Tracks;		/* Amount of Tracks contained in .MIB file */
	u_int	Pitch;			/* Pitch (in hz) to play streams in .MIB file */
	u_int	EndOffset;		/* Offset from start of final packet to end of data. */
} SOUND_MIH_INFO;

typedef struct SOUND_PCM_INFO
{
	u_int	IOPAddress;		/* IOP Address of PCM playback buffer */
	u_int	Size;			/* Size of PCM playback buffer */
	u_int	IOPCurrent;		/* Current PCM playback position through IOP buffer */
	u_int	Status;			/* Current PCM playback status (SOUND_PCM_ON, SOUND_PCM_OFF, */
							/* SOUND__PCM_BUFFER_NOT_ALLOCATED) */
} SOUND_PCM_INFO;


typedef struct SOUND_CHAIN_INFO
{
	int		FileID;		/* File ID to chain to.. */
	u_int	Offset;		/* Offset into file to start playing */
	u_int	PlaySize;	/*  */
} SOUND_CHAIN_INFO;


typedef struct SOUND_FILE_INFO
{
	u_int	LSN;		/* LSN of file */
	u_int	Size;		/* Size of file */
	u_int	Source;		/* Source (Host0 or CDROM) */
	u_int	Counter;	/* Check value, so you know if this data is for the file you requested */
	int		ATOpenFlag;	// If using ATWinMon, returns 0 = file not opened by ATWinmon, 1 = File Opened.
	int		ATOpenID;	// Returns file handle if file opened by ATWinMon, or error code if open failed.
} SOUND_FILE_INFO;

#define SOUND_DEV 0x00012345
#define SOUND_SETPARAMS 0x0

#define STREAM_AUDIO 0

/* Holds info from data packets sent back from IOP to EE. */

#define ADPCM_DATA_ON_HOST 0
#define ADPCM_DATA_ON_CD 1

#define SPU_KEY_STATUS_OFF 0
#define SPU_KEY_STATUS_ON 1
#define SPU_KEY_STATUS_USED_BY_STREAM 2
#define SPU_KEY_STATUS_EE_REQUEST 3
#define SPU_KEY_STATUS_IOP_KEY_ON 4

#define SND_LOAD_INTERNAL 0	/*Uses MultiStream IOP loading code */
#define SND_LOAD_EXTERNAL 1	/*IOP passes back data so you can use your own cd loading routines */

#define SND_DATA_ON_HOST 0
#define SND_DATA_ON_CD 1

#define SOUND_CD 1				/* Passed to SOUND_InitCD if using CD */
#define SOUND_DVD 2				/* Passed to SOUND_InitCD if using DVD */
#define SOUND_SET_CALLBACK 3	/* Passed to SOUND_InitCD if CD already initialised */
#define SOUND_CD_SPIN_NORMAL 4	/* Passed to SOUND_InitCD if using NORMAL loading mode (default) */
#define SOUND_CD_SPIN_STREAM 5	/* Passed to SOUND_InitCD if using STREAM loading mode */
#define SOUND_DISPLAY_INFO 6	/* Passed to SOUND_InitCD (which is a bit nasty!) */

/* WAV header info (taken from ezBGM) */

typedef int (*SOUND_RPCFunc) (void);	/* FASTLOAD RPC callback function */

#define SOUND_SIZE_OF_WAV_HEADER 44
typedef struct {
	unsigned char     chunkID[4];
	unsigned int      chunkSize;
	unsigned short*   data;
} DATAHeader;

typedef struct {
	unsigned char     chunkID[4];
	unsigned int      chunkSize;
	unsigned short    waveFmtType;
	unsigned short    channel;
	unsigned int      samplesPerSec;
	unsigned int      bytesPerSec;
	unsigned short    blockSize;
	unsigned short    bitsPerSample;
} FMTHeader;

typedef struct {
	unsigned char     chunkID[4];
	unsigned int      chunkSize;
	unsigned char     formType[4];
	FMTHeader         fmtHdr;
	DATAHeader        dataHdr;
} SOUND_WAV_HEADER;

typedef struct {
	unsigned int      Size;
	unsigned int      Offset;
	unsigned int      Stereo;
} SOUND_WAV_INFO;

extern u_int totload;

extern short *JDATA;

extern short SOUND_DSPFreq[256];

#if 0

extern u_int SOUND_FILE_LSN;
extern u_int SOUND_FILE_SIZE;
extern int SOUND_FILE_SOURCE;
extern int SOUND_FILE_COUNTER;
extern u_int SOUND_MAX_IOP_RAM;

extern char SOUND_STREAM_STATUS[48];
extern int SOUND_CD_STATUS;		/* sbuff2[23] */
extern u_int SOUND_SPU_ADDR;		/* sbuff2[27] */
extern u_int SOUND_IOP_ADDR;
extern u_int SOUND_EE_ADDR;

extern char SOUND_STREAM_TYPE[48];

extern int SOUND_STREAM_CD_ACCESS;	/* sbuff2[0] */
extern int SOUND_STREAM_CD_ACCESS_CHAN;	/* sbuff2[0] */
extern int SOUND_IOP_REQUEST_LOAD;	/*sbuff2[24] */
extern u_char SOUND_STREAM_SPU_CHAN[48];	/*sbuff2[2] */
extern char SOUND_STREAM_ACTIVE[48];	/*sbuff2[2] */
extern int SOUND_STREAM_ID[48];		/* sbuff[6] */
extern int SOUND_STREAM_SPU_ADDR[48];	/*sbuff[10] */
extern char SOUND_STREAM_PLAY_HALF[48];	/*sbuff[14] */
extern u_short SOUND_STREAM_ENV[48];		/*sbuff[18] */
extern int SOUND_SFX_TRANSFER_STATUS;	/*sbuff[26] */
extern int SOUND_IOP_COUNTER;	/*sbuff[22] */
extern int SOUND_STEREO_READY_FLAG;	/* sbuff2[28] */
extern u_char SOUND_SPUKeyStatus[48];	/* sbuff[29] -> sbuff[29+6] */
extern u_int SOUND_IOP_DATA_ADDRESS; /*32 */
extern u_int SOUND_IOP_DATA_SIZE;	/*33 */
extern u_int SOUND_IOP_DATA_SEEK[9];	/*34 */
extern u_int SOUND_IOP_DATA_CHECK;	/*35 */
extern int SOUND_IOP_DATA_ID[9];		/*36 */
extern u_int SOUND_IOP_DATA_LSN[9];		/*36 */
extern u_int SOUND_IOP_DATA_PLAYSIZE[9];		/*36 */
extern u_int SOUND_TEMP;
extern u_int SOUND_IOP_DATA_CHAIN_COUNT;
extern u_int SOUND_IOP_DATA_CHAIN_POS;
extern u_int SOUND_IOP_DATA_REMAIN;
extern u_int SOUND_IOP_DATA_OFFSET;
extern u_char SOUND_CD_ERROR;		/* 0 = No errors, 1 = Error (Streams paused) */
extern u_int SOUND_IOP_LOAD_TYPE;
extern u_int SOUND_STREAM_WADDR[48];	/* Current write address for streams..(either EE,IOP or SPU address) */
extern u_char SOUND_CD_IERROR;		/* Multistream internal error status */
extern u_char SOUND_CD_STAT;			/* returned from SOUND_CheckCDError */

#endif

int SOUND_SIFTransfer( int command,  int data, int flag );
int SOUND_InitIOP( void );

void SetIOPCommand(short command,short length);
int FlushIOPCommand(int type);

int SOUND_ChainStreams(u_int Chan,int Count,const SOUND_CHAIN_INFO *data);
int SOUND_GetKeyStatus(int channel);
void SOUND_AllChannelEffectsOff(int core);
void SOUND_AllChannelEffectsOn(int core);
void SOUND_SetChannelEffectOff(int channel);
void SOUND_SetChannelEffectOn(int channel);
void SOUND_SetEffectMasterVolume(int core, int voll,int volr);
void SOUND_DisableEffects(int core);
int SOUND_EnableEffects(int core, int type, int depl, int depr, int delay, int feedback );
int SOUND_FindFreeSPUChannel(int start,int end);

void SOUND_CopyIOPBuffer(void);
void SOUND_SetSPUWriteAddress(u_int spuaddr);
int SOUND_AllocateStreamBuffer(int strm,u_int spuaddr, u_int size);
int SOUND_SetStreamBuffer(int strm, u_int iopaddr, u_int iopsize, u_int spuaddr, u_int spusize);
int SOUND_PlayStream(int Stream,int StrmChan, int Channel,int VL,int VR,int Spd,int flag,int at, int rl);
int SOUND_PlaySFX(u_int ID,int Chan,int VL,int VR,int Spd,int at,int rl);
int SOUND_StopStream(int Chan);
int SOUND_StopSound(int SPUChannel);
int SOUND_SetChannelVolume(int Chan,int VL,int VR);
int SOUND_SetChannelPitch(int Chan,int Pch);
void SOUND_GetStatus(int AllowLoad,int reqcheck);
void SOUND_Pause(void);
void SOUND_Resume(void);
void SOUND_InitStreamData(int loadtype, int maxfiles,int maxsfx);
void SOUND_InitSPU(void);
int SOUND_SetMaxStreamLimit(u_int limit);
int SOUND_CheckAndStartStereo(u_int spuchannel1,u_int spuchannel2, u_int pitch);
void SOUND_CancelCheckStereo(void);
void SOUND_PatchSFX(u_int ID,u_int SPUAddr);

u_int SOUND_HzToSPU(int hz);
/*void SOUND_GetFileInfo(int Counter,char *filename); */
u_char SOUND_GetFileInfo(const char *filename);
u_int SOUND_SetFileInfo(int ID, u_int LSN, u_int size, int source, u_int offset);
u_int SOUND_CreateFileInfo(int ID,const char *filename,u_int offset);
void SOUND_FreeAllFileIDs(void);
void SOUND_FreeFileID(int id);
void SOUND_StoreHOST0FileName(int id, const char *filename);
void SOUND_SetFileOffsetAndPlaySize(int ID, u_int offset,u_int size);
void SOUND_InitCD(u_int type);
int SOUND_GetStreamChannel(u_int channel);
int SOUND_GetMSHSampleCount(u_int HeaderInfo);
int SOUND_GetMSHInfo(const u_int HeaderInfo,SOUND_MSH_INFO *buffer,u_int offset);
int SOUND_PatchMSH(u_int offset,u_int ID,u_int HeaderInfo,u_int SPUAddr);
void SOUND_SetStreamParent_Int(int StrmChan,int Track,u_int TrackSize);
void SOUND_SetStreamChild_Int(u_int StrmChan,u_int Parent, u_int SPUChan,u_int Track,int VolL,int VolR,u_int SPUAddr);
void SOUND_GetMaxIOPRAM(void);
int SOUND_GetMIHInfo(u_int HeaderInfo,SOUND_MIH_INFO *buffer,u_int offset);
int SOUND_GetMIHFileID(u_int file,u_int HeaderInfo);

int SOUND_TransferDataToIOP(unsigned int source,unsigned int dest, unsigned int size,int wait);
int SOUND_StreamDisableKeyOn(u_int channel);
int SOUND_StreamAllowKeyOn(u_int channel);
int SOUND_FindFreeStream(void);
int SOUND_GetStreamInfo(u_int i,SOUND_STREAM_INFO *buffer);
void SOUND_GetEXTERNALInfo(SOUND_EXTERNAL_INFO *EXT_Info);
/*void SOUND_GetFileIDInfo(u_short Counter,int FileID); */
u_char SOUND_GetFileIDInfo(int FileID);
void SOUND_RestartFromCDError(void);
void SOUND_EXTERNAL_CDErrorPause(void);
void SOUND_EXTERNAL_CDErrorRestart(void);
void SOUND_CheckCDError(void);
int SOUND_HandleCDErrors(void);
u_char SOUND_ReturnFileInfo(SOUND_FILE_INFO *FileInfo);

int SOUND_AddString(const char *string);
void SOUND_AddLongData(u_int address);
void SOUND_AddData(short data);
void SOUND_StartCommand(short command);
void SOUND_EndCommand(void);
int SOUND_CloseStreamBuffer(int strm);
int SOUND_PlaySFXLoop(u_int ID,int Chan,int VL,int VR,int Spd,int at,int rl,u_int Loop);
int SOUND_PlayStreamFromSFX(int FileID,int StrmChan, int Channel,int flag);
void SOUND_DisableCDCallback(void);
void SOUND_DisableSPUCallback(void);
void SOUND_EnableSPUCallback(void);
void SOUND_SetDTSMode(int mode,int flag);
int SOUND_InitDTS(void);
int SOUND_KeyOnChannel(int SPUChan);
void SOUND_SFXEnableKeyOn(void);
void SOUND_SFXDisableKeyOn(void);
int SOUND_StreamAddSPUChannel(int StrmChan,int SPUChan,int VolL,int VolR);
int SOUND_GetDTSStatus(void);
void SOUND_SetOutputPCM(void);
void SOUND_SetOutputBitStream(void);
int SOUND_AppendStream(int stream,int fileID,int flag);
int SOUND_SetStreamLoadSource(int stream,int source);

void SOUND_SetPCMType(int Format, int Stereo);
int SOUND_InitPCMPlayback(int stream,int format,int stereo);
int SOUND_SetGroupMasterVolume(u_int group, u_int VolL, u_int VolR);
void SOUND_MixVolumes(int group);
void SOUND_SetChannelMasterVolumeGroup(int SPUChan,u_int group);
void SOUND_MixVol(int group, int i);
void SOUND_SetSPUChannelVolume(int SPUChan,short VolL,short VolR);
int SOUND_ScaleVol(int MixVol,int ChanVol);
int SOUND_GetGroupMasterVolume(u_int group);
int SOUND_ResizeStreamBuffer(int i,u_int size);
int SOUND_LoadFile(u_int dest,u_int stream,int FileID, u_int address);
void SOUND_SetEEWriteAddress(u_int eeaddr);
void SOUND_SetIOPWriteAddress(u_int iopaddr);
void SOUND_GetWAVHeaderInfo(u_int addr, SOUND_WAV_INFO *WAVInfo);
void SOUND_SetPCMVolume(int VolL,int VolR);
int SOUND_Init_EE_DTS(u_int DTSMode,int quality);
void SOUND_AllocateSpotFXMemory(int maxfx);
int SOUND_CreateDTS_RPCThread (void);
void SOUND_InitWaitUpdate(void);
void SOUND_SetWaitUpdate(void);
int SOUND_CheckForUpdate(void);
void SOUND_CloseWaitUpdate(void);
int SOUND_ModifyEETransferAddress(int channel, u_int addr);
int SOUND_SetStreamStartPosition(int i, u_int offset);
void SOUND_FreeFileMemory(void);
void SOUND_AllocateFileMemory(int maxfiles);
void SOUND_FreeSpotFXID(u_int ID);
void SOUND_TransIOPToSPU(u_int IOPAddress,u_int SPUAddress,u_int Size);
void SOUND_DisplayDTSMessage(void);
int SOUND_CheckIOPTransfer(void);

void SOUND_PlayPCM(void);
void SOUND_StopPCM(void);
int SOUND_InitPCMPlaybackNoStream(u_int size,u_int mode);
void SOUND_GetPCMInfo(SOUND_PCM_INFO *PCMInfo);
int SOUND_StreamIgnoreVAGPitch(int i);
void SOUND_ClosePCMPlayback(void);
int SOUND_ReadyToLoad(void);
int SOUND_LoadComplete(SOUND_EXTERNAL_INFO *EXT_Info);

void *SOUND_FASTLOAD_RPC(unsigned int command, void *pdata, int size);
int SOUND_InitFastLoad(int ThreadPriority,int addr, int size);
void SOUND_InitFastLoad_RPC(void);
int SOUND_CloseFastLoad(void);
int SOUND_GetFastLoadInfo(SOUND_FASTLOAD_INFO *info);
int SOUND_SetFastLoadMode(int type);

int SOUND_ResizeSPUBuffer(int strm, u_int size);

void SOUND_AllChannelOutputsOff(int core);
void SOUND_AllChannelOutputsOn(int core);
void SOUND_SetChannelOutputOff(int channel);
void SOUND_SetChannelOutputOn(int channel);
int SOUND_IsFreeSPUChannel(u_int channel);
void SOUND_SetTVOutputOn(void);
void SOUND_SetTVOutputOff(void);
void SOUND_ResumePCM(void);
void SOUND_PausePCM(void);
void SOUND_SetFastLoadCallback(SOUND_RPCFunc callback);
void SOUND_SetSwitch(u_short coreANDcommand, u_int bitmask);
void SOUND_SetParam(u_short coreANDcommandANDchannel,u_short value);
void SOUND_SetAddr(u_short coreANDcommandANDchannel,u_int address);
void SOUND_SetCoreAttr(u_short coreANDcommand,u_short value);
void SOUND_BlockTrans(u_short DMAChan,u_short Flags, u_int IOPAddr,u_int Size,u_int Offset);
void SOUND_FreeSpotFXMemory(void);
int SOUND_SetChannelVolumeSmooth(short i,short voll,short volr);
int SOUND_GetLoadRequest(void);
int SOUND_GetEXTERNALChecksum(void);
u_char SOUND_GetNextInfoCounter(void);
u_int SOUND_GetNextFileIDCounter(void);
void SOUND_CopyFastLoadInfo(SOUND_FASTLOAD_INFO *info);
int SOUND_FlushIOPCommand(int type);
u_int SOUND_GetSPUAddress(void);
u_int SOUND_GetSPUWriteAddress(void);
u_int SOUND_GetEEAddress(void);
u_int SOUND_GetIOPAddress(void);
void SOUND_JP(void *data);
void SOUND_FreeAllSpotFXIDs(void);
int SOUND_SetStreamTrack_Int(u_int channel,u_int track);
void SOUND_DTS_Thread (void);
void *DTS_RPC(unsigned int command, void *pdata, int size);
void SOUND_IOPProcess(int AllowLoad,int reqcheck);
int SOUND_SetMultiChannelPitch(void);
int SOUND_InitMultiChannelPitch(u_int SPUChannel,int Pitch);
int SOUND_AddMultiChannelPitch(u_int SPUChannel);
u_int SOUND_GetIOPCounter(void);
int SOUND_WaitForFileToLoad(u_int chan,int flag);
int SOUND_CheckRPCStatus(void);
int SOUND_SetThreadPriority(int priority);
u_int SOUND_GetChannelSPUAddress(u_int SPUChannel);
int SOUND_SetMIBEndOffset(u_int i, u_int Offset);
u_int SOUND_GetChannelSPUVolume(u_int SPUChannel);
int SOUND_PauseSPUChannels(u_int First,u_int Last);
int SOUND_ResumeSPUChannels(u_int First,u_int Last);
int SOUND_SetSPUChannelRelease(u_int SPUChannel,u_int ReleaseRate);
int SOUND_SetEffectBufferAddress(u_int address1,u_int address2);
void SOUND_GetEffectBuffersInfo(SOUND_EFFECT_BUFFER_INFO *buffer);
int SOUND_SetStreamPriority(u_int i,u_int priority);
int SOUND_SetFastLoadNext(int i);
int SOUND_FindSFX_ID(int start, int end ,int ID);
int SOUND_FindStreamFile_ID(int start, int end ,int ID);
int SOUND_FindFreeStreamRange( int iMin, int iMax );
void SOUND_ATWinMonOpenFile(u_int id);
void SOUND_ATWinMonCloseFile(u_int id);
int SOUND_GetHardwareEffectSize(int type);

int SOUND_MemAllocInit(u_int spaces, u_int size);
int SOUND_MemAllocClose(void);
int SOUND_MemAllocate(u_int Size);
int SOUND_MemFreeAll(void);
int SOUND_MemFree(u_int Address);
u_int SOUND_MemFindLargest(void);
void SOUND_CloseEverything(void);
int SOUND_SetSFXPlayOffset(u_int ID, u_short LoopFlag,u_int Offset);
u_int SOUND_ReturnMIBBufferSize(u_int TrackSize, u_int NumberOfFiles);
int SOUND_SetStreamForMIBPlayback(u_int i, u_int TrackSize, u_int NumberOfFiles);
int SOUND_MemAllocateEffectBuffer(int Type);

//void SOUND_SULPHA(void);
void SOUND_CloseIOPResources(void);

int	SOUND_SetMemHooks( SOUND_ALLOC_FUNC allocFunc, SOUND_FREE_FUNC freeFunc );
void *SOUND_AllocMemEE( int alignment, int size );
void SOUND_FreeMemEE( void *block );

int SOUND_SetDSP(int slot,int type,u_int value);
int SOUND_DSPOnOff(u_int core,u_int flag);
int SOUND_DSPClear(u_int core);
int SOUND_DSPSetEffect(u_int slot, u_int core,u_int effect);
int SOUND_GetCommandCount(void);
int SOUND_GetDSPInfo(SOUND_DSP_INFO *buffer);
u_int SOUND_SetDSPBuffer(int buffer,short flag,short packets);
int SOUND_CheckDSPUpdate(void);
u_int SOUND_GetRPCBufferSize(void);
void SOUND_SetDSPCount(u_int c);
int SOUND_WriteDSPPacket(u_int packet,u_int source, int tranflag);
int SOUND_GetDSPCount(void);
u_int SOUND_GetDSPEEAddress(int c);
int SOUND_SearchDSP(int v);
void SOUND_DisplayStats(void);

void SOUND_MultiThreadSafeCheckEnd(void);
void SOUND_MultiThreadSafeCheckStart(void);
int SOUND_SetFastLoadCallback_FOAPS(u_int FileID,u_int Offset,u_int Size);
int SOUND_SetFastLoadCallback_LoadFile(u_int dest,u_int FileID,u_int Address);

int SOUND_MemFreeUsingSFXID(u_int ID);
int SOUND_MemCheckForSFXID(u_int ID, u_int SPUAddr);

void SOUND_SetMultiStreamVoices(u_int core0, u_int core1);

void SOUND_WaitForCDFree(int flag);

#ifdef __cplusplus
}
#endif

#endif


/* ----------------------------------------------------------------
 *	End on File
 * ---------------------------------------------------------------- */
/* This file ends here, DON'T ADSTUFF AFTER THIS */

























