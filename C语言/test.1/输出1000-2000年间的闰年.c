#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
//1.�ܱ�4���������ܱ�100����
//2.�ܱ�400����  ��������������һ���������꣩
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


