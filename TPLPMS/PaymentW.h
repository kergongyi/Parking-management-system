#pragma once
class PaymentW : public CDialogEx
{
	DECLARE_DYNAMIC(PaymentW)

public:
	PaymentW(CWnd* pParent = nullptr);   // construct
	virtual ~PaymentW();


#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PaymentW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	DECLARE_MESSAGE_MAP()
public:
	CComboBox u_combobox4;
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
