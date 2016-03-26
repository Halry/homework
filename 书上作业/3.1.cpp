#include <stdafx.h>
#include <Math.h>
#define PI 3.14
double radius, area, l1;
int main()
{
	printf("Enter radius:");
	scanf("%lf", &radius);
		area = pow(radius, 2)*PI;
		l1=2*PI*radius;
		printf("Area is %lf,long:%lf", area,l1);
	while (1);
}