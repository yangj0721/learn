#include <iostream>
#include "game.h"
using namespace std;

void menu()
{
	cout<<"*****************************"<<endl;
	cout<<"****   1.play   0.exit   ****"<<endl;
	cout<<"*****************************"<<endl;
}

void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[Rows][Cols]={0};

	//2.排查出的雷的信息
	char show[Rows][Cols]={0}; //让两个数组完美匹配

	//初始化
	InitBoard(mine,Rows,Cols,'0');
	InitBoard(show,Rows,Cols,'*');

	//打印棋盘
	//DisplayBoard(mine,Row,Col);
	DisplayBoard(show,Row,Col);

	//布置雷
	SetMine(mine,Row,Col);
	//DisplayBoard(mine,Row,Col);

	//扫雷
	FindMine(mine,show,Row,Col);
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
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
			cout<<"选择错误，请重新选择！"<<endl;
			break;
		}
	} while (input);
}

int main()
{
	test();
	
	system("pause");
	return 0;
}