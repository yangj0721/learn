#include <iostream>
#include "time.h"
using namespace std;

//��������Ϸ
//���Ի�����һ�������
//������
void menu()
{
	cout<<"*****************************"<<endl;
	cout<<"****   1.play   0.exit   ****"<<endl;
	cout<<"*****************************"<<endl;
}

void game()
{
	//���������
	int ret=rand()%100+1;
	int guess=0;

	//������
	while(1)
	{
		cout<<"������֣�"<<endl;
		cin>>guess;
		if(guess>ret)
		{
			cout<<"�´���"<<endl;
		}
		else if(guess<ret)
		{
			cout<<"��С��"<<endl;
		}
		else
		{
			cout<<"��ϲ�㣬�¶���"<<endl;
			break;
		}
	}
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));  //ʱ��� ����һ�ξͿ�����
	do{
		menu();
		cout<<"��ѡ��"<<endl;
		cin>>input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout<<"�˳���Ϸ������"<<endl;
			break;
		default:
			cout<<"ѡ����󣡣���"<<endl;
			break;
		}
	}while(input);

	system("pause");
	return 0;
}