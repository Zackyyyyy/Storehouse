
// Week13Class2View.cpp : CWeek13Class2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT4, &CWeek13Class2View::OnEnChangeEdit4)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CWeek13Class2View ����/����

CWeek13Class2View::CWeek13Class2View()
	: CRecordView(IDD_WEEK13CLASS2_FORM)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek13Class2View::~CWeek13Class2View()
{
}

void CWeek13Class2View::DoDataExchange(CDataExchange* pDX)
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

BOOL CWeek13Class2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek13Class2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week13Class2Set;
	CRecordView::OnInitialUpdate();

}


// CWeek13Class2View ��ӡ

BOOL CWeek13Class2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek13Class2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek13Class2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek13Class2View ���

#ifdef _DEBUG
void CWeek13Class2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek13Class2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek13Class2Doc* CWeek13Class2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek13Class2Doc)));
	return (CWeek13Class2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek13Class2View ���ݿ�֧��
CRecordset* CWeek13Class2View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek13Class2View ��Ϣ�������


void CWeek13Class2View::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CWeek13Class2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	InvalidateRect(false);
}
