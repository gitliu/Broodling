#ifndef __IPCLIENTTRANS_H__
#define __IPCLIENTTRANS_H__
#ifdef _IPCCLIENTTRANS_DEF_
#define IPCClientTrans_API __declspec(dllexport)
#else
#define IPCClientTrans_API __declspec(dllimport)
#pragma comment(lib, "IPCClientTrans.lib")
#endif
#include "IPCHeaderDef.h"
#include "IPCParamDef.h"
class CIPCClientTrans_i;
class IPCClientTrans_API CIPCClientTrans
{
public:
	CIPCClientTrans();
	virtual ~CIPCClientTrans();
	static emReturnType SetDebug(BOOL bDebug);
	static emReturnType SetPrintLog(BOOL bPrintLog);
	static emReturnType Startup(BOOL bRecvMsg);
	static emReturnType Cleanup();
	static emReturnType SetClientCallback(CB_INFO *pCBInfo);
	static emReturnType SearchDevie();
	static emReturnType SetAutoModifyIP(BOOL bAutoModifyIP);
	static emReturnType SetPTZProtocolPath(char *pszPTZProtocolPath);
	emReturnType Logon(LOGON_INFO *pLogonInfo);
	emReturnType Logout();
	emReturnType OpenChannel(OPEN_INFO *pOpenInfo);
	emReturnType OpenChannel(char *pURL);
	emReturnType CloseChannel();
	emReturnType IsOpened(); 
	emReturnType SubscribeHeartbeat();
	emReturnType DeclineHeartbeat();
	emReturnType SubscribeAlarm();
	emReturnType DeclineAlarm();
	emReturnType OpenTalk();
	emReturnType CloseTalk();
	emReturnType Capture(char *pszPath);
	emReturnType GetConfig(DWORD dwCommand, LPVOID lpOutBuffer, DWORD dwOutBufferSize);
	emReturnType SetConfig(DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferSize);
	emReturnType SetContext(void *pContext);
	emReturnType SetPTZProtocol(char *pszPTZProtocolName);
	emReturnType GetSystemHeader(char **pszSystemHeader, int& nLen);
	emReturnType GetVideoInfo(float& fSpeed, int& nFramerate, emCodecType& CodecType, int& nWidth, int& nHeight);
	emReturnType SetConnectTransServer(BOOL bConnectTransServer, char *pszServerIP, int nServerPort);
	emReturnType GetDeviceType(DEVICETYPE &DeviceType);

	emReturnType StartRecord();
	emReturnType StopRecord();
	emReturnType IsRecording();
	emReturnType QueryFile(time_t tBegin, time_t tEnd);
	emReturnType NextPage(int nPageNO);
	emReturnType OpenFile(OPENFILE_INFO *pOpenFileInfo);
	emReturnType CloseFile();
	emReturnType Play();
	emReturnType Pause();
	emReturnType Stop();
	emReturnType FrameGo();
	emReturnType Seek(DWORD dwFrame);
	emReturnType SetSpeed(int nSpeed);
	DWORD GetTotalFrame();
	DWORD GetCurFrame();
	DWORD GetTotalTime();
	DWORD GetCurrentTime();
	emReturnType DownloadFile(const char *pszDownloadFile, const char *pszSaveFile);
	emReturnType StopDownloadFile();
	DWORD GetCurFileSize();
private:
	CIPCClientTrans_i *m_pClient;
};

#ifdef __cplusplus
extern "C"
{
#endif
	emReturnType IPCClient_SetDebug(BOOL bDebug);
	emReturnType IPCClient_SetPrintLog(BOOL bPrintLog);
	emReturnType IPCClient_Startup(BOOL bRecvMsg);
	emReturnType IPCClient_Cleanup();
	emReturnType IPCClient_SetClientCallback(CB_INFO *pCBInfo);
	emReturnType IPCClient_SearchDevie();
	emReturnType IPCClient_SetAutoModifyIP(BOOL bAutoModifyIP);
	emReturnType IPCClient_SetPTZProtocolPath(char *pszPTZProtocolPath);
	emReturnType IPCClient_Logon(LOGON_INFO *pLogonInfo, HANDLE& hClient);
	emReturnType IPCClient_Logout(HANDLE hClient);
	emReturnType IPCClient_OpenChannel(HANDLE hClient, OPEN_INFO *pOpenInfo);
	emReturnType IPCClient_CloseChannel(HANDLE hClient);
	emReturnType IPCClient_IsOpened(HANDLE hClient);
	emReturnType IPCClient_SubscribeHeartbeat(HANDLE hClient);
	emReturnType IPCClient_DeclineHeartbeat(HANDLE hClient);
	emReturnType IPCClient_SubscribeAlarm(HANDLE hClient);
	emReturnType IPCClient_DeclineAlarm(HANDLE hClient);
	emReturnType IPCClient_OpenTalk(HANDLE hClient);
	emReturnType IPCClient_CloseTalk(HANDLE hClient);
	emReturnType IPCClient_Capture(HANDLE hClient, char *pszPath, BOOL bWait);
	emReturnType IPCClient_GetConfig(HANDLE hClient, DWORD dwCommand, LPVOID lpOutBuffer, DWORD dwOutBufferSize);
	emReturnType IPCClient_SetConfig(HANDLE hClient, DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferSize);
	emReturnType IPCClient_SetContext(HANDLE hClient, void *pContext);
	emReturnType IPCClient_SetPTZProtocol(HANDLE hClient, char *pszPTZProtocolName);
	emReturnType IPCClient_GetSystemHeader(HANDLE hClient, char **pszSystemHeader, int& nLen);
	emReturnType IPCClient_GetVideoInfo(HANDLE hClient, float& fSpeed, int& nFramerate, emCodecType& CodecType, int& nWidth, int& nHeight);
	emReturnType IPCClient_SetConnectTransServer(HANDLE hClient, BOOL bConnectTransServer, char *pszServerIP, int nServerPort);

	emReturnType IPCClient_StartRecord(HANDLE hClient);
	emReturnType IPCClient_StopRecord(HANDLE hClient);
	emReturnType IPCClient_IsRecording(HANDLE hClient);
	emReturnType IPCClient_QueryFile(HANDLE hClient, time_t tBegin, time_t tEnd);
	emReturnType IPCClient_NextPage(HANDLE hClient, int nPageNO);
	emReturnType IPCClient_OpenFile(HANDLE hClient, OPENFILE_INFO *pOpenFileInfo);
	emReturnType IPCClient_CloseFile(HANDLE hClient);
	emReturnType IPCClient_Play(HANDLE hClient);
	emReturnType IPCClient_Pause(HANDLE hClient);
	emReturnType IPCClient_Stop(HANDLE hClient);
	emReturnType IPCClient_FrameGo(HANDLE hClient);
	emReturnType IPCClient_Seek(HANDLE hClient, DWORD dwFrame);
	emReturnType IPCClient_SetSpeed(HANDLE hClient, int nSpeed);
	DWORD IPCClient_GetTotalFrame(HANDLE hClient);
	DWORD IPCClient_GetCurFrame(HANDLE hClient);
	DWORD IPCClient_GetTotalTime(HANDLE hClient);
	DWORD IPCClient_GetCurrentTime(HANDLE hClient);
	emReturnType IPCClient_DownloadFile(HANDLE hClient, const char *pszDownloadFile, const char *pszSaveFile);
	emReturnType IPCClient_StopDownloadFile(HANDLE hClient);
	DWORD IPCClient_GetCurFileSize(HANDLE hClient);

#ifdef __cplusplus
};
#endif

#endif