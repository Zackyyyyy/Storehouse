
// Week14Class1View.h : CWeek14Class1View ��Ľӿ�
//

#pragma once

class CWeek14Class1Set;

class CWeek14Class1View : public CRecordView
{
protected: // �������л�����
	CWeek14Class1View();
	DECLARE_DYNCREATE(CWeek14Class1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK14CLASS1_FORM };
#endif
	CWeek14Class1Set* m_pSet;

// ����
public:
	CWeek14Class1Doc* GetDocument() const;
	void draw_pic(CString file);
// ����
public:
	CString path;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CWeek14Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // Week14Class1View.cpp �еĵ��԰汾
inline CWeek14Class1Doc* CWeek14Class1View::GetDocument() const
   { return reinterpret_cast<CWeek14Class1Doc*>(m_pDocument); }
#endif

