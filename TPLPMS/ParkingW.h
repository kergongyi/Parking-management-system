#pragma once


// ParkingW 对话框

class ParkingW : public CDialogEx
{
	DECLARE_DYNAMIC(ParkingW)

public:
	ParkingW(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ParkingW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ParkingW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	CMFCButton A1control;
	CMFCButton A2control;
	CMFCButton A3control;
	CMFCButton A4control;
	CMFCButton A5control;
	CMFCButton A6control;
	CMFCButton A7control;
	CMFCButton A8control;
	CMFCButton A9control;
	CMFCButton A10control;
	CMFCButton A11control;
	CMFCButton A12control;
	CMFCButton A13control;
	CMFCButton A14control;
	CMFCButton A15control;
	CMFCButton A16control;
	CMFCButton A17control;
	CMFCButton A18control;
	CMFCButton A19control;
	CMFCButton A20control;
	CMFCButton A21control;
	CMFCButton A22control;
	CMFCButton A23control;
	CMFCButton A24control;
	CMFCButton A25control;
	CMFCButton A26control;
	CMFCButton A27control;
	CMFCButton A28control;
	CMFCButton A29control;
	CMFCButton A30control;
	CMFCButton A31control;
	CMFCButton A32control;
	CMFCButton A33control;
	CMFCButton A34control;
	CMFCButton A35control;
	CMFCButton A36control;
	afx_msg void OnBnClickedA1();
	afx_msg void OnBnClickedA2();
	afx_msg void OnBnClickedA3();
	afx_msg void OnBnClickedA4();
	afx_msg void OnBnClickedA5();
	afx_msg void OnBnClickedA6();
	afx_msg void OnBnClickedA7();
	afx_msg void OnBnClickedA8();
	afx_msg void OnBnClickedA9();
	afx_msg void OnBnClickedA10();
	afx_msg void OnBnClickedA11();
	afx_msg void OnBnClickedA12();
	afx_msg void OnBnClickedA13();
	afx_msg void OnBnClickedA14();
	afx_msg void OnBnClickedA15();
	afx_msg void OnBnClickedA16();
	afx_msg void OnBnClickedA17();
	afx_msg void OnBnClickedA18();
	afx_msg void OnBnClickedA19();
	afx_msg void OnBnClickedA20();
	afx_msg void OnBnClickedA21();
	afx_msg void OnBnClickedA22();
	afx_msg void OnBnClickedA23();
	afx_msg void OnBnClickedA24();
	afx_msg void OnBnClickedA25();
	afx_msg void OnBnClickedA26();
	afx_msg void OnBnClickedA27();
	afx_msg void OnBnClickedA28();
	afx_msg void OnBnClickedA29();
	afx_msg void OnBnClickedA30();
	afx_msg void OnBnClickedA31();
	afx_msg void OnBnClickedA32();
	afx_msg void OnBnClickedA33();
	afx_msg void OnBnClickedA34();
	afx_msg void OnBnClickedA35();
	afx_msg void OnBnClickedA36();
};
