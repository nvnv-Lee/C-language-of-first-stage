#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//三子棋游戏
void menu()
{
	printf("**************************");
	printf("******1.play  0.exit******");
	printf("**************************");
}
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |   
//游戏的整个算法实现
void game()
{
//数组-存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	char ret = 0;
	while (1)
	{
	//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
	    ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
	printf("玩家赢，游戏结束");
	}
	else if (ret == '#')
	{
	printf("电脑赢，游戏结束");
	}
	else if (ret == 'Q')
	{
	printf("平局，游戏结束");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	//game();
	return 0;
}