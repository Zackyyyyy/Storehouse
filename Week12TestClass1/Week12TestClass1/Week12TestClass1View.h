
// Week12TestClass1View.h : CWeek12TestClass1View ��Ľӿ�
//

#pragma once

class CWeek12TestClass1Set;

class CWeek12TestClass1View : public CRecordView
{
protected: // �������л�����
	CWeek12TestClass1View();
	DECLARE_DYNCREATE(CWeek12TestClass1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_WEEK12TESTCLASS1_FORM };
#endif
	CWeek12TestClass1Set* m_pSet;

// ����
public:
	CWeek12TestClass1Doc* GetDocument() const;

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
	virtual ~CWeek12TestClass1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // Week12TestClass1View.cpp �еĵ��԰汾
inline CWeek12TestClass1Doc* CWeek12TestClass1View::GetDocument() const
   { return reinterpret_cast<CWeek12TestClass1Doc*>(m_pDocument); }
#endif

