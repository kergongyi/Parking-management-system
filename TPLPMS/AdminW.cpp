// AdminW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "AdminW.h"
#include "afxdialogex.h"
#include "PaymentW.h"


// AdminW 对话框

IMPLEMENT_DYNAMIC(AdminW, CDialogEx)

AdminW::AdminW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_AdminW, pParent)
{

}

AdminW::~AdminW()
{
}

void AdminW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AdminW, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &AdminW::OnBnClickedButton1)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON2, &AdminW::OnBnClickedButton2)
END_MESSAGE_MAP()


// AdminW 消息处理程序
BOOL AdminW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void AdminW::OnBnClickedButton1()//payment window
{
	PaymentW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}

void AdminW::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP2);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 1000, 1000);                  //size
	dc.SelectObject(bgbrush);

}


void AdminW::OnBnClickedButton2()//refresh window
{
	//date&time
	CTime cTime = CTime::GetCurrentTime();
    CString strTime;
	strTime = cTime.Format("%Y-%m-%d   %X");
	SetDlgItemText(IDC_EDIT_AWtime,strTime);
}
