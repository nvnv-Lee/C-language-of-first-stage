#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//棋盘初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols , char set)
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

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <=col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ",i);//打印行号
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//雷的个数
	while (count)
	{
		//布置雷
		int x = (rand() % row)+1;//1-9
		int y = (rand() % col)+1;//1-9
		if (board[x][y] =='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//计算输入坐标周围8个坐标内有几个雷
int Getmine_count(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	count = mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
	return count;
}
//扫雷，布置雷的棋盘中查找信息，找到的雷的信息打印到排查雷的棋盘中
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	//9*9-10=71
	int x = 0;
	int y = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				DisplayBoard(mine, row, col);//打印布置雷的棋盘
				printf("踩雷，游戏结束\n");
				break;
			}
			else//不是雷，计算输入坐标周围8个坐标内有几个雷
			{
				int count=Getmine_count(mine, x, y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);//打印排雷的棋盘
				win++;

			}
			

		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
	}
}