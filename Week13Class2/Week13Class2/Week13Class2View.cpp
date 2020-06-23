
// Week13Class2View.cpp : CWeek13Class2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week13Class2.h"
#endif

#include "Week13Class2Set.h"
#include "Week13Class2Doc.h"
#include "Week13Class2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13Class2View

IMPLEMENT_DYNCREATE(CWeek13Class2View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek13Class2View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT4, &CWeek13Class2View::OnEnChangeEdit4)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CWeek13Class2View 构造/析构

CWeek13Class2View::CWeek13Class2View()
	: CRecordView(IDD_WEEK13CLASS2_FORM)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CWeek13Class2View::~CWeek13Class2View()
{
}

void CWeek13Class2View::DoDataExchange(CDataExchange* pDX)
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

BOOL CWeek13Class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13Class2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13Class2Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13Class2View 打印

BOOL CWeek13Class2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CWeek13Class2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CWeek13Class2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CWeek13Class2View 诊断

#ifdef _DEBUG
void CWeek13Class2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13Class2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13Class2Doc* CWeek13Class2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13Class2Doc)));
	return (CWeek13Class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13Class2View 数据库支持
CRecordset* CWeek13Class2View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13Class2View 消息处理程序


void CWeek13Class2View::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CWeek13Class2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	InvalidateRect(false);
}
