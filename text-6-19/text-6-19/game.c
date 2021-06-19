#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h" 
//��ʼ������
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
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.��ӡ��һ�е�����
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//printf(" %c | %c | %c \n",board[i][0]),board[i][1],board[i][2];
		//2.��ӡ�ָ���
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
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d %d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������");
			}
		}
		else
		{
			printf("�������겻�Ϸ�������������");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������:>\n");
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
//����1��ʾ�������ˣ�����0��ʾ����û������Ϸ����
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//����û������
		}
	}
	return 1;//�����Ѿ�������
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