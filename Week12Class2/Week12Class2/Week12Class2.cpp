// Week12Class2.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Week12Class2.h"


// ���ǵ���������һ��ʾ��
WEEK12CLASS2_API int nWeek12Class2=0;

// ���ǵ���������һ��ʾ����
WEEK12CLASS2_API int fnWeek12Class2(void)
{
    return 42;
}


WEEK12CLASS2_API int factorial(int n)
{
	int r = 1, i;
	for (i = n; i > 0; i--)
	{
		r = r*i;
	}
	return r;
}



WEEK12CLASS2_API float convert(float deg)
{
	float h;
	h = deg / 180 * (float)3.14;
	return h;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Week12Class2.h
CWeek12Class2::CWeek12Class2()
{
    return;
}
