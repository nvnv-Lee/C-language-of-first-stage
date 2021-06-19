#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerBoard(char board[ROW][COL], int row, int col);
void ComputerBoard(char board[ROW][COL], int row, int col);

//判断谁赢
//返回*，表示玩家赢
//返回#，表示电脑赢
//返回Q，表示平局
//返回C，表示游戏继续
char IsWin(char board[ROW][COL],int row,int col);

//判断棋盘是否满了,返回1表示棋盘满了，返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col);