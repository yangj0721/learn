#include <iostream>
using namespace std;


//��Ŀ������һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Σ�
//�ҳ��Ǹ�ֻ������һ�ε�Ԫ�أ�
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
