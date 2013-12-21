// BldHkCtrl.cpp: implementation of the CBldHkCtrl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "webActiveX.h"
#include "BldHkCtrl.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBldHkCtrl::CBldHkCtrl()
{
	for (int i = 0; i <= 9; i++)
	{
		m_Login[i] = -1;
		m_Real[i] = -1;
	}
}

CBldHkCtrl::~CBldHkCtrl()
{

}

BOOL CBldHkCtrl::hkInit()
{
	return NET_DVR_Init();
}

BOOL CBldHkCtrl::hkCleanup()
{
	return NET_DVR_Cleanup();
}

BOOL CBldHkCtrl::login( HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel )
{
	
	m_videownd = videownd;
	NET_DVR_DEVICEINFO_V30 DeviceInfoTmp; //设备信息
	memset(&DeviceInfoTmp,0,sizeof(NET_DVR_DEVICEINFO_V30));
	m_Login[nDevChannel] = NET_DVR_Login_V30((char*)nDevIP, (WORD)nDevPort, (char*)nDevUser,(char*)nDevPWD, &DeviceInfoTmp);
	if (-1 == m_Login[nDevChannel])
	{
		DWORD err = NET_DVR_GetLastError();
		CString str;
		str.Format("登陆设备失败，错误代码%d", err);
		MessageBox(NULL, str, "错误!!", 0);
		return FALSE;
	}
	
	//	实时预览
 
	NET_DVR_CLIENTINFO clientInfo;
 	clientInfo.lChannel = nDevChannel + 1;
 	clientInfo.lLinkMode = 0;
 	clientInfo.sMultiCastIP = NULL;
 	clientInfo.hPlayWnd = videownd;
	m_Real[nDevChannel] = NET_DVR_RealPlay_V30(m_Login[nDevChannel], &clientInfo, NULL, NULL, TRUE);

 /*
	NET_DVR_PREVIEWINFO clientInfo;
	clientInfo.hPlayWnd = videownd;
	clientInfo.lChannel = nDevChannel + 1;
	clientInfo.dwStreamType = 0;
	clientInfo.dwLinkMode = 0;
	m_Real[nDevChannel] = NET_DVR_RealPlay_V40(m_Login[nDevChannel], &clientInfo);
*/
	if (-1 == m_Real[nDevChannel])
	{
		DWORD err = NET_DVR_GetLastError();
		CString str1;
		str1.Format("播放出错，错误代码%d", err);
		MessageBox(NULL, str1, "错误!!", 0);
		return FALSE;
	}
	return TRUE;
}

BOOL CBldHkCtrl::logout( short nDevChannel )
{
	if (!NET_DVR_StopRealPlay(m_Real[nDevChannel]))
	{
		return FALSE;
	}
	if (!NET_DVR_Logout(m_Login[nDevChannel]))
	{
		return FALSE;
	}
	m_Real[nDevChannel] = -1;
	m_Login[nDevChannel] = -1;
	return TRUE;
}

BOOL CBldHkCtrl::isplay( short nDevChannel )
{
	if (-1 != m_Real[nDevChannel])
	{
		return TRUE;
	}
	return FALSE;
}

BOOL CBldHkCtrl::ptzControl( LONG nChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed )
{
	BOOL nBol = FALSE;
	switch (dwPTZCommand)
	{
	case 0:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], UP_LEFT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], UP_LEFT, dwStop);
		break;
	case 1:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], TILT_UP, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], TILT_UP, dwStop);
		break;
	case 2:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], UP_RIGHT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], UP_RIGHT, dwStop);
		break;
	case 3:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], PAN_LEFT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], PAN_LEFT, dwStop);
		break;
	case 4:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], PAN_AUTO, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], PAN_AUTO, dwStop);
		break;
	case 5:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], PAN_RIGHT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], PAN_RIGHT, dwStop);
		break;
	case 6:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], DOWN_LEFT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], DOWN_LEFT, dwStop);
		break;
	case 7:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], TILT_DOWN, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], TILT_DOWN, dwStop);
		break;
	case 8:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], DOWN_RIGHT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], DOWN_RIGHT, dwStop);
		break;
	case 10:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], LIGHT_PWRON, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], LIGHT_PWRON, dwStop);
		break;
	case 11:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], WIPER_PWRON, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], WIPER_PWRON, dwStop);
		break;
	case 12:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], FAN_PWRON, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], FAN_PWRON, dwStop);
		break;
	case 13:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], HEATER_PWRON, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], HEATER_PWRON, dwStop);
		break;
	case 14:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], AUX_PWRON1, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], AUX_PWRON1, dwStop);
		break;
	case 15:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], AUX_PWRON2, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], AUX_PWRON2, dwStop);
		break;
	case 16:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], ZOOM_IN, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], ZOOM_IN, dwStop);
		break;
	case 17:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], ZOOM_OUT, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], ZOOM_OUT, dwStop);
		break;
	case 18:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], FOCUS_NEAR, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], FOCUS_NEAR, dwStop);
		break;
	case 19:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], FOCUS_FAR, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], FOCUS_FAR, dwStop);
		break;
	case 20:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], IRIS_OPEN, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], IRIS_OPEN, dwStop);
		break;
	case 21:
		nBol = NET_DVR_PTZControlWithSpeed(m_Real[nChannel], IRIS_CLOSE, dwStop, dwSpeed);
		//		nBol = NET_DVR_PTZControl(m_Real[nChannel], IRIS_CLOSE, dwStop);
		break;
	default:
		break;
	}
	return nBol;
}

BOOL CBldHkCtrl::memCapturePicture( LONG nChannel, char *sPicFileName )
{
	return NET_DVR_CapturePicture(m_Real[nChannel], sPicFileName);
}
