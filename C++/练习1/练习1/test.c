#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int ret = 0;
	int count = 0;
	int n = 0;
	printf("请输入数字！");
	scanf("%d",&n);
	while (0 != n)
	{
		int temp = n % 10;
		n = n / 10;
		ret = ret * 10 + temp;
		if (ret<-pow(2,31)||ret >pow(2,31)-1)
		{
			printf("%d\n", ret);
			system("pause");
			return ret;
		}

	}


	printf("%d\n", ret);
	printf("%d\n", n);
	system("pause");
	return 0;
}

#endif


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, a, b, c;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		j = a*a*a + b*b*b + c*c*c;
		if (i == j)
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("\n水仙花数的个数为count=%d\n", count);
	system("pause");
	return 0;
}