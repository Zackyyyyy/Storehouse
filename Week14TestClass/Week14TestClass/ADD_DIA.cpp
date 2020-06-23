// ADD_DIA.cpp : 实现文件
//

#include "stdafx.h"
#include "Week14TestClass.h"
#include "ADD_DIA.h"
#include "afxdialogex.h"


// ADD_DIA 对话框

IMPLEMENT_DYNAMIC(ADD_DIA, CDialogEx)

ADD_DIA::ADD_DIA(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

ADD_DIA::~ADD_DIA()
{
}

void ADD_DIA::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ADD_DIA, CDialogEx)
END_MESSAGE_MAP()


// ADD_DIA 消息处理程序
