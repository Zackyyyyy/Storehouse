
// Week12TestClass1View.cpp : CWeek12TestClass1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT4, &CWeek12TestClass1View::OnEnChangeEdit4)
END_MESSAGE_MAP()

// CWeek12TestClass1View ����/����

CWeek12TestClass1View::CWeek12TestClass1View()
	: CRecordView(IDD_WEEK12TESTCLASS1_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek12TestClass1View::~CWeek12TestClass1View()
{
}

void CWeek12TestClass1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL CWeek12TestClass1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek12TestClass1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week12TestClass1Set;
	CRecordView::OnInitialUpdate();

}


// CWeek12TestClass1View ��ӡ

BOOL CWeek12TestClass1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CWeek12TestClass1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CWeek12TestClass1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CWeek12TestClass1View ���

#ifdef _DEBUG
void CWeek12TestClass1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek12TestClass1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek12TestClass1Doc* CWeek12TestClass1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek12TestClass1Doc)));
	return (CWeek12TestClass1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek12TestClass1View ���ݿ�֧��
CRecordset* CWeek12TestClass1View::OnGetRecordset()
{
	return m_pSet;
}



// CWeek12TestClass1View ��Ϣ�������


void CWeek12TestClass1View::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
