#pragma once


// ExistingW 对话框

class ExistingW : public CDialogEx
{
	DECLARE_DYNAMIC(ExistingW)

public:
	ExistingW(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ExistingW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ExistingW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	CMFCButton B1control;
	CMFCButton B2control;
	CMFCButton B3control;
	CMFCButton B4control;
	CMFCButton B5control;
	CMFCButton B6control;
	CMFCButton B7control;
	CMFCButton B8control;
	CMFCButton B9control;
	CMFCButton B10control;
	CMFCButton B11control;
	CMFCButton B12control;
	CMFCButton B13control;
	CMFCButton B14control;
	CMFCButton B15control;
	CMFCButton B16control;
	CMFCButton B17control;
	CMFCButton B18control;
	CMFCButton B19control;
	CMFCButton B20control;
	CMFCButton B21control;
	CMFCButton B22control;
	CMFCButton B23control;
	CMFCButton B24control;
	CMFCButton B25control;
	CMFCButton B26control;
	CMFCButton B27control;
	CMFCButton B28control;
	CMFCButton B29control;
	CMFCButton B30control;
	CMFCButton B31control;
	CMFCButton B32control;
	CMFCButton B33control;
	CMFCButton B34control;
	CMFCButton B35control;
	CMFCButton B36control;
	afx_msg void OnBnClickedB1();
	afx_msg void OnBnClickedB2();
	afx_msg void OnBnClickedB3();
	afx_msg void OnBnClickedB4();
	afx_msg void OnBnClickedB5();
	afx_msg void OnBnClickedB6();
	afx_msg void OnBnClickedB7();
	afx_msg void OnBnClickedB8();
	afx_msg void OnBnClickedB9();
	afx_msg void OnBnClickedB10();
	afx_msg void OnBnClickedB11();
	afx_msg void OnBnClickedB12();
	afx_msg void OnBnClickedB13();
	afx_msg void OnBnClickedB14();
	afx_msg void OnBnClickedB15();
	afx_msg void OnBnClickedB16();
	afx_msg void OnBnClickedB17();
	afx_msg void OnBnClickedB18();
	afx_msg void OnBnClickedB19();
	afx_msg void OnBnClickedB20();
	afx_msg void OnBnClickedB21();
	afx_msg void OnBnClickedB22();
	afx_msg void OnBnClickedB23();
	afx_msg void OnBnClickedB24();
	afx_msg void OnBnClickedB25();
	afx_msg void OnBnClickedB26();
	afx_msg void OnBnClickedB27();
	afx_msg void OnBnClickedB28();
	afx_msg void OnBnClickedB29();
	afx_msg void OnBnClickedB30();
	afx_msg void OnBnClickedB31();
	afx_msg void OnBnClickedB32();
	afx_msg void OnBnClickedB33();
	afx_msg void OnBnClickedB34();
	afx_msg void OnBnClickedB35();
	afx_msg void OnBnClickedB36();
	afx_msg void OnBnClickedBack();
};
