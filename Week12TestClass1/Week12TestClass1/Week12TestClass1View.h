
// Week12TestClass1View.h : CWeek12TestClass1View 类的接口
//

#pragma once

class CWeek12TestClass1Set;

class CWeek12TestClass1View : public CRecordView
{
protected: // 仅从序列化创建
	CWeek12TestClass1View();
	DECLARE_DYNCREATE(CWeek12TestClass1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK12TESTCLASS1_FORM };
#endif
	CWeek12TestClass1Set* m_pSet;

// 特性
public:
	CWeek12TestClass1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CWeek12TestClass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	long ID;
	CString name;
	CString number;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // Week12TestClass1View.cpp 中的调试版本
inline CWeek12TestClass1Doc* CWeek12TestClass1View::GetDocument() const
   { return reinterpret_cast<CWeek12TestClass1Doc*>(m_pDocument); }
#endif

