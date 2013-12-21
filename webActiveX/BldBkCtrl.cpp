// BldBkCtrl.cpp: implementation of the CBldBkCtrl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "webActiveX.h"
#include "BldBkCtrl.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBldBkCtrl::CBldBkCtrl()
{
	m_bConnectSuccess = TRUE;
	for (int i = 0; i < 9; ++i)
	{
		m_hObject[i] = NULL;
	}
}

CBldBkCtrl::~CBldBkCtrl()
{

}

void CBldBkCtrl::bkInit()
{
	
}

void CBldBkCtrl::bkCleanup()
{
	
}

BOOL CBldBkCtrl::login( HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel )
{
	//初始化实时解码句柄
	m_hObject[nDevChannel] = ::TMCC_Init(TMCC_INITTYPE_REALSTREAM);
	if( m_hObject[nDevChannel] != NULL )
	{
		::TMCC_RegisterConnectCallBack(m_hObject[nDevChannel], OnConnectCallBack, this);
		::TMCC_RegisterStreamCallBack(m_hObject[nDevChannel], OnStreamDataCallBack, this);
		::TMCC_SetAutoReConnect(m_hObject[nDevChannel], TRUE);
		::TMCC_SetDisplayShow(m_hObject[nDevChannel], TRUE);
		::TMCC_SetStreamBufferTime(m_hObject[nDevChannel], 0);
	}
	else
	{
		m_hObject[nDevChannel] = NULL;
		return FALSE;
	}
	
	//初始化转发解码
	m_hStream[nDevChannel] = ::TMCC_Init(TMCC_INITTYPE_STREAM);
	if( m_hStream[nDevChannel] != NULL )
	{
		::TMCC_SetDisplayShow(m_hStream[nDevChannel], TRUE);
		::TMCC_SetStreamBufferTime(m_hStream[nDevChannel], 0);
	}
	else
	{
		return FALSE;
	}
	
	int						iRet;
	tmPlayRealStreamCfg_t	info;
	
	if( m_hObject[nDevChannel] == NULL )
	{
		return FALSE;
	}
	
	if( m_bConnectSuccess )
	{
		::TMCC_CloseStream(m_hObject[nDevChannel]);
		m_bConnectSuccess = FALSE;
	}
	
	::TMCC_SetStreamBufferTime(m_hObject[nDevChannel], 0);
	//::TMCC_SetVolume(m_hObject, m_volume.GetPos());
	//::TMCC_SetMute(m_hObject, FALSE);
	
	memset(&info, 0, sizeof(tmPlayRealStreamCfg_t));
	info.dwSize = sizeof(tmPlayRealStreamCfg_t);
	// 	info.szAddress = nDevIP;
	// 	info.szUser = nDevUser;
	// 	info.szPass = nDevPWD;
	sprintf(info.szAddress, nDevIP);
	sprintf(info.szUser, nDevUser);
	sprintf(info.szPass, nDevPWD);
	info.iPort = nDevPort;
	info.byChannel = 0;
	info.byStream = 1;
	iRet = ::TMCC_ConnectStream(m_hObject[nDevChannel], &info, videownd);
	if( iRet != TMCC_ERR_SUCCESS )
	{
		//	MessageBox(NULL, TEXT("连接辅助码流错误"), TEXT("worning"), 0);
		m_hObject[nDevChannel] = NULL;
		return FALSE;
	}	
	return TRUE;
}

BOOL CBldBkCtrl::logout( short nDevChannel )
{
	if( m_hObject[nDevChannel] == NULL )
	{
		return FALSE;
	}
	int iRet;
	iRet = ::TMCC_CloseStream(m_hObject[nDevChannel]);
	if (iRet != TMCC_ERR_SUCCESS)
	{
		return FALSE;
	}
	m_hObject[nDevChannel] = NULL;
	m_bConnectSuccess = FALSE;	
	return TRUE;
}

BOOL CBldBkCtrl::isplay( short nDevChannel )
{
	if (NULL != m_hObject[nDevChannel])
	{
		return TRUE;
	}
	return FALSE;
}

BOOL WINAPI CBldBkCtrl::OnConnectCallBack( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult, void *context )
{
	return ((CBldBkCtrl*)context)->OnConnect( hTmCC, bConnect, dwResult);
}

BOOL CBldBkCtrl::OnConnect( HANDLE hTmCC, BOOL bConnect, unsigned int dwResult )
{
	PostMessage(NULL, WM_CONNECTSTATE, dwResult, (LPARAM)hTmCC);
	return TRUE;
}

int WINAPI CBldBkCtrl::OnStreamDataCallBack( HANDLE hTmCC, tmRealStreamInfo_t* pStreamInfo, void *context )
{
	return ((CBldBkCtrl*)context)->OnStreamData(hTmCC, pStreamInfo);
}

int CBldBkCtrl::OnStreamData( HANDLE hTmCC, tmRealStreamInfo_t* pStreamInfo )
{
	return 0;
}
