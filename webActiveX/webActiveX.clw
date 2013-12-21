; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDlgStatic
LastTemplate=CStatic
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "webActiveX.h"
CDK=Y

ClassCount=5
Class1=CWebActiveXCtrl
Class2=CWebActiveXPropPage

ResourceCount=3
Resource1=IDD_PROPPAGE_WEBACTIVEX
LastPage=0
Resource2=IDD_ABOUTBOX_WEBACTIVEX
Class3=CDlgFullScreen
Class4=CDemoPlay
Class5=CDlgStatic
Resource3=IDD_DLG_PLAY

[CLS:CWebActiveXCtrl]
Type=0
HeaderFile=WebActiveXCtl.h
ImplementationFile=WebActiveXCtl.cpp
Filter=W
BaseClass=COleControl
VirtualFilter=wWC
LastObject=CWebActiveXCtrl

[CLS:CWebActiveXPropPage]
Type=0
HeaderFile=WebActiveXPpg.h
ImplementationFile=WebActiveXPpg.cpp
Filter=D

[DLG:IDD_ABOUTBOX_WEBACTIVEX]
Type=1
Class=?
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_PROPPAGE_WEBACTIVEX]
Type=1
Class=CWebActiveXPropPage
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[CLS:CDlgFullScreen]
Type=0
HeaderFile=DlgFullScreen.h
ImplementationFile=DlgFullScreen.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgFullScreen
VirtualFilter=dWC

[DLG:IDD_DLG_PLAY]
Type=1
Class=CDemoPlay
ControlCount=9
Control1=IDC_STC_1,static,1342177287
Control2=IDC_STC_2,static,1342177287
Control3=IDC_STC_3,static,1342177287
Control4=IDC_STC_4,static,1342177287
Control5=IDC_STC_5,static,1342177287
Control6=IDC_STC_6,static,1342177287
Control7=IDC_STC_7,static,1342177287
Control8=IDC_STC_8,static,1342177287
Control9=IDC_STC_9,static,1342177287

[CLS:CDemoPlay]
Type=0
HeaderFile=DemoPlay.h
ImplementationFile=DemoPlay.cpp
BaseClass=CDialog
Filter=D
LastObject=CDemoPlay
VirtualFilter=dWC

[CLS:CDlgStatic]
Type=0
HeaderFile=DlgStatic.h
ImplementationFile=DlgStatic.cpp
BaseClass=CStatic
Filter=W
LastObject=CDlgStatic

