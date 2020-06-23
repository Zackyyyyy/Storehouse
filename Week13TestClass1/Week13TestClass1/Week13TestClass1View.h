
// Week13TestClass1View.h : CWeek13TestClass1View 类的接口
//

#pragma once

class CWeek13TestClass1Set;

class CWeek13TestClass1View : public CRecordView
{
protected: // 仅从序列化创建
	CWeek13TestClass1View();
	DECLARE_DYNCREATE(CWeek13TestClass1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13TESTCLASS1_FORM };
#endif
	CWeek13TestClass1Set* m_pSet;

// 特性
public:
	CWeek13TestClass1Doc* GetDocument() const;
	void draw_pic(CString file);
// 操作
public:
	CString path;
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
	virtual ~CWeek13TestClass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString name;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // Week13TestClass1View.cpp 中的调试版本
inline CWeek13TestClass1Doc* CWeek13TestClass1View::GetDocument() const
   { return reinterpret_cast<CWeek13TestClass1Doc*>(m_pDocument); }
#endif

