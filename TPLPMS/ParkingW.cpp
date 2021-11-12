// ParkingW.cpp: 实现文件
//

#include "pch.h"
#include "TPLPMS.h"
#include "ParkingW.h"
#include "afxdialogex.h"


// ParkingW 对话框

IMPLEMENT_DYNAMIC(ParkingW, CDialogEx)

ParkingW::ParkingW(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ParkingW, pParent)
{

}

ParkingW::~ParkingW()
{
}

void ParkingW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_A1, A1control);
	DDX_Control(pDX, IDC_A1, A1control);
	DDX_Control(pDX, IDC_A1, A1control);
	DDX_Control(pDX, IDC_A1, A1control);
	DDX_Control(pDX, IDC_A2, A2control);
	DDX_Control(pDX, IDC_A3, A3control);
	DDX_Control(pDX, IDC_A4, A4control);
	DDX_Control(pDX, IDC_A5, A5control);
	DDX_Control(pDX, IDC_A6, A6control);
	DDX_Control(pDX, IDC_A7, A7control);
	DDX_Control(pDX, IDC_A8, A8control);
	DDX_Control(pDX, IDC_A9, A9control);
	DDX_Control(pDX, IDC_A10, A10control);
	DDX_Control(pDX, IDC_A11, A11control);
	DDX_Control(pDX, IDC_A12, A12control);
	DDX_Control(pDX, IDC_A13, A13control);
	DDX_Control(pDX, IDC_A14, A14control);
	DDX_Control(pDX, IDC_A15, A15control);
	DDX_Control(pDX, IDC_A16, A16control);
	DDX_Control(pDX, IDC_A17, A17control);
	DDX_Control(pDX, IDC_A18, A18control);
	DDX_Control(pDX, IDC_A19, A19control);
	DDX_Control(pDX, IDC_A20, A20control);
	DDX_Control(pDX, IDC_A21, A21control);
	DDX_Control(pDX, IDC_A22, A22control);
	DDX_Control(pDX, IDC_A23, A23control);
	DDX_Control(pDX, IDC_A24, A24control);
	DDX_Control(pDX, IDC_A25, A25control);
	DDX_Control(pDX, IDC_A26, A26control);
	DDX_Control(pDX, IDC_A27, A27control);
	DDX_Control(pDX, IDC_A28, A28control);
	DDX_Control(pDX, IDC_A29, A29control);
	DDX_Control(pDX, IDC_A30, A30control);
	DDX_Control(pDX, IDC_A31, A31control);
	DDX_Control(pDX, IDC_A32, A32control);
	DDX_Control(pDX, IDC_A33, A33control);
	DDX_Control(pDX, IDC_A34, A34control);
	DDX_Control(pDX, IDC_A35, A35control);
	DDX_Control(pDX, IDC_A36, A36control);
}


