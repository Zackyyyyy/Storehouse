
// Week12TestClass1View.cpp : CWeek12TestClass1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week12TestClass1.h"
#endif

#include "Week12TestClass1Set.h"
#include "Week12TestClass1Doc.h"
#include "Week12TestClass1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek12TestClass1View

IMPLEMENT_DYNCREATE(CWeek12TestClass1View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek12TestClass1View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT4, &CWeek12TestClass1View::OnEnChangeEdit4)
END_MESSAGE_MAP()

// CWeek12TestClass1View 构造/析构

CWeek12TestClass1View::CWeek12TestClass1View()
	: CRecordView(IDD_WEEK12TESTCLASS1_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CWeek12TestClass1View::~CWeek12TestClass1View()
{
}

void CWeek12TestClass1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL CWeek12TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek12TestClass1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week12TestClass1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek12TestClass1View 打印

BOOL CWeek12TestClass1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CWeek12TestClass1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CWeek12TestClass1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CWeek12TestClass1View 诊断

#ifdef _DEBUG
void CWeek12TestClass1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek12TestClass1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek12TestClass1Doc* CWeek12TestClass1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek12TestClass1Doc)));
	return (CWeek12TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek12TestClass1View 数据库支持
CRecordset* CWeek12TestClass1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek12TestClass1View 消息处理程序


void CWeek12TestClass1View::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
