//#include <iostream>
//using namespace std;
//
////ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	for (int i = 0; i < sz-1; i++)
//	{  
//		int flag=1;  //������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;  //���������������ʵ����ȫ����
//			}
//		}
//		if(flag==1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//
//	system("pause");
//	return 0;
//}