BEGIN_MESSAGE_MAP(ParkingW, CDialogEx)

	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_A1, &ParkingW::OnBnClickedA1)
	ON_BN_CLICKED(IDC_A2, &ParkingW::OnBnClickedA2)
	ON_BN_CLICKED(IDC_A3, &ParkingW::OnBnClickedA3)
	ON_BN_CLICKED(IDC_A4, &ParkingW::OnBnClickedA4)
	ON_BN_CLICKED(IDC_A5, &ParkingW::OnBnClickedA5)
	ON_BN_CLICKED(IDC_A6, &ParkingW::OnBnClickedA6)
	ON_BN_CLICKED(IDC_A7, &ParkingW::OnBnClickedA7)
	ON_BN_CLICKED(IDC_A8, &ParkingW::OnBnClickedA8)
	ON_BN_CLICKED(IDC_A9, &ParkingW::OnBnClickedA9)
	ON_BN_CLICKED(IDC_A10, &ParkingW::OnBnClickedA10)
	ON_BN_CLICKED(IDC_A11, &ParkingW::OnBnClickedA11)
	ON_BN_CLICKED(IDC_A12, &ParkingW::OnBnClickedA12)
	ON_BN_CLICKED(IDC_A13, &ParkingW::OnBnClickedA13)
	ON_BN_CLICKED(IDC_A14, &ParkingW::OnBnClickedA14)
	ON_BN_CLICKED(IDC_A15, &ParkingW::OnBnClickedA15)
	ON_BN_CLICKED(IDC_A16, &ParkingW::OnBnClickedA16)
	ON_BN_CLICKED(IDC_A17, &ParkingW::OnBnClickedA17)
	ON_BN_CLICKED(IDC_A18, &ParkingW::OnBnClickedA18)
	ON_BN_CLICKED(IDC_A19, &ParkingW::OnBnClickedA19)
	ON_BN_CLICKED(IDC_A20, &ParkingW::OnBnClickedA20)
	ON_BN_CLICKED(IDC_A21, &ParkingW::OnBnClickedA21)
	ON_BN_CLICKED(IDC_A22, &ParkingW::OnBnClickedA22)
	ON_BN_CLICKED(IDC_A23, &ParkingW::OnBnClickedA23)
	ON_BN_CLICKED(IDC_A24, &ParkingW::OnBnClickedA24)
	ON_BN_CLICKED(IDC_A25, &ParkingW::OnBnClickedA25)
	ON_BN_CLICKED(IDC_A26, &ParkingW::OnBnClickedA26)
	ON_BN_CLICKED(IDC_A27, &ParkingW::OnBnClickedA27)
	ON_BN_CLICKED(IDC_A28, &ParkingW::OnBnClickedA28)
	ON_BN_CLICKED(IDC_A29, &ParkingW::OnBnClickedA29)
	ON_BN_CLICKED(IDC_A30, &ParkingW::OnBnClickedA30)
	ON_BN_CLICKED(IDC_A31, &ParkingW::OnBnClickedA31)
	ON_BN_CLICKED(IDC_A32, &ParkingW::OnBnClickedA32)
	ON_BN_CLICKED(IDC_A33, &ParkingW::OnBnClickedA33)
	ON_BN_CLICKED(IDC_A34, &ParkingW::OnBnClickedA34)
	ON_BN_CLICKED(IDC_A35, &ParkingW::OnBnClickedA35)
	ON_BN_CLICKED(IDC_A36, &ParkingW::OnBnClickedA36)
END_MESSAGE_MAP()


// ParkingW 消息处理程序



