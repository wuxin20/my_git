#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
//��ʼ������
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
//��ӡ����
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int m = 0, n = 0;
	printf("������ӣ�\n");
	while (1)
	{
		printf("���������ӵ����꣺");
		scanf("%d%d", &m, &n);
		if ((m >= 1) && (m <= row) && (n >= 1) && (n <= col))
		{
			if (board[m - 1][n - 1] == ' ')
			{
				board[m - 1][n - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ�ã�����������\n");

		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}

}
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�������ӣ�\n");
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
	//�ж����Ƿ����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж����Ƿ����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�ж������Խ����Ƿ����
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//�ж�ƽ�֣������Ƿ�����
	if (IsFull(board, ROW, COL) == 1)
	{
		return 'Q';
	}
	return 'C';
}


