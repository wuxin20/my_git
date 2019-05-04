#define _CRT_SECURE_NO_WARNINGS 1
//1. 给定两个整形变量的值，将两个值的内容进行交换。

//2. 不允许创建临时变量，交换两个数的内容（附加题）

#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a=3;
	int b=7;
	int c = 0;
	//if (c = a + b)
	//{
	//	a = b;
 //       		b = c - a;
	//	printf("a=%d,b=%d", a, b);
	//}
	if (a = a^b)
	{
		b = a^b;
		a = a^b;
		printf("a=%d,b=%d", a, b);
	}
	system("pause");
	return 0;
}

#if 0
//3.求10 个整数中最大值。
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a, max, i;
	scanf("%d", &a);
		max = a;
		for (i = 1; i < 10; i++)
		{
			scanf("%d", &a);
			if (max < a)
				max = a;
		}
	printf("max=%d\n", max);
	system("pause ");
	return 0;
}

//4.将三个数按从大到小输出。
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a, b, c,t;
	printf("输入需要处理的数：\n");
	scanf("%d, %d, %d",&a,&b,&c);
	if (a<b) 
	{
		t = a;   a = b;   b = t; 
	}   
	if (a<c)   	
	{ 
		t = a;  
		a = c; 
		c = t;
	}   	
	if (b<c)   
	{ 
		t = b;  
		b = c;  
		c = t;
	}	
	printf("\n%d, %d, %d\n", a, b, c);
    system("pause");
	return 0;
}




//5.求两个数的最大公约数。

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j,temp;
	printf("输入需要处理的数：\n");
	scanf("%d, %d", &i, &j);
	if (i<j)
	{
		temp = i;
		i = j;
		j = temp;

	}
	while (i%j != 0)
	{
		temp = i%j;
		i = j;
		j = temp;
	}
	printf("最大公约数为：%d\n", j);
	system("pause");
	return 0;
}



#endif

