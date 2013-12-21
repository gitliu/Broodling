// BldHkCtrl.h: interface for the CBldHkCtrl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BLDHKCTRL_H__511F12F1_109E_4AFD_8607_871468FB8DC1__INCLUDED_)
#define AFX_BLDHKCTRL_H__511F12F1_109E_4AFD_8607_871468FB8DC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../include/Hk/HCNetSDK.h"
#pragma comment(lib, "../lib/Hk/HCNetSDK.lib")

class CBldHkCtrl  
{
public:
	CBldHkCtrl();
	virtual ~CBldHkCtrl();
public:
	// 初始化相机sdk
	BOOL hkInit();
	// 释放相机sdk
	BOOL hkCleanup();
	// 登陆
	BOOL login(HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel);
	// 退出
	BOOL logout(short nDevChannel);
	// 判断是否播放
	BOOL isplay(short nDevChannel);
	// 云台控制
	BOOL ptzControl(LONG nChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
	// 抓拍
	BOOL memCapturePicture(LONG nChannel, char *sPicFileName);
private:
	// 登陆句柄
	LONG m_Login[9];
	// 实时句柄
	LONG m_Real[9];
	// 窗口句柄
	HWND m_videownd;
};

#endif // !defined(AFX_BLDHKCTRL_H__511F12F1_109E_4AFD_8607_871468FB8DC1__INCLUDED_)
