#define _CRT_SECURE_NO_WARNINGS 1
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����

//2. ����������ʱ���������������������ݣ������⣩

#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a=3;
	int b=7;
	int c = 0;
	//if (c = a + b)
	//{
	//	a = b;
 //       		b = c - a;
	//	printf("a=%d,b=%d", a, b);
	//}
	if (a = a^b)
	{
		b = a^b;
		a = a^b;
		printf("a=%d,b=%d", a, b);
	}
	system("pause");
	return 0;
}

#if 0
//3.��10 �����������ֵ��
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a, max, i;
	scanf("%d", &a);
		max = a;
		for (i = 1; i < 10; i++)
		{
			scanf("%d", &a);
			if (max < a)
				max = a;
		}
	printf("max=%d\n", max);
	system("pause ");
	return 0;
}

//4.�����������Ӵ�С�����
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a, b, c,t;
	printf("������Ҫ���������\n");
	scanf("%d, %d, %d",&a,&b,&c);
	if (a<b) 
	{
		t = a;   a = b;   b = t; 
	}   
	if (a<c)   	
	{ 
		t = a;  
		a = c; 
		c = t;
	}   	
	if (b<c)   
	{ 
		t = b;  
		b = c;  
		c = t;
	}	
	printf("\n%d, %d, %d\n", a, b, c);
    system("pause");
	return 0;
}




//5.�������������Լ����

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j,temp;
	printf("������Ҫ���������\n");
	scanf("%d, %d", &i, &j);
	if (i<j)
	{
		temp = i;
		i = j;
		j = temp;

	}
	while (i%j != 0)
	{
		temp = i%j;
		i = j;
		j = temp;
	}
	printf("���Լ��Ϊ��%d\n", j);
	system("pause");
	return 0;
}



#endif

