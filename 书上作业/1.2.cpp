#include "stdafx.h"
int integer(int n)
{
	int i = 0;
	for (; n != 0; n--)
	{
		if (n % 2 != 0)
		{
			i = i + n;
		}
	}
	return i;
}
int main()
{
	int in, out;
	printf("Enter:");
	scanf("%d", &in);
	out = integer(in);
	printf("Output:%d", out);
	while (1);
	return 0;
}