BOOL ParkingW::OnInitDialog()
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
			A1control.m_bDontUseWinXPTheme = TRUE;
			A1control.m_bDrawFocus = false;
			A1control.SetFaceColor(RGB(0, 255, 0));

			A2control.m_bDontUseWinXPTheme = TRUE;
			A2control.m_bDrawFocus = false;
			A2control.SetFaceColor(RGB(0, 255, 0));

			A3control.m_bDontUseWinXPTheme = TRUE;
			A3control.m_bDrawFocus = false;
			A3control.SetFaceColor(RGB(0, 255, 0));

			A4control.m_bDontUseWinXPTheme = TRUE;
			A4control.m_bDrawFocus = false;
			A4control.SetFaceColor(RGB(0, 255, 0));

			A5control.m_bDontUseWinXPTheme = TRUE;
			A5control.m_bDrawFocus = false;
			A5control.SetFaceColor(RGB(0, 255, 0));

			A6control.m_bDontUseWinXPTheme = TRUE;
			A6control.m_bDrawFocus = false;
			A6control.SetFaceColor(RGB(0, 255, 0));

			A7control.m_bDontUseWinXPTheme = TRUE;
			A7control.m_bDrawFocus = false;
			A7control.SetFaceColor(RGB(0, 255, 0));

			A8control.m_bDontUseWinXPTheme = TRUE;
			A8control.m_bDrawFocus = false;
			A8control.SetFaceColor(RGB(0, 255, 0));

			A9control.m_bDontUseWinXPTheme = TRUE;
			A9control.m_bDrawFocus = false;
			A9control.SetFaceColor(RGB(0, 255, 0));

			A10control.m_bDontUseWinXPTheme = TRUE;
			A10control.m_bDrawFocus = false;
			A10control.SetFaceColor(RGB(0, 255, 0));

			A11control.m_bDontUseWinXPTheme = TRUE;
			A11control.m_bDrawFocus = false;
			A11control.SetFaceColor(RGB(0, 255, 0));

			A12control.m_bDontUseWinXPTheme = TRUE;
			A12control.m_bDrawFocus = false;
			A12control.SetFaceColor(RGB(0, 255, 0));

			A13control.m_bDontUseWinXPTheme = TRUE;
			A13control.m_bDrawFocus = false;
			A13control.SetFaceColor(RGB(0, 255, 0));

			A14control.m_bDontUseWinXPTheme = TRUE;
			A14control.m_bDrawFocus = false;
			A14control.SetFaceColor(RGB(0, 255, 0));

			A15control.m_bDontUseWinXPTheme = TRUE;
			A15control.m_bDrawFocus = false;
			A15control.SetFaceColor(RGB(0, 255, 0));

			A16control.m_bDontUseWinXPTheme = TRUE;
			A16control.m_bDrawFocus = false;
			A16control.SetFaceColor(RGB(0, 255, 0));

			A17control.m_bDontUseWinXPTheme = TRUE;
			A17control.m_bDrawFocus = false;
			A17control.SetFaceColor(RGB(0, 255, 0));

			A18control.m_bDontUseWinXPTheme = TRUE;
			A18control.m_bDrawFocus = false;
			A18control.SetFaceColor(RGB(0, 255, 0));

			A19control.m_bDontUseWinXPTheme = TRUE;
			A19control.m_bDrawFocus = false;
			A19control.SetFaceColor(RGB(0, 255, 0));

			A20control.m_bDontUseWinXPTheme = TRUE;
			A20control.m_bDrawFocus = false;
			A20control.SetFaceColor(RGB(0, 255, 0));

			A21control.m_bDontUseWinXPTheme = TRUE;
			A21control.m_bDrawFocus = false;
			A21control.SetFaceColor(RGB(0, 255, 0));

			A22control.m_bDontUseWinXPTheme = TRUE;
			A22control.m_bDrawFocus = false;
			A22control.SetFaceColor(RGB(0, 255, 0));

			A23control.m_bDontUseWinXPTheme = TRUE;
			A23control.m_bDrawFocus = false;
			A23control.SetFaceColor(RGB(0, 255, 0));

			A24control.m_bDontUseWinXPTheme = TRUE;
			A24control.m_bDrawFocus = false;
			A24control.SetFaceColor(RGB(0, 255, 0));

			A25control.m_bDontUseWinXPTheme = TRUE;
			A25control.m_bDrawFocus = false;
			A25control.SetFaceColor(RGB(0, 255, 0));

			A26control.m_bDontUseWinXPTheme = TRUE;
			A26control.m_bDrawFocus = false;
			A26control.SetFaceColor(RGB(0, 255, 0));

			A27control.m_bDontUseWinXPTheme = TRUE;
			A27control.m_bDrawFocus = false;
			A27control.SetFaceColor(RGB(0, 255, 0));

			A28control.m_bDontUseWinXPTheme = TRUE;
			A28control.m_bDrawFocus = false;
			A28control.SetFaceColor(RGB(0, 255, 0));

			A29control.m_bDontUseWinXPTheme = TRUE;
			A29control.m_bDrawFocus = false;
			A29control.SetFaceColor(RGB(0, 255, 0));

			A30control.m_bDontUseWinXPTheme = TRUE;
			A30control.m_bDrawFocus = false;
			A30control.SetFaceColor(RGB(0, 255, 0));

			A31control.m_bDontUseWinXPTheme = TRUE;
			A31control.m_bDrawFocus = false;
			A31control.SetFaceColor(RGB(0, 255, 0));

			A32control.m_bDontUseWinXPTheme = TRUE;
			A32control.m_bDrawFocus = false;
			A32control.SetFaceColor(RGB(0, 255, 0));

			A33control.m_bDontUseWinXPTheme = TRUE;
			A33control.m_bDrawFocus = false;
			A33control.SetFaceColor(RGB(0, 255, 0));

			A34control.m_bDontUseWinXPTheme = TRUE;
			A34control.m_bDrawFocus = false;
			A34control.SetFaceColor(RGB(0, 255, 0));

			A35control.m_bDontUseWinXPTheme = TRUE;
			A35control.m_bDrawFocus = false;
			A35control.SetFaceColor(RGB(0, 255, 0));

			A36control.m_bDontUseWinXPTheme = TRUE;
			A36control.m_bDrawFocus = false;
			A36control.SetFaceColor(RGB(0, 255, 0));
		}

		if (temp.vt != VT_NULL) 
		{
			PLotID = record->GetCollect(_T("PLotID"));
			if (PLotID == _T("A1"))
			{
				A1control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A2"))
			{
				A2control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A3"))
			{
				A3control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A4"))
			{
				A4control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A5"))
			{
				A5control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A6"))
			{
				A6control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A7"))
			{
				A7control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A8"))
			{
				A8control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A9"))
			{
				A9control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A10"))
			{
				A10control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A11"))
			{
				A11control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A12"))
			{
				A12control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A13"))
			{
				A13control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A14"))
			{
				A14control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A15"))
			{
				A15control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A16"))
			{
				A16control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A17"))
			{
				A17control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A18"))
			{
				A18control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A19"))
			{
				A19control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A20"))
			{
				A20control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A21"))
			{
				A21control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A22"))
			{
				A22control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A23"))
			{
				A23control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A24"))
			{
				A24control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A25"))
			{
				A25control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A26"))
			{
				A26control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A27"))
			{
			    A27control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A28"))
			{
			    A28control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A29"))
			{
			    A29control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A30"))
			{
			    A30control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A31"))
			{
			    A31control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A32"))
			{
			    A32control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A33"))
			{
			    A33control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A34"))
			{
			    A34control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A35"))
			{
			    A35control.SetFaceColor(RGB(255, 0, 0));
			}
			else if (PLotID == _T("A36"))
			{
			    A36control.SetFaceColor(RGB(255, 0, 0));
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


void ParkingW::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CBitmap   background;                            //Defind the bit map
	background.LoadBitmap(IDB_BITMAP2);
	CBrush   brush; //The CBrush brush is mainly used to modify the filling content inside a closed graphic, including the fill color, fill shadow, and fill bitmap.
	brush.CreatePatternBrush(&background);       ////import backgroud
	CBrush* bgbrush = dc.SelectObject(&brush);
	dc.Rectangle(0, 0, 1300, 1300);                  //size
	dc.SelectObject(bgbrush);	   // 不为绘图消息调用 CDialogEx::OnPaint()
}


void insert(CString x) {
	CString strSQL;
	strSQL.Format(_T("update dbo.Plot set PLotID = '%s' where Plot.ID = (SELECT max(ID) FROM dbo.Plot)"), x);

	HRESULT hr;
	hr = CoInitialize(NULL);
	_ConnectionPtr m_pConnection;
	m_pConnection.CreateInstance(__uuidof(Connection));
	_bstr_t strConnection = "Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security Info=False;Initial Catalog=Parking;Data Source=LAPTOP-O4FIFM3Q";//connecting string used to connect database
	if (SUCCEEDED(m_pConnection->Open(strConnection, _T(""), _T(""), adConnectUnspecified)))//open database
	{
		AfxMessageBox(_T("Succeed to connect database"));
	}

	m_pConnection->Execute((_bstr_t)strSQL, NULL, adCmdText);
	AfxMessageBox(_T("Succeed to insert data"));
	m_pConnection->Close();
	CoUninitialize();

}

void ParkingW::OnBnClickedA1()
{
	CString a1 = _T("A1");
	insert(a1);
}


void ParkingW::OnBnClickedA2()
{
	CString a2 = _T("A2");
	insert(a2);
}


void ParkingW::OnBnClickedA3()
{
	CString a3 = _T("A3");
	insert(a3);
}


void ParkingW::OnBnClickedA4()
{
	CString a4 = _T("A4");
	insert(a4);
}


void ParkingW::OnBnClickedA5()
{
	CString a5 = _T("A5");
	insert(a5);
}

void ParkingW::OnBnClickedA6()
{
	CString a6 = _T("A6");
	insert(a6);
}

void ParkingW::OnBnClickedA7()
{
	CString a7 = _T("A7");
	insert(a7);
}

void ParkingW::OnBnClickedA8()
{
	CString a8 = _T("A8");
	insert(a8);
}

void ParkingW::OnBnClickedA9()
{
	CString a9 = _T("A9");
	insert(a9);
}

void ParkingW::OnBnClickedA10()
{
	CString a10 = _T("A10");
	insert(a10);
}

void ParkingW::OnBnClickedA11()
{
	CString a11 = _T("A11");
	insert(a11);
}

void ParkingW::OnBnClickedA12()
{
	CString a12 = _T("A12");
	insert(a12);
}

void ParkingW::OnBnClickedA13()
{
	CString a13 = _T("A13");
	insert(a13);
}

void ParkingW::OnBnClickedA14()
{
	CString a14 = _T("A14");
	insert(a14);
}

void ParkingW::OnBnClickedA15()
{
	CString a15 = _T("A15");
	insert(a15);
}

void ParkingW::OnBnClickedA16()
{
	CString a16 = _T("A16");
	insert(a16);
}

void ParkingW::OnBnClickedA17()
{
	CString a17 = _T("A17");
	insert(a17);
}

void ParkingW::OnBnClickedA18()
{
	CString a18 = _T("A18");
	insert(a18);
}

void ParkingW::OnBnClickedA19()
{
	CString a19 = _T("A19");
	insert(a19);
}

void ParkingW::OnBnClickedA20()
{
	CString a20 = _T("A20");
	insert(a20);
}

void ParkingW::OnBnClickedA21()
{
	CString a21 = _T("A21");
	insert(a21);
}

void ParkingW::OnBnClickedA22()
{
	CString a22 = _T("A22");
	insert(a22);
}

void ParkingW::OnBnClickedA23()
{
	CString a23 = _T("A23");
	insert(a23);
}

void ParkingW::OnBnClickedA24()
{
	CString a24 = _T("A24");
	insert(a24);
}

void ParkingW::OnBnClickedA25()
{
	CString a25 = _T("A25");
	insert(a25);
}

void ParkingW::OnBnClickedA26()
{
	CString a26 = _T("A26");
	insert(a26);
}

void ParkingW::OnBnClickedA27()
{
	CString a27 = _T("A27");
	insert(a27);
}

void ParkingW::OnBnClickedA28()
{
	CString a28 = _T("A28");
	insert(a28);
}

void ParkingW::OnBnClickedA29()
{
	CString a29 = _T("A29");
	insert(a29);
}

void ParkingW::OnBnClickedA30()
{
	CString a30 = _T("A30");
	insert(a30);
}

void ParkingW::OnBnClickedA31()
{
	CString a31 = _T("A31");
	insert(a31);
}

void ParkingW::OnBnClickedA32()
{
	CString a32 = _T("A32");
	insert(a32);
}

void ParkingW::OnBnClickedA33()
{
	CString a33 = _T("A33");
	insert(a33);
}

void ParkingW::OnBnClickedA34()
{
	CString a34 = _T("A34");
	insert(a34);
}

void ParkingW::OnBnClickedA35()
{
	CString a35 = _T("A35");
	insert(a35);
}

void ParkingW::OnBnClickedA36()
{
	CString a36 = _T("A36");
	insert(a36);
}
