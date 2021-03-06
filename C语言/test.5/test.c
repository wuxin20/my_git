#define _CRT_SECURE_NO_WARNINGS 1
//1.完成猜数字游戏。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
}


void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;

	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand ((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
			    printf("选择错误\n");
				break;
		}


	} while (input );
	system("pause");
	return 0;
}


*/
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）


#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int key, int left, int right)
{
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 7;
	int left = 0;
	int right = sz-1;
	int ret = binary_search(arr, k, left, right);
	if(ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了:%d\n", ret);
	}
    system("pause ");
	return 0;
}

//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误,请重新输入\n");
		}
	}
	if (i == 2)
		printf("三次密码输入错误，退出程序\n");
	system("pause ");
	return 0;
}

//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch = '0';
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= '0' && ch <= '9')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}








