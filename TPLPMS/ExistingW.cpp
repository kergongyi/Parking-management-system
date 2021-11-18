// ExistingW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "ExistingW.h"
#include "afxdialogex.h"
#include "AdminW.h"


// ExistingW 对话框

IMPLEMENT_DYNAMIC(ExistingW, CDialogEx)

ExistingW::ExistingW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ExistingW, pParent)
{

}

ExistingW::~ExistingW()
{
}

void ExistingW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_B1, B1control);
	DDX_Control(pDX, IDC_B2, B2control);
	DDX_Control(pDX, IDC_B3, B3control);
	DDX_Control(pDX, IDC_B4, B4control);
	DDX_Control(pDX, IDC_B5, B5control);
	DDX_Control(pDX, IDC_B6, B6control);
	DDX_Control(pDX, IDC_B7, B7control);
	DDX_Control(pDX, IDC_B8, B8control);
	DDX_Control(pDX, IDC_B9, B9control);
	DDX_Control(pDX, IDC_B10, B10control);
	DDX_Control(pDX, IDC_B11, B11control);
	DDX_Control(pDX, IDC_B12, B12control);
	DDX_Control(pDX, IDC_B13, B13control);
	DDX_Control(pDX, IDC_B14, B14control);
	DDX_Control(pDX, IDC_B15, B15control);
	DDX_Control(pDX, IDC_B16, B16control);
	DDX_Control(pDX, IDC_B17, B17control);
	DDX_Control(pDX, IDC_B18, B18control);
	DDX_Control(pDX, IDC_B19, B19control);
	DDX_Control(pDX, IDC_B20, B20control);
	DDX_Control(pDX, IDC_B21, B21control);
	DDX_Control(pDX, IDC_B22, B22control);
	DDX_Control(pDX, IDC_B23, B23control);
	DDX_Control(pDX, IDC_B24, B24control);
	DDX_Control(pDX, IDC_B25, B25control);
	DDX_Control(pDX, IDC_B26, B26control);
	DDX_Control(pDX, IDC_B27, B27control);
	DDX_Control(pDX, IDC_B28, B28control);
	DDX_Control(pDX, IDC_B29, B29control);
	DDX_Control(pDX, IDC_B30, B30control);
	DDX_Control(pDX, IDC_B31, B31control);
	DDX_Control(pDX, IDC_B32, B32control);
	DDX_Control(pDX, IDC_B33, B33control);
	DDX_Control(pDX, IDC_B34, B34control);
	DDX_Control(pDX, IDC_B35, B35control);
	DDX_Control(pDX, IDC_B36, B36control);
}


