
// Week14Class1.h : Week14Class1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek14Class1App:
// �йش����ʵ�֣������ Week14Class1.cpp
//

class CWeek14Class1App : public CWinApp
{
public:
	CWeek14Class1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek14Class1App theApp;
