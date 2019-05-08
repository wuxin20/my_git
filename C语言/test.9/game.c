#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;

	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			mine[x + i][y + i];
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int win = 0;

	while (win < row*col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断是否为第一步
			if (win == 0)
			{
				if (mine[x][y] == '1')
				{
					mine[x][y] = '0';
					while (1)
					{
						a = rand() % row + 1;
						b = rand() % col + 1;
						if (mine[a][b] == '0')
						{
							mine[a][b] = '1'; //移动雷
							break;
						}
					}
				}
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else 
		{
			printf("输入坐标有误，请重新输入！\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功了！");
		DisplayBoard(mine, row, col);
	}

}