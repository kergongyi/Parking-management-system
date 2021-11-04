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
};
