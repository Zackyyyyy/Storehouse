
// Week13Class1View.cpp : CWeek13Class1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week13Class1.h"
#endif

#include "Week13Class1Set.h"
#include "Week13Class1Doc.h"
#include "Week13Class1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13Class1View

IMPLEMENT_DYNCREATE(CWeek13Class1View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek13Class1View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek13Class1View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CWeek13Class1View 构造/析构

CWeek13Class1View::CWeek13Class1View()
	: CRecordView(IDD_WEEK13CLASS1_FORM)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CWeek13Class1View::~CWeek13Class1View()
{
}

void CWeek13Class1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
}

BOOL CWeek13Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13Class1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13Class1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13Class1View 打印

BOOL CWeek13Class1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CWeek13Class1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CWeek13Class1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CWeek13Class1View 诊断

#ifdef _DEBUG
void CWeek13Class1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13Class1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13Class1Doc* CWeek13Class1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13Class1Doc)));
	return (CWeek13Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13Class1View 数据库支持
CRecordset* CWeek13Class1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13Class1View 消息处理程序


void CWeek13Class1View::OnBnClickedButton1()
{
	CClientDC dc(this);
	CString s;
	CImage img;
	m_pSet->GetFieldValue(short(4), s);
	img.Load(s);
	img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	// TODO: 在此添加控件通知处理程序代码
}
