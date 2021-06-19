#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//����������Ϸ������״̬�����Ӯ������Ӯ��ƽ�֡���Ϸ����
//���践�ء�*����ʾ���Ӯ
//���践�ء�#����ʾ����Ӯ
//���践�ء�Q����ʾƽ��
//���践�ء�C����ʾ��Ϸ����
char IsWin(char board[ROW][COL], int row, int col);
//����1��ʾ�������ˣ�����0��ʾ����û������Ϸ����
int IsFull(char board[ROW][COL], int row, int col);