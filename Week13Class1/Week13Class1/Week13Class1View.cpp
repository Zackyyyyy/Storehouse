
// Week13Class1View.cpp : CWeek13Class1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek13Class1View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CWeek13Class1View ����/����

CWeek13Class1View::CWeek13Class1View()
	: CRecordView(IDD_WEEK13CLASS1_FORM)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek13Class1View::~CWeek13Class1View()
{
}

void CWeek13Class1View::DoDataExchange(CDataExchange* pDX)
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

BOOL CWeek13Class1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13Class1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13Class1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13Class1View ��ӡ

BOOL CWeek13Class1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek13Class1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek13Class1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek13Class1View ���

#ifdef _DEBUG
void CWeek13Class1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13Class1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13Class1Doc* CWeek13Class1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13Class1Doc)));
	return (CWeek13Class1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13Class1View ���ݿ�֧��
CRecordset* CWeek13Class1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13Class1View ��Ϣ�������


void CWeek13Class1View::OnBnClickedButton1()
{
	CClientDC dc(this);
	CString s;
	CImage img;
	m_pSet->GetFieldValue(short(4), s);
	img.Load(s);
	img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
