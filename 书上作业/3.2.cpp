

#include <stdafx.h>

double c, f;
int main()
{
	printf("Enter F:");
	scanf("%lf", &f);
	f = f - 32;
	c = 5 * f / 9;
	printf("Output:%lf\n", c);
	while (1);
	return 1;
}