//#include <iostream>
//using namespace std;
//
//
//
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,8,9,10,11};
//	int k=7;
//	int se=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=se-1;
//	int mid=(left+right)/2;
//	int num=0;
//
//	while(left<=right)
//	{
//		num++;
//		mid=(left+right)/2;
//		if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			cout<<"找到了该元素："<<k<<"  该元素的下标为："<<mid<<"  查找次数："<<num<<endl;
//			break;
//		}
//	}
//
//	if(left>right)
//	{
//		cout<<"未找到给元素！"<<"  查找次数："<<num<<endl;
//	}
//
//	system("pause");
//	return 0;
//}