#define _CRT_SECURE_NO_WARNINGS 1
//1.在屏幕上输出以下图案：
//*                                 
//***                         
//*****                                        
//*******                      
//*********                     
//***********                 
//*************                  
//***********
//*********
//*******
//*****
//***
//*


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=6;
	int i, j;
	for (i = 0; i <= n; i++)//上半部分
	{
		
		for (j = 1; j <= 2 * i + 1; j++)//每行输出的*
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (i = 1; i <= n; i++)//下半部分
	{
		
		for (j = 2 * (n - i) + 1; j>0; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}



//
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/



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
	printf("\ncount=%d\n", count);
	system("pause ");
	return 0;
}

//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int num = 0;
	int sum = 0;
	int ret = 0;
	printf("请输入要操作的数字\n");
	scanf("%d%D",&num, &n);
	 while (n)
	{
		ret = 10 * ret + num;
		sum = sum + ret;
		n--;
	}
	printf("Sn=%d", sum);

	system("pause ");
	return 0;

}