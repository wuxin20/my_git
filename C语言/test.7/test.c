#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h >

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("������n�Ĵ�С;\n");
	scanf("%d",&n);
	ret = fib(n);
	printf("fid(n)=%d",ret);
	system("pause ");
	return 0;
}


//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

#include <stdio.h>
#include <stdlib.h>

int fun(int n, int k)
{
	int sum;
	if (k == 0)
	{
		sum = 1;
	}
	else
	{
		sum = n*fun(n, k - 1);
	}
	return sum;
}

int main()
{
	int n = 0;
	int k = 0;
	int j = 0;
	printf("��ֱ�����n��k�Ĵ�С:\n");
	scanf("%d %d", &n, &k);
	fun(n, k);
	printf("sum=%d",fun(n,k));
	system("pause ");
	return 0;
}


//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	int i = 0;
	int sum=0;
    if (n != 0)
	{
		i = n % 10;
		n = n / 10;
		sum = i + DigitSum(n);
	}
	return sum;
}
	
int main()
{
	int n = 0;
	printf("��������Ҫ�������:\n");
	scanf("%d", &n);
	printf("sum=%d\n", DigitSum(n));
	system("pause ");
	return 0;
}
*/

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�������������

#include <stdio.h>
#include <stdlib.h>

void reverse_string(char * string)
{
	if (*string == '\0')
		printf("%c", *string);
	else	
	{
		reverse_string(++string);  //�����һ���ַ�		
		printf("%c", *(--string));  //��Ϊstring�Ѿ�ִ����++��������Ҫ�����ǰ�ַ���--			
	}
	
  
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	system("pause ");
	return 0;
}

/*
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ飺
#include<stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + my_strlen(string);
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}

//�ǵݹ飺
#include<stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
	int count = 0;
	while (*string++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}


//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

#include <stdio.h>
#include <stdlib.h>

//�ݹ飺
int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n*fac(n - 1);
	}
}

int main()
{
	int n = 0; 
	int i = 0;
	int sum = 1;
	printf("������n�Ĵ�С;\n");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		sum = sum*i;

	}
	printf("n!=%d\n", sum);
	system("pause ");
	return 0;
}


//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

#include <stdio.h >
#include <stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}

int main()
{
	int n = 0;
	printf("��������Ҫ��������:\n");
	scanf("%d", &n);
	print(n);
	system("pause ");
	return 0;
}*/