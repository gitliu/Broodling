// BldMjCtrl.h: interface for the CBldMjCtrl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BLDMJCTRL_H__CC84C1D5_47B8_455E_92D6_DA00402429E9__INCLUDED_)
#define AFX_BLDMJCTRL_H__CC84C1D5_47B8_455E_92D6_DA00402429E9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../include/Mj/HIE_MP4Player.h"
#include "../include/Mj/HieClient_Common.h"
#include "../include/Mj/HieClient_Configure.h"
#include "../include/Mj/HieClientUnit.h"
#pragma comment(lib, "../lib/Mj/HIE_MP4Play.lib")
#pragma comment(lib, "../lib/Mj/HieClientUnit.lib")
#pragma comment(lib, "../lib/Mj/HieCIU.lib")

class CBldMjCtrl  
{
public:
	CBldMjCtrl();
	virtual ~CBldMjCtrl();
public:
	int mjInit();
	int mjCleanup();
	int login(HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, LONG nDevChannel);
	int logout(short nDevChannel);
	BOOL isplay(short nDevChannel);
	
protected:
	static int CALLBACK StreamMediaCallback(IN HSTREAM hStream, IN const StreamMediaFrame *cFrame, IN DWORD dwUserData);
private:
	HUSER	m_login[9];	//	用户登陆句柄
	HSTREAM m_real[9];		//	媒体流句柄
	HWND	m_videownd;	//	窗口句柄	
	LONG	m_hRealHandle;	
	int		nLoginCode;
	int		nErrorCode;
	int		nBol[9];
	RealStreamPara tRealStreamPara; //实时流参数
};

#endif // !defined(AFX_BLDMJCTRL_H__CC84C1D5_47B8_455E_92D6_DA00402429E9__INCLUDED_)