BEGIN_MESSAGE_MAP(ExistingW, CDialogEx)
	
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_B1, &ExistingW::OnBnClickedB1)
	ON_BN_CLICKED(IDC_B2, &ExistingW::OnBnClickedB2)
	ON_BN_CLICKED(IDC_B3, &ExistingW::OnBnClickedB3)
	ON_BN_CLICKED(IDC_B4, &ExistingW::OnBnClickedB4)
	ON_BN_CLICKED(IDC_B5, &ExistingW::OnBnClickedB5)
	ON_BN_CLICKED(IDC_B6, &ExistingW::OnBnClickedB6)
	ON_BN_CLICKED(IDC_B7, &ExistingW::OnBnClickedB7)
	ON_BN_CLICKED(IDC_B8, &ExistingW::OnBnClickedB8)
	ON_BN_CLICKED(IDC_B9, &ExistingW::OnBnClickedB9)
	ON_BN_CLICKED(IDC_B10, &ExistingW::OnBnClickedB10)
	ON_BN_CLICKED(IDC_B11, &ExistingW::OnBnClickedB11)
	ON_BN_CLICKED(IDC_B12, &ExistingW::OnBnClickedB12)
	ON_BN_CLICKED(IDC_B13, &ExistingW::OnBnClickedB13)
	ON_BN_CLICKED(IDC_B14, &ExistingW::OnBnClickedB14)
	ON_BN_CLICKED(IDC_B15, &ExistingW::OnBnClickedB15)
	ON_BN_CLICKED(IDC_B16, &ExistingW::OnBnClickedB16)
	ON_BN_CLICKED(IDC_B17, &ExistingW::OnBnClickedB17)
	ON_BN_CLICKED(IDC_B18, &ExistingW::OnBnClickedB18)
	ON_BN_CLICKED(IDC_B19, &ExistingW::OnBnClickedB19)
	ON_BN_CLICKED(IDC_B20, &ExistingW::OnBnClickedB20)
	ON_BN_CLICKED(IDC_B21, &ExistingW::OnBnClickedB21)
	ON_BN_CLICKED(IDC_B22, &ExistingW::OnBnClickedB22)
	ON_BN_CLICKED(IDC_B23, &ExistingW::OnBnClickedB23)
	ON_BN_CLICKED(IDC_B24, &ExistingW::OnBnClickedB24)
	ON_BN_CLICKED(IDC_B25, &ExistingW::OnBnClickedB25)
	ON_BN_CLICKED(IDC_B26, &ExistingW::OnBnClickedB26)
	ON_BN_CLICKED(IDC_B27, &ExistingW::OnBnClickedB27)
	ON_BN_CLICKED(IDC_B28, &ExistingW::OnBnClickedB28)
	ON_BN_CLICKED(IDC_B29, &ExistingW::OnBnClickedB29)
	ON_BN_CLICKED(IDC_B30, &ExistingW::OnBnClickedB30)
	ON_BN_CLICKED(IDC_B31, &ExistingW::OnBnClickedB31)
	ON_BN_CLICKED(IDC_B32, &ExistingW::OnBnClickedB32)
	ON_BN_CLICKED(IDC_B33, &ExistingW::OnBnClickedB33)
	ON_BN_CLICKED(IDC_B34, &ExistingW::OnBnClickedB34)
	ON_BN_CLICKED(IDC_B35, &ExistingW::OnBnClickedB35)
	ON_BN_CLICKED(IDC_B36, &ExistingW::OnBnClickedB36)
	ON_BN_CLICKED(IDC_Back, &ExistingW::OnBnClickedBack)
END_MESSAGE_MAP()


// ExistingW 消息处理程序




void ExistingW::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP2);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 1300, 1000);                  //size
	dc.SelectObject(bgbrush);
}


void read(CString x) {
	CString strSQL;
	//strSQL.Format(_T("select * from dbo.Plot where PLotID = '@s'"), x);
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
	_variant_t temp;
	CString DBLicense;
	CString DBPhone;
	CString DBName;
	CString DBPlotID;
	while (!record->adoEOF)
	{
		temp = record->GetCollect(_T("PLotID"));
		if (temp == x) {
			DBLicense = record->GetCollect(_T("License"));
			DBPhone = record->GetCollect(_T("Phone"));
			DBName = record->GetCollect(_T("Name"));
			DBPlotID = record->GetCollect(_T("PlotID"));
			AfxMessageBox(_T("License:")+DBLicense+_T("    Phone:")+DBPhone+_T("    Name:")+DBName+_T("    PlotID:")+DBPlotID);
		}
		record->MoveNext();
	}
	m_pConnection->Close();
	CoUninitialize();
}

