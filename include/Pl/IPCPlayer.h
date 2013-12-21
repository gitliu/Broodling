// ZYX.h: interface for the CZYX class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZYX_H__45769E8E_5F20_4C02_B36F_03B1F047819F__INCLUDED_)
#define AFX_ZYX_H__45769E8E_5F20_4C02_B36F_03B1F047819F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000



#ifdef _IPCPLAYER_DEF_
#define IPCPLAYER_API __declspec(dllexport)
#else
#define IPCPLAYER_API __declspec(dllimport)
#pragma comment(lib, "IPCPlayer.lib")
#endif

#ifndef __DECODEDEF
#define __DECODEDEF

enum emDisplayType
{
	emDisplayMode_DDRAW,
	emDisplayMode_GDI
};

enum emDecodeAVType
{
	emDecodeAVType_Audio,
	emDecodeAVType_Video
};

enum emDecodeDataType
{
	emDecodeDataType_None = 0,
	emDecodeDataType_YUV420,
	emDecodeDataType_RGB32,
};

typedef struct tagDECODE_DATA
{ 
	emDecodeAVType      DecodeAVType;
	emDecodeDataType    DecodeDataType;
	int  			nSize;
	int			nWidth;						// 画面宽，单位为像素，如果是音频数据则为0
	int			nHeight;					// 画面高，单位为像素，如果是音频数据则为0	
	DWORD		nStamp;						// 时标信息，单位毫秒
	int			nFrameRate;					// 编码时产生的图像帧率
	char			*pBuf;
}DECODE_DATA, *PDECODE_DATA;
#endif

typedef struct tagDisplayCallBackArg
{
	HDC hdc;
	int width;
	int height;
}DisplayCallBackArg;

#ifndef DISPLAY_CALLBACK_STRUCT
#define DISPLAY_CALLBACK_STRUCT
typedef struct Tag_DisplayCallBackIf
{
	virtual int Display_CallBack(void * pContext, void * hdc) = 0;
	virtual int FrameData_CallBack(void * pContext, void *param) =0;
	virtual int RefreshDisplay_CallBack(void * pContext, void *param) =0;
	virtual int ExtraData_CallBack(void * pContext, void *param) =0;
}DisplayCallBackIf;
#endif



class CAvPlayer;
class IPCPLAYER_API CIPCPlayer  
{
public:
	CIPCPlayer();
	virtual ~CIPCPlayer();
	static int SetDebug(BOOL bDebug);
	static int SetPrintLog(BOOL bPrintLog);
	static int IPCPlayer_SetDisplayType(emDisplayType DisplayType);
	int IPCPlayer_SetPlayerWindow(HWND hWnd);
	int IPCPlayer_SetPlayRect(RECT *pRect);
	int IPCPlayer_SetZoomRect(RECT *pRect);
	int IPCPlayer_PutPacket(void *pPacket);
	int IPCPlayer_PutNullPacket();
	int IPCPlayer_PlayFileName(char *path);
	int IPCPlayer_SetContext(void *pContext);
	DWORD IPCPlayer_GetTotalFrame();
    DWORD IPCPlayer_GetCurFrame();
	int IPCPlayer_GetFrameRate();
	int IPCPlayer_Seek(DWORD time);
	int IPCPlayer_SetSpeed(int speed);
	int IPCPlayer_DisableAudio();
	int IPCPlayer_EnableAudio();
	int IPCPlayer_EnableDisplay();
	int IPCPlayer_DisableDisplay();
	int IPCPlayer_Play();
	int IPCPlayer_Pause();
	int IPCPlayer_Stop();
	int IPCPlayer_Capture(char *path, BOOL bWait = FALSE);
	int IPCPlayer_FrameGo();
	int IPCPlayer_RefreshDisplay();
	int IPCPlayer_ShowToScale(BOOL enable);
	int IPCPlayer_DisplayNoTearing(BOOL sta);
	DWORD IPCPlayer_GetFileTotalTimeMs();
	DWORD IPCPlayer_GetCurPlayTimeMs();
	void IPCPlayer_SetForceRefresh(BOOL bRefresh);
	static int IPCPlayer_RegisterDisplayCallBackIf(DisplayCallBackIf * fun);
private:
	CAvPlayer *m_pAvPlayer;


};

#endif // !defined(AFX_ZYX_H__45769E8E_5F20_4C02_B36F_03B1F047819F__INCLUDED_)
