
// Week14Class1Set.cpp : CWeek14Class1Set 类的实现
//

#include "stdafx.h"
#include "Week14Class1.h"
#include "Week14Class1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek14Class1Set 实现

// 代码生成在 2020年5月18日, 16:13

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
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
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Double(pFX, _T("[学号]"), column2);
	RFX_Double(pFX, _T("[年龄]"), column3);
	RFX_Text(pFX, _T("[照片路径]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// CWeek14Class1Set 诊断

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

