#define _CRT_SECURE_NO_WARNINGS 1
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

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

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money = 0;
	printf("�������Ǯ�Ƕ���Ԫ:\n");
	scanf("%d", &money);
	int i = money;
	int j = money;
	while (i >= 2)
	{
		j += i / 2;	
		i = i / 2 + i % 2; 
	}	
	printf("����Ժ� %d ƿ����\n",j);
	system("pause");
	return 0;
}

//3.ģ��ʵ��strcpy

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


//4.ģ��ʵ��strcat

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
