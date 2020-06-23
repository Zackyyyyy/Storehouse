// ADD_DIA1.cpp : 实现文件
//

#include "stdafx.h"
#include "Week14TestClass.h"
#include "ADD_DIA1.h"
#include "afxdialogex.h"


// ADD_DIA1 对话框

IMPLEMENT_DYNAMIC(ADD_DIA1, CDialogEx)

ADD_DIA1::ADD_DIA1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, i(0)
{

}

ADD_DIA1::~ADD_DIA1()
{
}

void ADD_DIA1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, i);
}


BEGIN_MESSAGE_MAP(ADD_DIA1, CDialogEx)
END_MESSAGE_MAP()


// ADD_DIA1 消息处理程序
