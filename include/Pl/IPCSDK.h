#ifndef __IPCSDK_H__
#define __IPCSDK_H__
#ifdef _IPCSDK_DEF_
#define IPCClient_API __declspec(dllexport)
#else
#define IPCClient_API __declspec(dllimport)
#pragma comment(lib, "../lib/Pl/IPCSDK.lib")
#endif
#include "IPCHeaderDef.h"
class CIPCSDK_i;
class IPCClient_API CIPCSDK
{
public:
	CIPCSDK();
	virtual ~CIPCSDK();
	static emReturnType SetDebug(BOOL bDebug);
	static emReturnType SetPrintLog(BOOL bPrintLog);
	static emReturnType GetSDKVersion(char *pszVersion, char *pBuildDate);
	static emReturnType Client_Startup(BOOL bRecvMsg = TRUE);
	static emReturnType Client_Cleanup();
	static emReturnType Client_SetClientCallback(CB_INFO *pCBInfo);
	static emReturnType Client_SearchDevie();
	static emReturnType Client_SetAutoModifyIP(BOOL bAutoModifyIP);
	static emReturnType Client_SetPTZProtocolPath(char *pszPTZProtocolPath);
	static emReturnType SetDisplayType(emDisplayType DisplayType);
	emReturnType Client_Logon(LOGON_INFO *pLogonInfo);
	emReturnType Client_Logout();
	emReturnType Client_OpenChannel(OPEN_INFO *pOpenInfo);
	emReturnType Client_OpenChannel(char *pURL);
	emReturnType Client_CloseChannel();
	emReturnType Client_SetPlayWnd(HWND hWnd);
	emReturnType Client_SetPlayRect(RECT *pRect);
	emReturnType Client_SetZoomRect(RECT *pRect);
	emReturnType Client_SubscribeHeartbeat();
	emReturnType Client_DeclineHeartbeat();
	emReturnType Client_SubscribeAlarm();
	emReturnType Client_DeclineAlarm();
	emReturnType Client_OpenTalk();
	emReturnType Client_CloseTalk();
	emReturnType Client_EnableAudio();
	emReturnType Client_DisableAudio();
	emReturnType Client_DisableDisplay();
	emReturnType Client_EnableDisplay();
	emReturnType Client_EnableDecode();
	emReturnType Client_DisableDecode();
	emReturnType Client_ShowToScale(BOOL bScaleShow);
	emReturnType Client_Capture(char *pszPath, BOOL bWait = FALSE);
	emReturnType Client_GetConfig(DWORD dwCommand, LPVOID lpOutBuffer, DWORD dwOutBufferSize);
	emReturnType Client_SetConfig(DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferSize);
	emReturnType Client_SetContext(void *pContext);
	emReturnType Client_SetPTZProtocol(char *pszPTZProtocolName);
	emReturnType Client_GetSystemHeader(char **pszSystemHeader, int& nLen);
	emReturnType Client_GetVideoInfo(float& fSpeed, int& nFramerate, emCodecType& CodecType, int& nWidth, int& nHeight);
	emReturnType Client_SetConnectTransServer(BOOL bConnectTransServer, char *pszServerIP, int nServerPort);
	emReturnType Client_StartRecord();
	emReturnType Client_StopRecord();
	emReturnType Client_IsRecording();
	emReturnType Client_StartLocalRecord(char *pszPath, BOOL bAvi);
	emReturnType Client_StopLocalRecord();
	emReturnType Client_IsLocalRecording();
	emReturnType Client_QueryFile(time_t tBegin, time_t tEnd);
	emReturnType Client_NextPage(int nPageNO);
	emReturnType Client_OpenFile(OPENFILE_INFO *pOpenFileInfo);
	emReturnType Client_CloseFile();
	emReturnType Client_Play();
	emReturnType Client_Pause();
	emReturnType Client_Stop();
	emReturnType Client_FrameGo();
	emReturnType Client_Seek(DWORD dwTime);
	emReturnType Client_SetSpeed(int nSpeed);
	DWORD Client_GetTotalFrame();
	DWORD Client_GetCurFrame();
	DWORD Client_GetTotalTime();
	DWORD Client_GetCurrentTime();
	emReturnType Client_DownloadFile(const char *pszDownloadFile, const char *pszSaveFile);
	emReturnType Client_StopDownloadFile();
	DWORD Client_GetCurFileSize();
	emReturnType Client_RefreshDisplay();
	emReturnType Client_DisplayNoTearing(BOOL bEnable);

