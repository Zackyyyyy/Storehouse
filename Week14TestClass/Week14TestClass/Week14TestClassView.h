
// Week14TestClassView.h : CWeek14TestClassView ��Ľӿ�
//

#pragma once

class CWeek14TestClassSet;

class CWeek14TestClassView : public CRecordView
{
protected: // �������л�����
	CWeek14TestClassView();
	DECLARE_DYNCREATE(CWeek14TestClassView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14TESTCLASS_FORM };
#endif
	CWeek14TestClassSet* m_pSet;

// ����
public:
	CWeek14TestClassDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CWeek14TestClassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	double number;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // Week14TestClassView.cpp �еĵ��԰汾
inline CWeek14TestClassDoc* CWeek14TestClassView::GetDocument() const
   { return reinterpret_cast<CWeek14TestClassDoc*>(m_pDocument); }
#endif

