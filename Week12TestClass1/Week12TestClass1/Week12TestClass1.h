
// Week12TestClass1.h : Week12TestClass1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek12TestClass1App:
// �йش����ʵ�֣������ Week12TestClass1.cpp
//

class CWeek12TestClass1App : public CWinAppEx
{
public:
	CWeek12TestClass1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek12TestClass1App theApp;
