#include "pch.h"
#include "framework.h"
#include "TPLPMS.h"
#include "TPLPMSDlg.h"
#include "afxdialogex.h"

#include "AdminW.h"
#include "UserW.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif




class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();


#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    



protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()




CTPLPMSDlg::CTPLPMSDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TPLPMS_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTPLPMSDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_SWTitle, m_static);//used to change the size of Title--Parking Here!!!!
}

BEGIN_MESSAGE_MAP(CTPLPMSDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CTPLPMSDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTPLPMSDlg::OnBnClickedButton2)
	ON_WM_DESTROY()
END_MESSAGE_MAP()




//Initialize window
BOOL CTPLPMSDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	// Set the icon for this dialog box. When the main window of the application is not a dialog box, the frame will automatically
	// do this
	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);

	m_SWTitle.CreatePointFont(220, _T("黑体"), NULL);//set the new size for title
	GetDlgItem(IDC_STATIC_SWTitle)->SetFont(&m_SWTitle);



	return TRUE;
}

void CTPLPMSDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

void CTPLPMSDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); 

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		dc.DrawIcon(x, y, m_hIcon);
	}

	//display the background picture
	CPaintDC dc(this);                           //Define the CPaint pointer
	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP1);    
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 600, 353);                  //size
	dc.SelectObject(bgbrush);

}

HCURSOR CTPLPMSDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




//Login
void CTPLPMSDlg::OnBnClickedButton1()
{

	int identity1 = ((CButton*)GetDlgItem(IDC_CHECK_Admin))->GetCheck();//check boxx
	int identity2 = ((CButton*)GetDlgItem(IDC_CHECK_User))->GetCheck();

	if ((identity1 == 1 && identity2 == 1) || (identity1 == 0 && identity2 == 0)) {
		AfxMessageBox(_T("Identity wrong"));
		return;
	}
	HRESULT hr;
	hr = CoInitialize(NULL);

	m_pConnection.CreateInstance(__uuidof(Connection)); 
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

		_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
		if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
		{
			AfxMessageBox(_T("Succeed to connect database"));
		}

		if (identity1 == 1 && identity2 == 0) {
			record = m_pConnection->Execute("SELECT * FROM dbo.Admin", NULL, adCmdText);
		}
		else if (identity1 == 0 && identity2 == 1) {
			record = m_pConnection->Execute("SELECT * FROM dbo.[User]", NULL, adCmdText);
		}
        
		int login = 0;
		CString strname;
		CString strpassword;
		CString DBname;
		CString DBpassword;
		
			while (!record->adoEOF)
			{
				DBname = record->GetCollect(_T("Name"));
				DBpassword = record->GetCollect(_T("Password"));
				//get name and password from database

				GetDlgItemText(IDC_EDIT_Name, strname);
				GetDlgItemText(IDC_EDIT_Password, strpassword);
				if (strname == DBname && strpassword == DBpassword && identity1 == 1 && identity2 == 0) {
					login = 1;
					AdminW dlg;
					this->ShowWindow(SW_HIDE);
					dlg.DoModal();
					break;
				}
				if (strname == DBname && strpassword == DBpassword && identity1 == 0 && identity2 == 1) {
					CTPLPMSApp* app = (CTPLPMSApp*)AfxGetApp();
					app->username = strname;
					login = 1;
					UserW dlg;
					this->ShowWindow(SW_HIDE);
					dlg.DoModal();
					break;
				}
				record->MoveNext();
			}
		
		if (login == 0) {
			AfxMessageBox(_T("Name or Password is wrong"));
		}
		record->Close();
		m_pConnection->Close();
		//close connection
		CoUninitialize();
}




//register
void CTPLPMSDlg::OnBnClickedButton2()
{
	CString strname;
	CString strpassword;
	int identity1 = ((CButton*)GetDlgItem(IDC_CHECK_Admin))->GetCheck();//check boxx
	int identity2 = ((CButton*)GetDlgItem(IDC_CHECK_User))->GetCheck();

	GetDlgItemText(IDC_EDIT_Name, strname);
	GetDlgItemText(IDC_EDIT_Password, strpassword);

	if ((identity1 == 1 && identity2 == 1) || (identity1 == 0 && identity2 == 0)) {
		AfxMessageBox(_T("Identity wrong"));
		return;
	}

	if (identity1 == 1 && identity2 == 0) {
		AfxMessageBox(_T("Please do not register as an Admin"));
	}
	else if (identity1 == 0 && identity2 == 1) {
		CString strSQL;
		strSQL.Format(_T("insert into dbo.[User](Name,Password)values('%s','%s')"), strname, strpassword);

		HRESULT hr;
		hr = CoInitialize(NULL);
		_ConnectionPtr m_pConnection;
		m_pConnection.CreateInstance(__uuidof(Connection));
		_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
		if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
		{
			AfxMessageBox(_T("Succeed to connect database"));
			m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
			AfxMessageBox(_T("Succeed registered"));
			m_pConnection->Close();
			CoUninitialize();
		}
	}
}

//destory windows to end program
void CTPLPMSDlg::OnDestroy()
{
	CDialogEx::OnDestroy();
	exit(0);
}
