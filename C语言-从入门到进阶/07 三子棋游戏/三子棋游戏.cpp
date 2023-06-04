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

//��Ϸ���㷨ʵ��
void game()
{
	char ret=0;
	//����-����߳���������Ϣ
	char board[Row][Col]={0};   //ȫ���ǿո�
	//��ʼ������
	InitBoard(board,Row,Col);
	//��ӡ����
	DisplayBoard(board,Row,Col);

	//����
	while(1)
	{
		system("cls");
		//�������
		PlayerMove(board,Row,Col);
		DisplayBoard(board,Row,Col);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,Row,Col);
		if(ret!='C')
		{
			break;
		}

		//��������
		ComputerMove(board,Row,Col);
		DisplayBoard(board,Row,Col);
		//�жϵ����Ƿ�Ӯ
		ret=IsWin(board,Row,Col);
		if(ret!='C')
		{
			break;
		}
		system("pause");
	}
	if (ret=='*')
	{
		cout<<"���Ӯ"<<endl;
	}
	else if (ret=='#')
	{
		cout<<"����Ӯ"<<endl;	
	}
	else
	{
		cout<<"ƽ��"<<endl;	
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
		system("pause");
	}while(input);

}

int main()
{
	test();

	//system("pause");
	return 0;
}