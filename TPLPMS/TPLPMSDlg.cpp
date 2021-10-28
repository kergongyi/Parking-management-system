
// TPLPMSDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "TPLPMS.h"
#include "TPLPMSDlg.h"
#include "afxdialogex.h"

#include "AdminW.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持


// 实现
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


// CTPLPMSDlg 对话框



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
END_MESSAGE_MAP()


// CTPLPMSDlg 消息处理程序

BOOL CTPLPMSDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	m_SWTitle.CreatePointFont(220, _T("黑体"), NULL);//set the new size for title
	GetDlgItem(IDC_STATIC_SWTitle)->SetFont(&m_SWTitle);



	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CTPLPMSDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
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

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CTPLPMSDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTPLPMSDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	HRESULT hr;
	hr = CoInitialize(NULL);

	m_pConnection.CreateInstance(__uuidof(Connection)); 
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

		_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
		if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
		{
			AfxMessageBox(_T("Succeed to connect database"));
		}

		record = m_pConnection->Execute("SELECT * FROM dbo.Admin", NULL, adCmdText);
        
		int login = 0;
		CString strname;
		CString strpassword;
		CString DBname;
		CString DBpassword;
		int identity1 = ((CButton*)GetDlgItem(IDC_CHECK_Admin))->GetCheck();//check boxx
		int identity2 = ((CButton*)GetDlgItem(IDC_CHECK_User))->GetCheck();

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

