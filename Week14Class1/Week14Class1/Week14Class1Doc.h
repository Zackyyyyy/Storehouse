
// Week14Class1Doc.h : CWeek14Class1Doc ��Ľӿ�
//


#pragma once
#include "Week14Class1Set.h"


class CWeek14Class1Doc : public CDocument
{
protected: // �������л�����
	CWeek14Class1Doc();
	DECLARE_DYNCREATE(CWeek14Class1Doc)

// ����
public:
	CWeek14Class1Set m_Week14Class1Set;

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
	virtual ~CWeek14Class1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ�����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};