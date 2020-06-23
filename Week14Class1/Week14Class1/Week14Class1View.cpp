
// Week14Class1View.cpp : CWeek14Class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
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

// CWeek14Class1View ����/����

CWeek14Class1View::CWeek14Class1View()
	: CRecordView(IDD_WEEK14CLASS1_FORM)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, lj(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek14Class1View::~CWeek14Class1View()
{
	path = _T("F:\\");
}

void CWeek14Class1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
}

BOOL CWeek14Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek14Class1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week14Class1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek14Class1View ��ӡ

BOOL CWeek14Class1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek14Class1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek14Class1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek14Class1View ���

#ifdef _DEBUG
void CWeek14Class1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek14Class1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek14Class1Doc* CWeek14Class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek14Class1Doc)));
	return (CWeek14Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek14Class1View ���ݿ�֧��
CRecordset* CWeek14Class1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek14Class1View ��Ϣ�������


void CWeek14Class1View::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename, s;
	GetDlgItemText(IDC_EDIT4, s);
	filename = path + s;
	UpdateData(false);
	draw_pic(filename);
}


void CWeek14Class1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek14Class1View::OnRecordPrev()
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


void CWeek14Class1View::OnRecordNext()
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


void CWeek14Class1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(true);
	OnPaint();
}


void CWeek14Class1View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MyDia dia;
	CString filename, s;
	GetDlgItemText(IDC_EDIT4, s);
	filename = path + s;
	dia.ljm = filename;
	dia.DoModal();
}
