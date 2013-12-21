#if !defined(AFX_WEBACTIVEXPPG_H__D5D7CC30_A289_467B_957C_6D1190BD73E0__INCLUDED_)
#define AFX_WEBACTIVEXPPG_H__D5D7CC30_A289_467B_957C_6D1190BD73E0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// WebActiveXPpg.h : Declaration of the CWebActiveXPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CWebActiveXPropPage : See WebActiveXPpg.cpp.cpp for implementation.

class CWebActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CWebActiveXPropPage)
	DECLARE_OLECREATE_EX(CWebActiveXPropPage)

// Constructor
public:
	CWebActiveXPropPage();

// Dialog Data
	//{{AFX_DATA(CWebActiveXPropPage)
	enum { IDD = IDD_PROPPAGE_WEBACTIVEX };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CWebActiveXPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WEBACTIVEXPPG_H__D5D7CC30_A289_467B_957C_6D1190BD73E0__INCLUDED)
