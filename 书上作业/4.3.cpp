// zuoye.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	printf("Enter:");
	int t, c,b;
	scanf("%d", &t);
	c = 1;
	b = t;
	while (b >= 10)
	{
		b = b / 10;
		c++;
	}
	printf("��%dλ��\n", c);
	printf("����λ%d,����λ%d,�ڶ�λ%d,��һλ%d\n",(t%10000)/1000 , (t % 1000) / 100, (t % 100) / 10, t % 10);
	printf("Reverse Output : %d%d%d%d", t % 10, (t % 100) / 10, (t % 1000) / 100, (t % 10000) / 1000);
	while (1);
    return 0;
}

