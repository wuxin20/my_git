#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void 	koujuebiao(int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= x ;i++)
		{
			for (j = 1; j <= y; j++)
				printf("%-2d*%-2d=%-5d", i,j,i*j);
			printf("%\n");
	}
}

	int main()
{
	int a = 0;
	int b = 0;
	printf("请输入乘法口诀表的行和列;");
	scanf("%d %d", &a, &b);
	koujuebiao(a, b);
	system("pause");
	getchar();
	return 0;
}




//2.使用函数实现两个数的交换。


#include <stdio.h>
#include <stdlib.h>

void Swap(int* p1, int* p2)
{
	*p1 = *p1^*p2;
	*p2 = *p1^*p2;
	*p1 = *p1^*p2;
}

int main()
{
	int a = 5;
	int b = 7;
	printf("请输入需要操作的数;\n");
	scanf("%d %d", &a, &b);
	Swap(&a,&b);
	printf("a=%d,b=%d",a, b);
	system("pause");
	return 0;
}




//3.实现一个函数判断year是不是润年。

#include <stdio.h>
#include <stdlib.h>


int si_leap_year(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (si_leap_year(year) == 1)
		{
			printf(" %d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	system("pause ");
	return 0;
}




//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。


#include <stdio.h>
#include <stdlib.h>

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
	}
}

void empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int i = 0;
	int left = 0;
	int right = sz - 1;
	for (i = 0; i < sz; i++)
	{
		while (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[5];
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请对数组进行初始化：\n");
	init(arr, sz);
	printf("\n");
	printf("请对数组进行逆序：\n");
	reverse(arr, sz);
	printf("\n");
	printf("请清空数组：\n");
	empty(arr, sz);
	printf("\n");
	system("pause ");
	return 0;
}




//5.实现一个函数，判断一个数是不是素数。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if(is_prime(i)==1)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
}

