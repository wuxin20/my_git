#include <stdlib.h>	
#include<stdio.h>
int main()
{

	int a, b, c;
	printf("请输入乘法口诀的范围");
	scanf("%d", &c);
	{
		for (a = 1; a <= c; a++)
		{
			for (b = 1; b <= a; b++)
				printf("%-2d*%-2d=%-5d", a, b, a*b);
			printf("%\n");
		}
	}
	system("pause");
	return 0;
}