	static emReturnType Player_SetPlayerCallback(CB_INFO *pCBInfo);
	emReturnType Player_CreatePlayer(HWND hPlayWnd);
	emReturnType Player_SetPlayWnd(HWND hPlayWnd);
	emReturnType Player_SetPlayRect(RECT *pRect);
	emReturnType Player_SetZoomRect(RECT *pRect);
	emReturnType Player_SetContext(void* pContext);
	emReturnType Player_PutPacket(void *pPacket);
	emReturnType Player_PutNullPacket();
	emReturnType Player_OpenFile(char *pszPath);
	DWORD Player_GetTotalFrame();
	DWORD Player_GetCurFrame();
	DWORD Player_GetTotalTime();
	DWORD Player_GetCurrentTime();
	int Player_GetFrameRate();
	emReturnType Player_Seek(DWORD dwFrame);
	emReturnType Player_SetSpeed(int nSpeed);
	emReturnType Player_DisableAudio();
	emReturnType Player_EnableAudio();
	emReturnType Player_EnableDisplay();
	emReturnType Player_DisableDisplay();
	emReturnType Player_ShowToScale(BOOL bScaleShow);
	emReturnType Player_Play();
	emReturnType Player_Pause();
	emReturnType Player_Stop();
	emReturnType Player_Capture(char *pszPath, BOOL bWait = FALSE);
	emReturnType Player_FrameGo();	
	emReturnType Player_RefreshDisplay();
	emReturnType Player_DisplayNoTearing(BOOL bEnable);
private:
	CIPCSDK_i *m_pIPCSDK;
};


