#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数。
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h >

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入n的大小;\n");
	scanf("%d",&n);
	ret = fib(n);
	printf("fid(n)=%d",ret);
	system("pause ");
	return 0;
}


//2.编写一个函数实现n^k，使用递归实现

#include <stdio.h>
#include <stdlib.h>

int fun(int n, int k)
{
	int sum;
	if (k == 0)
	{
		sum = 1;
	}
	else
	{
		sum = n*fun(n, k - 1);
	}
	return sum;
}

int main()
{
	int n = 0;
	int k = 0;
	int j = 0;
	printf("请分别输入n和k的大小:\n");
	scanf("%d %d", &n, &k);
	fun(n, k);
	printf("sum=%d",fun(n,k));
	system("pause ");
	return 0;
}


//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	int i = 0;
	int sum=0;
    if (n != 0)
	{
		i = n % 10;
		n = n / 10;
		sum = i + DigitSum(n);
	}
	return sum;
}
	
int main()
{
	int n = 0;
	printf("请输入需要处理的数:\n");
	scanf("%d", &n);
	printf("sum=%d\n", DigitSum(n));
	system("pause ");
	return 0;
}
*/

//4. 编写一个函数 reverse_string(char * string)（递归实现）实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数。

#include <stdio.h>
#include <stdlib.h>

void reverse_string(char * string)
{
	if (*string == '\0')
		printf("%c", *string);
	else	
	{
		reverse_string(++string);  //输出下一个字符		
		printf("%c", *(--string));  //因为string已经执行完++，所以若要输出当前字符得--			
	}
	
  
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	system("pause ");
	return 0;
}

/*
//5.递归和非递归分别实现strlen
//递归：
#include<stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + my_strlen(string);
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}

//非递归：
#include<stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
	int count = 0;
	while (*string++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}


//6.递归和非递归分别实现求n的阶乘

#include <stdio.h>
#include <stdlib.h>

//递归：
int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n*fac(n - 1);
	}
}

int main()
{
	int n = 0; 
	int i = 0;
	int sum = 1;
	printf("请输入n的大小;\n");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		sum = sum*i;

	}
	printf("n!=%d\n", sum);
	system("pause ");
	return 0;
}


//7.递归方式实现打印一个整数的每一位

#include <stdio.h >
#include <stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}

int main()
{
	int n = 0;
	printf("请输入需要操作的数:\n");
	scanf("%d", &n);
	print(n);
	system("pause ");
	return 0;
}*/