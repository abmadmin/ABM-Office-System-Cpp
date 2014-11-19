
// ABM-Office-System-cpp.h : main header file for the ABM-Office-System-cpp application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CABMOfficeSystemcppApp:
// See ABM-Office-System-cpp.cpp for the implementation of this class
//

class CABMOfficeSystemcppApp : public CWinApp
{
public:
	CABMOfficeSystemcppApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	COleTemplateServer m_server;
		// Server object for document creation
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CABMOfficeSystemcppApp theApp;
