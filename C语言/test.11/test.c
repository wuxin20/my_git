#define _CRT_SECURE_NO_WARNINGS 1
//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	for (int A = 1; 
		A < 6; A++)	
	{ 
		for (int B = 1; B < 6; B++)	
		{ 
			for (int C = 1; C < 6; C++)	
			{ 
				for (int D = 1; D < 6; D++)	
				{ 
					for (int E = 1; E < 6; E++)		
					{ 
						if ((((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1)
							&& ((C == 1) + (D == 2) == 1) && ((C == 5) + (D == 3) == 1) 
							&& ((E == 4) + (A == 1) == 1)) && (A * B * C * D * E == 120))	
						{ 
							printf("A= %d B= %d C=%d D=%d E=%d", A, B, C, D, E);	
							printf("\n"); 
						} 
					}
				}
			}
		}
	}	
	system("pause");	
	return 0;
}



//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ret = 0;
	for (ret = 'A'; ret <= 'D'; ret++)
	{
		if (((ret != 'A') + (ret == 'C') + (ret == 'D') + (ret != 'D')) == 3)
		{
			printf("������%c\n", ret);
		}
	}
	system("pause");
	return 0;
}
*/
//3.����Ļ�ϴ�ӡ������ǡ�
//   1
//  1 1
// 1 2 1
//1 3 3 1

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	printf("������������ǵ�����:\n");
	scanf("%d", &k);
	int arr[100][100] = { 0 };	
	int i = 0;	
	for (i = 0; i < k; i++)
	{
		int m = 0;
		for (m = 0; m < k - i; m++)
		{
			printf("  ");
		}
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if ((0 == j) || (i == j))
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
