
// Week13TestClass1View.cpp : CWeek13TestClass1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
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

// CWeek13TestClass1View ����/����

CWeek13TestClass1View::CWeek13TestClass1View()
	: CRecordView(IDD_WEEK13TESTCLASS1_FORM)
	, name(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("F:\\");
}

CWeek13TestClass1View::~CWeek13TestClass1View()
{
}

void CWeek13TestClass1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL CWeek13TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13TestClass1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13TestClass1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13TestClass1View ��ӡ

BOOL CWeek13TestClass1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek13TestClass1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek13TestClass1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek13TestClass1View ���

#ifdef _DEBUG
void CWeek13TestClass1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13TestClass1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13TestClass1Doc* CWeek13TestClass1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13TestClass1Doc)));
	return (CWeek13TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13TestClass1View ���ݿ�֧��
CRecordset* CWeek13TestClass1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13TestClass1View ��Ϣ�������


void CWeek13TestClass1View::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CWeek13TestClass1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek13TestClass1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename,s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = path + s;
	UpdateData(false);
	draw_pic(filename);
}
