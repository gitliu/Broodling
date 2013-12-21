// DemoPlay.cpp : implementation file
//

#include "stdafx.h"
#include "webActiveX.h"
#include "DemoPlay.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDemoPlay dialog


CDemoPlay::CDemoPlay(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoPlay::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDemoPlay)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_bFullScreen = FALSE;
	m_channel = 0;
	m_frames = 9;
	nBol = FALSE;
	m_cx = 0;
	m_cy = 0;
	m_Speed = 5;
	for (int i = 0; i < 9; ++i)
	{
		nDevIp[i] = "";
		nDevInfo[i] = -1;
		nPort[i] = -1;
	}
}


void CDemoPlay::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDemoPlay)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Control(pDX, IDC_STC_1, plans[0]);
	DDX_Control(pDX, IDC_STC_2, plans[1]);
	DDX_Control(pDX, IDC_STC_3, plans[2]);
	DDX_Control(pDX, IDC_STC_4, plans[3]);
	DDX_Control(pDX, IDC_STC_5, plans[4]);
	DDX_Control(pDX, IDC_STC_6, plans[5]);
	DDX_Control(pDX, IDC_STC_7, plans[6]);
	DDX_Control(pDX, IDC_STC_8, plans[7]);
	DDX_Control(pDX, IDC_STC_9, plans[8]);
}


BEGIN_MESSAGE_MAP(CDemoPlay, CDialog)
	//{{AFX_MSG_MAP(CDemoPlay)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_SIZE()
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDemoPlay message handlers

void CDemoPlay::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CRect rect;
	
	for (int i = 0; i < 9; ++i)
	{
		plans[i].GetWindowRect(rect);
		ScreenToClient(rect);
		if(rect.PtInRect(point))
		{
			m_bFullScreen = !m_bFullScreen;
			//LONG style = ::GetWindowLong(this->m_hWnd, GWL_STYLE);
			if (m_bFullScreen)
			{
				// 全屏通道号
				m_fullNum = i;
				
				m_hWndParent = ::GetParent(m_hWnd);
				::ShowWindow(m_hWndParent, SW_HIDE);
				::SetParent(m_hWnd, NULL);
				
				int nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
				int nScreenHeight = GetSystemMetrics(SM_CYSCREEN);
				::SetWindowPos(this->m_hWnd, HWND_TOPMOST, 0, 0, 
					nScreenWidth, nScreenHeight, SWP_FRAMECHANGED);		
				goto _exit;
			}
			else
			{
				::SetParent(m_hWnd, m_hWndParent);
				::ShowWindow(m_hWndParent, SW_SHOW);
				goto _exit;
			}
		}
	}
	
_exit:
	CDialog::OnLButtonDblClk(nFlags, point);
}

void CDemoPlay::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect rc;
	
	for (int i = 0; i < 9; ++i)
	{
		plans[i].GetWindowRect(rc);
		ScreenToClient(rc);
		dc.FillSolidRect(rc, RGB(96, 96, 96));
	}
	CoControl(m_channel);
	// Do not call CDialog::OnPaint() for painting messages
}

void CDemoPlay::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CRect rect;
	for (int i = 0; i < 9; ++i)
	{
		plans[i].GetWindowRect(rect);
		ScreenToClient(rect);
		if(rect.PtInRect(point))
		{
			m_channel = i;
			CoControl(i);
			GetParent()->PostMessage(WM_BUTTONDOWN);
			goto _exit;
		}
	}
	
_exit:
	CDialog::OnLButtonDown(nFlags, point);
}

