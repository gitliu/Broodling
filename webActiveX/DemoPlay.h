#if !defined(AFX_DEMOPLAY_H__A60636EE_8653_457F_85A0_21E3FF942DB5__INCLUDED_)
#define AFX_DEMOPLAY_H__A60636EE_8653_457F_85A0_21E3FF942DB5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DemoPlay.h : header file
//
#include "BldBkCtrl.h"
#include "BldHkCtrl.h"
#include "BldMjCtrl.h"
#include "BldPlCtrl.h"
/////////////////////////////////////////////////////////////////////////////
// CDemoPlay dialog
#define WM_BUTTONDOWN WM_USER + 30
class CDemoPlay : public CDialog
{
// Construction
public:
	CDemoPlay(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDemoPlay)
	enum { IDD = IDD_DLG_PLAY };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA
	CBldHkCtrl m_objhk; 
	CBldMjCtrl m_objmj;
	CBldPlCtrl m_objpl;
	CBldBkCtrl m_objbk;

public:
	//  Static Data
	CStatic plans[9];
	BOOL m_bFullScreen;
	HWND m_hWndParent;
	
	CPen pen_green;
	CPen pen_white;
	
	int m_channel;
	int m_fullNum;
 	int		nDevInfo[9];//�豸��Ϣ
 	CString nDevIp[9];	//�豸IP
	int     nPort[9];
//	short   nChannel;
	BOOL    nBol;
	short   m_frames;

	int m_cx;
	int m_cy;

	DWORD m_Speed;

public:
	// ��½
	BOOL login(LPCTSTR e_DevIp, long e_DevPort, 
							  LPCTSTR e_DevUser, LPCTSTR e_DevPWD, short e_DevInfo, short e_Channel);
	// �˳�
	BOOL logout(long nDevInfo, long nDevChannel);
	// �ж�
	BOOL isPlay(long nDevChannel);
	// ȫ���˳�
	void logoutall();
	// ��õ�ǰͨ����
	short GetChannel();
	// ��õ�ǰͨ��IP
	CString GetDevIp();
	// ���õ�ǰͨ����
	void putChannel(short nChannel);
	// ͨ��ip�õ�ͨ����
	BOOL IpToChannel(LPCTSTR nDevIp, LONG port);
	// ���������Ϣ
	short GetDevInfo(short nChannel);
	// ����
	void frames(short frame);
	// static��Ϣ
	CRect GetStaticRect();
	// ptz����d
	BOOL ptzControl(long ptzCommand, short ptzStop, short devInfo);
	//  ץ��
	BOOL capPicture(char *sFileName, short devInfo);
	// ��̨�ٶ�
	void changeSpeed(long speed);

public:
	//  paint data
	void ArrangWindow(int nChannel, int cx, int cy);
	void drawLine(CDC *pDc, BOOL isPen, CRect rect);
	void CoControl(int nChannel);
	void fullStatic(int channel, int cx, int cy);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemoPlay)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDemoPlay)
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnInitDialog();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	virtual int MsgNotify(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMOPLAY_H__A60636EE_8653_457F_85A0_21E3FF942DB5__INCLUDED_)
