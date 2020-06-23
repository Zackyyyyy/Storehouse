
// Week13Class1View.h : CWeek13Class1View 类的接口
//

#pragma once

class CWeek13Class1Set;

class CWeek13Class1View : public CRecordView
{
protected: // 仅从序列化创建
	CWeek13Class1View();
	DECLARE_DYNCREATE(CWeek13Class1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13CLASS1_FORM };
#endif
	CWeek13Class1Set* m_pSet;

// 特性
public:
	CWeek13Class1Doc* GetDocument() const;

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
	virtual ~CWeek13Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString name;
	CString number;
	CString age;
	CString phone;
	CString pic;
};

#ifndef _DEBUG  // Week13Class1View.cpp 中的调试版本
inline CWeek13Class1Doc* CWeek13Class1View::GetDocument() const
   { return reinterpret_cast<CWeek13Class1Doc*>(m_pDocument); }
#endif

