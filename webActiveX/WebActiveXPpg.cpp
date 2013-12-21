// WebActiveXPpg.cpp : Implementation of the CWebActiveXPropPage property page class.

#include "stdafx.h"
#include "webActiveX.h"
#include "WebActiveXPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CWebActiveXPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CWebActiveXPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CWebActiveXPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CWebActiveXPropPage, "WEBACTIVEX.WebActiveXPropPage.1",
	0x2d4d594b, 0x36ea, 0x4cf4, 0x87, 0x8a, 0x18, 0x59, 0xa6, 0x26, 0x59, 0x4c)


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXPropPage::CWebActiveXPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CWebActiveXPropPage

BOOL CWebActiveXPropPage::CWebActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_WEBACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXPropPage::CWebActiveXPropPage - Constructor

CWebActiveXPropPage::CWebActiveXPropPage() :
	COlePropertyPage(IDD, IDS_WEBACTIVEX_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CWebActiveXPropPage)
	// NOTE: ClassWizard will add member initialization here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXPropPage::DoDataExchange - Moves data between page and properties

void CWebActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CWebActiveXPropPage)
	// NOTE: ClassWizard will add DDP, DDX, and DDV calls here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CWebActiveXPropPage message handlers
