
// Week13Class2View.h : CWeek13Class2View 类的接口
//

#pragma once

class CWeek13Class2Set;

class CWeek13Class2View : public CRecordView
{
protected: // 仅从序列化创建
	CWeek13Class2View();
	DECLARE_DYNCREATE(CWeek13Class2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13CLASS2_FORM };
#endif
	CWeek13Class2Set* m_pSet;

// 特性
public:
	CWeek13Class2Doc* GetDocument() const;

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
	virtual ~CWeek13Class2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString number;
	CString age;
	CString phone;
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // Week13Class2View.cpp 中的调试版本
inline CWeek13Class2Doc* CWeek13Class2View::GetDocument() const
   { return reinterpret_cast<CWeek13Class2Doc*>(m_pDocument); }
#endif

