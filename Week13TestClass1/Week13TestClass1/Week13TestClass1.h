
// Week13TestClass1.h : Week13TestClass1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek13TestClass1App:
// �йش����ʵ�֣������ Week13TestClass1.cpp
//

class CWeek13TestClass1App : public CWinApp
{
public:
	CWeek13TestClass1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek13TestClass1App theApp;