void CDemoPlay::ArrangWindow( int nChannel, int cx, int cy )
{
	int i;
	switch (nChannel)
	{
	case 1:
		//	MessageBox(_T("1"));
		plans[0].SetWindowPos(NULL, 2, 2, cx - 4, cy - 4, SWP_SHOWWINDOW);
		plans[0].ShowWindow(SW_SHOW);
		for (i = 1; i < 9; i++)
		{
			plans[i].ShowWindow(SW_HIDE);
		}
		break;
	case 4:
		//	MessageBox(_T("4"));
		plans[0].SetWindowPos(0, 2, 2, cx / 2 - 3, cy / 2 - 3, SWP_SHOWWINDOW|SWP_NOZORDER );
		plans[1].SetWindowPos(0, cx / 2 + 1, 2, cx / 2 - 3, cy / 2 - 3, SWP_SHOWWINDOW|SWP_NOZORDER );
		plans[2].SetWindowPos(0, 2, cy / 2 + 1, cx / 2 - 3, cy / 2 - 3, SWP_SHOWWINDOW|SWP_NOZORDER );
		plans[3].SetWindowPos(0, cx / 2 + 1, cy / 2 + 1, cx / 2 - 3, cy / 2 - 3,
			SWP_SHOWWINDOW|SWP_NOZORDER );
		for (i = 0; i < 4; i++)
		{
			plans[i].ShowWindow(SW_SHOW);
		}
		for (i = 4; i < 9; i++)
		{
			plans[i].ShowWindow(SW_HIDE);
		}
		break;
	case 9:
		//	MessageBox(_T("9"));
		plans[0].MoveWindow(2, 2, cx / 3 - 3, cy / 3 - 3, TRUE);
		plans[1].MoveWindow(cx / 3 + 1, 2, cx / 3 - 2, cy / 3 - 3, TRUE);
		plans[2].MoveWindow(cx / 3 * 2 + 1, 2, cx / 3 - 3, cy / 3 - 3, TRUE);
		plans[3].MoveWindow(2, cy / 3 + 1, cx / 3 - 3, cy / 3 - 2, TRUE);
		plans[4].MoveWindow(cx / 3 + 1, cy / 3 + 1, cx / 3 - 2, cy / 3 - 2, TRUE);
		plans[5].MoveWindow(cx / 3 * 2 + 1, cy / 3 + 1, cx / 3 - 3, cy / 3 - 2, TRUE);
		plans[6].MoveWindow(2, cy / 3 * 2 + 1, cx / 3 - 3, cy / 3 - 3, TRUE);
		plans[7].MoveWindow(cx / 3 + 1, cy / 3 * 2 + 1, cx / 3 - 2, cy / 3 - 3, TRUE);
		plans[8].MoveWindow(cx / 3 * 2 + 1, cy / 3 * 2 + 1, cx / 3 - 3, cy / 3 - 3, TRUE);
		
		for (i = 0; i < 9; i++)
		{
			plans[i].ShowWindow(SW_SHOW);
		}
		break;
	default:
		break;
	}
	Invalidate();
}

void CDemoPlay::drawLine( CDC *pDc, BOOL isPen, CRect rect )
{
	if (isPen)
	{
		pDc->SelectObject(&pen_green);
	}
	else
	{
		pDc->SelectObject(&pen_white);
	}
	
// 	pDc->MoveTo(rect.left - 2, rect.top - 2);
// 	pDc->LineTo(rect.right + 2, rect.top - 2);
// 	pDc->LineTo(rect.right + 2, rect.bottom + 2);
// 	pDc->LineTo(rect.left - 2, rect.bottom + 2);
// 	pDc->LineTo(rect.left - 2, rect.top - 2);
	pDc->MoveTo(rect.left - 1, rect.top - 1);
	pDc->LineTo(rect.right + 1, rect.top - 1);
	pDc->LineTo(rect.right + 1, rect.bottom + 1);
	pDc->LineTo(rect.left - 1, rect.bottom + 1);
	pDc->LineTo(rect.left - 1, rect.top - 1);
}

void CDemoPlay::CoControl( int nChannel )
{
	CRect rect;
	CDC *pDc;
	for (int i = 0; i < 9; i++)
	{
		if (nChannel != i)
		{
			plans[i].GetClientRect(&rect);
			pDc = plans[i].GetDC();
			drawLine(pDc, FALSE, rect);
		}
	}
	plans[nChannel].GetClientRect(&rect);
	pDc = plans[nChannel].GetDC();
	drawLine(pDc, TRUE, rect);	
}

void CDemoPlay::fullStatic( int channel, int cx, int cy )
{
	plans[channel].SetWindowPos(NULL, 2, 2, cx - 4, cy - 4, SWP_SHOWWINDOW);
	plans[channel].ShowWindow(SW_SHOW);
	for (int i = 0; i < 9; ++i)
	{
		if (channel != i)
		{
			plans[i].ShowWindow(SW_HIDE);
		}
	}
}

void CDemoPlay::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	m_cx = cx;
	m_cy = cy;
	if (m_bFullScreen)
	{
		fullStatic(m_fullNum, cx, cy);
	}
	else
	{
		ArrangWindow(m_frames, cx, cy);
	}
}

void CDemoPlay::frames(short frame)
{
	m_frames = frame;
	ArrangWindow(m_frames, m_cx, m_cy);
}

BOOL CDemoPlay::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	pen_white.CreatePen(PS_SOLID, 2, RGB(234, 234, 234));
	pen_green.CreatePen(PS_SOLID, 2, RGB(0, 255, 0));
	
	m_objhk.hkInit();
	m_objmj.mjInit();
	m_objpl.plInit();

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

