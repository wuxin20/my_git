#define _CRT_SECURE_NO_WARNINGS 1
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ret = 0;
	for (ret = 'A'; ret <= 'D'; ret++)
	{
		if (((ret != 'A') + (ret == 'C') + (ret == 'D') + (ret != 'D')) == 3)
		{
			printf("凶手是%c\n", ret);
		}
	}
	system("pause");
	return 0;
}
*/
//3.在屏幕上打印杨辉三角。
//   1
//  1 1
// 1 2 1
//1 3 3 1

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	printf("请输入杨辉三角的行数:\n");
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
