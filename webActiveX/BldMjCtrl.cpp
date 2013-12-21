// BldMjCtrl.cpp: implementation of the CBldMjCtrl class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "webActiveX.h"
#include "BldMjCtrl.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBldMjCtrl::CBldMjCtrl()
{
	for (int i = 0; i <= 9; ++i)
	{
		m_login[i] = INVALID_HANDLE_VALUE;
		m_real[i] = INVALID_HANDLE_VALUE;
		nBol[i] = -1;
	}
	nErrorCode = -1;
}

CBldMjCtrl::~CBldMjCtrl()
{

}

int CBldMjCtrl::mjInit()
{
	return HieClient_Start();
}

int CBldMjCtrl::mjCleanup()
{
	return HieClient_Stop();
}

int CBldMjCtrl::login( HWND videownd,LPCTSTR nDevIP, LONG nDevPort, LPCTSTR nDevUser, LPCTSTR nDevPWD, LONG nDevChannel )
{
	//�����û���½����
	UserLoginPara tLoginPara;
	memset( &tLoginPara, 0, sizeof(UserLoginPara) );
	tLoginPara.dwCommandPort = nDevPort;
	strncpy( tLoginPara.sServerIP, nDevIP, MAX_ADDRESS_LEN );
	strncpy( tLoginPara.sUName, nDevUser, USERNAME_LEN );
	strncpy( tLoginPara.sUPass, nDevPWD, USERPASS_LEN );
	
	// ��½
	nLoginCode = HieClient_UserLogin(&m_login[nDevChannel], &tLoginPara);
	
	if (INVALID_HANDLE_VALUE != m_login[nDevChannel])
	{
		unsigned char pBuffer[] = {0x00,0x00,0x01,0xc6,0x4d,0x50,
			0x47,0x34,0x03,0x00,0x1e,0x80,0x8d,0x5b,0x00,0x00,0x05,0xd0,0x02};
		// ����ʵʱ������
		memset(&tRealStreamPara, 0, sizeof(tRealStreamPara));
		tRealStreamPara.dwChannel = 0; //ͨ��1
		tRealStreamPara.eMediaType = eMainVideo; //������Ƶ
		tRealStreamPara.eTransferMode = eGeneralTCP; //��ͨTCP
		
		// ��������ʵʱ��
		nErrorCode = HieClient_RealStreamConnect(&m_real[nDevChannel], m_login[nDevChannel], 
			&tRealStreamPara);
		if (0 != nErrorCode)
		{
			return nErrorCode;
		}
		
		// ������ý�����ݻص�
		nErrorCode = HieClient_StreamMediaCB(m_real[nDevChannel], StreamMediaCallback, 
			nDevChannel);
		if (0 != nErrorCode)
		{
			return nErrorCode;
		}
		
		// ����ʵʱ��
		nBol[nDevChannel] = HieClient_StreamMediaControl(m_real[nDevChannel], eTaskStart);
		if (0 != nErrorCode)
		{
			return nErrorCode;
		}
		
		// 		// ����ͨ��
		// 		MP4Play_LockNewPort(&nDevChannel);
		
		// ����ʵʱ��ģʽ
		MP4Play_SetStreamOpenMode(nDevChannel, STREAME_REALTIME); 
		
		// ��ʵʱ��
		MP4Play_OpenStream(nDevChannel, pBuffer, 19, SOURCE_BUF_MAX);
		
		// 		// ����ص�����
		// 		MP4Play_SetDecCallBack(nDevChannel, );
		
		// 
		// ������Ƶ���벥��
		MP4Play_Play(nDevChannel, videownd);
	}
	
	return nLoginCode;
}

int CBldMjCtrl::logout( short nDevChannel )
{
	//	MP4Play_UnlockPort(nDevChannel);
	HieClient_StreamMediaCB(m_real[nDevChannel], NULL, 0);
	HieClient_StreamMediaControl(m_real[nDevChannel], eTaskStart);
	HieClient_RealStreamDisconnect(m_real[nDevChannel]);
	MP4Play_Stop(nDevChannel);
	MP4Play_CloseStream(nDevChannel);
	HieClient_UserLogout(m_login[nDevChannel]);
	nBol[nDevChannel] = -1;
	return TRUE;
}

BOOL CBldMjCtrl::isplay( short nDevChannel )
{
	return (nBol[nDevChannel] == 0 ? TRUE : FALSE);
}

int CALLBACK CBldMjCtrl::StreamMediaCallback( IN HSTREAM hStream, IN const StreamMediaFrame *cFrame, IN DWORD dwUserData )
{
	//������
	MP4Play_InputData(dwUserData,(BYTE*)cFrame->cFrameBuffer.pBuffer, cFrame->cFrameBuffer.dwBufLen);
	return 0;
}
