#pragma once


// RequestW 对话框

class RequestW : public CDialogEx
{
	DECLARE_DYNAMIC(RequestW)

public:
	RequestW(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~RequestW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RequestW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
