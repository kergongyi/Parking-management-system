#include "pch.h"
#include "TPLPMS.h"
#include "Search.h"
#include "afxdialogex.h"
#include "AdminW.h"

IMPLEMENT_DYNAMIC(Search, CDialogEx)

Search::Search(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Search, pParent)
{

}

Search::~Search()
{
}

void Search::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Search, CDialogEx)

	ON_BN_CLICKED(IDC_BUTTON1, &Search::OnBnClickedButton1)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON2, &Search::OnBnClickedButton2)
END_MESSAGE_MAP()




void Search::OnBnClickedButton1()//used to search cars in lots
{
	CString plate;
	GetDlgItemText(IDC_EDIT_Search, plate);

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database
	m_pConnection.CreateInstance(__uuidof(Connection));
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

	CString strSQL;
	strSQL.Format(_T("SELECT * FROM dbo.Plot where License = '%s'"),plate);

	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
			record = m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
			if (!record->adoEOF) {
				CString License;
				CString Phone;
				CString Name;
				CString PLotID;
				CString Username;
				CString Starttime;
				License = record->GetCollect(_T("License"));
				Phone = record->GetCollect(_T("Phone"));
				Name = record->GetCollect(_T("Name"));
				PLotID = record->GetCollect(_T("PLotID"));
				Username = record->GetCollect(_T("Username"));
				Starttime = record->GetCollect(_T("Starttime"));

				CString result = License + _T(",") + Phone + _T(",") + Name + _T(",") + PLotID + _T(",") + Username + _T(",") + Starttime;
				SetDlgItemText(IDC_EDIT_SearchResult, result);
			}
			else {
				AfxMessageBox(_T("Sorry but cant find this license in databse"));
			}
	}
}


void Search::OnPaint()
{
	CPaintDC dc(this);

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP2);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 1300, 1300);                  //size
	dc.SelectObject(bgbrush);
}


BOOL Search::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	return TRUE; 
}


void Search::OnBnClickedButton2()
{
	AdminW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}
