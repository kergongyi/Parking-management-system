#include "pch.h"
#include "framework.h"
#include "TPLPMS.h"
#include "TPLPMSDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTPLPMSApp

BEGIN_MESSAGE_MAP(CTPLPMSApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CTPLPMSApp construct

CTPLPMSApp::CTPLPMSApp()
{
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;
}

CTPLPMSApp theApp;

BOOL CTPLPMSApp::InitInstance()
{
	// If an application manifest running on Windows XP specifies
	// Use ComCtl32.dll version 6 or higher to enable visualization,
	//You need InitCommonControlsEx(). Otherwise, the window cannot be created.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set it to include all you want to use in the application
	// Public control class.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// Create a shell manager in case the dialog contains
	// Any shell tree view control or shell list view control.
	CShellManager *pShellManager = new CShellManager;

	// Activate the "Windows Native" visual manager to enable themes in the MFC control
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));;

	CTPLPMSDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Warning: Dialog creation failed and the application will terminate unexpectedly. \n");
		TRACE(traceAppMsg, 0, "Warning: If you use MFC controls on the dialog, you cannot #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS. \n");
	}

    // Delete the shell manager created above. 
	if (pShellManager != nullptr)
	{
		delete pShellManager;
	}

#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif
	return FALSE;
}

