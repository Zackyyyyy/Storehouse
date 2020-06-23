
// Week14TestClassView.cpp : CWeek14TestClassView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week14TestClass.h"
#endif

#include "Week14TestClassSet.h"
#include "Week14TestClassDoc.h"
#include "Week14TestClassView.h"
#include "ADD_DIA1.h"
#include "change_DIA.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14TestClassView

IMPLEMENT_DYNCREATE(CWeek14TestClassView, CRecordView)

BEGIN_MESSAGE_MAP(CWeek14TestClassView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CWeek14TestClassView::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek14TestClassView::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CWeek14TestClassView::OnBnClickedButton2)
END_MESSAGE_MAP()

// CWeek14TestClassView 构造/析构

CWeek14TestClassView::CWeek14TestClassView()
	: CRecordView(IDD_WEEK14TESTCLASS_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CWeek14TestClassView::~CWeek14TestClassView()
{
}

void CWeek14TestClassView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL CWeek14TestClassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek14TestClassView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week14TestClassSet;
	CRecordView::OnInitialUpdate();

}


// CWeek14TestClassView 诊断

#ifdef _DEBUG
void CWeek14TestClassView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek14TestClassView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek14TestClassDoc* CWeek14TestClassView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek14TestClassDoc)));
	return (CWeek14TestClassDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek14TestClassView 数据库支持
CRecordset* CWeek14TestClassView::OnGetRecordset()
{
	return m_pSet;
}



// CWeek14TestClassView 消息处理程序


void CWeek14TestClassView::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
}


void CWeek14TestClassView::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DIA1 dia;
	int r = dia.DoModal();
	if (r == IDOK)
	{
		double ii = dia.i;
		m_pSet->AddNew();
		m_pSet->column1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CWeek14TestClassView::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	change_DIA dia;
	int r = dia.DoModal();
	if (r == IDOK)
	{
		double ii = dia.l;
		m_pSet->Edit();
		m_pSet->column1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}
