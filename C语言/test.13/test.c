#define _CRT_SECURE_NO_WARNINGS 1

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�


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
	printf("ԭ����:\n");
	print(arr, sz);
	printf("����������:\n");
	sort(arr, sz);
	system("pause");
	return 0;
}


//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//���飺
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
	printf("������Ҫ���ҵ�����:");
	scanf("%d", &k);
	int arr[3][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	printf("��ά����:\n");
	print(arr,3,3 );
	if (find(arr, k) == 1)
	{
		printf("�ҵ���,%d�������С�\n",k);
	}
	else
		printf("û�ҵ�,%d���������У�\n",k);
	system("pause");
	return 0;
}