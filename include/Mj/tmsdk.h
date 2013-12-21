#ifndef  _TMSDK_H_
#define  _TMSDK_H_

typedef enum 
{
	StandardNone		= 0x80000000,
	StandardNTSC		= 0x00000001,
	StandardPAL			= 0x00000002,
	StandardSECAM		= 0x00000004,
} VideoStandard_t;               

typedef struct tag_FramsStatistics
{
	ULONG				VideoFrames;
	ULONG				AudioFrames;
	ULONG				FramesLost;
	ULONG				QueueOverflow;
}FRAMES_STATISTICS, *PFRAMES_STATISTICS;

typedef struct
{
	long nWidth;
	long nHeight;
	long nStamp;
	long nType;
	long nFrameRate;
}FRAME_INFO;

typedef struct 
{
	long nFrameNum;          
	UINT nFrameTime;          
	long nFilePos;            
}FRAME_POS ,*PFRAME_POS;

typedef struct tag_ChannelCapability
{
	UCHAR				bAudioPreview;
	UCHAR				bAlarmIO;
	UCHAR				bWatchDog;
}CHANNEL_CAPABILITY, *PCHANNEL_CAPABILITY;

typedef enum  
{
	vdfRGB8A_233              = 0x00000001,
	vdfRGB8R_332              = 0x00000002,
	vdfRGB15Alpha             = 0x00000004,
	vdfRGB16                  = 0x00000008,
	vdfRGB24                  = 0x00000010,
	vdfRGB24Alpha             = 0x00000020,
   
	vdfYUV420Planar           = 0x00000040,
	vdfYUV422Planar           = 0x00000080,
	vdfYUV411Planar           = 0x00000100,
	vdfYUV420Interspersed     = 0x00000200,
	vdfYUV422Interspersed     = 0x00000400,
	vdfYUV411Interspersed     = 0x00000800,
	vdfYUV422Sequence         = 0x00001000,   
	vdfYUV422SequenceAlpha    = 0x00002000,   
	vdfMono                   = 0x00004000,  
	vdfYUV444Planar           = 0x00008000,
}TypeVideoFormat;

typedef enum 
{
	brVBR					= 0,
	brCBR					= 1,
	brHBR					= 2,
}BitrateControlType_t;

typedef enum 
{
	PktError				= 0x0000,	
	PktIFrames				= 0x0001,
	PktPFrames				= 0x0002,
	PktBPFrames				= 0x0020,
	PktBBPFrames			= 0x0004,
	PktAudioFrames			= 0x0008,
	PktQCIFIFrames			= 0x0010,
	PktQCIFPFrames			= 0x0040,
	PktSysHeader			= 0x0080,
	PktAimDetection			= 0x0400,
	PktMotionDetection		= 0x1000	
}FrameType_t;

typedef struct tagVersion
{
	ULONG					DspVersion,		DspBuildNum;
	ULONG					DriverVersion,	DriverBuildNum;
	ULONG					SDKVersion,		SDKBuildNum;
}VERSION_INFO, *PVERSION_INFO;

typedef enum 
{
	ENC_CIF_FORMAT			= 0,
	ENC_QCIF_FORMAT			= 1,
	ENC_2CIF_FORMAT			= 2,
	ENC_MD_FORMAT			= 3,
	ENC_D1_FORMAT			= 4,
	ENC_DCIF_FORMAT			= 5
}PictureFormat_t;

typedef enum 
{
	TYPE_1500_CIF			= 0,
	TYPE_1500_D1			= 1,
	TYPE_1300_HALFD1		= 2,
	TYPE_1300_D1			= 3,
	TYPE_1500_DCIF			= 5,
	TYPE_1700_CIF			= 6,
	TYPE_1700_D1			= 7,
	TYPE_1700_DCIF			= 8,
	TYPE_1700_4_CIF			= 9,
}BoardFormat_t;

