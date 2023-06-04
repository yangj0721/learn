#include <iostream>
using namespace std;


//题目：给定一个非空整型数组，除了某个元素只出现一次以外，其余每个元素均出现两次，
//找出那个只出现了一次的元素；
int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int sz=sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		int count=0;
		for (int j = 0; j < sz; j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			cout<<arr[i]<<endl;
			break;
		}
	}

	system("pause");
	return 0;
}
