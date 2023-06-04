#include <iostream>
using namespace std;

//数组名是首元素地址
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	cout<<arr<<endl;
//	cout<<arr+1<<endl;
//	cout<<&arr[0]<<endl;
//	cout<<&arr[0]+1<<endl;
//	cout<<*arr<<endl;
//	cout<<&arr<<endl;
//	cout<<&arr+1<<endl;
//
//	system("pause");
//	return 0;
//}

//二维数组的地址
//int main()
//{
//	int a[3][4]={{1,2,3},{4,5}};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout<<"a["<<i<<"]["<<j<<"]="<<&a[i][j]<<endl;;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//二维数组
//int main()
//{
//
//	int a[3][4]={{1,2,3},{4,5}};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//
//	system("pause");
//	return 0;
//}

//数组的地址
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		cout<<"&arr["<<i<<"]="<<&arr[i]<<endl;
//	}
//	system("pause");
//	return 0;
//}