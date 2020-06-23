
// Week14TestClassView.cpp : CWeek14TestClassView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week14TestClass.h"
#endif

#include "Week14TestClassSet.h"
#include "Week14TestClassDoc.h"
#include "Week14TestClassView.h"
#include "ADD_DIA1.h"
#include "change_DIA.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14TestClassView

IMPLEMENT_DYNCREATE(CWeek14TestClassView, CRecordView)

BEGIN_MESSAGE_MAP(CWeek14TestClassView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CWeek14TestClassView::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CWeek14TestClassView::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CWeek14TestClassView::OnBnClickedButton2)
END_MESSAGE_MAP()

// CWeek14TestClassView ����/����

CWeek14TestClassView::CWeek14TestClassView()
	: CRecordView(IDD_WEEK14TESTCLASS_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CWeek14TestClassView::~CWeek14TestClassView()
{
}

void CWeek14TestClassView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL CWeek14TestClassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CWeek14TestClassView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Week14TestClassSet;
	CRecordView::OnInitialUpdate();

}


// CWeek14TestClassView ���

#ifdef _DEBUG
void CWeek14TestClassView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CWeek14TestClassView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CWeek14TestClassDoc* CWeek14TestClassView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek14TestClassDoc)));
	return (CWeek14TestClassDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek14TestClassView ���ݿ�֧��
CRecordset* CWeek14TestClassView::OnGetRecordset()
{
	return m_pSet;
}



// CWeek14TestClassView ��Ϣ�������


void CWeek14TestClassView::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
}


void CWeek14TestClassView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DIA1 dia;
	int r = dia.DoModal();
	if (r == IDOK)
	{
		double ii = dia.i;
		m_pSet->AddNew();
		m_pSet->column1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CWeek14TestClassView::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	change_DIA dia;
	int r = dia.DoModal();
	if (r == IDOK)
	{
		double ii = dia.l;
		m_pSet->Edit();
		m_pSet->column1 = ii;
		m_pSet->Update();
		UpdateData(false);
	}
}
