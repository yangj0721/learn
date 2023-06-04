#include "game.h"
#include <iostream>
using namespace std;

void InitBoard(char board[Row][Col],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j]=' ';
		}
	}
}

void DisplayBoard(char board[Row][Col],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		//1. 打印一行的数据
		for (int j = 0; j < col; j++)
		{
			cout<<" "<<board[i][j]<<" ";
			if(j<col-1)
			{
				cout<<"|";
			}
		}
		cout<<endl;

		//2.打印分割行
		if(i<row-1)
		{
			for (int j = 0; j < col; j++)
			{
				cout<<"---";
				if(j<col-1)
				{
					cout<<"|";
				}
			}
			cout<<endl;
		}
	} 
}

void PlayerMove(char board[Row][Col],int row,int col)
{
	int x=0;
	int y=0;
	cout<<"玩家走："<<endl;

	while(1)
	{
		cout<<"请输入要下的坐标："<<endl;
		cin>>x;
		cin>>y;
		//判断x, y坐标的合法性
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				cout<<"该坐标被占用！"<<endl;
			}
		}
		else
		{
			cout<<"坐标非法，请从新输入！"<<endl;
		}
	}
}

void ComputerMove(char board[Row][Col],int row,int col)
{
	int x=0;
	int y=0;
	cout<<"电脑走："<<endl;
	while(1)
	{
		x=rand()%row;
		y=rand()%col;

		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}

//返回0表示棋盘没满，返回1表示棋盘满了
int IsFull(char board[Row][Col],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}

char IsWin(char board[Row][Col],int row,int col)
{
	//行相等
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col-2; j++)
		{
			if(board[i][j]==board[i][j+1]&&board[i][j+1]==board[i][j+2]&&board[i][j]!=' ')
			{
				return board[i][j]; 
			}
		}
	}

	//列相等
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col-2; j++)
		{
			if(board[j][i]==board[j+1][i]&&board[j+1][i]==board[j+2][i]&&board[j][i]!=' ')
			{
				return board[j][i]; 
			}
		}
	}

	//左斜线
	for (int i = 0; i < row-2; i++)
	{
		for (int j = 0; j < col-2; j++)
		{
			if(board[i][j]==board[i+1][j+1]&&board[i+1][j+1]==board[i+2][j+2]&&board[i][j]!=' ')
			{
				return board[i][j]; 
			}
		}
	}

	//右斜线
	for (int i = 2; i < row; i++)
	{
		for (int j = 0; j < col-2; j++)
		{
			if(board[i][j]==board[i-1][j+1]&&board[i-1][j+1]==board[i-2][j+2]&&board[i][j]!=' ')
			{
				return board[i][j]; 
			}
		}
	}

	//判断是否平局
	if(1==IsFull(board,Row,Col))
	{
		return 'Q';
	}
	return 'C';
}
