#include <stdafx.h>
#include <Math.h>
#define PI 3.14
double radius, area, long;
int main()
{
	printf("Enter radius:");
	scanf("%lf", &radius);
		area = pow(radius, 2)*PI;
		long=2*PI*radius;
		printf("Area is %lf,long:%lf", area,long);
	while (1);
}