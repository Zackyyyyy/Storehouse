
// Week13TestClass1Set.cpp : CWeek13TestClass1Set 类的实现
//

#include "stdafx.h"
#include "Week13TestClass1.h"
#include "Week13TestClass1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek13TestClass1Set 实现

// 代码生成在 2020年5月12日, 15:12

IMPLEMENT_DYNAMIC(CWeek13TestClass1Set, CRecordset)

CWeek13TestClass1Set::CWeek13TestClass1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = L"";
	m_nFields = 2;
	m_nDefaultType = snapshot;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
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
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[图片名字]"), column1);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek13TestClass1Set 诊断

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

