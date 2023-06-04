#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	int c=30;

	int* arr[3]={&a,&b,&c};  //指针数组
	for (int i = 0; i < 3; i++)
	{
		cout<<arr[i]<<"  "<<*(arr[i])<<endl;
	}
	system("pause");
	return 0;
}

//int main()
//{
//	int a=10;
//	int* pa=&a;
//	int** ppa=&pa;//ppa就是二级指针
//	**ppa=20;
//	cout<<**ppa<<endl;
//	cout<<a<<endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//通过地址访问数组
//	int arr[10]={0};
//	int* p=arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<p+i<<"="<<&arr[i]<<endl;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p+i)=i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<arr[i]<<"="<<*(p+i)<<endl;
//	}
//
//	system("pause");
//	return 0;
//}

//&arr：整个数组的地址
//int main()
//{
//	int arr[10]={0};
//	cout<<arr<<endl;
//	cout<<arr+1<<endl;
//	cout<<&arr[0]<<endl;
//	cout<<&arr[0]+1<<endl;
//	cout<<&arr<<endl;
//	cout<<&arr+1<<endl;
//	
//	system("pause");
//	return 0;
//} 

//int my_strlen(char* str)
//{
//	char* start=str;
//	char* end=str;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//
//int main()
//{
//
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	cout<<len<<endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//指针-指针
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	cout<<&arr[9]-&arr[0]<<endl;
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	int* pq=NULL;//NULL-用来初始化指针的，给指针赋值
//
//	//指针加整数
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int* p=arr;
//	for (int i = 0; i < sz; i++)
//	{
//		cout<<*p<<endl;
//		p++;
//	}
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	int* pa=arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pa+1)=1;
//	}
//	
//	system("pause");
//	return 0;
//}


//int main()
//{
//	//指针的步长
//	int a=10;
//	int*pa=&a;
//	cout<<pa<<endl;
//	cout<<pa+1<<endl;
//
//	
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a=10;
//	int* p=&a;  //指针变量
//	
//	system("pause");
//	return 0;
//}