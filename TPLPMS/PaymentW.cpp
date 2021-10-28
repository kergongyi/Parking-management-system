// PaymentW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "PaymentW.h"
#include "afxdialogex.h"


// PaymentW 对话框

IMPLEMENT_DYNAMIC(PaymentW, CDialogEx)

PaymentW::PaymentW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PaymentW, pParent)
{

}

PaymentW::~PaymentW()
{
}

void PaymentW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PaymentW, CDialogEx)
END_MESSAGE_MAP()


// PaymentW 消息处理程序
