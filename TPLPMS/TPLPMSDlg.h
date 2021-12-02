
// TPLPMSDlg.h: header file
//

#pragma once
class CTPLPMSDlg : public CDialogEx
{
public:
	CTPLPMSDlg(CWnd* pParent = nullptr);	// construct


#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TPLPMS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	


protected:
	HICON m_hIcon;

	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database

	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CStatic m_static;
	CFont m_SWTitle;//Title
	afx_msg void OnBnClickedButton2();
	afx_msg void OnDestroy();
};
