#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	int c=30;

	int* arr[3]={&a,&b,&c};  //ָ������
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
//	int** ppa=&pa;//ppa���Ƕ���ָ��
//	**ppa=20;
//	cout<<**ppa<<endl;
//	cout<<a<<endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//ͨ����ַ��������
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

//&arr����������ĵ�ַ
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
//	//ָ��-ָ��
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	cout<<&arr[9]-&arr[0]<<endl;
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	int* pq=NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//
//	//ָ�������
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
//	//ָ��Ĳ���
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
//	int* p=&a;  //ָ�����
//	
//	system("pause");
//	return 0;
//}