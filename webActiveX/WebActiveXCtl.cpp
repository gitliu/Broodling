// WebActiveXCtl.cpp : Implementation of the CWebActiveXCtrl ActiveX Control class.

#include "stdafx.h"
#include "webActiveX.h"
#include "WebActiveXCtl.h"
#include "WebActiveXPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CWebActiveXCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CWebActiveXCtrl, COleControl)
	//{{AFX_MSG_MAP(CWebActiveXCtrl)
	ON_WM_CREATE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	//}}AFX_MSG_MAP
	ON_MESSAGE(WM_BUTTONDOWN, afxmanager)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CWebActiveXCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CWebActiveXCtrl)
	DISP_PROPERTY_NOTIFY(CWebActiveXCtrl, "channelNum", m_channelNum, OnChannelNumChanged, VT_I4)
	DISP_PROPERTY_NOTIFY(CWebActiveXCtrl, "emImage", m_emImage, OnEmImageChanged, VT_I2)
	DISP_PROPERTY_NOTIFY(CWebActiveXCtrl, "ACodecType", m_aCodecType, OnACodecTypeChanged, VT_I4)
	DISP_PROPERTY_NOTIFY(CWebActiveXCtrl, "vaSpeed", m_vaSpeed, OnVaSpeedChanged, VT_I4)
	DISP_FUNCTION(CWebActiveXCtrl, "DoLogin", DoLogin, VT_BOOL, VTS_BSTR VTS_I4 VTS_BSTR VTS_BSTR VTS_I2 VTS_I2)
	DISP_FUNCTION(CWebActiveXCtrl, "DoLogout", DoLogout, VT_BOOL, VTS_I2 VTS_I2)
	DISP_FUNCTION(CWebActiveXCtrl, "GetnCannel", GetnCannel, VT_I2, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "GetDevIp", GetDevIp, VT_BSTR, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "DoAllout", DoAllout, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "GetLeft", GetLeft, VT_I4, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "GetTop", GetTop, VT_I4, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "GetWidth", GetWidth, VT_I4, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "GetHeight", GetHeight, VT_I4, VTS_NONE)
	DISP_FUNCTION(CWebActiveXCtrl, "PutChannel", PutChannel, VT_EMPTY, VTS_I2)
	DISP_FUNCTION(CWebActiveXCtrl, "noPlay", noPlay, VT_BOOL, VTS_I2)
	DISP_FUNCTION(CWebActiveXCtrl, "getdevinfo", getdevinfo, VT_I2, VTS_I2)
	DISP_FUNCTION(CWebActiveXCtrl, "IPtoChannel", IPtoChannel, VT_BOOL, VTS_BSTR VTS_I4)
	DISP_FUNCTION(CWebActiveXCtrl, "ptzControl", ptzControl, VT_BOOL, VTS_I4 VTS_I2 VTS_I2)
	DISP_FUNCTION(CWebActiveXCtrl, "capPicture", capPicture, VT_BOOL, VTS_BSTR VTS_I2)
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CWebActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CWebActiveXCtrl, COleControl)
	//{{AFX_EVENT_MAP(CWebActiveXCtrl)
	EVENT_CUSTOM_ID("Click", DISPID_CLICK, FireClick, VTS_NONE)
	EVENT_CUSTOM_ID("DblClick", DISPID_DBLCLICK, FireDblClick, VTS_NONE)
	EVENT_CUSTOM_ID("KeyDown", DISPID_KEYDOWN, FireKeyDown, VTS_PI2  VTS_I2)
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CWebActiveXCtrl, 1)
	PROPPAGEID(CWebActiveXPropPage::guid)
END_PROPPAGEIDS(CWebActiveXCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CWebActiveXCtrl, "WEBACTIVEX.WebActiveXCtrl.1",
	0x1d14e17e, 0x244c, 0x4898, 0x91, 0xa6, 0xd9, 0x9b, 0xe, 0xc1, 0x7d, 0x2a)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CWebActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DWebActiveX =
		{ 0x274aa79, 0xfd91, 0x4e66, { 0x8b, 0xdf, 0xa9, 0xc3, 0x89, 0xbc, 0xa9, 0x57 } };
const IID BASED_CODE IID_DWebActiveXEvents =
		{ 0x2213fcfa, 0xc34f, 0x41d3, { 0xa8, 0xb7, 0xb0, 0x13, 0x24, 0x79, 0x2, 0xf4 } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwWebActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CWebActiveXCtrl, IDS_WEBACTIVEX, _dwWebActiveXOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::CWebActiveXCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CWebActiveXCtrl

BOOL CWebActiveXCtrl::CWebActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_WEBACTIVEX,
			IDB_WEBACTIVEX,
			afxRegApartmentThreading,
			_dwWebActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::CWebActiveXCtrl - Constructor

CWebActiveXCtrl::CWebActiveXCtrl()
{
	InitializeIIDs(&IID_DWebActiveX, &IID_DWebActiveXEvents);
	m_channelNum = 9;
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::~CWebActiveXCtrl - Destructor

CWebActiveXCtrl::~CWebActiveXCtrl()
{

}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::OnDraw - Drawing function

void CWebActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	m_objplay.MoveWindow(rcBounds);
}

/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::DoPropExchange - Persistence support

void CWebActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.

}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::OnResetState - Reset control to default state

void CWebActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl::AboutBox - Display an "About" box to the user

void CWebActiveXCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_WEBACTIVEX);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXCtrl message handlers

void CWebActiveXCtrl::OnChannelNumChanged() 
{
//	ArrangWindow(m_channelNum);
	m_objplay.frames(m_channelNum);
	SetModifiedFlag();
}

void CWebActiveXCtrl::OnEmImageChanged() 
{
	// TODO: Add notification handler code

	SetModifiedFlag();
}

void CWebActiveXCtrl::OnACodecTypeChanged() 
{
	// TODO: Add notification handler code

	SetModifiedFlag();
}

BOOL CWebActiveXCtrl::DoLogin(LPCTSTR e_DevIp, long e_DevPort, 
							  LPCTSTR e_DevUser, LPCTSTR e_DevPWD, short e_DevInfo, short e_Channel) 
{
	return m_objplay.login(e_DevIp, e_DevPort, e_DevUser, e_DevPWD, e_DevInfo, e_Channel);
}

BOOL CWebActiveXCtrl::DoLogout(short e_DevInfo, short e_nChannel) 
{
	return m_objplay.logout(e_DevInfo, e_nChannel);
}

short CWebActiveXCtrl::GetnCannel() 
{	
	return m_objplay.GetChannel();
}

BSTR CWebActiveXCtrl::GetDevIp() 
{

	return m_objplay.GetDevIp().AllocSysString();
}

void CWebActiveXCtrl::DoAllout() 
{	
	m_objplay.logoutall();
}

long CWebActiveXCtrl::GetLeft() 
{
	return m_objplay.GetStaticRect().left;
}

long CWebActiveXCtrl::GetTop() 
{
	return m_objplay.GetStaticRect().top;
}

long CWebActiveXCtrl::GetWidth() 
{
	return m_objplay.GetStaticRect().Width();
}

long CWebActiveXCtrl::GetHeight() 
{
	return m_objplay.GetStaticRect().Height();
}

void CWebActiveXCtrl::PutChannel(short Channel) 
{
	m_objplay.putChannel(Channel);
}

BOOL CWebActiveXCtrl::noPlay(short nChannel) 
{
	return m_objplay.isPlay(nChannel);
}

short CWebActiveXCtrl::getdevinfo(short set_channel) 
{	
	return m_objplay.GetDevInfo(set_channel);
}

int CWebActiveXCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;
// 	LPOLECONTAINER lpContainer;
// 	HRESULT hr = m_pClientSite->GetContainer(&lpContainer);
// 	HWND m_hWndParent;
// 	IOleInPlaceSite *pOleInPlaceSite = NULL;
// 	if (NOERROR == m_pClientSite->QueryInterface(IID_IOleInPlaceSite, (LPVOID *)&pOleInPlaceSite))
// 	{
// 		pOleInPlaceSite->GetWindow((HWND *)&m_hWndParent);
// 		pOleInPlaceSite->Release();
// 	}

	m_objplay.Create(IDD_DLG_PLAY, this);
	m_objplay.ShowWindow(SW_SHOW);

	return 0;
}

void CWebActiveXCtrl::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	FireClick();
	COleControl::OnLButtonDown(nFlags, point);
}

void CWebActiveXCtrl::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	COleControl::OnLButtonDblClk(nFlags, point);
}

LRESULT CWebActiveXCtrl::afxmanager( WPARAM wParam,LPARAM lParam )
{
	FireClick();
	return 0;
}

BOOL CWebActiveXCtrl::IPtoChannel(LPCTSTR nDevIP, long nDevProt) 
{
	// TODO: Add your dispatch handler code here
	return m_objplay.IpToChannel(nDevIP, nDevProt);
}

BOOL CWebActiveXCtrl::ptzControl(long ptzCommand, short ptzStop, short devInfo) 
{
	// TODO: Add your dispatch handler code here
	m_objplay.ptzControl(ptzCommand, ptzStop, devInfo);
	return TRUE;
}

BOOL CWebActiveXCtrl::capPicture(LPCTSTR sFileName, short devInfo) 
{
	// TODO: Add your dispatch handler code here
	m_objplay.capPicture((char *)sFileName, devInfo);
	return TRUE;
}

void CWebActiveXCtrl::OnVaSpeedChanged() 
{
	// TODO: Add notification handler code
	if (m_vaSpeed > 0 || m_vaSpeed < 8)
	{
		m_objplay.changeSpeed(m_vaSpeed);
	}
	SetModifiedFlag();
}
