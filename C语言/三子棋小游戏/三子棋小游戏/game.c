#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i< row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int m = 0, n = 0;
	printf("玩家落子：\n");
	while (1)
	{
		printf("请输入落子的坐标：");
		scanf("%d%d", &m, &n);
		if ((m >= 1) && (m <= row) && (n >= 1) && (n <= col))
		{
			if (board[m - 1][n - 1] == ' ')
			{
				board[m - 1][n - 1] = '*';
				break;
			}
			else
				printf("该坐标被占用，请重新落子\n");

		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}

}
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑落子：\n");
	while (1)
	{
		int r1 = rand() % row;
		int r2 = rand() % col;
		if (board[r1][r2] == ' ')
		{
			board[r1][r2] = '#';
			break;
		}
	}
}

static int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i;
	//判断行是否相等
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断列是否相等
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断两个对角线是否相等
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//判断平局，棋盘是否满了
	if (IsFull(board, ROW, COL) == 1)
	{
		return 'Q';
	}
	return 'C';
}


