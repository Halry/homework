#include "stdafx.h"

int main()
{
	int in, c,t;
	printf("Enter:");
	scanf("%d", &in);
	printf("%d%d%d", in % 10, (in % 100) / 10, (in % 1000) / 100);
	while (1);
}