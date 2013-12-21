////////////////////////////////////////////////
//FILE:         HIE_MP4Player.h               //
//DATE:         2007-11-27                    //
//VERSION:      1.0                           //
//DESCRIPTION:  Interface For HIE_MP4Play.lib //
//COPYRIGHT:    High-Easy                     //
////////////////////////////////////////////////
#define _WINDLL

#ifndef _HIE_MP4PLAY
#define _HIE_MP4PLAY

#if defined( _WINDLL)
	#define MP4Play_API extern "C" __declspec(dllexport)
#else
	#define MP4Play_API extern "C" __declspec(dllimport)
#endif

#define MP4Play_MAX_SUPPORTS 64

#define  MP4Play_NOERROR					0	
#define	 MP4Play_PARA_OVER				    1	
#define  MP4Play_ORDER_ERROR				2	
#define  MP4Play_NOT_SUPPORT             	3
#define  MP4Play_DEC_VIDEO_ERROR			4	
#define  MP4Play_DEC_AUDIO_ERROR			5	
#define	 MP4Play_ALLOC_MEMORY_ERROR		    6	
#define  MP4Play_OPEN_FILE_ERROR			7	
#define  MP4Play_SUPPORT_OPEN_ONLY		    8	
#define  MP4Play_CREATE_DDRAW_ERROR		    9	
#define  MP4Play_CREATE_OFFSCREEN_ERROR    10	
#define  MP4Play_BUF_OVER			       11	
#define  MP4Play_CREATE_SOUND_ERROR	       12	
#define	 MP4Play_SET_VOLUME_ERROR	       13	
#define  MP4Play_SUPPORT_FILE_ONLY	       14	
#define  MP4Play_SUPPORT_STREAM_ONLY	   15	
#define  MP4Play_SYS_NOT_SUPPORT		   16	
#define  MP4Play_FILEHEADER_UNKNOWN        17	
#define  MP4Play_VERSION_INCORRECT	       18	
#define  MP4Play_INIT_DECODER_ERROR        19	
#define  MP4Play_CHECK_FILE_ERROR	       20	
#define  MP4Play_SUPPORT_FILESTREAM_ONLY   21
#define	 MP4Play_BLT_ERROR			       22	
#define  MP4Play_UPDATE_ERROR		       23	

#define MAX_DISPLAY_WND   4

//Display type
#define DISPLAY_NORMAL  1
#define DISPLAY_QUARTER 2

#define SUPPORT_DDRAW		1 
#define SUPPORT_BLT         2 
#define SUPPORT_BLTFOURCC   4 
#define SUPPORT_BLTSHRINKX  8 
#define SUPPORT_BLTSHRINKY  16 
#define SUPPORT_BLTSTRETCHX 32 
#define SUPPORT_BLTSTRETCHY 64 
#define SUPPORT_SSE         128 
#define SUPPORT_MMX			256 

#define MAX_DIS_FRAMES 50
#define MIN_DIS_FRAMES 6

#define BY_FRAMENUM  1
#define BY_FRAMETIME 2

#define SOURCE_BUF_MAX	2048 * 1000 * 4
#define SOURCE_BUF_MIN	1024*50

#define STREAME_REALTIME 0
#define STREAME_FILE	 1

#define T_AUDIO16	101
#define T_UYVY		1
#define T_YV12		3
#define T_RGB32		7

typedef struct 
{
	long nFrameNum;          
	UINT nFrameTime;          
	ULONG nFilePos;            
}FRAME_POS ,*PFRAME_POS;

typedef struct{
	long nWidth;
	long nHeight;
	long nStamp;
	long nType;
	long nFrameRate;
}FRAME_INFO;

typedef struct{
	char *pDataBuf; //数据帧首地址
	long nSize;		//数据帧的大小
	long nFrameNum; //数据帧的个数
	BOOL bIsAudio;	//是否音频帧
	long nReserved; //保留
}FRAME_TYPE;

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//API

