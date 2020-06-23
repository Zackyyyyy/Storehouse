
// Week13TestClass1View.cpp : CWeek13TestClass1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week13TestClass1.h"
#endif

#include "Week13TestClass1Set.h"
#include "Week13TestClass1Doc.h"
#include "Week13TestClass1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13TestClass1View

IMPLEMENT_DYNCREATE(CWeek13TestClass1View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek13TestClass1View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT1, &CWeek13TestClass1View::OnEnChangeEdit1)
	ON_COMMAND(ID_RECORD_FIRST, &CWeek13TestClass1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeek13TestClass1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeek13TestClass1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeek13TestClass1View::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CWeek13TestClass1View 构造/析构

CWeek13TestClass1View::CWeek13TestClass1View()
	: CRecordView(IDD_WEEK13TESTCLASS1_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("F:\\");
}

CWeek13TestClass1View::~CWeek13TestClass1View()
{
}

void CWeek13TestClass1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL CWeek13TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13TestClass1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13TestClass1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13TestClass1View 打印

BOOL CWeek13TestClass1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CWeek13TestClass1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CWeek13TestClass1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CWeek13TestClass1View 诊断

#ifdef _DEBUG
void CWeek13TestClass1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13TestClass1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13TestClass1Doc* CWeek13TestClass1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13TestClass1Doc)));
	return (CWeek13TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13TestClass1View 数据库支持
CRecordset* CWeek13TestClass1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13TestClass1View 消息处理程序


void CWeek13TestClass1View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CWeek13TestClass1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek13TestClass1View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek13TestClass1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek13TestClass1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}

void CWeek13TestClass1View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);	
	ReleaseDC(pDC);
}

void CWeek13TestClass1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString filename,s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	UpdateData(false);
	draw_pic(filename);
}
