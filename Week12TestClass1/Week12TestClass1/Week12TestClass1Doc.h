
// Week12TestClass1Doc.h : CWeek12TestClass1Doc ��Ľӿ�
//


#pragma once
#include "Week12TestClass1Set.h"


class CWeek12TestClass1Doc : public CDocument
{
protected: // �������л�����
	CWeek12TestClass1Doc();
	DECLARE_DYNCREATE(CWeek12TestClass1Doc)

// ����
public:
	CWeek12TestClass1Set m_Week12TestClass1Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeek12TestClass1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
