#define _CRT_SECURE_NO_WARNINGS 1
//1.��ɿ����е�ɨ�׳��򣬲��Ż���
//1>��һ�����ӣ���ը����
//2>������Χû�ף�����ʵ��չ����
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

	SetMine(mine, ROW, COL); //������
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL); 
	FindMine(mine, show, ROW, COL); //�Ų���
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}


//2.д���ͷ����ң�������Ⱥ��