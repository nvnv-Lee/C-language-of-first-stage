#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80//雷的个数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//扫雷，布置雷的棋盘中查找信息，找到的雷的信息打印到排查雷的棋盘中
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//计算输入坐标周围8个坐标内有几个雷
int Getmine_count(char mine[ROWS][COLS],int x,int y);
