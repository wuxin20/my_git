#define _CRT_SECURE_NO_WARNINGS 1

//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
/*
#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int vlaue)
{
	int count = 0;
	while (vlaue)
	{
		if (vlaue % 2 == 1)
			count++;
			vlaue=vlaue / 2;
	}
	return count;
}

int main()
{
	int num = 0;
	printf("��������Ҫ����������:>\n");
	scanf("%d", &num);
	int ret = count_one_bits(num);
	printf("ret=%d", ret);
	system("pause");
	return 0;
}
*/
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
/*
#include <stdio.h>
#include <stdlib.h>

void print_num(unsigned value)
{
	int count = 0;
	int a[32] = { 0 };
	int i = 0;
	while (value)
	{
		a[i++] = value % 2;
		value = value / 2;
		count++;
	}
	for (; count < 32; count++)
	{
		i++;
		a[i] = 0;
	}
	printf("��������:");
	for (i = count-2; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("ż������:");
	for (i = count - 1; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

int main()
{
	int num = 0;
	printf("��������Ҫ�������:>");
	scanf("%d", &num);
	print_num(num);

	system("pause");
	return 0;
}
*/

//3. ���һ��������ÿһλ��
/*
#include <stdio.h>
#include <stdlib.h>

void print(int n)
{
	int i = 0;
	while (n)
	{
		i = n % 10;
		n /= 10;
		printf("%d ", i);
	}
}

int main()
{
	int num = 0;
	printf("��������Ҫ�������:>");
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}
*/

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
/*
#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
			count++;
		value /= 2;
	}
	return count;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������Ҫ�������:>");
	scanf("%d%d", &a, &b);
	c = a^b;
	int ret = count_one_bits(c);
	printf("ret=%d",ret);
	system("pause");
	return 0;
}
*/
