//#include <iostream>
//using namespace std;
//
//void print(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//
//void reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right)
//	{
//		int tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr,sz);
//	
//	system("pause");
//	return 0;
//}