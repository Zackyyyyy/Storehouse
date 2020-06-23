// change_DIA.cpp : 实现文件
//

#include "stdafx.h"
#include "Week14TestClass.h"
#include "change_DIA.h"
#include "afxdialogex.h"


// change_DIA 对话框

IMPLEMENT_DYNAMIC(change_DIA, CDialogEx)

change_DIA::change_DIA(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, l(0)
{

}

change_DIA::~change_DIA()
{
}

void change_DIA::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, l);
}


BEGIN_MESSAGE_MAP(change_DIA, CDialogEx)
END_MESSAGE_MAP()


// change_DIA 消息处理程序
