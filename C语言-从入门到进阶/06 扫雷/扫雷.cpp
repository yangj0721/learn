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
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[Rows][Cols]={0};

	//2.�Ų�����׵���Ϣ
	char show[Rows][Cols]={0}; //��������������ƥ��

	//��ʼ��
	InitBoard(mine,Rows,Cols,'0');
	InitBoard(show,Rows,Cols,'*');

	//��ӡ����
	//DisplayBoard(mine,Row,Col);
	DisplayBoard(show,Row,Col);

	//������
	SetMine(mine,Row,Col);
	//DisplayBoard(mine,Row,Col);

	//ɨ��
	FindMine(mine,show,Row,Col);
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout<<"��ѡ��"<<endl;
		cin>>input;
		switch (input)
		{
		case 0:
			cout<<"�˳���Ϸ"<<endl;
			break;
		case 1:
			game();
			break;
		default:
			cout<<"ѡ�����������ѡ��"<<endl;
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