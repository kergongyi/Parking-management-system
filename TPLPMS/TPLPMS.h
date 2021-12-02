
// TPLPMS.h: The main header file of the application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		

class CTPLPMSApp : public CWinApp
{
public:
	CString username;
	CTPLPMSApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CTPLPMSApp theApp;
