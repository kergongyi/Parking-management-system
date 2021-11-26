
// TPLPMSDlg.h: 头文件
//

#pragma once


// CTPLPMSDlg 对话框
class CTPLPMSDlg : public CDialogEx
{
// 构造
public:
	CTPLPMSDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TPLPMS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database

	// 生成的消息映射函数
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
};
