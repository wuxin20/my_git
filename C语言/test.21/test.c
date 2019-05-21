#define _CRT_SECURE_NO_WARNINGS 1


//2.练习动态内存开辟
//malloc
//calloc
//realloc
//free
//函数

#if 0

#include <stdio.h>
#include <malloc.h>

int main()
{

	int num = 0;
	scanf("%d", &num);
	int arr[num] = { 0 };

	int ptr = NULL;
	ptr = (int*)malloc(num*sizeof(int));
	if (NULL != ptr)
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);
	ptr = NULL;
	return 0;
}


#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = calloc(10, sizeof(int));
	if (NULL != p)
	{

	}
	free(p);
	p = NULL;
	return 0;
}

#endif

#if 0
#include <stdio.h>

int main()
{
	int *ptr = malloc(100);
	if (ptr!= NULL)
	{

	}
	else
	{
		exit(0);
	}

	ptr = realloc(ptr, 1000);

	int*p = NULL;
	p = realloc(ptr, 1000);
	if (p != NULL)
	{
		ptr = p;
	}
	free(ptr);

	return 0;
}

#endif