#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("***   ������С��Ϸ    ***\n");
	printf("***   1.��ʼ��Ϸ      ***\n");
	printf("***   0.�˳���Ϸ      ***\n");
	printf("*************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);  //��ʼ������
	DisplayBoard(board, ROW, COL);  //��ӡ����

	while (1)  //��Һ͵���ÿ��һ�ӣ���Ҫ�ж���Ӯ
	{
		ComputerMove(board, ROW, COL);  //������������
		DisplayBoard(board, ROW, COL);  //��ӡ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		PlayerMove(board, ROW, COL);  //�������
		DisplayBoard(board, ROW, COL);  //��ӡ����
		ret = IsWin(board, ROW, COL);  //�ж���Ӯ
		if (ret != 'C')
			break;
	}

	if (ret == '*')
	{
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int select = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
		}
	} while (select != 2);
}

int main()
{
	test();
	system("pause");
	return 0;
}