BOOL CDemoPlay::login(LPCTSTR e_DevIp, long e_DevPort, 
							  LPCTSTR e_DevUser, LPCTSTR e_DevPWD, short e_DevInfo, short e_Channel)
{

	if (e_Channel < 0 || e_Channel >= 9)
	{
		return FALSE;
	}
	if (e_DevInfo < 0 || e_DevInfo > 3)
	{
		return FALSE;
	}
	if (isPlay(e_Channel))
	{
		if (!logout(nDevInfo[e_Channel], e_Channel))
		{
			return FALSE;
		}
	}
	
	//	UpdateData(TRUE);
	switch (e_DevInfo)
	{
	case 0:	//	海康
		if (!m_objhk.login(plans[e_Channel], e_DevIp, e_DevPort, e_DevUser, e_DevPWD, e_Channel))
		{
			return FALSE;
		}
		break;
	case 1:	//	明景
		 if (0 != m_objmj.login(plans[e_Channel], e_DevIp, e_DevPort, e_DevUser, e_DevPWD, e_Channel))
		 {
			 return FALSE;
		 }
		 break;
	case 2:	//	pluto
		if (!m_objpl.login(plans[e_Channel], e_DevIp, e_DevPort, e_DevUser, e_DevPWD, e_Channel))
		{
			return FALSE;
		}
		break;
	case 3: //  高密相机
		if (!m_objbk.login(plans[e_Channel], e_DevIp, e_DevPort, e_DevUser, e_DevPWD, e_Channel))
		{
			return FALSE;
		}
		break;
	default:
		break;
	}
	// 登陆后保存数据
	nDevInfo[e_Channel] = e_DevInfo;
	nDevIp[e_Channel] = e_DevIp;
	nPort[e_Channel] = e_DevPort;
	m_channel = e_Channel;
	CoControl(e_Channel);
	return TRUE;
}

BOOL CDemoPlay::logout( long Info, long nDevChannel )
{
	if (nDevChannel < 0 || nDevChannel >= 9)
	{
		return FALSE;
	}
	switch (Info)
	{
	case 0:
		if (m_objhk.logout(nDevChannel))
		{
			nDevInfo[nDevChannel] = -1;
			nDevIp[nDevChannel] = "";
			nPort[nDevChannel] = 0;
		}
		break;
	case 1:
		if (m_objmj.logout(nDevChannel))
		{
			nDevInfo[nDevChannel] = -1;
			nDevIp[nDevChannel] = "";
			nPort[nDevChannel] = 0;
		}
		break;
	case 2:
		if (m_objpl.logout(nDevChannel))
		{
			nDevInfo[nDevChannel] = -1;
			nDevIp[nDevChannel] = "";
			nPort[nDevChannel] = 0;
		}
		break;
	case 3:
		if (m_objbk.logout(nDevChannel))
		{
			nDevInfo[nDevChannel] = -1;
			nDevIp[nDevChannel] = "";
			nPort[nDevChannel] = 0;
		}
		break;
	default:
		break;
	}
	CRect rc;
	plans[nDevChannel].GetWindowRect(rc);
	ScreenToClient(rc);
	InvalidateRect(rc, TRUE);

	return TRUE;
}

BOOL CDemoPlay::isPlay( long nDevChannel )
{
	if (nDevChannel < 0 || nDevChannel >= 9)
	{
		return FALSE;
	}
	BOOL isBol = FALSE;
	switch (nDevInfo[nDevChannel])
	{
	case 0:
		isBol = m_objhk.isplay(nDevChannel);
		break;
	case 1:
		isBol = m_objmj.isplay(nDevChannel);
		break;
	case 2:
		isBol = m_objpl.isplay(nDevChannel);
		break;
	case 3:
		isBol = m_objbk.isplay(nDevChannel);
		break;
	default:
		return FALSE;
	}

	return isBol;
}

void CDemoPlay::logoutall()
{
	for (int i = 0; i < 9; ++i)
	{
		logout(nDevInfo[i], i);
	}
}

short CDemoPlay::GetChannel()
{
	return m_channel;
}

CString CDemoPlay::GetDevIp()
{
	return nDevIp[GetChannel()];
}

void CDemoPlay::putChannel( short nChannel )
{
	m_channel = nChannel;
	CoControl(nChannel);
}

BOOL CDemoPlay::IpToChannel( LPCTSTR devIp, LONG port)
{
 	for (int i = 0; i < 9; i++)
 	{
 		if (devIp == nDevIp[i] && port == nPort[i])
 		{
 			putChannel(i);
 			return TRUE;
 		}
 	}
	return FALSE;
}

short CDemoPlay::GetDevInfo( short nChannel )
{
	if (nChannel < 0 || nChannel >= 9)
	{
		return -1;
	}
	return nDevInfo[nChannel];
}

CRect CDemoPlay::GetStaticRect()
{
	
	if(m_channel >= 0 && m_channel < 9)
	{
		CRect rect;
		plans[m_channel].GetWindowRect(rect);
		ScreenToClient(rect);
		return rect;
	}
	else
		return 0;
}