#ifdef __cplusplus
extern "C"
{
#endif
	emReturnType  IPCSDK_SetDebug(BOOL bDebug);
	emReturnType  IPCSDK_SetPrintLog(BOOL bPrintLog);
	emReturnType  IPCSDK_GetSDKVersion(char *pszVersion, char *pBuildDate);
	emReturnType  IPCSDK_SetDisplayType(emDisplayType DisplayType);
	emReturnType  IPCClient_Startup(BOOL bRecvMsg = TRUE);
	emReturnType  IPCClient_Cleanup();
	 emReturnType  IPCClient_SetClientCallback(CB_INFO *pCBInfo);
	 emReturnType  IPCClient_SearchDevie();
	emReturnType  IPCClient_SetAutoModifyIP(BOOL bAutoModifyIP);
	 emReturnType  IPCClient_SetPTZProtocolPath(char *pszPTZProtocolPath);
	 emReturnType  IPCClient_Logon(LOGON_INFO *pLogonInfo, HANDLE& hClient);
	 emReturnType  IPCClient_Logout(HANDLE hClient);
	 emReturnType  IPCClient_OpenChannel(HANDLE hClient, OPEN_INFO *pOpenInfo);
	 emReturnType  IPCClient_CloseChannel(HANDLE hClient);
	 emReturnType  IPCClient_SetPlayWnd(HANDLE hClient, HWND hWnd);
	 emReturnType  IPCClient_SetPlayRect(HANDLE hClient, RECT *pRect);
	 emReturnType  IPCClient_SetZoomRect(HANDLE hClient, RECT *pRect);
	 emReturnType  IPCClient_SubscribeHeartbeat(HANDLE hClient);
	 emReturnType  IPCClient_DeclineHeartbeat(HANDLE hClient);
	 emReturnType  IPCClient_SubscribeAlarm(HANDLE hClient);
	 emReturnType  IPCClient_DeclineAlarm(HANDLE hClient);
	 emReturnType  IPCClient_OpenTalk(HANDLE hClient);
	 emReturnType  IPCClient_CloseTalk(HANDLE hClient);
	 emReturnType  IPCClient_EnableAudio(HANDLE hClient);
	 emReturnType  IPCClient_DisableAudio(HANDLE hClient);
	 emReturnType  IPCClient_EnableDisplay(HANDLE hClient);
	 emReturnType  IPCClient_DisableDisplay(HANDLE hClient);
	 emReturnType  IPCClient_EnableDecode(HANDLE hClient);
	 emReturnType  IPCClient_DisableDecode(HANDLE hClient);
	 emReturnType  IPCClient_ShowToScale(HANDLE hClient, BOOL bShowToScale);
	 emReturnType  IPCClient_Capture(HANDLE hClient, char *pszPath, BOOL bWait = FALSE);
	 emReturnType  IPCClient_GetConfig(HANDLE hClient, DWORD dwCommand, LPVOID lpOutBuffer, DWORD dwOutBufferSize);
	 emReturnType  IPCClient_SetConfig(HANDLE hClient, DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferSize);
	 emReturnType  IPCClient_SetContext(HANDLE hClient, void *pContext);
	 emReturnType  IPCClient_SetPTZProtocol(HANDLE hClient, char *pszPTZProtocolName);
	 emReturnType  IPCClient_GetSystemHeader(HANDLE hClient, char **pszSystemHeader, int& nLen);
	 emReturnType  IPCClient_GetVideoInfo(HANDLE hClient, float& fSpeed, int& nFramerate, emCodecType& CodecType, int& nWidth, int& nHeight);
	 emReturnType  IPCClient_SetConnectTransServer(HANDLE hClient, BOOL bConnectTransServer, char *pszServerIP, int nServerPort);
	 emReturnType  IPCClient_StartRecord(HANDLE hClient);
	 emReturnType  IPCClient_StopRecord(HANDLE hClient);
	 emReturnType  IPCClient_IsRecording(HANDLE hClient);
	 emReturnType  IPCClient_StartLocalRecord(HANDLE hClient, char *pszPath, BOOL bAvi);
	 emReturnType  IPCClient_StopLocalRecord(HANDLE hClient);
	 emReturnType  IPCClient_IsLocalRecording(HANDLE hClient);
	 emReturnType  IPCClient_QueryFile(HANDLE hClient, time_t tBegin, time_t tEnd);
	 emReturnType  IPCClient_NextPage(HANDLE hClient, int nPageNO);
	 emReturnType  IPCClient_OpenFile(HANDLE hClient, OPENFILE_INFO *pOpenFileInfo);
	 emReturnType  IPCClient_CloseFile(HANDLE hClient);
	 emReturnType  IPCClient_Play(HANDLE hClient);
	 emReturnType  IPCClient_Pause(HANDLE hClient);
	 emReturnType  IPCClient_Stop(HANDLE hClient);
	 emReturnType  IPCClient_FrameGo(HANDLE hClient);
	 emReturnType  IPCClient_Seek(HANDLE hClient, DWORD dwFrame);
	 emReturnType  IPCClient_SetSpeed(HANDLE hClient, int nSpeed);
	 DWORD  IPCClient_GetTotalFrame(HANDLE hClient);
	 DWORD  IPCClient_GetCurFrame(HANDLE hClient);
	 DWORD  IPCClient_GetTotalTime(HANDLE hClient);
	 DWORD  IPCClient_GetCurrentTime(HANDLE hClient);
	 emReturnType  IPCClient_DownloadFile(HANDLE hClient, const char *pszDownloadFile, const char *pszSaveFile);
	 emReturnType  IPCClient_StopDownloadFile(HANDLE hClient);
	 DWORD  IPCClient_GetCurFileSize(HANDLE hClient);
	 emReturnType  IPCClient_RefreshDisplay(HANDLE hClient);	
	 emReturnType   IPCClient_DisplayNoTearing(HANDLE hClient, BOOL bEnable);

	 emReturnType  IPCPlayer_SetPlayerCallback(CB_INFO *pCBInfo);
	 HANDLE  IPCPlayer_CreatePlayer(HWND hPlayWnd);
	 emReturnType  IPCPlayer_SetPlayWnd(HANDLE hPalyer, HWND hPlayWnd);
	 emReturnType  IPCPlayer_SetPlayRect(HANDLE hPalyer, RECT *pRect);
	 emReturnType  IPCPlayer_SetZoomRect(HANDLE hPalyer, RECT *pRect);
	 emReturnType  IPCPlayer_SetContext(HANDLE hPalyer, void* pContext);
	 emReturnType  IPCPlayer_ReleasePlayer(HANDLE hPalyer);
	 emReturnType  IPCPlayer_PutPacket(HANDLE hPalyer, void *pPacket);
	 emReturnType  IPCPlayer_PutNullPacket(HANDLE hPalyer);
	 emReturnType  IPCPlayer_OpenFile(HANDLE hPalyer, char *pszPath);
	 DWORD  IPCPlayer_GetTotalFrame(HANDLE hPalyer);
	 DWORD  IPCPlayer_GetCurFrame(HANDLE hPalyer);
	 DWORD  IPCPlayer_GetTotalTime(HANDLE hPalyer);
	 DWORD  IPCPlayer_GetCurrentTime(HANDLE hPalyer);
	 int  IPCPlayer_GetFrameRate(HANDLE hPalyer);
	 emReturnType  IPCPlayer_Seek(HANDLE hPalyer, DWORD dwFrame);
	 emReturnType  IPCPlayer_SetSpeed(HANDLE hPalyer, int nSpeed);
	 emReturnType  IPCPlayer_DisableAudio(HANDLE hPalyer);
	 emReturnType  IPCPlayer_EnableAudio(HANDLE hPalyer);
	 emReturnType  IPCPlayer_DisableDisplay(HANDLE hPalyer);
	 emReturnType  IPCPlayer_EnableDisplay(HANDLE hPalyer);
	 emReturnType  IPCPlayer_ShowToScale(HANDLE hPalyer, BOOL bShowToScale);
	 emReturnType  IPCPlayer_Play(HANDLE hPalyer);
	 emReturnType  IPCPlayer_Pause(HANDLE hPalyer);
	 emReturnType  IPCPlayer_Stop(HANDLE hPalyer);
	 emReturnType  IPCPlayer_Capture(HANDLE hPalyer, char *pszPath, BOOL bWait = FALSE);
	 emReturnType  IPCPlayer_FrameGo(HANDLE hPalyer);	
	 emReturnType  IPCPlayer_RefreshDisplay(HANDLE hPalyer);	
	 emReturnType IPCPlayer_DisplayNoTearing(HANDLE hPalyer, BOOL bEnable);
#ifdef __cplusplus
};
#endif

#endif