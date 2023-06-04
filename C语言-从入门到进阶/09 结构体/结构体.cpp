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

//打印结构体数据
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
//	Stu s={"李四",40,"1555555","男"};
//	Print1(s);
//	Print2(&s);
//	
//	system("pause");
//	return 0;
//}


//结构体的调用
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


//描述一个学生,定义结构体类型
//struct-结构体关键字  stu-结构体标签  struct stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];//名字
//	short age;//年龄
//	char tele[12];//电话
//	char sex[5];//性别
//}s1,s2,s3; //是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];//名字
//	short age;//年龄
//	char tele[12];//电话
//	char sex[5];//性别
//}Stu; //是三个全局的结构体变量
//
//int main()
//{
//	Stu s1={"张三",20,"000000000","男"};  //创建结构体变量，局部结构体变量
//	struct Stu s2={"李四",30,"11111111111","女"};  //初始化
//	
//	system("pause");
//	return 0;
//}