
// Week14TestClassDoc.h : CWeek14TestClassDoc ��Ľӿ�
//


#pragma once
#include "Week14TestClassSet.h"


class CWeek14TestClassDoc : public CDocument
{
protected: // �������л�����
	CWeek14TestClassDoc();
	DECLARE_DYNCREATE(CWeek14TestClassDoc)

// ����
public:
	CWeek14TestClassSet m_Week14TestClassSet;

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
	virtual ~CWeek14TestClassDoc();
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
