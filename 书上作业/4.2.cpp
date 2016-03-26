// zuoye.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int year;
	for (year = 2000; year <= 2999; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				if (year % 400 != 0)
				{
					printf("%d\n", year);
				}
			}
		}
	}
	while (1);
    return 0;
}

