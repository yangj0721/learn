#include <iostream>
#include <string>
using namespace std;

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");

	while(1)
	{
		cout<<"��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ��������룺"<<endl;
		cin>>input;
		if(strcmp(input,"������")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}

//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	again:
//	cout<<"��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ��������룺"<<endl;
//	cin>>input;
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
////again:
////	cout<<"hello bit"<<endl;
////	goto again;
//
//	goto again;
//	cout<<"���"<<endl;
//again:
//	cout<<"hehe"<<endl;
//
//	system("pause");
//	return 0;
//}

//sum=1!+2!+....+n!;


//int main()
//{
//	int n=3;
//	int sum=0;
//	int ret=1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret=ret*i;
//		sum=sum+ret;
//	}
//	cout<<"���Ϊ��"<<sum<<endl;
//
//	system("pause");
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���


//int main()
//{
//	char arr1[]="welcome to bit!!!!!!";
//	char arr2[]="####################";
//	int left=0;
//	int right=strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		cout<<arr2<<endl;
//		
//		left++;
//		right--;
//	}
//
//	system("pause");
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout<<i<<"*"<<j<<"="<<i*j<<" ";
//		}
//		cout<<endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max=arr[0];
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=1;i<sz;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	cout<<max<<endl;
//	system("pause");
//	return 0;
//}



//int main()
//{
//	double sum=0;
//	int flag=1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	cout<<sum<<endl;
//	system("pause");
//	return 0;
//}

//1-100������9�ĸ���
//int main()
//{
//	int count=0;
//	for(int i=1;i<=100;i++)
//	{
//		if(i%10==9)
//		{
//			count++;
//		}
//		if(i/10==9)
//		{
//			count++;
//		}
//	}
//	cout<<"9�ĸ���Ϊ��"<<count<<endl;
//	system("pause");
//	return 0;
//}


//100-200֮�������
//int main()
//{
//	int count=0;
//  //�Գ���
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			cout<<i<<" ";
//			count++;
//		}
//	}
//	cout<<endl;
//	cout<<count<<endl;
//
//	system("pause");
//	return 0;
//}


//�ж�year�Ƿ�Ϊ����
//int main()
//{
//	//�ܱ�4�������Ҳ��ܱ�100����������
//	//�ܱ�400����������
//	int year =0;
//	int num=0;
//	for ( year = 1000; year  <= 2000; year ++)
//	{
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			cout<<year<<" ";
//			num++;
//		}
//		/*if (year%4==0&&year%100!=0)
//		{
//			cout<<year<<" ";
//			num++;
//		}
//		else if(year%400==0)
//		{
//			cout<<year<<" ";
//			num++;
//		}*/
//	}
//	cout<<endl;
//	cout<<num<<endl;
//	system("pause");
//	return 0;
//}

//24��18�����Լ��
//int main()
//{
//	int a=180;
//	int b=25;
//	int s=0;
//
//	//շת�����
//	while(s=a%b)
//	{
//		//s=a%b;
//		a=b;
//		b=s;
//	}
//
//
//	/*int s=0;
//	for (int i = 1; i <= a&&i<=b; i++)
//	{
//		if((a%i==0)&&(b%i==0))
//		{
//			s=i;
//		}
//	}*/
//	cout<<a<<"��"<<b<<"�����Լ��Ϊ:"<<b<<endl;
//
//	system("pause");
//	return 0;
//}

//1-100 ֮��3 �ı���
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if(i%3==0)
//		{
//			cout<<i<<" ";
//		}
//	}
//	cout<<endl;
//	system("pause");
//	return 0;
//}

//������ �Ӵ�С˳�����
//int main()
//{
//
//	int a,b,c;
//	cin>>a>>b>>c;
//	if(a<b)
//	{
//		int temp=a;
//		a=b;
//		b=temp;
//	}
//	if(a<c)
//	{
//		int temp=a;
//		a=c;
//		c=temp;
//	}
//	if(b<c)
//	{
//		int temp=b;
//		b=c;
//		c=temp;
//	}
//
//	cout<<a<<b<<c<<endl;
//
//	system("pause");
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½����

//int main()
//{
//	string pswd="1234";
//	string intp_Pwd;
//	int i=0;
//
//	for (i = 0; i < 3; i++)
//	{
//		cout<<"���������룡"<<endl;
//		cin>>intp_Pwd;
//		if(intp_Pwd==pswd)
//		{
//			cout<<"��������ɹ���"<<endl;
//			break;
//		}
//		else
//		{
//			cout<<"��������ʧ�ܣ�"<<endl;
//		}
//		system("cls");
//	}
//
//	if (i==3)
//	{
//		cout<<"��������ʧ�ܣ�"<<endl;
//	}
//
//
//	system("pause");
//	return 0;
//}