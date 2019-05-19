#define _CRT_SECURE_NO_WARNINGS 1
//1.模拟实现strncpy

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void *my_strncpy(void *dest, const void *src, size_t count)
{
	assert(dest || src);
	char *ret = dest;
	while (count--)
	{
		*((char *)dest)++ = *((char *)src)++;
	}
	*((char *)dest) = 0;
	return ret;
}

int main()
{
	char arr1[10] = "abcdefg";
	char arr2[20] = { 0 };
	my_strncpy(arr2, "hello word!",1);
	printf("%s", arr2);
	system("pause");
	return 0;
}

//2.模拟实现strncat
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void *my_strncat(void *dest, const void *src, size_t count)
{
	assert(dest || src);
	char *ret = dest;
	while ((*(char *)dest))
	{
		((char *)dest)++;
	}
	while (count--)
	{
		*((char *)dest) = *((char *)src);
		((char *)dest)++;
		((char *)src)++;
	}
	*((char *)dest) = 0;
	return ret;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "word!";
	my_strncat(arr1,arr2, 2);
	printf("%s", arr1);
	system("pause");
	return 0;
}
*/
//3.模拟实现strncmp
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//int strncmp(const char *string1, const char *string2, size_t count);
void *my_strncmp(const void *dest, const void *src, size_t count)
{
	assert(dest || src);
	while (count--)
	{
		if ((*((char *)dest)) == (*((char *)src)))
		{
			((char *)dest)++;
			((char *)src)++;
		}
		else
			return *((char *)dest) - *((char *)src);
	}
	
}

int main()
{
	char arr1[] = "abcdf";
	char arr2[] = "abcdfe";
	printf("%d", my_strncmp(arr1, arr2, 6));
	system("pause");
	return 0;
}
*/