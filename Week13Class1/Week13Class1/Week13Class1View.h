
// Week13Class1View.h : CWeek13Class1View ��Ľӿ�
//

#pragma once

class CWeek13Class1Set;

class CWeek13Class1View : public CRecordView
{
protected: // �������л�����
	CWeek13Class1View();
	DECLARE_DYNCREATE(CWeek13Class1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK13CLASS1_FORM };
#endif
	CWeek13Class1Set* m_pSet;

// ����
public:
	CWeek13Class1Doc* GetDocument() const;

// ����
public:

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
	virtual ~CWeek13Class1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // Week13Class1View.cpp �еĵ��԰汾
inline CWeek13Class1Doc* CWeek13Class1View::GetDocument() const
   { return reinterpret_cast<CWeek13Class1Doc*>(m_pDocument); }
#endif

