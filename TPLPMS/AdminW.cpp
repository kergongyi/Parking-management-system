#include "pch.h"
#include "TPLPMS.h"
#include "AdminW.h"
#include "afxdialogex.h"
#include "PaymentW.h"
#include "ExistingW.h"
#include "Search.h"
#include "TPLPMSDlg.h"




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
	ON_BN_CLICKED(IDC_BUTTON4, &AdminW::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &AdminW::OnBnClickedButton5)
END_MESSAGE_MAP()

//Initialize window
BOOL AdminW::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	return TRUE;
}


void AdminW::OnBnClickedButton1()//jump to payment window
{
	PaymentW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}

void AdminW::OnPaint()//draw background
{
	CPaintDC dc(this); // device context for painting

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP4);
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
	_RecordsetPtr record2;//record set of database
	m_pConnection.CreateInstance(__uuidof(Connection));
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		AfxMessageBox(_T("Succeed to connect database"));
	}
    record = m_pConnection->Execute("SELECT * FROM dbo.Plot", NULL, adCmdText);
	record2 = m_pConnection->Execute("SELECT * FROM dbo.Request", NULL, adCmdText);
	int recordnumber = 0;
	int requestnumber = 0;
	while (!record->adoEOF) {
		recordnumber += 1;
		record->MoveNext();
	}
	while (!record2->adoEOF) {
		requestnumber += 1;
		record2->MoveNext();
	}
	m_pConnection->Close();
	CoUninitialize();
	int freeplace = 36 - recordnumber;
	CString stri1;
	CString stri2;
	CString strirequest;
	stri1.Format(_T("%d"), recordnumber);
	stri2.Format(_T("%d"), freeplace);
	strirequest.Format(_T("%d"), requestnumber);
	SetDlgItemText(IDC_information, _T("Parking Vehicles:")+stri1+"\r\n"+_T("Free Space:")+stri2 + "\r\n" + _T("Existing Requests:") + strirequest);
}


void AdminW::OnBnClickedButton3()//jump to Existing window
{
	ExistingW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}


void AdminW::OnBnClickedButton4()//jump to Search window
{
	Search dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}


void AdminW::OnBnClickedButton5()//jump to Login window
{
	CTPLPMSDlg dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}