
// Step4.h : main header file for the Step4 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CStep4App:
// See Step4.cpp for the implementation of this class
//

class CStep4App : public CWinApp
{
public:
	CStep4App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CStep4App theApp;
