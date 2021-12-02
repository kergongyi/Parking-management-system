#pragma once
class UserW : public CDialogEx
{
	DECLARE_DYNAMIC(UserW)

public:
	UserW(CWnd* pParent = nullptr);   // construct
	virtual ~UserW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UserW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	DECLARE_MESSAGE_MAP()
public:
	CComboBox u_combobox;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
