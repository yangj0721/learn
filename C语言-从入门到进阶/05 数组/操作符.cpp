#include <iostream>
using namespace std;

//void test1(int arr[])
//{
//	cout<<sizeof(arr)<<endl;
//}
//
//void test2(char ch[])
//{
//	cout<<sizeof(ch)<<endl;
//}
//
//int main()
//{
//	int arr[10]={0};
//	char ch[10]={0};
//	cout<<sizeof(arr)<<endl;
//	cout<<sizeof(ch)<<endl;
//	test1(arr);
//	test2(ch);
//	
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int a=11;
//	a=a|(1<<2);
//	cout<<a<<endl;;
//	a=a&(~(1<<2));
//	cout<<a<<endl;;
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	short s=0;
//	int a=10;
//	cout<<sizeof(s=a+5)<<endl;
//	cout<<s<<endl;
//	
//	system("pause");
//	return 0;
//}


//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int num=0;
//	int count=0;
//	cin>>num;
//
//	int i=0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (1==((num>>i)&1))
//		{
//			count++;
//		}
//	}
//
//
//	//统计num的补码中有几个1
//	/*while(num)
//	{
//		if(num%2==1)
//		{
//			count++;
//		}
//		num=num/2;
//	}*/
//	cout<<count<<endl;
//	system("pause");
//	return 0;
//}