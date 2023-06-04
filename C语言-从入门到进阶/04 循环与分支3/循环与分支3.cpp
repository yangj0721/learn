#include <iostream>
#include <string>
using namespace std;

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");

	while(1)
	{
		cout<<"请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机，请输入："<<endl;
		cin>>input;
		if(strcmp(input,"我是猪")==0)
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
//	cout<<"请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机，请输入："<<endl;
//	cin>>input;
//	if(strcmp(input,"我是猪")==0)
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
//	cout<<"你好"<<endl;
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
//	cout<<"结果为："<<sum<<endl;
//
//	system("pause");
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚


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

//在屏幕上输出9*9乘法口诀表
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

//1-100整数带9的个数
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
//	cout<<"9的个数为："<<count<<endl;
//	system("pause");
//	return 0;
//}


//100-200之间的素数
//int main()
//{
//	int count=0;
//  //试除法
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


//判断year是否为闰年
//int main()
//{
//	//能被4整除并且不能被100整除是闰年
//	//能被400整除是闰年
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

//24和18的最大公约数
//int main()
//{
//	int a=180;
//	int b=25;
//	int s=0;
//
//	//辗转相除法
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
//	cout<<a<<"和"<<b<<"的最大公约数为:"<<b<<endl;
//
//	system("pause");
//	return 0;
//}

//1-100 之间3 的倍数
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

//三个数 从大到小顺序输出
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


//编写代码实现，模拟用户登录情景，并且只能登陆三次

//int main()
//{
//	string pswd="1234";
//	string intp_Pwd;
//	int i=0;
//
//	for (i = 0; i < 3; i++)
//	{
//		cout<<"请输入密码！"<<endl;
//		cin>>intp_Pwd;
//		if(intp_Pwd==pswd)
//		{
//			cout<<"密码输入成功！"<<endl;
//			break;
//		}
//		else
//		{
//			cout<<"密码输入失败！"<<endl;
//		}
//		system("cls");
//	}
//
//	if (i==3)
//	{
//		cout<<"密码输入失败！"<<endl;
//	}
//
//
//	system("pause");
//	return 0;
//}