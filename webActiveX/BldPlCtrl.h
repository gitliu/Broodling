// BldPlCtrl.h: interface for the CBldPlCtrl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BLDPLCTRL_H__0EE7BEB9_7DB9_406D_8CD8_D463AD257AB9__INCLUDED_)
#define AFX_BLDPLCTRL_H__0EE7BEB9_7DB9_406D_8CD8_D463AD257AB9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../include/Pl/IPCSDK.h"

class CBldPlCtrl  : public IMsgCallback
{
public:
	CBldPlCtrl();
	virtual ~CBldPlCtrl();

public:
	void plInit();
	void plCleanup();
	virtual int MsgNotify(WPARAM wParam, LPARAM lParam);
	BOOL login(HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel);
	int  CamOpenChannel(HWND hDevWnd, LONG nDevChannel);
	BOOL CamOpenChannel(HWND nDevWnd, LONG nDevChannel, int ACodecType);
	BOOL logout(short nDevChannel);
	BOOL isplay(short nDevChannel);
	
private:
	LOGON_INFO logon_info;
	HANDLE m_hClient[9];
	LOGON_INFO m_LogonInfo;
};

#endif // !defined(AFX_BLDPLCTRL_H__0EE7BEB9_7DB9_406D_8CD8_D463AD257AB9__INCLUDED_)
