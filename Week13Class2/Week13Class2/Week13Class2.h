
// Week13Class2.h : Week13Class2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek13Class2App:
// �йش����ʵ�֣������ Week13Class2.cpp
//

class CWeek13Class2App : public CWinApp
{
public:
	CWeek13Class2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek13Class2App theApp;
