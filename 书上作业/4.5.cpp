// zuoye.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	double salary;
	printf("Enter Salary:");
	scanf("%lf", &salary);
	if (salary < 850)
	{
		printf("tax=0");
	}
	else if (salary < 1350)
	{
		printf("tax=%.2lf", (5 * (salary - 850)) / 100);
	}
	else if (salary < 2850)
	{
		printf("tax=%.2lf", (10 * (salary - 850)) / 100);
	}
	else if (salary < 5850)
	{
		printf("tax=%.2lf", (15 * (salary - 850)) / 100);
	}
	else
	{
		printf("tax=%.2lf", (20 * (salary - 850)) / 100);
	}
	while (1);
	return 0;
}

