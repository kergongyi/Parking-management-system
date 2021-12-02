#include "pch.h"
#include "TPLPMS.h"
#include "UserW.h"
#include "afxdialogex.h"
#include "ParkingW.h"
#include "TPLPMSDlg.h"
#include "RequestW.h"




IMPLEMENT_DYNAMIC(UserW, CDialogEx)

UserW::UserW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_UserW, pParent)
{

}

UserW::~UserW()
{
}

void UserW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBOUser, u_combobox);
}


BEGIN_MESSAGE_MAP(UserW, CDialogEx)

	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &UserW::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &UserW::OnBnClickedButton2)
END_MESSAGE_MAP()




//Initialize window
BOOL UserW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	u_combobox.AddString(_T("Choose it to parking"));
	u_combobox.AddString(_T("Choose it to pay the bill"));

	CTime cTime = CTime::GetCurrentTime();
	CString strTime;
	strTime = cTime.Format("%Y-%m-%d,%X");
	CTPLPMSApp* app = (CTPLPMSApp*)AfxGetApp();
	SetDlgItemText(IDC_EDIT1_UWTime, strTime +  _T("Dear ") + app->username + _T(", Thank you for your using."));

	return TRUE;
}

//draw background
void UserW::OnPaint()
{
	CPaintDC dc(this);

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP3);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 2000, 2000);                  //size
	dc.SelectObject(bgbrush);
}

//parking cars
void UserW::OnBnClickedButton1()
{
	CString combobox;
	GetDlgItem(IDC_COMBOUser)->GetWindowText(combobox);
	if (combobox == "Choose it to parking") 
	{
		CString License;
		CString Phone;
		CString Name;
		CTPLPMSApp* app = (CTPLPMSApp*)AfxGetApp();
		CString Username = app->username;
		CTime cTime = CTime::GetCurrentTime();
		CString strTime;
		strTime = cTime.Format("%Y-%m-%d");

		GetDlgItemText(IDC_EDIT2_License, License);
		GetDlgItemText(IDC_EDIT3_Phone, Phone);
		GetDlgItemText(IDC_EDIT4_Name, Name);
		
		CString strSQL;
		CString templicense;
		int check = 0;
		strSQL.Format(_T("insert into dbo.Plot(License,Phone,Name,Username,Starttime)values('%s','%s','%s','%s','%s')"), License, Phone, Name, Username, strTime);

		HRESULT hr;
		hr = CoInitialize(NULL);
		_ConnectionPtr m_pConnection;
		_RecordsetPtr record;
		m_pConnection.CreateInstance(__uuidof(Connection));
		record.CreateInstance(__uuidof(Recordset));
		_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
		if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
		{
			record = m_pConnection->Execute(_T("select * from Plot"), NULL, adCmdText);
			while (!record->adoEOF) {
				templicense = record->GetCollect(_T("License"));
				if (License == templicense)
				{
					check = 1;
				}
				record->MoveNext();
			}
			if (check == 0) {
				m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
				AfxMessageBox(_T("Succeed to insert data"));
				m_pConnection->Close();
				CoUninitialize();
				ParkingW dlg;
				this->ShowWindow(SW_HIDE);
				dlg.DoModal();
			}
			else {
				AfxMessageBox(_T("This license plate already exists in the parking lots"));
				m_pConnection->Close();
				CoUninitialize();
			}
		}
	}
	else if (combobox == "Choose it to pay the bill")
	{
		RequestW dlg;
		this->ShowWindow(SW_HIDE);
		dlg.DoModal();
	}
}

//pay bills
void UserW::OnBnClickedButton2()
{
	CTPLPMSDlg dlg;
	this->ShowWindow(SW_HIDE);
	dlg.DoModal();
}
