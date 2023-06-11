//#include <iostream>
//using namespace std;
//
////不会溢出
//int main()
//{
//
//	int a=4;
//	int b=5;
//	cout<<"交换前："<<a<<" "<<b<<endl;
//	a=a^b;//(^按位异或)
//	b=a^b;
//	a=a^b;
//	cout<<"交换后："<<a<<" "<<b<<endl;
//
//	system("pause");
//	return 0;
//
//}

//会溢出
//int main()
//{
//
//	int a=4;
//	int b=5;
//	cout<<"交换前："<<a<<" "<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"交换后："<<a<<" "<<b<<endl;
//
//	system("pause");
//	return 0;
//
//}