MP4Play_API BOOL __stdcall MP4Play_UnlockPort(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_LockNewPort(LONG* pdwPort);

MP4Play_API BOOL __stdcall MP4Play_InitDDraw(HWND hWnd);

MP4Play_API BOOL __stdcall MP4Play_RealeseDDraw();

MP4Play_API BOOL __stdcall MP4Play_OpenFile(LONG nPort,LPSTR sFileName);

MP4Play_API BOOL __stdcall MP4Play_OpenFileEx(LONG nPort,LPSTR sFileName, int iMaxImageWidth, int iMaxImageHeight);

MP4Play_API BOOL __stdcall MP4Play_CloseFile(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_Play(LONG nPort, HWND hWnd);

MP4Play_API BOOL __stdcall MP4Play_Stop(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_Pause(LONG nPort,DWORD nPause);

MP4Play_API BOOL __stdcall MP4Play_Fast(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_Slow(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_OneByOne(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetPlayPos(LONG nPort,float fRelativePos);

MP4Play_API float __stdcall MP4Play_GetPlayPos(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetFileEndMsg(LONG nPort,HWND hWnd,UINT nMsg);

MP4Play_API BOOL __stdcall MP4Play_SetVolume(LONG nPort,WORD nVolume);

MP4Play_API BOOL __stdcall MP4Play_StopSound();

MP4Play_API BOOL __stdcall MP4Play_PlaySound(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_OpenStream(LONG nPort,PBYTE pFileHeadBuf,DWORD nSize,DWORD nBufPoolSize);

MP4Play_API BOOL __stdcall MP4Play_OpenStreamEx(LONG nPort,PBYTE pFileHeadBuf,DWORD nSize,DWORD nBufPoolSize, int iMaxImageWidth, int iMaxImageHeight);

MP4Play_API BOOL __stdcall MP4Play_InputData(LONG nPort,PBYTE pBuf,DWORD nSize);

MP4Play_API BOOL __stdcall MP4Play_CloseStream(LONG nPort);

MP4Play_API int  __stdcall MP4Play_GetCaps();

MP4Play_API DWORD __stdcall MP4Play_GetFileTime(LONG nPort);

MP4Play_API DWORD __stdcall MP4Play_GetPlayedTime(LONG nPort);

MP4Play_API DWORD __stdcall MP4Play_GetAbsoluteTime(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_ChangeContrast(LONG nPort,int degree);

MP4Play_API BOOL __stdcall MP4Play_ChangeBright(LONG nPort,int degree);

MP4Play_API BOOL _stdcall MP4Play_LocalZoom(LONG nPort,BOOL bLocalZoom,int Left,int Top,int Width,int Height);

MP4Play_API BOOL __stdcall MP4Play_SetDecCallBack(LONG nPort,void (CALLBACK* DecCBFun)(long nPort,char * pBuf,long nSize,FRAME_INFO * pFrameInfo, long nReserved1,long nReserved2));

MP4Play_API BOOL __stdcall MP4Play_SetDecCallBackUser(LONG nPort,void (CALLBACK* DecCBFun)(long nPort,char * pBuf,long nSize,FRAME_INFO * pFrameInfo, long lUser,long nReserved2), long lUser);

MP4Play_API BOOL __stdcall MP4Play_SetDisplayCallBack(LONG nPort,void (CALLBACK* DisplayCBFun)(long nPort,char * pBuf,long nSize,long nWidth,long nHeight,long nStamp,long nType,long nReserved));

MP4Play_API BOOL __stdcall MP4Play_SnapBMP(LONG nPort, PBYTE pBuf,long* nSize,long* nWidth,long* nHeight,long* nType );

MP4Play_API BOOL __stdcall MP4Play_ConvertToBmpFile(char * pBuf,long nSize,long nWidth,long nHeight,long nType,char *sFileName);

MP4Play_API DWORD __stdcall	MP4Play_GetFileTotalFrames(LONG nPort);

MP4Play_API DWORD __stdcall	MP4Play_GetCurrentFrameRate(LONG nPort);

MP4Play_API DWORD __stdcall	MP4Play_GetPlayedTimeEx(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetPlayedTimeEx(LONG nPort,DWORD nTime);

MP4Play_API DWORD __stdcall	MP4Play_GetCurrentFrameNum(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetStreamOpenMode(LONG nPort,DWORD nMode);

MP4Play_API DWORD __stdcall	MP4Play_GetFileHeadLength();

MP4Play_API DWORD __stdcall	MP4Play_GetSdkVersion();

MP4Play_API DWORD __stdcall MP4Play_GetLastError(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_RefreshPlay(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetOverlayMode(LONG nPort,BOOL bOverlay,COLORREF colorKey);

MP4Play_API BOOL __stdcall MP4Play_GetPictureSize(LONG nPort,LONG *pWidth,LONG *pHeight);

MP4Play_API BOOL __stdcall MP4Play_SetPicQuality(LONG nPort,BOOL bHighQuality);

MP4Play_API BOOL __stdcall MP4Play_PlaySoundShare(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_StopSoundShare(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_WaterMarkIsRight(LONG nPort);

MP4Play_API LONG __stdcall MP4Play_GetOverlayMode(LONG nPort);

MP4Play_API COLORREF __stdcall MP4Play_GetColorKey(LONG nPort);

MP4Play_API WORD __stdcall MP4Play_GetVolume(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_GetPictureQuality(LONG nPort,BOOL *bHighQuality);

MP4Play_API DWORD __stdcall MP4Play_GetSourceBufferRemain(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_ResetSourceBuffer(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetSourceBufCallBack(LONG nPort,DWORD nThreShold,void (CALLBACK * SourceBufCallBack)(long nPort,DWORD nBufSize,DWORD dwUser,void*pResvered),DWORD dwUser,void *pReserved);

MP4Play_API BOOL __stdcall MP4Play_ResetSourceBufFlag(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetDisplayBuf(LONG nPort,DWORD nNum);

MP4Play_API DWORD __stdcall MP4Play_GetDisplayBuf(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_OneByOneBack(LONG nPort);

MP4Play_API BOOL __stdcall MP4Play_SetFileRefCallBack(LONG nPort, void (__stdcall *pFileRefDone)(DWORD nPort,DWORD nUser),DWORD nUser);

MP4Play_API BOOL __stdcall MP4Play_SetCurrentFrameNum(LONG nPort,DWORD nFrameNum);

MP4Play_API BOOL __stdcall MP4Play_GetKeyFramePos(LONG nPort,DWORD nValue, DWORD nType, PFRAME_POS pFramePos);

MP4Play_API BOOL __stdcall MP4Play_GetNextKeyFramePos(LONG nPort,DWORD nValue, DWORD nType, PFRAME_POS pFramePos);

MP4Play_API BOOL __stdcall MP4Play_ThrowBFrameNum(LONG nPort,DWORD nNum);

MP4Play_API BOOL _stdcall MP4Play_SetPlaySpeed(LONG nPort,int nSpeed);

MP4Play_API LONG __stdcall MP4Play_GetStreamOpenMode(LONG nPort);

MP4Play_API ULONG __stdcall MP4Play_GetFilePos(LONG nPort);




//////////////////////////////////////////////////////////////////////////

 BOOL _stdcall DecoderOneFrame_MultiDecoder(HANDLE m_Handle , int BitCount, BYTE CodecType, int iWidth, int iHeight);

 BOOL _stdcall SetVideoFormat( int NewVideoFormat );

 BOOL _stdcall SetPostProcess( HANDLE m_Handle, BOOL IfPostProcess, int Flag = 0x3F );

 BOOL _stdcall TestIfNeedMMX();

 HANDLE _stdcall SDK_InitDecoder(unsigned char **DecoderInput , unsigned char **DecoderOutput , int PictureW , int PictureH, int nPort);

 BOOL _stdcall FreeDecoder( HANDLE m_CurHandle );

 BOOL _stdcall GetWH_MultiDecoder( HANDLE m_Handle , int *picWidth , int *picHeight, int *edge_size);

 BOOL _stdcall SetFlip( HANDLE m_Handle , BOOL IfFlip );

 BOOL _stdcall SetBright( HANDLE m_Handle , int NewBright );

 BOOL _stdcall SetContrast( HANDLE m_Handle , int NewContrast );

 unsigned char* _stdcall GetYUV( HANDLE m_Handle );

 BOOL _stdcall TransYUVtoRGB(HANDLE m_Handle );

 BOOL _stdcall GetThrowBNum( HANDLE m_Handle , int num);

 BOOL _stdcall SetBFrameType( HANDLE m_Handle , int type );

 BOOL __stdcall ConvertBMPtoBuf(PBYTE pBuf,long* nSize,long* nWidth,long* nHeight,long* nType);

 BOOL _stdcall CheckWaterMarkData( HANDLE m_Handle );
//////////////////////////////////////////////////////////////////////////


MP4Play_API BOOL __stdcall MP4Play_SetAudioCallBack(LONG nPort, void (__stdcall * funAudio)(long nPort, char * pAudioBuf, long nSize, long nStamp, long nType, long nUser), long nUser);

MP4Play_API BOOL __stdcall MP4Play_RigisterDrawFun(LONG nPort,void (CALLBACK* DrawFun)(long nPort,HDC hDc,LONG nUser),LONG nUser);

MP4Play_API BOOL __stdcall MP4Play_RigisterDrawFun_Ex(LONG nPort,void (CALLBACK* DrawFunEx)(long nPort,HDC hDc,LONG nUser),LONG nUser);

MP4Play_API BOOL __stdcall MP4Play_SetDisplayRegion(LONG nPort,DWORD nRegionNum, RECT *pSrcRect, HWND hDestWnd, BOOL bEnable);

MP4Play_API BOOL __stdcall MP4Play_GetRefValue(LONG nPort,BYTE *pBuffer, DWORD *pSize);

MP4Play_API BOOL __stdcall MP4Play_SetRefValue(LONG nPort,BYTE *pBuffer, DWORD nSize);

MP4Play_API BOOL __stdcall MP4Play_SetEncChangeMsg(LONG nPort,HWND hWnd,UINT nMsg);

MP4Play_API BOOL __stdcall MP4Play_SetEncTypeChangeCallBack(LONG nPort,void(CALLBACK *funEncChange)(long nPort,long nUser),long nUser);

MP4Play_API BOOL __stdcall MP4Play_SetColor(LONG nPort, DWORD nRegionNum, int nBrightness, int nContrast, int nSaturation, int nHue);

MP4Play_API BOOL __stdcall MP4Play_GetColor(LONG nPort, DWORD nRegionNum, int *pBrightness, int *pContrast, int *pSaturation, int *pHue);

MP4Play_API BOOL __stdcall MP4Play_SetDecCBStream(LONG nPort,DWORD nStream);

MP4Play_API BOOL __stdcall MP4Play_GetOriginalFrameCallBack(LONG nPort, BOOL bIsChange,
														   BOOL bNormalSpeed,long nStartFrameNum,long nStartStamp,long nFileHeader,
														   void(CALLBACK *funGetOrignalFrame)(long nPort,FRAME_TYPE *frameType, 
														   long nUser),long nUser);

MP4Play_API BOOL __stdcall MP4Play_GetFileSpecialAttr(LONG nPort, DWORD *pTimeStamp,
														DWORD *pFileNum ,DWORD *nFileHeader);

MP4Play_API BOOL __stdcall MP4Play_SetDisplayType(LONG nPort,LONG nType);

MP4Play_API long __stdcall MP4Play_GetDisplayType(LONG nPort);

#endif