BOOL ExistingW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	HRESULT hr;
	hr = CoInitialize(NULL);

	m_pConnection.CreateInstance(__uuidof(Connection));
	record.CreateInstance(__uuidof(Recordset));//create a set used to read database

	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		AfxMessageBox(_T("Succeed to connect database"));
	}

	record = m_pConnection->Execute("SELECT * FROM dbo.Plot", NULL, adCmdText);
	CString PLotID;
	_variant_t temp;
	int state = 0;
	while (!record->adoEOF)
	{
		temp = record->GetCollect(_T("PLotID"));
		if (state == 0) // no cars
		{
			B1control.m_bDontUseWinXPTheme = TRUE;
			B1control.m_bDrawFocus = false;
			B1control.SetFaceColor(RGB(0, 255, 0));

			B2control.m_bDontUseWinXPTheme = TRUE;
			B2control.m_bDrawFocus = false;
			B2control.SetFaceColor(RGB(0, 255, 0));

			B3control.m_bDontUseWinXPTheme = TRUE;
			B3control.m_bDrawFocus = false;
			B3control.SetFaceColor(RGB(0, 255, 0));

			B4control.m_bDontUseWinXPTheme = TRUE;
			B4control.m_bDrawFocus = false;
			B4control.SetFaceColor(RGB(0, 255, 0));

			B5control.m_bDontUseWinXPTheme = TRUE;
			B5control.m_bDrawFocus = false;
			B5control.SetFaceColor(RGB(0, 255, 0));

			B6control.m_bDontUseWinXPTheme = TRUE;
			B6control.m_bDrawFocus = false;
			B6control.SetFaceColor(RGB(0, 255, 0));

			B7control.m_bDontUseWinXPTheme = TRUE;
			B7control.m_bDrawFocus = false;
			B7control.SetFaceColor(RGB(0, 255, 0));

			B8control.m_bDontUseWinXPTheme = TRUE;
			B8control.m_bDrawFocus = false;
			B8control.SetFaceColor(RGB(0, 255, 0));

			B9control.m_bDontUseWinXPTheme = TRUE;
			B9control.m_bDrawFocus = false;
			B9control.SetFaceColor(RGB(0, 255, 0));

			B10control.m_bDontUseWinXPTheme = TRUE;
			B10control.m_bDrawFocus = false;
			B10control.SetFaceColor(RGB(0, 255, 0));

			B11control.m_bDontUseWinXPTheme = TRUE;
			B11control.m_bDrawFocus = false;
			B11control.SetFaceColor(RGB(0, 255, 0));

			B12control.m_bDontUseWinXPTheme = TRUE;
			B12control.m_bDrawFocus = false;
			B12control.SetFaceColor(RGB(0, 255, 0));

			B13control.m_bDontUseWinXPTheme = TRUE;
			B13control.m_bDrawFocus = false;
			B13control.SetFaceColor(RGB(0, 255, 0));

			B14control.m_bDontUseWinXPTheme = TRUE;
			B14control.m_bDrawFocus = false;
			B14control.SetFaceColor(RGB(0, 255, 0));

			B15control.m_bDontUseWinXPTheme = TRUE;
			B15control.m_bDrawFocus = false;
			B15control.SetFaceColor(RGB(0, 255, 0));

			B16control.m_bDontUseWinXPTheme = TRUE;
			B16control.m_bDrawFocus = false;
			B16control.SetFaceColor(RGB(0, 255, 0));

			B17control.m_bDontUseWinXPTheme = TRUE;
			B17control.m_bDrawFocus = false;
			B17control.SetFaceColor(RGB(0, 255, 0));

			B18control.m_bDontUseWinXPTheme = TRUE;
			B18control.m_bDrawFocus = false;
			B18control.SetFaceColor(RGB(0, 255, 0));

			B19control.m_bDontUseWinXPTheme = TRUE;
			B19control.m_bDrawFocus = false;
			B19control.SetFaceColor(RGB(0, 255, 0));

			B20control.m_bDontUseWinXPTheme = TRUE;
			B20control.m_bDrawFocus = false;
			B20control.SetFaceColor(RGB(0, 255, 0));

			B21control.m_bDontUseWinXPTheme = TRUE;
			B21control.m_bDrawFocus = false;
			B21control.SetFaceColor(RGB(0, 255, 0));

			B22control.m_bDontUseWinXPTheme = TRUE;
			B22control.m_bDrawFocus = false;
			B22control.SetFaceColor(RGB(0, 255, 0));

			B23control.m_bDontUseWinXPTheme = TRUE;
			B23control.m_bDrawFocus = false;
			B23control.SetFaceColor(RGB(0, 255, 0));

			B24control.m_bDontUseWinXPTheme = TRUE;
			B24control.m_bDrawFocus = false;
			B24control.SetFaceColor(RGB(0, 255, 0));

			B25control.m_bDontUseWinXPTheme = TRUE;
			B25control.m_bDrawFocus = false;
			B25control.SetFaceColor(RGB(0, 255, 0));

			B26control.m_bDontUseWinXPTheme = TRUE;
			B26control.m_bDrawFocus = false;
			B26control.SetFaceColor(RGB(0, 255, 0));

			B27control.m_bDontUseWinXPTheme = TRUE;
			B27control.m_bDrawFocus = false;
			B27control.SetFaceColor(RGB(0, 255, 0));

			B28control.m_bDontUseWinXPTheme = TRUE;
			B28control.m_bDrawFocus = false;
			B28control.SetFaceColor(RGB(0, 255, 0));

			B29control.m_bDontUseWinXPTheme = TRUE;
			B29control.m_bDrawFocus = false;
			B29control.SetFaceColor(RGB(0, 255, 0));

			B30control.m_bDontUseWinXPTheme = TRUE;
			B30control.m_bDrawFocus = false;
			B30control.SetFaceColor(RGB(0, 255, 0));

			B31control.m_bDontUseWinXPTheme = TRUE;
			B31control.m_bDrawFocus = false;
			B31control.SetFaceColor(RGB(0, 255, 0));

			B32control.m_bDontUseWinXPTheme = TRUE;
			B32control.m_bDrawFocus = false;
			B32control.SetFaceColor(RGB(0, 255, 0));

			B33control.m_bDontUseWinXPTheme = TRUE;
			B33control.m_bDrawFocus = false;
			B33control.SetFaceColor(RGB(0, 255, 0));

			B34control.m_bDontUseWinXPTheme = TRUE;
			B34control.m_bDrawFocus = false;
			B34control.SetFaceColor(RGB(0, 255, 0));

			B35control.m_bDontUseWinXPTheme = TRUE;
			B35control.m_bDrawFocus = false;
			B35control.SetFaceColor(RGB(0, 255, 0));

			B36control.m_bDontUseWinXPTheme = TRUE;
			B36control.m_bDrawFocus = false;
			B36control.SetFaceColor(RGB(0, 255, 0));
		}

		if (temp.vt != VT_NULL)
		{
			PLotID = record->GetCollect(_T("PLotID"));
			if (PLotID == _T("A1"))
			{
				B1control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A2"))
			{
				B2control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A3"))
			{
				B3control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A4"))
			{
				B4control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A5"))
			{
				B5control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A6"))
			{
				B6control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A7"))
			{
				B7control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A8"))
			{
				B8control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A9"))
			{
				B9control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A10"))
			{
				B10control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A11"))
			{
				B11control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A12"))
			{
				B12control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A13"))
			{
				B13control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A14"))
			{
				B14control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A15"))
			{
				B15control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A16"))
			{
				B16control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A17"))
			{
				B17control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A18"))
			{
				B18control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A19"))
			{
				B19control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A20"))
			{
				B20control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A21"))
			{
				B21control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A22"))
			{
				B22control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A23"))
			{
				B23control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A24"))
			{
				B24control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A25"))
			{
				B25control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A26"))
			{
				B26control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A27"))
			{
				B27control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A28"))
			{
				B28control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A29"))
			{
				B29control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A30"))
			{
				B30control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A31"))
			{
				B31control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A32"))
			{
				B32control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A33"))
			{
				B33control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A34"))
			{
				B34control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A35"))
			{
				B35control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A36"))
			{
				B36control.SetFaceColor(RGB(255, 0, 0));
			}
		}
		state += 1;
		record->MoveNext();
	}
	m_pConnection->Close();
	CoUninitialize();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

void ExistingW::OnBnClickedB1()
{
	CString a1 = _T("A1");
	read(a1);
}


void ExistingW::OnBnClickedB2()
{
	CString a2 = _T("A2");
	read(a2);
}


void ExistingW::OnBnClickedB3()
{
	CString a3 = _T("A3");
	read(a3);
}


void ExistingW::OnBnClickedB4()
{
	CString a4 = _T("A4");
	read(a4);
}


void ExistingW::OnBnClickedB5()
{
	CString a5 = _T("A5");
	read(a5);
}


void ExistingW::OnBnClickedB6()
{
	CString a6 = _T("A6");
	read(a6);
}


void ExistingW::OnBnClickedB7()
{
	CString a7 = _T("A7");
	read(a7);
}


void ExistingW::OnBnClickedB8()
{
	CString a8 = _T("A8");
	read(a8);
}


void ExistingW::OnBnClickedB9()
{
	CString a9 = _T("A9");
	read(a9);
}


void ExistingW::OnBnClickedB10()
{
	CString a10 = _T("A10");
	read(a10);
}


void ExistingW::OnBnClickedB11()
{
	CString a11 = _T("A11");
	read(a11);
}


void ExistingW::OnBnClickedB12()
{
	CString a12 = _T("A12");
	read(a12);
}

void ExistingW::OnBnClickedB13()
{
	CString a13 = _T("A13");
	read(a13);
}


void ExistingW::OnBnClickedB14()
{
	CString a14 = _T("A14");
	read(a14);
}


void ExistingW::OnBnClickedB15()
{
	CString a15 = _T("A15");
	read(a15);
}


void ExistingW::OnBnClickedB16()
{
	CString a16 = _T("A16");
	read(a16);
}


void ExistingW::OnBnClickedB17()
{
	CString a17 = _T("A17");
	read(a17);
}

void ExistingW::OnBnClickedB18()
{
	CString a18 = _T("A18");
	read(a18);
}


void ExistingW::OnBnClickedB19()
{
	CString a19 = _T("A19");
	read(a19);
}


void ExistingW::OnBnClickedB20()
{
	CString a20 = _T("A20");
	read(a20);
}


void ExistingW::OnBnClickedB21()
{
	CString a21 = _T("A21");
	read(a21);
}


void ExistingW::OnBnClickedB22()
{
	CString a22 = _T("A22");
	read(a22);
}


void ExistingW::OnBnClickedB23()
{
	CString a23 = _T("A23");
	read(a23);
}


void ExistingW::OnBnClickedB24()
{
	CString a24 = _T("A24");
	read(a24);
}


void ExistingW::OnBnClickedB25()
{
	CString a25 = _T("A25");
	read(a25);
}


void ExistingW::OnBnClickedB26()
{
	CString a26 = _T("A26");
	read(a26);
}


void ExistingW::OnBnClickedB27()
{
	CString a27 = _T("A27");
	read(a27);
}


void ExistingW::OnBnClickedB28()
{
	CString a28 = _T("A28");
	read(a28);
}


void ExistingW::OnBnClickedB29()
{
	CString a29 = _T("A29");
	read(a29);
}


void ExistingW::OnBnClickedB30()
{
	CString a30 = _T("A30");
	read(a30);
}


void ExistingW::OnBnClickedB31()
{
	CString a31 = _T("A31");
	read(a31);
}


void ExistingW::OnBnClickedB32()
{
	CString a32 = _T("A32");
	read(a32);
}


void ExistingW::OnBnClickedB33()
{
	CString a33 = _T("A33");
	read(a33);
}


void ExistingW::OnBnClickedB34()
{
	CString a34 = _T("A34");
	read(a34);
}


void ExistingW::OnBnClickedB35()
{
	CString a35 = _T("A35");
	read(a35);
}


void ExistingW::OnBnClickedB36()
{
	CString a36 = _T("A36");
	read(a36);
}


void ExistingW::OnBnClickedBack()
{
	AdminW dlg1;
	this->ShowWindow(SW_HIDE);
	dlg1.DoModal();
}
