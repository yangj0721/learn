#include <iostream>
using namespace std;

int Add(int a,int b)
{
	int z=0;
	z=a+b;
	return z;
}

int main()
{
	int a=10;
	int b=20;
	int ret=0;
	ret=Add(a,b);
	
	system("pause");
	return 0;
}

//��ӡ�ṹ������
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	cout<<tmp.name<<" "<<tmp.age<<" "<<tmp.tele<<" "<<tmp.sex<<" "<<endl;
//}
//
//void Print2(Stu* tmp)
//{
//	cout<<tmp->name<<" "<<tmp->age<<" "<<tmp->tele<<" "<<tmp->sex<<" "<<endl;
//}
//
//int main()
//{
//	Stu s={"����",40,"1555555","��"};
//	Print1(s);
//	Print2(&s);
//	
//	system("pause");
//	return 0;
//}


//�ṹ��ĵ���
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//
//int main()
//{
//	char arr[]="hello";
//	struct T t={"hehe",{100,'w',"hello world",3.14},arr};
//	cout<<t.ch<<" "<<t.s.arr<<" "<<t.pc<<endl;
//	
//	system("pause");
//	return 0;
//}


//����һ��ѧ��,����ṹ������
//struct-�ṹ��ؼ���  stu-�ṹ���ǩ  struct stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];//����
//	short age;//����
//	char tele[12];//�绰
//	char sex[5];//�Ա�
//}s1,s2,s3; //������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];//����
//	short age;//����
//	char tele[12];//�绰
//	char sex[5];//�Ա�
//}Stu; //������ȫ�ֵĽṹ�����
//
//int main()
//{
//	Stu s1={"����",20,"000000000","��"};  //�����ṹ��������ֲ��ṹ�����
//	struct Stu s2={"����",30,"11111111111","Ů"};  //��ʼ��
//	
//	system("pause");
//	return 0;
//}