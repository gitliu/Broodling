#if !defined(AFX_WEBACTIVEXCTL_H__42E91284_2E54_4CF7_8981_A7A1CCD3A5EC__INCLUDED_)
#define AFX_WEBACTIVEXCTL_H__42E91284_2E54_4CF7_8981_A7A1CCD3A5EC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// WebActiveXCtl.h : Declaration of the CWebActiveXCtrl ActiveX Control class.

/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl : See WebActiveXCtl.cpp for implementation.

#include "DemoPlay.h"

class CWebActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CWebActiveXCtrl)

// Constructor
public:
	CWebActiveXCtrl();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWebActiveXCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CWebActiveXCtrl();

	DECLARE_OLECREATE_EX(CWebActiveXCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CWebActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CWebActiveXCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CWebActiveXCtrl)		// Type name and misc status

// Message maps
	//{{AFX_MSG(CWebActiveXCtrl)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	//}}AFX_MSG
	afx_msg LRESULT afxmanager(WPARAM wParam,LPARAM lParam);

	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CWebActiveXCtrl)
	long m_channelNum;
	afx_msg void OnChannelNumChanged();
	short m_emImage;
	afx_msg void OnEmImageChanged();
	long m_aCodecType;
	afx_msg void OnACodecTypeChanged();
	long m_vaSpeed;
	afx_msg void OnVaSpeedChanged();
	afx_msg BOOL DoLogin(LPCTSTR e_DevIp, long e_DevPort, LPCTSTR e_DevUser, LPCTSTR e_DevPWD, short e_DevInfo, short e_Channel);
	afx_msg BOOL DoLogout(short e_DevInfo, short e_nChannel);
	afx_msg short GetnCannel();
	afx_msg BSTR GetDevIp();
	afx_msg void DoAllout();
	afx_msg long GetLeft();
	afx_msg long GetTop();
	afx_msg long GetWidth();
	afx_msg long GetHeight();
	afx_msg void PutChannel(short Channel);
	afx_msg BOOL noPlay(short nChannel);
	afx_msg short getdevinfo(short set_channel);
	afx_msg BOOL IPtoChannel(LPCTSTR nDevIP, long nDevProt);
	afx_msg BOOL ptzControl(long ptzCommand, short ptzStop, short devInfo);
	afx_msg BOOL capPicture(LPCTSTR sFileName, short devInfo);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CWebActiveXCtrl)
	void FireClick()
		{FireEvent(DISPID_CLICK,EVENT_PARAM(VTS_NONE));}
	void FireDblClick()
		{FireEvent(DISPID_DBLCLICK,EVENT_PARAM(VTS_NONE));}
	void FireKeyDown(short FAR* KeyCode, short Shift)
		{FireEvent(DISPID_KEYDOWN,EVENT_PARAM(VTS_PI2  VTS_I2), KeyCode, Shift);}
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CWebActiveXCtrl)
	dispidChannelNum = 1L,
	dispidEmImage = 2L,
	dispidACodecType = 3L,
	dispidVaSpeed = 4L,
	dispidDoLogin = 5L,
	dispidDoLogout = 6L,
	dispidGetnCannel = 7L,
	dispidGetDevIp = 8L,
	dispidDoAllout = 9L,
	dispidGetLeft = 10L,
	dispidGetTop = 11L,
	dispidGetWidth = 12L,
	dispidGetHeight = 13L,
	dispidPutChannel = 14L,
	dispidNoPlay = 15L,
	dispidGetdevinfo = 16L,
	dispidIPtoChannel = 17L,
	dispidPtzControl = 18L,
	dispidCapPicture = 19L,
	//}}AFX_DISP_ID
	};

public:
	CDemoPlay m_objplay;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WEBACTIVEXCTL_H__42E91284_2E54_4CF7_8981_A7A1CCD3A5EC__INCLUDED)
