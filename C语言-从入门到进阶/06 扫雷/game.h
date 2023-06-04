#pragma once
#include <time.h>

#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define Easy_Count 80

void InitBoard(char board[Rows][Cols],int rows,int cols,char set);

void DisplayBoard(char board[Rows][Cols],int row,int col);

void SetMine(char board[Rows][Cols],int row,int col);

void FindMine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col);
