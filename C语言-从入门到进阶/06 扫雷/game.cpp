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
	//打印列号
	for (int i = 0; i <= col; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for (int i = 1; i <= row; i++)
	{
		cout<<i<<" ";  //打印行号
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
		cout<<"请输入排查雷的坐标："<<endl;
		cin>>x;
		cin>>y;
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			//坐标合法
			//1.踩雷
			if(mine[x][y]=='1')
			{
				cout<<"很遗憾，你被炸死了"<<endl;
				DisplayBoard(mine,Row,Col);
				break;
			}
			else  //不是雷
			{
				//计算x,y坐标周围几个雷
				int count = get_mine_count(mine,x,y);
				show[x][y]=count+'0';
				DisplayBoard(show,Row,Col);
				win++;
			}
		}
		else
		{
			cout<<"输入坐标非法,请重新输入！"<<endl;

		}
	}		
	if (win==row*col-Easy_Count)
	{
		cout<<"恭喜你排雷成功！"<<endl;
		DisplayBoard(mine,row,col);
	}


}