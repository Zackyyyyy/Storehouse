// MyDia2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week14Class1.h"
#include "MyDia2.h"
#include "afxdialogex.h"


// MyDia2 �Ի���

IMPLEMENT_DYNAMIC(MyDia2, CDialogEx)

MyDia2::MyDia2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, name(_T(""))
	, ljm(_T(""))
{

}

MyDia2::~MyDia2()
{
}

void MyDia2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name);
	DDX_Text(pDX, IDC_EDIT2, ljm);
}


BEGIN_MESSAGE_MAP(MyDia2, CDialogEx)
END_MESSAGE_MAP()


// MyDia2 ��Ϣ�������
