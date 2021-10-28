#pragma once


// AdminW 对话框

class AdminW : public CDialogEx
{
	DECLARE_DYNAMIC(AdminW)

public:
	AdminW(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~AdminW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AdminW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton2();
};
