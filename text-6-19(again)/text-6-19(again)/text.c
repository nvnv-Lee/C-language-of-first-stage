#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("********************************\n");
	printf("*********1.play  0.exit*********\n");
	printf("********************************\n");
}
void game()
{
	//数组用来存放棋盘信息
	char board[ROW][COL] = { 0 };
	//棋盘初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了，游戏结束\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了，游戏结束\n");
	}
	else if (ret == 'Q')
	{
		printf("平局，游戏结束\n");
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("三子棋游戏开始\n");
			game();
			break;
		default:
			printf("选择错误，请重新选择:>");
			break;
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}