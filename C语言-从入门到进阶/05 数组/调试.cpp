#include <iostream>
using namespace std;

int main()
{

	int i=0;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for (i = 0; i <= 12; i++)
	{
		
		cout<<i<<endl;
		arr[i]=0;
	}

	system("pause");
	return 0;
}


//1!+2!+3!+4!+....+n!
//int jiecheng(int a)
//{
//	int sum=1;
//	int count=0;
//	for (int i = 1; i <= a; i++)
//	{
//		sum*=i;
//		count+=sum;
//	}
//	return count;
//
//}
//
//
//int main()
//{
//	int n=0;
//	cin>>n;
//	int m=jiecheng(n);
//	cout<<m<<endl;
//
//	system("pause");
//	return 0;
//}