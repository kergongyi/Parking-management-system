#include "pch.h"
#include "TPLPMS.h"
#include "PaymentW.h"
#include "afxdialogex.h"
#include "AdminW.h"




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
	DDX_Control(pDX, IDC_COMBORequest, u_combobox4);
}


BEGIN_MESSAGE_MAP(PaymentW, CDialogEx)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &PaymentW::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &PaymentW::OnBnClickedButton2)
END_MESSAGE_MAP()




void PaymentW::OnPaint()//draw background
{
	CPaintDC dc(this); // device context for painting

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP2);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 1300, 1300);                  //size
	dc.SelectObject(bgbrush);
}




//Initialize window
BOOL PaymentW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database
	m_pConnection.CreateInstance(__uuidof(Connection));
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

	CString strSQL;
	strSQL.Format(_T("SELECT * FROM dbo.Request"));

	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		AfxMessageBox(_T("Succeed to connect database"));
	}

	record = m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);

	CString License;
	CString Phone;
	CString Name;
	CString PLotID;
	CString Username;
	CString Money;

	while (!record->adoEOF)
	{
		License = record->GetCollect(_T("License"));
		Phone = record->GetCollect(_T("Phone"));
		Name = record->GetCollect(_T("Name"));
		PLotID = record->GetCollect(_T("PLotID"));
		Username = record->GetCollect(_T("Username"));
		Money = record->GetCollect(_T("Money"));

		u_combobox4.AddString(PLotID + _T(",") + License + _T(",") + Phone + _T(",") + Name + _T(",") + Money + _T(",") + Username);

		record->MoveNext();
	}
	record->Close();
	m_pConnection->Close();
	//close connection
	CoUninitialize();
	return TRUE;  
}


void PaymentW::OnBnClickedButton1()//finish payment and delete parking information
{
	CString combobox;
	GetDlgItem(IDC_COMBORequest)->GetWindowText(combobox);

	CString Seperator = _T(",");
	int Position = 0;
	CString Place;
	Place = combobox.Tokenize(Seperator, Position);

	CString strSQL;
	CString strSQL2;
	strSQL.Format(_T("Delete from dbo.Request where PLotID = '%s'"), Place);
	strSQL2.Format(_T("Delete from dbo.Plot where PLotID = '%s'"), Place);

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection;
	m_pConnection.CreateInstance(__uuidof(Connection));
	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
		m_pConnection->Execute((_bstr_t)strSQL2, NULL, adCmdText);
		AfxMessageBox(_T("Succeed Delete"));
		m_pConnection->Close();
		CoUninitialize();
	}
	AdminW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}


void PaymentW::OnBnClickedButton2()//jump to Admin window
{
	AdminW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}
