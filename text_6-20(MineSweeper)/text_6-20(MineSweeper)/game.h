#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80//�׵ĸ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);
//ɨ�ף������׵������в�����Ϣ���ҵ����׵���Ϣ��ӡ���Ų��׵�������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//��������������Χ8���������м�����
int Getmine_count(char mine[ROWS][COLS],int x,int y);
