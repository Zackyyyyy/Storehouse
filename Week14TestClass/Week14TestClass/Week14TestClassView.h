
// Week14TestClassView.h : CWeek14TestClassView 类的接口
//

#pragma once

class CWeek14TestClassSet;

class CWeek14TestClassView : public CRecordView
{
protected: // 仅从序列化创建
	CWeek14TestClassView();
	DECLARE_DYNCREATE(CWeek14TestClassView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14TESTCLASS_FORM };
#endif
	CWeek14TestClassSet* m_pSet;

// 特性
public:
	CWeek14TestClassDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CWeek14TestClassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	double number;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // Week14TestClassView.cpp 中的调试版本
inline CWeek14TestClassDoc* CWeek14TestClassView::GetDocument() const
   { return reinterpret_cast<CWeek14TestClassDoc*>(m_pDocument); }
#endif

