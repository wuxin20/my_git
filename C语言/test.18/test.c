#define _CRT_SECURE_NO_WARNINGS 1
//7.练习使用qsort函数排序各种类型的数据。
/*
#include<stdio.h>
#include <stdlib.h>


int cmp(const void *a1,const void *a2)
{
	return (*(int *)a1) - (*(int *)a2);
}

int main()
{
	int arr[] = { 9, 8, 7, 5, 4, 1, 2, 6, 3, 0, 11, 15, 16, 20 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(int), cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
*/
//8.模仿qsort的功能实现一个通用的冒泡排序。
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void Print(const void *dest, size_t num)
{
	assert(dest);
	int *ret = dest;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d ", ret[i]);
	}
	printf("\n");
}

int cmp(const void *a1, const void *a2)
{
	return (*(int *)a1) - (*(int *)a2);
}

void swap(void *p1, void *p2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = temp;
	}
}
//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
void my_qsort(void *dest, size_t num, size_t width, int cmp(const void *e1,const void *e2))
{
	assert(dest);
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num-1 - i; j++)
		{
			if (cmp((char *)dest + j*width, (char *)dest + (j + 1)*width)>0)
			{
				swap((char *)dest + j*width, (char *)dest + (j + 1)*width, width);
			}
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 4, 5, 6, 1, 3, 2, 0, 10, 11, 15, 13 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	my_qsort(arr, sz, sizeof(int), cmp);
	Print(arr, sz);
	system("pause");
	return 0;
}
*/