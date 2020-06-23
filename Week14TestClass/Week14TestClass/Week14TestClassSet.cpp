
// Week14TestClassSet.cpp : CWeek14TestClassSet 类的实现
//

#include "stdafx.h"
#include "Week14TestClass.h"
#include "Week14TestClassSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14TestClassSet 实现

// 代码生成在 2020年5月19日, 14:34

IMPLEMENT_DYNAMIC(CWeek14TestClassSet, CRecordset)

CWeek14TestClassSet::CWeek14TestClassSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = 0.0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
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
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Double(pFX, _T("[数据]"), column1);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek14TestClassSet 诊断

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

