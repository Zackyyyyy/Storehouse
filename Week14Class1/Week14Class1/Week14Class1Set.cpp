
// Week14Class1Set.cpp : CWeek14Class1Set ���ʵ��
//

#include "stdafx.h"
#include "Week14Class1.h"
#include "Week14Class1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14Class1Set ʵ��

// ���������� 2020��5��18��, 16:13

IMPLEMENT_DYNAMIC(CWeek14Class1Set, CRecordset)

CWeek14Class1Set::CWeek14Class1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	column2 = 0.0;
	column3 = 0.0;
	column4 = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek14Class1Set::GetDefaultConnect()
{
	return _T("DSN=Class14;DBQ=F:\\Class14.xls;DefaultDir=F:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CWeek14Class1Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CWeek14Class1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Double(pFX, _T("[ѧ��]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Text(pFX, _T("[��Ƭ·��]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek14Class1Set ���

#ifdef _DEBUG
void CWeek14Class1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek14Class1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

