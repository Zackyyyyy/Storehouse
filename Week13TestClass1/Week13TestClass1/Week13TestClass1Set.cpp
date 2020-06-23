
// Week13TestClass1Set.cpp : CWeek13TestClass1Set ���ʵ��
//

#include "stdafx.h"
#include "Week13TestClass1.h"
#include "Week13TestClass1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13TestClass1Set ʵ��

// ���������� 2020��5��12��, 15:12

IMPLEMENT_DYNAMIC(CWeek13TestClass1Set, CRecordset)

CWeek13TestClass1Set::CWeek13TestClass1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CWeek13TestClass1Set::GetDefaultConnect()
{
	return _T("DSN=\x7167\x7247\x540d\x5b57\x548c\x5730\x5740;DBQ=F:\\\x7167\x7247\x5730\x5740.xls;DefaultDir=F:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CWeek13TestClass1Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CWeek13TestClass1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[ͼƬ����]"), column1);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek13TestClass1Set ���

#ifdef _DEBUG
void CWeek13TestClass1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CWeek13TestClass1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

