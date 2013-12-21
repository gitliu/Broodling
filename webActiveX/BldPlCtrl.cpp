// BldPlCtrl.cpp: implementation of the CBldPlCtrl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "webActiveX.h"
#include "BldPlCtrl.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBldPlCtrl::CBldPlCtrl()
{
	for (int i = 0; i < 9; i++)
	{
		m_hClient[i] = NULL;
	}
}

CBldPlCtrl::~CBldPlCtrl()
{

}

void CBldPlCtrl::plInit()
{
	IPCClient_Startup(FALSE);
}

void CBldPlCtrl::plCleanup()
{
	IPCClient_Cleanup();
}

int CBldPlCtrl::MsgNotify( WPARAM wParam, LPARAM lParam )
{
	switch (wParam)
	{
	case emCBMsgType_Device:
		{
			DEVICE_INFO *pDeviceInfo = reinterpret_cast<DEVICE_INFO *>(reinterpret_cast<CB_DATA *>(lParam)->pData);
			int i = 0;
		}
		break;
	case emCBMsgType_Alarm:
		{
			ALARM_INFO *pAlarmInfo = reinterpret_cast<ALARM_INFO *>(reinterpret_cast<CB_DATA *>(lParam)->pData);
			int i = 0;
		}
		break;
	case emCBMsgType_Offline:
		{
			HWND hWnd = reinterpret_cast<HWND>(reinterpret_cast<CB_DATA *>(lParam)->pContext);
			if (NULL != hWnd)
			{
				
			}
		}
		break;
	case emCBMsgType_AVData:
		{
			CB_DATA *pCBData = reinterpret_cast<CB_DATA *>(lParam);
			PACKET_DATA *pPacketData = reinterpret_cast<PACKET_DATA *>(pCBData->pData);
			if (NULL != pPacketData)
			{
				// 				if (WaitForSingleObject(m_evtRecord, 0) == WAIT_OBJECT_0)
				// 				{
				// 					Record((char *)pPacketData, pPacketData->nPacketSize);
				// 				}
			}
		}
		break;
	case emCBMsgType_GDI:
		{
			
		}
		break;
	case emCBMsgType_DecodeData:
		{
			int i = 0;
		}
		break;
	default:
		break;
	}
	return 0;	
}

BOOL CBldPlCtrl::login( HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, short nDevChannel )
{
	// 配制回调函数
	CB_INFO CBinfo;
	CBinfo.MsgNotifyType = emMsgNotifyType_CallBack;
	CBinfo.pMsgCallback = this;
	IPCClient_SetClientCallback(&CBinfo);
	
	// 配制用户登陆参数
	strcpy(m_LogonInfo.szDeviceIP, nDevIP);
	m_LogonInfo.nDevicePort = nDevPort;
	strcpy(m_LogonInfo.szDeviceName, "");
	strcpy(m_LogonInfo.szUserName, nDevUser);
	strcpy(m_LogonInfo.szPassword, nDevPWD);
	m_LogonInfo.bRegHeartbeat = TRUE;
	m_LogonInfo.dwTimeout = 5000;
	m_LogonInfo.pContext = videownd;
	
	// 登陆
	emReturnType ReturnType;
	ReturnType = IPCClient_Logon(&m_LogonInfo, m_hClient[nDevChannel]);
	if (emReturnType_OK != ReturnType)
	{
		m_hClient[nDevChannel] = NULL;
		return FALSE;
	}
	
	// 	// 
	// 	OPEN_INFO openInfo;
	// 	openInfo.ImageSize = emImageSize_1080P;
	// 	openInfo.CodecType = emCodecType_H264;
	// 	openInfo.hPlayWnd = hDevWnd;
	// 	
	// 	//  打开通道
	// 	ReturnType = IPCClient_OpenChannel(m_hClient[nDevChannel], &openInfo);
	// 	if (ReturnType != emReturnType_OK)
	// 	{
	// 		return FALSE;
	// 	}
	if (-1 == CamOpenChannel(videownd, nDevChannel))
	{
		m_hClient[nDevChannel] = NULL;
		return FALSE;
	}
	return TRUE;
}

int CBldPlCtrl::CamOpenChannel( HWND hDevWnd, LONG nDevChannel )
{
	BOOL bR = CamOpenChannel(hDevWnd, nDevChannel, emCodecType_H264);
	if (bR)
	{
		return emCodecType_H264;
	}
	
	bR = CamOpenChannel(hDevWnd, nDevChannel, emCodecType_Mjpeg);
	if (bR)
	{
		return emCodecType_Mjpeg;
	}
	
	bR = CamOpenChannel(hDevWnd, nDevChannel, emCodecType_Mpeg4);
	if(bR)
	{
		return emCodecType_Mpeg4;
	}
	
	return -1;
}

BOOL CBldPlCtrl::CamOpenChannel( HWND nDevWnd, LONG nDevChannel, int ACodecType )
{
	emReturnType nR;
	
	//---- 打开通道
	OPEN_INFO open_info;
	open_info.nDeviceChannel = nDevChannel;
	open_info.hPlayWnd = nDevWnd;
	open_info.pRect = NULL;
	open_info.ImageSize = emImageSize_720P;
	open_info.CodecType = (emCodecType)ACodecType; 
	open_info.bNotRecvAVData = TRUE;			// TRUE=不回调视频数据, FALSE=回调视频数据
	open_info.bWait = FALSE;
	open_info.TransProtocol = emTransProtocol_HTTP;
	nR = IPCClient_OpenChannel(m_hClient[nDevChannel], &open_info);
	if( emReturnType_OK != nR)
	{
		return false;
	}
	
	//---- get system head 确认打开成功
	char *pszSystemHeader = NULL;
	int nLen=0;
	int i = 0;
	nR = emReturnType_Error;
	while( (emReturnType_Error == nR) && (i<20) )
	{
		Sleep(50);
		nR = IPCClient_GetSystemHeader(m_hClient[nDevChannel], &pszSystemHeader, nLen);
		i++;
	}
	
	return emReturnType_OK == nR;
}

BOOL CBldPlCtrl::logout( short nDevChannel )
{
	if (nDevChannel < 0 || nDevChannel >= 9)
	{
		return FALSE;
	}
	if(m_hClient[nDevChannel])
	{
		//---- 关闭通道
		if (emReturnType_OK != IPCClient_CloseChannel(m_hClient[nDevChannel]))
		{
			//			MessageBox(NULL, _T("关闭通道失败"), _T("error"), 0);
		}		
		//---- 退出相机
		if (emReturnType_OK != IPCClient_Logout(m_hClient[nDevChannel]))
		{
			//			MessageBox(NULL, _T("没有退出相机"), _T("error"), 0);
			return FALSE;
		}
		
		m_hClient[nDevChannel] = NULL;
	}
	return TRUE;
}

BOOL CBldPlCtrl::isplay( short nDevChannel )
{
	if (NULL != m_hClient[nDevChannel])
	{
		return TRUE;
	}
	return FALSE;	
}
