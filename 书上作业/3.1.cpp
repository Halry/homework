#include <stdafx.h>
#include <Math.h>
#define PI 3.14
double radius, area;
int main()
{
	printf("Enter radius:");
	scanf("%lf", &radius);
	if (radius < 0)
	{
		printf("Are you kidding me?;)");
	}
	else
	{
		area = pow(radius, 2)*PI;
		printf("Area is %lf", area);
	}
	while (1);
}