// AdminW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "AdminW.h"
#include "afxdialogex.h"
#include "PaymentW.h"
#include "ExistingW.h"


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
	ON_BN_CLICKED(IDC_BUTTON3, &AdminW::OnBnClickedButton3)
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

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database
	m_pConnection.CreateInstance(__uuidof(Connection));
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		AfxMessageBox(_T("Succeed to connect database"));
	}
    record = m_pConnection->Execute("SELECT * FROM dbo.Plot", NULL, adCmdText);
	int recordnumber = 0;
	while (!record->adoEOF) {
		recordnumber += 1;
		record->MoveNext();
	}
	m_pConnection->Close();
	CoUninitialize();
	int freeplace = 36 - recordnumber;
	CString stri1;
	CString stri2;
	stri1.Format(_T("%d"), recordnumber);
	stri2.Format(_T("%d"), freeplace);
	SetDlgItemText(IDC_information, _T("Parking Vehicles:")+stri1+"\r\n"+_T("Free Space:")+stri2);
}


void AdminW::OnBnClickedButton3()
{
	ExistingW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}
