#define _CRT_SECURE_NO_WARNINGS 1

//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[] = { 9, 8, 7, 6, 5, 4, 3, 2 };
	int tmp; 
	int i = 0; 
	for (i = 0;i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{ 
		
		//tmp = arr1[i]; 
		//arr1[i] = arr2[i]; 
		//arr2[i] = tmp; 
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];

	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)  
	{ 
		printf("%d ", arr1[i]); 
	}    
	printf("\n"); 
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{ 
		printf("%d ", arr2[i]); 
	}   
	printf("\n");
	system("pause ");
	return 0;
}



//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0;
	int flag = 1;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum= sum + flag*(1.0/ i);
		flag = -flag;
	}
	printf("sum=%f", sum);
	system("pause ");
	return 0;
}


//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i%10==9)
		{
			count++;
		}
		if (i/10== 9)
		{
			count++;
		}
	}
	printf("count=%d", count);
	system("pause ");
	return 0;
}





















