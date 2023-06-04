#define Row 6
#define Col 6

#pragma once
void InitBoard(char board[Row][Col],int row,int col);

void DisplayBoard(char board[Row][Col],int row,int col);

void PlayerMove(char board[Row][Col],int row,int col);

void ComputerMove(char board[Row][Col],int row,int col);

//告诉我们四种状态：玩家赢-'*'，电脑赢-'#'，平局-'Q'，继续-'C'
char IsWin(char board[Row][Col],int row,int col);

int IsFull(char board[Row][Col],int row,int col);

