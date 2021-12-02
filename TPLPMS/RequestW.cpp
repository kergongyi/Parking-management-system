#include "pch.h"
#include "TPLPMS.h"
#include "RequestW.h"
#include "afxdialogex.h"
#include "TPLPMSDlg.h"




IMPLEMENT_DYNAMIC(RequestW, CDialogEx)

RequestW::RequestW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_RequestW, pParent)
{

}

RequestW::~RequestW()
{
}

void RequestW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_Totalfees, m_static);
	DDX_Control(pDX, IDC_COMBOFees, u_combobox2);
}


BEGIN_MESSAGE_MAP(RequestW, CDialogEx)
	
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON2, &RequestW::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &RequestW::OnBnClickedButton1)
END_MESSAGE_MAP()




//draw background
void RequestW::OnPaint()
{
	CPaintDC dc(this);

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP2);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 1000, 1000);                  //size
	dc.SelectObject(bgbrush);
}




//Initialize window
BOOL RequestW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	m_Totalfees.CreatePointFont(220, _T("黑体"), NULL);//set the new size for title
	GetDlgItem(IDC_STATIC_Totalfees)->SetFont(&m_Totalfees);

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection; //connected object for database
	_RecordsetPtr record;//record set of database
	m_pConnection.CreateInstance(__uuidof(Connection));
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

	CTPLPMSApp* app = (CTPLPMSApp*)AfxGetApp();
	CString strSQL;
	strSQL.Format(_T("SELECT * FROM dbo.Plot WHERE Username = '%s'"), app->username);

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
	CString Starttime;

	while (!record->adoEOF)
	{
		License = record->GetCollect(_T("License"));
		Phone = record->GetCollect(_T("Phone"));
		Name = record->GetCollect(_T("Name"));
		PLotID = record->GetCollect(_T("PLotID"));
		Username = record->GetCollect(_T("Username"));
		Starttime = record->GetCollect(_T("Starttime"));

		u_combobox2.AddString(Starttime + _T(",") + License + _T(",") + Phone + _T(",") + Name + _T(",") + PLotID + _T(",") + Username + _T(","));

		record->MoveNext();
	}
	record->Close();
	m_pConnection->Close();
	//close connection
	CoUninitialize();

	return TRUE;
}

//calculate money
void RequestW::OnBnClickedButton2()
{
	CString combobox;
	GetDlgItem(IDC_COMBOFees)->GetWindowText(combobox);

	CString Seperator = _T(",");
	int Position = 0;
	CString Date;
	Date = combobox.Tokenize(Seperator, Position);

	CString Seperator2 = _T("-");
	int Position2 = 0;
	CString Year;
	CString Month;
	CString Day;
	Year = Date.Tokenize(Seperator2, Position2);
	Month = Date.Tokenize(Seperator2, Position2);
	Day = Date.Tokenize(Seperator2, Position2);
	int MoneyYear = _ttoi(Year);
	int MoneyMonth = _ttoi(Month);
	int MoneyDay = _ttoi(Day);
	
	CTime cTime = CTime::GetCurrentTime();
	CString strTime;
	strTime = cTime.Format("%Y-%m-%d");
	int Position3 = 0;
	CString CYear;
	CString CMonth;
	CString CDay;
	CYear = strTime.Tokenize(Seperator2, Position3);
	CMonth = strTime.Tokenize(Seperator2, Position3);
	CDay = strTime.Tokenize(Seperator2, Position3);
	int CMoneyYear = _ttoi(CYear);
	int CMoneyMonth = _ttoi(CMonth);
	int CMoneyDay = _ttoi(CDay);

	int Money = (CMoneyYear - MoneyYear) * 365 * 20 + (CMoneyMonth - MoneyMonth) * 30 * 20 + (CMoneyDay - MoneyDay + 1) * 20;
	Moneytemp = Money;
	CString StriMoney;
    StriMoney.Format(_T("%d"), Money);
	SetDlgItemText(IDC_EDIT_Money, StriMoney);
}




//write information to request table
void RequestW::OnBnClickedButton1()
{
	CString License;
	CString Date;
	CString Phone;
	CString Name;
	CString PLotID;
	CString UserName;
	CString Money;
	CString strSQL;

	CString combobox;
	GetDlgItem(IDC_COMBOFees)->GetWindowText(combobox);
	CString Seperator = _T(",");
	int Position = 0;
	Date = combobox.Tokenize(Seperator, Position);
	License = combobox.Tokenize(Seperator, Position);
	Phone = combobox.Tokenize(Seperator, Position);
	Name = combobox.Tokenize(Seperator, Position);
	PLotID = combobox.Tokenize(Seperator, Position);
	UserName = combobox.Tokenize(Seperator, Position);
	Money.Format(_T("%d"), Moneytemp);


	strSQL.Format(_T("insert into dbo.Request(License,Phone,Name,PLotID,Username,Money)values('%s','%s','%s','%s','%s','%s')"), License, Phone, Name, PLotID, UserName, Money);

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection;
	m_pConnection.CreateInstance(__uuidof(Connection));
	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		AfxMessageBox(_T("Succeed to connect database"));
		m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
		AfxMessageBox(_T("Succeed to insert data"));
		m_pConnection->Close();
		CoUninitialize();
	}

	CTPLPMSDlg dlg;
	this->ShowWindow(SW_HIDE);
	dlg.DoModal();
}

