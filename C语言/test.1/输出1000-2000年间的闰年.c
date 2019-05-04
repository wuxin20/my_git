#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
//1.能被4整除而不能被100整除
//2.能被400整除  （两个条件满足一个就是闰年）
#include <stdio.h>
int main()
{
	int year;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		/*if (year % 4 == 0 && year % 100 != 0)
			printf("%d\n", year);
		if (year % 400 == 0)
		{
			printf("%d\n", year);
		
		}*/		
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		count++;
		printf("%d\n", year);
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
}


