#if !defined(AFX_WEBACTIVEX_H__95071A92_124F_4D8E_A080_56381CDCAD6B__INCLUDED_)
#define AFX_WEBACTIVEX_H__95071A92_124F_4D8E_A080_56381CDCAD6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// webActiveX.h : main header file for WEBACTIVEX.DLL

#if !defined( __AFXCTL_H__ )
	#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CWebActiveXApp : See webActiveX.cpp for implementation.

class CWebActiveXApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WEBACTIVEX_H__95071A92_124F_4D8E_A080_56381CDCAD6B__INCLUDED)
