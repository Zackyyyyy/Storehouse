
// Week14Class1View.cpp : CWeek14Class1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week14Class1.h"
#endif

#include "Week14Class1Set.h"
#include "Week14Class1Doc.h"
#include "Week14Class1View.h"
#include "MyDia.h"
#include "MyDia2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14Class1View

IMPLEMENT_DYNCREATE(CWeek14Class1View, CRecordView)

BEGIN_MESSAGE_MAP(CWeek14Class1View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT1, &CWeek14Class1View::OnEnChangeEdit1)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &CWeek14Class1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CWeek14Class1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CWeek14Class1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CWeek14Class1View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek14Class1View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CWeek14Class1View 构造/析构

CWeek14Class1View::CWeek14Class1View()
	: CRecordView(IDD_WEEK14CLASS1_FORM)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, lj(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CWeek14Class1View::~CWeek14Class1View()
{
	path = _T("F:\\");
}

void CWeek14Class1View::DoDataExchange(CDataExchange* pDX)
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

BOOL CWeek14Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CWeek14Class1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week14Class1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek14Class1View 打印

BOOL CWeek14Class1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CWeek14Class1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CWeek14Class1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CWeek14Class1View 诊断

#ifdef _DEBUG
void CWeek14Class1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek14Class1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek14Class1Doc* CWeek14Class1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek14Class1Doc)));
	return (CWeek14Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek14Class1View 数据库支持
CRecordset* CWeek14Class1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek14Class1View 消息处理程序


void CWeek14Class1View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CWeek14Class1View::draw_pic(CString file)
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



void CWeek14Class1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString filename, s;
	GetDlgItemText(IDC_EDIT4, s);
	filename = path + s;
	UpdateData(false);
	draw_pic(filename);
}


void CWeek14Class1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek14Class1View::OnRecordPrev()
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


void CWeek14Class1View::OnRecordNext()
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


void CWeek14Class1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek14Class1View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MyDia dia;
	CString filename, s;
	GetDlgItemText(IDC_EDIT4, s);
	filename = path + s;
	dia.ljm = filename;
	dia.DoModal();
}
