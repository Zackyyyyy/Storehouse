
// Week14Class1View.h : CWeek14Class1View 类的接口
//

#pragma once

class CWeek14Class1Set;

class CWeek14Class1View : public CRecordView
{
protected: // 仅从序列化创建
	CWeek14Class1View();
	DECLARE_DYNCREATE(CWeek14Class1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14CLASS1_FORM };
#endif
	CWeek14Class1Set* m_pSet;

// 特性
public:
	CWeek14Class1Doc* GetDocument() const;
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
	virtual ~CWeek14Class1View();
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
	CString number;
	CString age;
	afx_msg void OnPaint();
	CString lj;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // Week14Class1View.cpp 中的调试版本
inline CWeek14Class1Doc* CWeek14Class1View::GetDocument() const
   { return reinterpret_cast<CWeek14Class1Doc*>(m_pDocument); }
#endif

