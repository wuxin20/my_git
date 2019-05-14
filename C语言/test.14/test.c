#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
	printf("请输入字符串:\n");
	scanf("%s", &arr);
	printf("请输入左旋字符的个数:\n");
	scanf("%d", &k);
	int len = strlen(arr);
	leftmove(arr, len, k);
	printf("操作后的字符串：\n%s\n", arr);
}

int main()
{
	text();
	system("pause");
	return 0; 
}


//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

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
	printf("请输入需要判断的两个字符串:\n");
	scanf("%s", &s1);
	printf("请输入需要判断的两个字符串:\n");
	scanf("%s", &s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == len2)
	{
		if (Find(s1, s2, len1))
		{
			printf("返回值:1\n");
			return 1;
		}
		else
			printf("返回值:0\n");
		return 0;
	}
	else
		printf("返回值:0\n");
		return 0;
}

int main()
{
	text();
	system("pause");
	return 0;
}