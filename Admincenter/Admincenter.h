
// Admincenter.h : main header file for the Admincenter application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CAdmincenterApp:
// See Admincenter.cpp for the implementation of this class
//

class CAdmincenterApp : public CWinApp
{
public:
	CAdmincenterApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAdmincenterApp theApp;
