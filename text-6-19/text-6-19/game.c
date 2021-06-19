#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h" 
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row;i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.打印第一行的数据
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//printf(" %c | %c | %c \n",board[i][0]),board[i][1],board[i][2];
		//2.打印分隔行
		if (i < row - 1)
		{
			//printf("---|---|---\n");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d %d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入");
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] ==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//返回1表示棋盘满了，返回0表示棋盘没满，游戏继续
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//棋盘没有填满
		}
	}
	return 1;//棋盘已经被下满
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int ret = IsFull(board, row, col);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2])
					return board[i][j];
				else if (board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j])
					return board[i][j];
				else if (board[i][j] == board[i+1][j+1] && board[i][j] == board[i+2][j+2])
					return board[i][j];
				else if (board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2])
					return board[i][j];
				else if (ret== 1)
					return 'Q';
				else
					return 'C';
			}
		}
	}
}