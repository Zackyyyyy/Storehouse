
// Week12TestClass1Set.cpp : CWeek12TestClass1Set ���ʵ��
//

#include "stdafx.h"
#include "Week12TestClass1.h"
#include "Week12TestClass1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek12TestClass1Set ʵ��

// ���������� 2020��5��5��, 15:26

IMPLEMENT_DYNAMIC(CWeek12TestClass1Set, CRecordset)

CWeek12TestClass1Set::CWeek12TestClass1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = L"";
	column2 = 0.0;
	column3 = 0.0;
	column4 = 0.0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek12TestClass1Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=F:\\\x65b0\x5efa Microsoft Excel \x5de5\x4f5c\x8868.xls;DefaultDir=F:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CWeek12TestClass1Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CWeek12TestClass1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Double(pFX, _T("[ѧ��]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Double(pFX, _T("[�ֻ�����]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek12TestClass1Set ���

#ifdef _DEBUG
void CWeek12TestClass1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek12TestClass1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

