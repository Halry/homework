// zuoye.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int t, a, b, c, d;
	printf("输入4位数(用半角逗号隔开):");
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (a > d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b > d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c > d)
	{
		t = c;
		c = d;
		d = t;
	}
	printf("由小到大输出 : %d%d%d%d\n", a, b, c, d);
	while (1);
	return 0;
}

