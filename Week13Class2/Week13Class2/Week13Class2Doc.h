
// Week13Class2Doc.h : CWeek13Class2Doc ��Ľӿ�
//


#pragma once
#include "Week13Class2Set.h"


class CWeek13Class2Doc : public CDocument
{
protected: // �������л�����
	CWeek13Class2Doc();
	DECLARE_DYNCREATE(CWeek13Class2Doc)

// ����
public:
	CWeek13Class2Set m_Week13Class2Set;

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
	virtual ~CWeek13Class2Doc();
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
