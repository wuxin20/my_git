#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("***   三子棋小游戏    ***\n");
	printf("***   1.开始游戏      ***\n");
	printf("***   0.退出游戏      ***\n");
	printf("*************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);  //初始化棋盘
	DisplayBoard(board, ROW, COL);  //打印棋盘

	while (1)  //玩家和电脑每落一子，都要判断输赢
	{
		ComputerMove(board, ROW, COL);  //电脑先手落子
		DisplayBoard(board, ROW, COL);  //打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		PlayerMove(board, ROW, COL);  //玩家落子
		DisplayBoard(board, ROW, COL);  //打印棋盘
		ret = IsWin(board, ROW, COL);  //判断输赢
		if (ret != 'C')
			break;
	}

	if (ret == '*')
	{
		printf("恭喜你，你赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
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
		printf("请选择：");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
		}
	} while (select != 2);
}

int main()
{
	test();
	system("pause");
	return 0;
}
