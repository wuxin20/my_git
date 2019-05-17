#define _CRT_SECURE_NO_WARNINGS 1
//1.实现strcpy

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strcpy(char *dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return 0;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello every!";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	system("pause");
	return 0;
}

//2.实现strcat

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strcat(char *dest,const char *src)
{
	assert(dest != NULL&&src != NULL);
	char *ret = dest;
	while (*dest )
	{
		dest++;
	}
	while (*src )
	{
		*dest++ = *src++;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "every!";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	system("pause");
	return 0;

}


//3.实现strstr

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strstr(char *dest, const char *src)
{
	assert(dest != NULL&&src != NULL);
	
	while (*dest!=*src)
	{
		*dest++;
	}
	char *ret = dest;
	while (*src)
	{
		if (*dest = *src)
		{
			*dest++;
			*src++;
		}	
	}
	return ret;

}

int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "def";
	printf ("%s",my_strstr(arr1, arr2));
	system("pause");
	return 0;

}


//4.实现strchr

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strchr(char *dest, int k)
{
	assert(dest != NULL);
	while (dest)
	{
		if (*dest == k)
		{
			return dest;
		}	
		dest++;
	}	
	return NULL;
}

int main()
{
	char arr1[] = "abcdefcghijk";
	char arr2[] = "def";
	printf("%s", my_strchr(arr1, 'c'));
	system("pause");
	return 0;
}

//5.实现strcmp

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strcmp(const char *dest, const char *src)
{
	assert(dest != NULL||src != NULL);
	while (*dest++ == *src++)
	{
		if ((*dest=='\0')&&(*src=='\0'))
			return 0;
	}
	return *dest - *src;
}

int main()
{
	char arr1[] = "cdegihs";
	char arr2[] = "cdegih";
	printf ("%d",my_strcmp(arr1,arr2));
	system("pause");
	return 0;
}


//6.实现memcpy

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void *my_memcpy(void *dest, const void *src, int num)
{
	assert(dest != NULL&&src != NULL);
	char *ret = dest;
	while (num--)
	{
		*((char*)dest)++ = *((char*)src)++;
	}
	return ret;
}

int main()
{
	char s1[20] = { 0 };
	char s2[] = "hello every!";
	printf("%s",my_memcpy(s1,s2,5));
	system("pause");
	return 0;
}


//7.实现memmove

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void *my_memmove(void *dest, const void *src, int k)
{
	assert(dest != NULL&&src != NULL);
	char* ret = dest;
	if (dest < src)
	{
		while (k--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		while (k--)
		{
			*((char*)dest + k) = *((char*)src + k);
		}
	}
	return ret;
}

int main()
{
	int s1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%d", my_memmove(s1,s1-1,3));
	system("pause");
	return 0;
}

  