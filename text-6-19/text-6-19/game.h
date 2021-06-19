#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//告诉我们游戏的四种状态：玩家赢、电脑赢、平局、游戏继续
//假设返回“*”表示玩家赢
//假设返回“#”表示电脑赢
//假设返回“Q”表示平局
//假设返回“C”表示游戏继续
char IsWin(char board[ROW][COL], int row, int col);
//返回1表示棋盘满了，返回0表示棋盘没满，游戏继续
int IsFull(char board[ROW][COL], int row, int col);