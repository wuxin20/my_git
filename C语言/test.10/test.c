#define _CRT_SECURE_NO_WARNINGS 1

//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
/*
#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int vlaue)
{
	int count = 0;
	while (vlaue)
	{
		if (vlaue % 2 == 1)
			count++;
			vlaue=vlaue / 2;
	}
	return count;
}

int main()
{
	int num = 0;
	printf("请输入需要操作的数字:>\n");
	scanf("%d", &num);
	int ret = count_one_bits(num);
	printf("ret=%d", ret);
	system("pause");
	return 0;
}
*/
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
/*
#include <stdio.h>
#include <stdlib.h>

void print_num(unsigned value)
{
	int count = 0;
	int a[32] = { 0 };
	int i = 0;
	while (value)
	{
		a[i++] = value % 2;
		value = value / 2;
		count++;
	}
	for (; count < 32; count++)
	{
		i++;
		a[i] = 0;
	}
	printf("奇数序列:");
	for (i = count-2; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("偶数序列:");
	for (i = count - 1; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

int main()
{
	int num = 0;
	printf("请输入需要处理的数:>");
	scanf("%d", &num);
	print_num(num);

	system("pause");
	return 0;
}
*/

//3. 输出一个整数的每一位。
/*
#include <stdio.h>
#include <stdlib.h>

void print(int n)
{
	int i = 0;
	while (n)
	{
		i = n % 10;
		n /= 10;
		printf("%d ", i);
	}
}

int main()
{
	int num = 0;
	printf("请输入需要处理的数:>");
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}
*/

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
/*
#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
			count++;
		value /= 2;
	}
	return count;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入需要处理的数:>");
	scanf("%d%d", &a, &b);
	c = a^b;
	int ret = count_one_bits(c);
	printf("ret=%d",ret);
	system("pause");
	return 0;
}
*/
