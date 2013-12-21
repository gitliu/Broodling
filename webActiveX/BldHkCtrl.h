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
	// ��ʼ�����sdk
	BOOL hkInit();
	// �ͷ����sdk
	BOOL hkCleanup();
	// ��½
	BOOL login(HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel);
	// �˳�
	BOOL logout(short nDevChannel);
	// �ж��Ƿ񲥷�
	BOOL isplay(short nDevChannel);
	// ��̨����
	BOOL ptzControl(LONG nChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
	// ץ��
	BOOL memCapturePicture(LONG nChannel, char *sPicFileName);
private:
	// ��½���
	LONG m_Login[9];
	// ʵʱ���
	LONG m_Real[9];
	// ���ھ��
	HWND m_videownd;
};

#endif // !defined(AFX_BLDHKCTRL_H__511F12F1_109E_4AFD_8607_871468FB8DC1__INCLUDED_)
