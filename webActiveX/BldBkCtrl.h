// BldBkCtrl.h: interface for the CBldBkCtrl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BLDBKCTRL_H__3C2F0744_2B40_45CA_8198_78822A253D05__INCLUDED_)
#define AFX_BLDBKCTRL_H__3C2F0744_2B40_45CA_8198_78822A253D05__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../include/Bk/tmTransDefine.h"
#include "../include/Bk/tmControlClient.h"
#include "../include/Bk/tmMpegCodeID.h"
#pragma comment(lib, "../lib/Bk/tmControlClient.lib")

#define WM_CONNECTSTATE			WM_USER + 210
#define WM_REFRESHSTATE			WM_USER + 211
#define WM_FULLSCREENMESS		WM_USER + 212

class CBldBkCtrl  
{
public:
	CBldBkCtrl();
	virtual ~CBldBkCtrl();
public:
	void bkInit();
	void bkCleanup();
	BOOL login(HWND videownd,LPCTSTR nDevIP, LONG nDevPort, 
		LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel);
	BOOL logout(short nDevChannel);
	BOOL isplay(short nDevChannel);
	
	
public:
	//实时流是否连接成功
	BOOL m_bConnectSuccess;
	//解码数据流的句柄
	HANDLE				m_hObject[9];
	HANDLE				m_hStream[9];
	
public:
	//连接状态回调定义
	static BOOL WINAPI	OnConnectCallBack( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult, void *context );
	BOOL				OnConnect( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult );
	
	//数据流回调
	static int WINAPI	OnStreamDataCallBack( HANDLE hTmCC, tmRealStreamInfo_t* pStreamInfo, void *context );
	int 				OnStreamData( HANDLE hTmCC, tmRealStreamInfo_t* pStreamInfo );

};

#endif // !defined(AFX_BLDBKCTRL_H__3C2F0744_2B40_45CA_8198_78822A253D05__INCLUDED_)
