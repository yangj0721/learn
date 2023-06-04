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
		//1. ��ӡһ�е�����
		for (int j = 0; j < col; j++)
		{
			cout<<" "<<board[i][j]<<" ";
			if(j<col-1)
			{
				cout<<"|";
			}
		}
		cout<<endl;

		//2.��ӡ�ָ���
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
	cout<<"����ߣ�"<<endl;

	while(1)
	{
		cout<<"������Ҫ�µ����꣺"<<endl;
		cin>>x;
		cin>>y;
		//�ж�x, y����ĺϷ���
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				cout<<"�����걻ռ�ã�"<<endl;
			}
		}
		else
		{
			cout<<"����Ƿ�����������룡"<<endl;
		}
	}
}

void ComputerMove(char board[Row][Col],int row,int col)
{
	int x=0;
	int y=0;
	cout<<"�����ߣ�"<<endl;
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

//����0��ʾ����û��������1��ʾ��������
int IsFull(char board[Row][Col],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;//����
}

char IsWin(char board[Row][Col],int row,int col)
{
	//�����
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

	//�����
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

	//��б��
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

	//��б��
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

	//�ж��Ƿ�ƽ��
	if(1==IsFull(board,Row,Col))
	{
		return 'Q';
	}
	return 'C';
}