typedef enum 
{
	WorkMode_CIF		= 0x00000000,
	WorkMode_2CIF		= 0x00000001,
	WorkMode_D1			= 0x00000002,
} DecoderCardWorkMode_t;      

typedef struct tagCHANNEL_INFO
{
	PictureFormat_t			PictureFormat;
	BoardFormat_t			BoardFormat;
	ULONG					Reserved[4];
}CHANNEL_INFO,*PCHANNEL_INFO;

typedef struct
{
	int			left;
	int			top;
	int			width;
	int			height;
	COLORREF	color;
	int			param;
}REGION_PARAM;

typedef struct tagMotionData
{
	PictureFormat_t			PicFormat;
	ULONG					HorizeBlocks;
	ULONG					VerticalBlocks;
	ULONG					BlockSize;
}MOTION_DATA_HEADER, *PMOTION_DATA_HEADER;

typedef	struct tagDSP_INFO
{
	UINT EncodeChannelCount;
	UINT FirstEncodeChannelIndex;
	UINT DecodeChannelCount;
	UINT FirstDecodeChannelIndex;
	UINT DisplayChannelCount;
	UINT FirstDisplayChannelIndex;
	UINT reserved1;
	UINT reserved2;
	UINT reserved3;
	UINT reserved4;
}DSP_INFO, *PDSP_INFO;

typedef	struct tagBOARD_INFO
{
	UINT DSPCount;
	UINT FirstDSPIndex;
	UINT EncodeDSPCount;
	UINT FirstEncodeDSPIndex;
	UINT DecodeDSPCount;
	UINT FirstDecodeDSPIndex;
	UINT EncodeChannelCount;
	UINT FirstEncodeChannelIndex;
	UINT DecodeChannelCount;
	UINT FirstDecodeChannelIndex;
	UINT DisplayChannelCount;
	UINT FirstDisplayChannelIndex;
	UINT reserved1;
	UINT reserved2;
	UINT reserved3;
	UINT reserved4;
}BOARD_INFO, *PBOARD_INFO;


#define _OSD_BASE			0x9000
#define	_OSD_YEAR4			_OSD_BASE+0
#define _OSD_YEAR2			_OSD_BASE+1
#define _OSD_MONTH3			_OSD_BASE+2
#define _OSD_MONTH2			_OSD_BASE+3
#define _OSD_DAY			_OSD_BASE+4
#define _OSD_WEEK3			_OSD_BASE+5
#define	_OSD_CWEEK1			_OSD_BASE+6
#define	_OSD_HOUR24			_OSD_BASE+7
#define	_OSD_HOUR12			_OSD_BASE+8
#define	_OSD_MINUTE			_OSD_BASE+9
#define _OSD_SECOND			_OSD_BASE+10
#define	_OSD_0A0D			0x0A0D
#define	_OSD_0A				0x000A

typedef void	(*LOGRECORD_CALLBACK)	(char *str, void *context);
typedef int		(*STREAM_READ_CALLBACK )(ULONG channelNumber, void *context);

#define STREAM_TYPE_VIDEO	1
#define STREAM_TYPE_AUDIO	2
#define STREAM_TYPE_AVSYNC	3

#define STREAME_REALTIME	0
#define STREAME_FILE		1

#define	ERR_NO								0x00000000		//No error	

#define	ERR_HANDLE_ALLOC_ERROR				0xc0000100		//Alloc memory error
#define ERR_DDRAW_CREATE_FAILED				0xc0000101		//DirectDraw Surface create error
#define ERR_RUNTIME_ERROR                   0xc0000102		//C Runtime error
#define ERR_INVALID_HANDLE					0xc0000103		//Channel Handle error
#define ERR_WAIT_TIMEOUT					0xc0000104		//Wait TimeOut error
#define ERR_INVALID_ARGUMENT				0xc0000105		//Function Argument error
#define ERR_OVERLAY_CREATE_FAILED			0xc0000106		//Overlay Surface create error
#define ERR_DATA_ERROR						0xc0000107		//Data error
#define ERR_INVALID_FILENAME				0xc0000108		//FileName error
#define ERR_TMMAN_FAILURE					0xc0000109		//Tmman Failure
#define ERR_OUTOF_MEMORY					0xc000010A
#define ERR_DSP_BUSY						0xc000010B
#define ERR_NOT_SUPPORT						0xc000010C		//Function Not Support 

