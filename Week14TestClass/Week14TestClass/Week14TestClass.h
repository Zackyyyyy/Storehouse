
// Week14TestClass.h : Week14TestClass Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek14TestClassApp:
// �йش����ʵ�֣������ Week14TestClass.cpp
//

class CWeek14TestClassApp : public CWinApp
{
public:
	CWeek14TestClassApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek14TestClassApp theApp;
