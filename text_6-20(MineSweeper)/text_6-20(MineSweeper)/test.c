#define _CRT_SECURE_NO_WARNINGS  
#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("********1.play   0.exit********\n");
	printf("*******************************\n");
}
void game()
{
	printf("扫雷\n");
	//数组-雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	//扫雷
	FindMine(mine,show, ROW, COL);//布置雷的棋盘中查找信息，找到的雷的信息打印到排查雷的棋盘中

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始扫雷游戏\n");
			game();
			break;
		default:
			printf("输入错误，请重新输入\n");
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