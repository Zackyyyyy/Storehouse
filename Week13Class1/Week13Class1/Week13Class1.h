
// Week13Class1.h : Week13Class1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek13Class1App:
// �йش����ʵ�֣������ Week13Class1.cpp
//

class CWeek13Class1App : public CWinApp
{
public:
	CWeek13Class1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek13Class1App theApp;