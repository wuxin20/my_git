#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

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
	printf("������˷��ھ�����к���;");
	scanf("%d %d", &a, &b);
	koujuebiao(a, b);
	system("pause");
	getchar();
	return 0;
}




//2.ʹ�ú���ʵ���������Ľ�����


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
	printf("��������Ҫ��������;\n");
	scanf("%d %d", &a, &b);
	Swap(&a,&b);
	printf("a=%d,b=%d",a, b);
	system("pause");
	return 0;
}




//3.ʵ��һ�������ж�year�ǲ������ꡣ

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
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��


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
	printf("���������г�ʼ����\n");
	init(arr, sz);
	printf("\n");
	printf("��������������\n");
	reverse(arr, sz);
	printf("\n");
	printf("��������飺\n");
	empty(arr, sz);
	printf("\n");
	system("pause ");
	return 0;
}




//5.ʵ��һ���������ж�һ�����ǲ���������

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

