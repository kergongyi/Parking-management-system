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
}


BEGIN_MESSAGE_MAP(ParkingW, CDialogEx)
END_MESSAGE_MAP()


// ParkingW 消息处理程序
