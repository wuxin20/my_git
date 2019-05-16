#define _CRT_SECURE_NO_WARNINGS 1
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sz = 0;
	int  arr[] = { 1, 1, 2, 2, 3, 4, 5, 5 };
	sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = 0;
		for (j = 0; j < sz; j++)
		{
			if ((arr[i] == arr[j]) && (i != j))
			{
				ret = 1;
			}
		}
		if (ret == 0)
		{
			printf("%d\n", arr[i]);
		}
	}
	system("pause");
	return 0;
}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money = 0;
	printf("请输入金钱是多少元:\n");
	scanf("%d", &money);
	int i = money;
	int j = money;
	while (i >= 2)
	{
		j += i / 2;	
		i = i / 2 + i % 2; 
	}	
	printf("你可以喝 %d 瓶饮料\n",j);
	system("pause");
	return 0;
}

//3.模拟实现strcpy

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void my_strcpy(char *dest,const char *str)
{
	assert(str);
	while (*dest++ = *str++)
	{
		;
	}

}

int main()
{
	char arr[20] = { 0 };
	my_strcpy(arr,"hello every");
	printf("%s", arr);
	system("pause");
	return 0;
}


//4.模拟实现strcat

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strcat(char *dest, const char *str)
{
	char *ret = dest;
	assert(dest);
	assert(str);
	while (*dest)
	{
		dest++;	
	}
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[20] = "hello ";
	printf("%s",my_strcat(arr,"every"));
	system("pause");
	return 0;
}