int CDemoPlay::MsgNotify( WPARAM wParam, LPARAM lParam )
{
	switch (wParam)
	{
	case emCBMsgType_Device:
		{
			DEVICE_INFO *pDeviceInfo = reinterpret_cast<DEVICE_INFO *>(reinterpret_cast<CB_DATA *>(lParam)->pData);
			int i=0;
		}
		break;
	case emCBMsgType_Alarm:
		{
			ALARM_INFO *pAlarmInfo = reinterpret_cast<ALARM_INFO *>(reinterpret_cast<CB_DATA *>(lParam)->pData);
			int i = 0 ;
		}
		break;
	case emCBMsgType_Offline:
		{
			HWND hWnd = reinterpret_cast<HWND>(reinterpret_cast<CB_DATA *>(lParam)->pContext);
			if(hWnd != NULL)
			{
// 				CWnd *pWnd = CWnd::FromHandle(hWnd);
// 				pWnd->Invalidate();
			}
		}
		break;
	case emCBMsgType_AVData:
		{
			CB_DATA *pCBData = reinterpret_cast<CB_DATA *>(lParam);
			PACKET_DATA *pPacketData = reinterpret_cast<PACKET_DATA *>(pCBData->pData);
			if(pPacketData != NULL)
			{
// 				if(WaitForSingleObject(m_evtRecord, 0) == WAIT_OBJECT_0)
// 				{
// 					Record((char *)pPacketData, pPacketData->nPacketSize);
// 				}
			}
		}
		break;
	case emCBMsgType_GDI:
		{
			/*
			CDC *pDC = CDC::FromHandle(reinterpret_cast<HDC>(reinterpret_cast<CB_DATA *>(lParam)->pData));
						CWnd *pWnd = CWnd::FromHandle(reinterpret_cast<HWND>(reinterpret_cast<CB_DATA *>(lParam)->pContext));
						if(pWnd == NULL || pDC == NULL)
						{
							return -1;
						}
						HPEN pen, oldpen;
						pen = CreatePen(PS_DOT, 2, RGB(0, 255, 0 ));
						oldpen = (HPEN)pDC->SelectObject(pen);
						pDC->SetBkColor(RGB(0, 0, 255));
						pDC->SetTextColor(RGB(255, 255, 0));
						CRect rc;
						pWnd->GetWindowRect(&rc);
						pWnd->ScreenToClient(&rc);
						pDC->TextOut(rc.left + 10, rc.top + 10, "display", strlen("display"));
			
						pDC->MoveTo(rc.left + 50, rc.top + 50);
						pDC->LineTo(rc.top + 50, rc.right - 50);
						pDC->LineTo(rc.right - 50, rc.bottom - 50);
						pDC->LineTo(rc.bottom - 50, rc.left + 50);
						pDC->LineTo(rc.left + 50, rc.top + 50);
						pDC->SelectObject(oldpen);
						DeleteObject(pen);*/

		}
		break;
	case emCBMsgType_DecodeData:
		{
            //每次回调一帧，SDK会输出两帧数据，一帧是RGB32类型，一帧是YUV420类型
            DECODE_DATA *pDecode_data  =reinterpret_cast<DECODE_DATA *>(reinterpret_cast<CB_DATA *>(lParam)->pData);
            
            //输出RGB32类型的帧
            if (emDecodeDataType_RGB32 == pDecode_data->DecodeDataType)
            {                
            }
            //输出YUV420类型的帧
            else if (emDecodeDataType_YUV420 == pDecode_data->DecodeDataType)
            {                
            }
		}
		break;
	default:
		break;
	}
	return 0;
}

BOOL CDemoPlay::ptzControl(long ptzCommand, short ptzStop, short devInfo)
{
	BOOL nBol = FALSE;
	switch (devInfo)
	{
	case 0:
		nBol = m_objhk.ptzControl(GetChannel(), ptzCommand, ptzStop, m_Speed);
		break;
	case 1:
		break;
	case 2:
		break;
	default:
		break;
	}
	return nBol;
}

BOOL CDemoPlay::capPicture(char *sFileName, short devInfo)
{
	BOOL nBol = FALSE;
	switch (devInfo)
	{
	case 0:
		nBol = m_objhk.memCapturePicture(GetChannel(), sFileName);
		break;
	case 1:
		break;
	case 2:
		break;
	default:
		break;
	}
	return nBol;
}

void CDemoPlay::OnDestroy() 
{
	CDialog::OnDestroy();
	
	// TODO: Add your message handler code here
	m_objhk.hkCleanup();
	m_objmj.mjCleanup();
	m_objpl.plCleanup();
}

void CDemoPlay::changeSpeed( long speed )
{
	m_Speed = speed;
}
