#pragma once
class RequestW : public CDialogEx
{
	DECLARE_DYNAMIC(RequestW)

public:
	RequestW(CWnd* pParent = nullptr);   // construct
	virtual ~RequestW();


#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RequestW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	DECLARE_MESSAGE_MAP()
public:
	CComboBox u_combobox2;
	CStatic m_static;
	CFont m_Totalfees;//Title
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();

	int Moneytemp;
};
