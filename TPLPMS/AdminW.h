#pragma once
class AdminW : public CDialogEx
{
	DECLARE_DYNAMIC(AdminW)

public:
	AdminW(CWnd* pParent = nullptr);   // construct
	virtual ~AdminW();

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AdminW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
};
