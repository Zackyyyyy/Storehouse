
// Week13TestClass1Doc.h : CWeek13TestClass1Doc ��Ľӿ�
//


#pragma once
#include "Week13TestClass1Set.h"


class CWeek13TestClass1Doc : public CDocument
{
protected: // �������л�����
	CWeek13TestClass1Doc();
	DECLARE_DYNCREATE(CWeek13TestClass1Doc)

// ����
public:
	CWeek13TestClass1Set m_Week13TestClass1Set;

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
	virtual ~CWeek13TestClass1Doc();
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
