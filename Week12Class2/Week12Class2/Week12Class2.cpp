// Week12Class2.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Week12Class2.h"


// 这是导出变量的一个示例
WEEK12CLASS2_API int nWeek12Class2=0;

// 这是导出函数的一个示例。
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

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Week12Class2.h
CWeek12Class2::CWeek12Class2()
{
    return;
}
