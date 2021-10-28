#pragma once


// PaymentW 对话框

class PaymentW : public CDialogEx
{
	DECLARE_DYNAMIC(PaymentW)

public:
	PaymentW(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~PaymentW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
