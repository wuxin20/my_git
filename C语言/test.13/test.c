#define _CRT_SECURE_NO_WARNINGS 1

//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后


#include <stdio.h>
#include <stdlib.h>

int sort(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%d ",arr[i]);
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
void print(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{

	int arr[10] = {1,2,3,4,5,6,7,8,9,10};	
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("原数组:\n");
	print(arr, sz);
	printf("处理后的数组:\n");
	sort(arr, sz);
	system("pause");
	return 0;
}


//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>
#include <stdlib.h>

void print(int arr[3][3],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

int  find(int arr[3][3],int k)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] == k)
				ret = 1;
		}
	}
	return ret;

}

int main()
{
	int k = 0;
	printf("请输入要查找的数字:");
	scanf("%d", &k);
	int arr[3][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	printf("二维数组:\n");
	print(arr,3,3 );
	if (find(arr, k) == 1)
	{
		printf("找到了,%d在数组中。\n",k);
	}
	else
		printf("没找到,%d不在数组中！\n",k);
	system("pause");
	return 0;
}