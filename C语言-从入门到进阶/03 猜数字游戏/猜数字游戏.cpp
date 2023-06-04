#include <iostream>
#include "time.h"
using namespace std;

//猜数字游戏
//电脑会生成一个随机数
//猜数字
void menu()
{
	cout<<"*****************************"<<endl;
	cout<<"****   1.play   0.exit   ****"<<endl;
	cout<<"*****************************"<<endl;
}

void game()
{
	//生成随机数
	int ret=rand()%100+1;
	int guess=0;

	//猜数字
	while(1)
	{
		cout<<"请猜数字："<<endl;
		cin>>guess;
		if(guess>ret)
		{
			cout<<"猜大了"<<endl;
		}
		else if(guess<ret)
		{
			cout<<"猜小了"<<endl;
		}
		else
		{
			cout<<"恭喜你，猜对了"<<endl;
			break;
		}
	}
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));  //时间戳 设置一次就可以了
	do{
		menu();
		cout<<"请选择："<<endl;
		cin>>input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout<<"退出游戏！！！"<<endl;
			break;
		default:
			cout<<"选择错误！！！"<<endl;
			break;
		}
	}while(input);

	system("pause");
	return 0;
}