#define	ERR_DSP_OPEN						0xC0000200		//DSP open error
#define	ERR_DSP_CONTROL						0xC0000201		//DSP control error
#define	ERR_DSP_FILE						0xC0000202		//DSP file error

#define	ERR_PACKET_NO_DATA					0xC0000203		//No data in packet error
#define	ERR_BUFFER_LEN_SHORT				0xC0000204		//Buffer Length too short error
#define	ERR_BMP_READ_ERROR					0xC0000205		//BMP file read error
#define	ERR_BMP_TYPE_ERROR					0xC0000206		//BMP type error

#ifndef	ERROR_MAX_THRDS_REACHED
#define	ERROR_MAX_THRDS_REACHED				0x000000A4		//No more threads can be created in the system 
#endif

#ifdef __cplusplus
extern "C" {
#endif

int     __cdecl		MP4Sys_InitDSPs();
int     __cdecl		MP4Sys_ReInitDSPs(HWINSTA hStat , HDESK hDesk);
int     __cdecl		MP4Sys_DeInitDSPs();
int     __cdecl		MP4Sys_ResetDSP(int DspNumber);

int		__cdecl		MP4Sys_GetSDKVersion(PVERSION_INFO VersionInfo);
int     __cdecl		MP4Sys_GetCapability(HANDLE hChannelHandle, CHANNEL_CAPABILITY *Capability);
int     __cdecl		MP4Sys_GetLastErrorNum(HANDLE hChannelHandle, ULONG *DspError, ULONG *SdkError);
int     __cdecl		MP4Sys_GetBoardInfo(HANDLE hChannelHandle, ULONG *BoardType, ULONG *SerialNo);
int     __cdecl		MP4Sys_DecGetBoardInfo(LONG nPort, ULONG *BoardType, ULONG *SerialNo);
HANDLE  __cdecl		MP4Sys_ChannelOpen(int ChannelNum);
int     __cdecl		MP4Sys_ChannelClose(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_GetTotalChannels();
int     __cdecl		MP4Sys_GetTotalEncChannels();
int     __cdecl		MP4Sys_GetTotalDecChannels();
int     __cdecl		MP4Sys_GetTotalDisplayChannels();
int     __cdecl		MP4Sys_GetTotalDSPs();

int     __cdecl		MP4Sys_StartVideoPreview(HANDLE hChannelHandle, HWND WndHandle, RECT *rect, BOOLEAN bOverlay, int VideoFormat, int FrameRate);
int     __cdecl		MP4Sys_StopVideoPreview(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_SetOverlayColorKey(COLORREF DestColorKey);

int     __cdecl		MP4Sys_ReadStreamData(HANDLE hChannelHandle, void *DataBuf, DWORD *Length, int *FrameType);
int     __cdecl		MP4Sys_RegisterMessageNotifyHandle(HWND hWnd, UINT MessageId);
int     __cdecl		MP4Sys_RegisterStreamReadCallback(STREAM_READ_CALLBACK StreamReadCallback, void *Context);

int     __cdecl		MP4Sys_StartVideoCapture(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_StopVideoCapture(HANDLE hChannelHandle);

int     __cdecl		MP4Sys_SetVideoPara(HANDLE hChannelHandle, int Brightness, int Contrast, int Saturation, int Hue);
int     __cdecl		MP4Sys_GetVideoPara(HANDLE hChannelHandle, VideoStandard_t *VideoStandard, int *Brightness, int *Contrast, int *Saturation, int *Hue);
int     __cdecl		MP4Sys_RestoreOverlay();

int     __cdecl		MP4Sys_GetVideoSignal(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_GetAudioSignal(HANDLE hChannelHandle, int *pVolume);
int     __cdecl		MP4Sys_GetFramesStatistics(HANDLE hChannelHandle, PFRAMES_STATISTICS framesStatistics);
int     __cdecl		MP4Sys_LoadYUVFromBmpFile(char *FileName, unsigned char *yuv, int BufLen, int *Width, int *Height);
int     __cdecl		MP4Sys_SaveYUVToBmpFile(char *FileName, unsigned char *yuv, int Width, int Height);
int     __cdecl		MP4Sys_SaveYUVToBmp(unsigned char *rgb, unsigned char *yuv, unsigned long *Size, int Width, int Height);
int     __cdecl		MP4Sys_SaveYUVToJpeg(unsigned char *jpeg, unsigned char *yuv, unsigned long *Size,  int Width, int Height, int Quality);

int     __cdecl		MP4Sys_SetupMosaic(HANDLE hChannelHandle, RECT *rectList, int numberOfAreas);
int     __cdecl		MP4Sys_StartMosaic(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_StopMosaic(HANDLE hChannelHandle);

int     __cdecl		MP4Sys_SetOsd(HANDLE hChannelHandle, BOOL Enable);
int     __cdecl		MP4Sys_SetOsdDisplayMode(HANDLE hChannelHandle, COLORREF osdColor, BOOL Translucent, int TwinkleInterval, USHORT *Format1, USHORT *Format2);
int		__cdecl     MP4Sys_SetOsdDisplayModeEx(HANDLE hChannelHandle, LOGFONT LogFont, COLORREF osdColor, BOOL Translucent, int TwinkleInterval, USHORT *Format1, USHORT *Format2);
int		__cdecl		MP4Sys_SetOsdDateTime(HANDLE hChannelHandle, SYSTEMTIME *now);
int     __cdecl		MP4Sys_SetLogo(HANDLE hChannelHandle, int x, int y, int w, int h, unsigned char *yuv);
int     __cdecl		MP4Sys_StopLogo(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_SetLogoDisplayMode(HANDLE hChannelHandle, COLORREF ColorKey, BOOL Translucent, int TwinkleInterval);

int     __cdecl		MP4Sys_SetVideoStandard(HANDLE hChannelHandle, VideoStandard_t VideoStandard);

int     __cdecl		MP4Sys_SetStreamType(HANDLE hChannelHandle, USHORT Type);
int     __cdecl		MP4Sys_GetStreamType(HANDLE hChannelHandle, USHORT *StreamType);

int     __cdecl		MP4Sys_SetIBPMode(HANDLE hChannelHandle, int KeyFrameIntervals, int BFrames, int PFrames, int FrameRate);
int     __cdecl		MP4Sys_SetDefaultQuant(HANDLE hChannelHandle, int IQuantVal, int PQuantVal, int BQuantVal);
int     __cdecl		MP4Sys_SetupBitrateControl(HANDLE hChannelHandle, ULONG MaxBps, int bCbr);
int     __cdecl		MP4Sys_SetEncoderPictureFormat(HANDLE hChannelHandle, PictureFormat_t PictureFormat);
int		__cdecl     MP4Sys_SetEncoderPictureFormatEx(HANDLE hChannelHandle, PictureFormat_t PictureFormat, int EncoderWidth, int EncoderHeight);
int     __cdecl		MP4Sys_CaptureIFrame(HANDLE hChannelHandle);
int		__cdecl		MP4Sys_SetupAimDetectArea(HANDLE hChannelHandle, RECT *rectList, int numberOfAreas);
int		__cdecl		MP4Sys_StartAimDetect(HANDLE hChannelHandle);
int		__cdecl		MP4Sys_StopAimDetect(HANDLE hChannelHandle);

int     __cdecl		MP4Sys_SetupMotionDetection(HANDLE hChannelHandle, RECT *RectList, int iAreas);
int     __cdecl		MP4Sys_StartMotionDetection(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_StopMotionDetection(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_MotionAnalyzer(HANDLE hChannelHandle, char *MotionData, int iThreshold, int *iResult);
int     __cdecl		MP4Sys_AdjustMotionDetectPrecision(HANDLE hChannelHandle, int iGrade, int iFastMotionDetectFps, int iSlowMotionDetectFps);

int     __cdecl		MP4Sys_SetAudioPreview(HANDLE hChannelHandle, BOOL bEnable);
int     __cdecl		MP4Sys_GetSoundLevel(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_GetOriginalImage(HANDLE hChannelHandle, UCHAR *ImageBuf, ULONG *Size);
int     __cdecl		MP4Sys_EncSetOriginalImageSize(HANDLE hChannelHandle, int Width, int Height);

int     __cdecl		MP4Sys_SetAuxCodecPictureFormat(HANDLE hChannelHandle, PictureFormat_t PictureFormat);
int     __cdecl		MP4Sys_SetAuxCodecMode(HANDLE hChannelHandle, int KeyFrameIntervals, int FrameRate, int BitRate);
int     __cdecl		MP4Sys_StartAuxCodec(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_StopAuxCodec(HANDLE hChannelHandle);
int     __cdecl		MP4Sys_GetAuxCodecPictureHeader(VideoStandard_t VideoStandard, PictureFormat_t PictureFormat, int FrameRate, int BitRate, unsigned char *pMainStreamHeader, int nMainStreamHeaderSize, unsigned char *pAuxStreamHeader);
int     __cdecl		MP4Sys_SetLanguage(HANDLE hChannelHandle, int Language);

int		__cdecl		MP4Sys_GetChannelInfo(HANDLE hChannelHandle, CHANNEL_INFO *pChannelInfo);
int		__cdecl		MP4Sys_SetHorOffset(HANDLE hChannelHandle, int HorOffset);
int		__cdecl		MP4Sys_GetOriginalImageEx(HANDLE hChannelHandle, UCHAR *ImageBuf, ULONG *Size, ULONG *dwWidth, ULONG *dwHeight);
int		__cdecl		MP4Sys_SetDisplayMode(BOOL bRGBMode);
int		__cdecl		MP4Sys_SetDecDisplayMode(BOOL bRGBMode);
int		__cdecl		MP4Sys_GetDSPIndex(HANDLE hChannelHandle, int *iResult);
int		__cdecl		MP4Sys_SetUserPassword(int iDSPIndex, unsigned int iOldPassword, unsigned int iNewPassword);
int		__cdecl		MP4Sys_ReadBoardInfo(int iDSPIndex, unsigned int iPassword, unsigned char* pInfoBuff, unsigned int iLen, unsigned int iRegIndex);
int		__cdecl		MP4Sys_WriteBoardInfo(int iDSPIndex, unsigned int iPassword, unsigned char* pInfoBuff, unsigned int iLen, unsigned int iRegIndex);

int		__cdecl		MP4Sys_SetDecoderCardWorkMode(DecoderCardWorkMode_t nWorkMode);
BOOL	__cdecl		MP4Sys_DecLockNewPort(LONG *pdwPort);
BOOL	__cdecl		MP4Sys_DecUnlockPort(LONG nPort);
BOOL	__cdecl		MP4Sys_DecOpenFile(LONG nPort, LPSTR sFileName);
BOOL	__cdecl		MP4Sys_DecCloseFile(LONG nPort);
BOOL	__cdecl		MP4Sys_DecPlay(LONG nPort, HWND hWnd);
BOOL	__cdecl		MP4Sys_DecPlayRect(LONG nPort, HWND hWnd, BOOL RectControl, RECT *rect);
BOOL	__cdecl		MP4Sys_DecStop(LONG nPort);
BOOL	__cdecl		MP4Sys_DecPause(LONG nPort, DWORD nPause);
BOOL	__cdecl		MP4Sys_DecFast(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSlow(LONG nPort);
BOOL	__cdecl		MP4Sys_DecOneByOne(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSetPlayPos(LONG nPort, float fRelativePos);
float	__cdecl		MP4Sys_DecGetPlayPos(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSetVolume(LONG nPort, WORD nVolume);
BOOL	__cdecl		MP4Sys_DecStopSound(LONG nPort);
BOOL	__cdecl		MP4Sys_DecPlaySound(LONG nPort, int nOutputChannel);
BOOL	__cdecl		MP4Sys_DecSetStreamOpenMode(LONG nPort, DWORD nMode);
DWORD	__cdecl		MP4Sys_DecGetStreamOpenMode(LONG nPort);
BOOL	__cdecl		MP4Sys_DecOpenStream(LONG nPort, PBYTE pFileHeadBuf, DWORD nSize, DWORD nBufPoolSize);
BOOL	__cdecl		MP4Sys_DecInputData(LONG nPort, PBYTE pBuf, DWORD nSize);
BOOL	__cdecl		MP4Sys_DecCloseStream(LONG nPort);
DWORD	__cdecl		MP4Sys_DecGetFileTime(LONG nPort);
DWORD	__cdecl		MP4Sys_DecGetPlayedTime(LONG nPort);
DWORD	__cdecl		MP4Sys_DecGetPlayedTimeEx(LONG nPort);
BOOL	__cdecl		MP4Sys_DecChangeContrast(LONG nPort, int degree);
BOOL	__cdecl		MP4Sys_DecChangeBright(LONG nPort, int degree);
BOOL	__cdecl		MP4Sys_DecLocalZoom(LONG nPort, BOOL bLocalZoom, int Left, int Top, int Width, int Height);
DWORD	__cdecl		MP4Sys_DecGetFileTotalFrames(LONG nPort);
DWORD	__cdecl		MP4Sys_DecGetCurrentFrameRate(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSetPlayedTime(LONG nPort, DWORD nTime);
BOOL	__cdecl		MP4Sys_DecSetPlayedTimeEx(LONG nPort, DWORD nTime);
DWORD	__cdecl		MP4Sys_DecGetCurrentFrameNum(LONG nPort);
DWORD	__cdecl		MP4Sys_DecGetFileHeadLength();
BOOL	__cdecl		MP4Sys_DecGetPictureSize(LONG nPort, LONG *pWidth, LONG *pHeight);
BOOL	__cdecl		MP4Sys_DecSetPicQuality(LONG nPort, BOOL bHighQuality);
BOOL	__cdecl		MP4Sys_DecSetPlaySpeed(LONG nPort, int nSpeed);
DWORD	__cdecl		MP4Sys_DecGetPlaySpeed(LONG nPort);
WORD	__cdecl		MP4Sys_DecGetVolume(LONG nPort);
BOOL	__cdecl		MP4Sys_DecGetPictureQuality(LONG nPort, BOOL *bHighQuality);
DWORD	__cdecl		MP4Sys_DecGetSourceBufferRemain(LONG nPort);
BOOL	__cdecl		MP4Sys_DecResetSourceBuffer(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSetSourceBufCallBack(LONG nPort, DWORD nThreShold, void (__cdecl * SourceBufCallBack)(long nPort,DWORD nBufSize,DWORD dwUser,void*pResvered), DWORD dwUser, void *pReserved);
BOOL	__cdecl		MP4Sys_DecResetSourceBufFlag(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSetDisplayBuf(LONG nPort, DWORD nNum);
DWORD	__cdecl		MP4Sys_DecGetDisplayBuf(LONG nPort);
BOOL	__cdecl		MP4Sys_DecOneByOneBack(LONG nPort);
BOOL	__cdecl		MP4Sys_DecSetFileRefCallBack(LONG nPort, void (__cdecl *pFileRefDone)(DWORD nPort,DWORD nUser), DWORD nUser);
BOOL	__cdecl		MP4Sys_DecSetCurrentFrameNum(LONG nPort, DWORD nFrameNum);
BOOL	__cdecl		MP4Sys_DecGetKeyFramePos(LONG nPort, DWORD nValue, DWORD nType, PFRAME_POS pFramePos);
BOOL	__cdecl		MP4Sys_DecGetNextKeyFramePos(LONG nPort,DWORD nValue, DWORD nType, PFRAME_POS pFramePos);
BOOL	__cdecl		MP4Sys_DecThrowBFrameNum(LONG nPort, DWORD nNum);
BOOL	__cdecl		MP4Sys_DecSnapShot(LONG nPort, unsigned char *pBuf, int bufSize, unsigned int *size, int *width, int *height);
BOOL	__cdecl		MP4Sys_DecSetFileEndCallBack(LONG nPort, void(__cdecl *pFileEndCallBack)(int nPort,DWORD nUser), DWORD nUser);
BOOL	__cdecl		MP4Sys_DecSetFileEndMsg(LONG nPort, HWND hWnd, UINT nMsg);

int		__cdecl		MP4Sys_SetDisplayRegion(int nDisplayChannel, int nRegionCount, REGION_PARAM *pParam);
int		__cdecl		MP4Sys_SetDisplayRegionPosition(int nDisplayChannel, int nRegionIndex, int nLeft, int nTop);
int		__cdecl		MP4Sys_FillDisplayRegion(int nDisplayChannel, int nRegionIndex, char *FileName);
int		__cdecl		MP4Sys_ClearDisplayRegion(int nDisplayChannel, int nRegionIndex);
int		__cdecl		MP4Sys_SetEncoderVideoExtOutput(int nEncodeChannel, int nPort, BOOL bOpen, int nDisplayChannel, int nRegionIndex);
int		__cdecl		MP4Sys_SetDecoderVideoExtOutput(int nDecodeChannel, int nPort, BOOL bOpen, int nDisplayChannel, int nRegionIndex);
int		__cdecl		MP4Sys_SetDecoderVideoOutput(int nDecodeChannel, int nPort, BOOL bOpen, int nDisplayChannel, int nRegionIndex);
int		__cdecl		MP4Sys_SetDisplayStandard (int nDisplayChannel, VideoStandard_t VideoStandard);

/******************************************新添加的函数*****************************************/
int		__cdecl		MP4Sys_GetBoardCount();
int		__cdecl		MP4Sys_GetBoardDetail(UINT boardNum, PBOARD_INFO pBoardDetail);
int		__cdecl		MP4Sys_GetDSPCount();
int		__cdecl		MP4Sys_GetDSPDetail(UINT DSPNum, PDSP_INFO pDSPDetail);
/***********************************************************************************************/

/***********以下几个函数均为对DSP的所有通道进行同样操作，减少不必要的重复通信 yuhj 070119 ******/
int		__cdecl		MP4Sys_StopVideoPreviewAllChannel(int iDSPIndex);
int		__cdecl		MP4Sys_StopVideoCaptureAllChannel(int iDSPIndex);
int		__cdecl		MP4Sys_StopMosaicAllChannel(int iDSPIndex);
int		__cdecl		MP4Sys_StopOsdAllChannel(int iDSPIndex);
int		__cdecl		MP4Sys_StopLogoAllChannel(int iDSPIndex);
int		__cdecl		MP4Sys_SetSystemVideoStandard(VideoStandard_t VideoStandard);	//设置系统编码DSP制式(注意，是所有的编码DSP)
int		__cdecl		MP4Sys_StopMotionDetectionAllChannel(int iDSPIndex);
int		__cdecl		MP4Sys_StopAudioPreviewAllChannel(int iDSPIndex);
/***********************************************************************************************/

#ifdef __cplusplus
}
#endif
#endif
