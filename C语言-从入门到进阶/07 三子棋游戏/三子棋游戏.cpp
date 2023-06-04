#include <iostream>
#include "game.h"
#include <time.h>
using namespace std;

void menu()
{
	cout<<"*****************************"<<endl;
	cout<<"****   1.play   0.exit   ****"<<endl;
	cout<<"*****************************"<<endl;
}

//游戏的算法实现
void game()
{
	char ret=0;
	//数组-存放走出的棋盘信息
	char board[Row][Col]={0};   //全部是空格
	//初始化棋盘
	InitBoard(board,Row,Col);
	//打印棋盘
	DisplayBoard(board,Row,Col);

	//下棋
	while(1)
	{
		system("cls");
		//玩家下棋
		PlayerMove(board,Row,Col);
		DisplayBoard(board,Row,Col);
		//判断玩家是否赢
		ret=IsWin(board,Row,Col);
		if(ret!='C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board,Row,Col);
		DisplayBoard(board,Row,Col);
		//判断电脑是否赢
		ret=IsWin(board,Row,Col);
		if(ret!='C')
		{
			break;
		}
		system("pause");
	}
	if (ret=='*')
	{
		cout<<"玩家赢"<<endl;
	}
	else if (ret=='#')
	{
		cout<<"电脑赢"<<endl;	
	}
	else
	{
		cout<<"平局"<<endl;	
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		system("cls");
		menu();
		cout<<"请选择："<<endl;
		cin>>input;
		switch (input)
		{
		case 0:
			cout<<"退出游戏"<<endl;
			break;
		case 1:
			game();
			break;
		default:
			cout<<"选择错误，请重新选择"<<endl;
			break;
		}
		system("pause");
	}while(input);

}

int main()
{
	test();

	//system("pause");
	return 0;
}