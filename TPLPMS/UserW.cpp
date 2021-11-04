// UserW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "UserW.h"
#include "afxdialogex.h"
#include "ParkingW.h"


// UserW 对话框

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
	DDX_Control(pDX, IDC_COMBO1, u_combobox);
}


BEGIN_MESSAGE_MAP(UserW, CDialogEx)

	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &UserW::OnBnClickedButton1)
END_MESSAGE_MAP()


// UserW 消息处理程序




BOOL UserW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	u_combobox.AddString(_T("Choose it to parking"));
	u_combobox.AddString(_T("Choose it to pay the bill"));

	CTime cTime = CTime::GetCurrentTime();
	CString strTime;
	strTime = cTime.Format("%Y-%m-%d   %X");
	SetDlgItemText(IDC_EDIT1_UWTime, strTime+"    Dear User,Thank you for your using.");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void UserW::OnPaint()
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


void UserW::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString combobox;
	CString License; 
	CString Phone;
	CString Name;

	GetDlgItemText(IDC_EDIT2_License, License);
	GetDlgItemText(IDC_EDIT3_Phone, Phone);
	GetDlgItemText(IDC_EDIT4_Name, Name);
	GetDlgItem(IDC_COMBO1)->GetWindowText(combobox);

	CString strSQL;
	strSQL.Format(_T("insert into dbo.Plot(License,Phone,Name)values('%s','%s','%s')"), License, Phone, Name);

		HRESULT hr;
		hr = CoInitialize(NULL);
		_ConnectionPtr m_pConnection;
		m_pConnection.CreateInstance(__uuidof(Connection));
		_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
		if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
		{
			AfxMessageBox(_T("Succeed to connect database"));
		}
		if (combobox=="Choose it to parking") {
			m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
			AfxMessageBox(_T("Succeed to insert data"));
			m_pConnection->Close();
			CoUninitialize();
		}
		ParkingW dlg;
		this->ShowWindow(SW_HIDE);
		dlg.DoModal();
		}


