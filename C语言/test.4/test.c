#define _CRT_SECURE_NO_WARNINGS 1
//1.����Ļ���������ͼ����
//*                                 
//***                         
//*****                                        
//*******                      
//*********                     
//***********                 
//*************                  
//***********
//*********
//*******
//*****
//***
//*


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=6;
	int i, j;
	for (i = 0; i <= n; i++)//�ϰ벿��
	{
		
		for (j = 1; j <= 2 * i + 1; j++)//ÿ�������*
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (i = 1; i <= n; i++)//�°벿��
	{
		
		for (j = 2 * (n - i) + 1; j>0; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}



//
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������

/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/



#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, a, b, c;
	int count = 0;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		j = a*a*a + b*b*b + c*c*c;
		if (i == j)
	    {
			count++;
		    printf("%d\n", i);
	    }
	}
	printf("\ncount=%d\n", count);
	system("pause ");
	return 0;
}

//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int num = 0;
	int sum = 0;
	int ret = 0;
	printf("������Ҫ����������\n");
	scanf("%d%D",&num, &n);
	 while (n)
	{
		ret = 10 * ret + num;
		sum = sum + ret;
		n--;
	}
	printf("Sn=%d", sum);

	system("pause ");
	return 0;

}