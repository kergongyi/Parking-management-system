// AdminW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "AdminW.h"
#include "afxdialogex.h"


// AdminW 对话框

IMPLEMENT_DYNAMIC(AdminW, CDialog)

AdminW::AdminW(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_AdminW, pParent)
{

}

AdminW::~AdminW()
{
}

void AdminW::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AdminW, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &AdminW::OnBnClickedButton1)
END_MESSAGE_MAP()


// AdminW 消息处理程序


void AdminW::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
