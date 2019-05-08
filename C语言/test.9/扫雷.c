#define _CRT_SECURE_NO_WARNINGS 1
//1.完成课堂中的扫雷程序，并优化：
//1>第一次下子，不炸死。
//2>坐标周围没雷，可以实现展开。
#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void menu()
{
	printf("***********************\n");
	printf("*** 1.play   0.exit ***\n");
	printf("***********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	SetMine(mine, ROW, COL); //布置雷
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL); 
	FindMine(mine, show, ROW, COL); //排查雷
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择！\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}


//2.写博客发给我，并分享到群里