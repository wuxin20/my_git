#define _CRT_SECURE_NO_WARNINGS 1
//1.��ɲ�������Ϸ��

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
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
			    printf("ѡ�����\n");
				break;
		}


	} while (input );
	system("pause");
	return 0;
}


*/
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�


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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���:%d\n", ret);
	}
    system("pause ");
	return 0;
}

//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������,����������\n");
		}
	}
	if (i == 2)
		printf("����������������˳�����\n");
	system("pause ");
	return 0;
}

//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������


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








