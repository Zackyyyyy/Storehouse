
// Week14TestClassSet.cpp : CWeek14TestClassSet ���ʵ��
//

#include "stdafx.h"
#include "Week14TestClass.h"
#include "Week14TestClassSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14TestClassSet ʵ��

// ���������� 2020��5��19��, 14:34

IMPLEMENT_DYNAMIC(CWeek14TestClassSet, CRecordset)

CWeek14TestClassSet::CWeek14TestClassSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = 0.0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek14TestClassSet::GetDefaultConnect()
{
	return _T("DSN=\x5220\x9664\x548c\x4fee\x6539;DBQ=F:\\\x53ef\x8bfb\x548c\x5220\x9664.xls;DefaultDir=F:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CWeek14TestClassSet::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CWeek14TestClassSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Double(pFX, _T("[����]"), column1);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek14TestClassSet ���

#ifdef _DEBUG
void CWeek14TestClassSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek14TestClassSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

