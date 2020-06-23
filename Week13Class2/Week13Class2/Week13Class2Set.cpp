
// Week13Class2Set.cpp : CWeek13Class2Set ���ʵ��
//

#include "stdafx.h"
#include "Week13Class2.h"
#include "Week13Class2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13Class2Set ʵ��

// ���������� 2020��5��11��, 15:41

IMPLEMENT_DYNAMIC(CWeek13Class2Set, CRecordset)

CWeek13Class2Set::CWeek13Class2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	column2 = 0.0;
	column3 = 0.0;
	column4 = 0.0;
	column5 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek13Class2Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f;DBQ=F:\\\x5b66\x751f\x4fe1\x606f.xls;DefaultDir=F:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CWeek13Class2Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CWeek13Class2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Double(pFX, _T("[ѧ��]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Double(pFX, _T("[�ֻ�����]"), column4);
	RFX_Text(pFX, _T("[��Ƭ·��]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek13Class2Set ���

#ifdef _DEBUG
void CWeek13Class2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek13Class2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

