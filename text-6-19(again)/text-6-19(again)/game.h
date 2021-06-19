#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerBoard(char board[ROW][COL], int row, int col);
void ComputerBoard(char board[ROW][COL], int row, int col);

//�ж�˭Ӯ
//����*����ʾ���Ӯ
//����#����ʾ����Ӯ
//����Q����ʾƽ��
//����C����ʾ��Ϸ����
char IsWin(char board[ROW][COL],int row,int col);

//�ж������Ƿ�����,����1��ʾ�������ˣ�����0��ʾ����û��
int IsFull(char board[ROW][COL], int row, int col);