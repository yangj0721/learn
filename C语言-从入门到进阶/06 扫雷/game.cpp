#include "game.h"
#include <iostream>
using namespace std;

void InitBoard(char board[Rows][Cols],int rows,int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j]=set;
		}
	}
}

void DisplayBoard(char board[Rows][Cols],int row,int col)
{
	//��ӡ�к�
	for (int i = 0; i <= col; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for (int i = 1; i <= row; i++)
	{
		cout<<i<<" ";  //��ӡ�к�
		for (int j = 1; j <= col; j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void SetMine(char board[Rows][Cols],int row,int col)
{
	int count = Easy_Count;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}

int get_mine_count(char mine[Rows][Cols],int x,int y)
{
	int ret=0;
	for (int i = x-1; i <= x+1; i++)
	{
		for (int j = y-1; j < y+1; j++)
		{
			ret+=(mine[i][j]-'0');
		}
	}
	
	return ret;
}

void FindMine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;
	while (win<row*col-Easy_Count)
	{
		cout<<"�������Ų��׵����꣺"<<endl;
		cin>>x;
		cin>>y;
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			//����Ϸ�
			//1.����
			if(mine[x][y]=='1')
			{
				cout<<"���ź����㱻ը����"<<endl;
				DisplayBoard(mine,Row,Col);
				break;
			}
			else  //������
			{
				//����x,y������Χ������
				int count = get_mine_count(mine,x,y);
				show[x][y]=count+'0';
				DisplayBoard(show,Row,Col);
				win++;
			}
		}
		else
		{
			cout<<"��������Ƿ�,���������룡"<<endl;

		}
	}		
	if (win==row*col-Easy_Count)
	{
		cout<<"��ϲ�����׳ɹ���"<<endl;
		DisplayBoard(mine,row,col);
	}


}