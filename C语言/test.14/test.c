#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
/
#include <stdio.h>
#include <stdlib.h>
#include <strinf.h>

char leftmove(char *str,int len,int k)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		int temp = str[j];
		for (j = 0; j < len-1; j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = temp;
	}

}

void text()
{
	int k = 0;
	char arr[20] = { 0 };
	printf("�������ַ���:\n");
	scanf("%s", &arr);
	printf("�����������ַ��ĸ���:\n");
	scanf("%d", &k);
	int len = strlen(arr);
	leftmove(arr, len, k);
	printf("��������ַ�����\n%s\n", arr);
}

int main()
{
	text();
	system("pause");
	return 0; 
}


//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>



int Find(char *dest, char *str,int len1)
{
	assert(dest&&str);
 	strncat(dest, dest,len1);
	return strstr(dest, str);
}


int text()
{
	char s1[20] = { 0 };
	char s2[20] = { 0 };
	int ret = 0;
	printf("��������Ҫ�жϵ������ַ���:\n");
	scanf("%s", &s1);
	printf("��������Ҫ�жϵ������ַ���:\n");
	scanf("%s", &s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == len2)
	{
		if (Find(s1, s2, len1))
		{
			printf("����ֵ:1\n");
			return 1;
		}
		else
			printf("����ֵ:0\n");
		return 0;
	}
	else
		printf("����ֵ:0\n");
		return 0;
}

int main()
{
	text();
	system("pause");
	return 0;
}