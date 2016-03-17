#include "stdafx.h"

int main()
{
	char m = 0;
	int c;
	double out,a, b,t;
	a = 1; b = 1; c = 0; out = 0; t = 0;
	printf("Enter:");
	scanf_s("%d", &c);
	for (; c != 0; c--)
	{
		if (m == 0)
		{
			out = out+(a / b);
			t = a;
			a = b;
			b = t + b;
			m = 1;
		}
		else if (m == 1)
		{
			out =out-(a / b);
			t = a;
			a = b;
			b = t + b;
			m = 0;
		}
	}
	printf("Output:%.2lf",out);
	while (1);
	return 0;
}