#include <iostream>
using namespace std;

//计算n的k次方
//double Pow(int n,int k)
//{
//	if (k>0)
//	{
//		return n*Pow(n,k-1);
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (1.0/Pow(n,-k));
//	}
//}
//
//int main()
//{
//	int n=0;
//	int k=0;
//	cin>>n;
//	cin>>k;
//	double ret=Pow(n,k);
//	cout<<ret<<endl;
//
//	system("pause");
//	return 0;
//}

//一个十进制无符号数的各个位数之和
//int sumnum(unsigned int a)
//{
//	/*int sum=0;
//	while(a)
//	{
//		sum+=(a%10);
//		a=a/10;
//	}
//	return sum;*/
//
//	if(a>9)	
//	{
//		return sumnum(a/10)+a%10;
//	}
//	else
//	{
//		return a;
//	}
//}
//
//
//int main()
//{
//	unsigned int a=0;
//	cin>>a;
//	int sum=sumnum(a);
//	cout<<sum<<endl;
//	
//	system("pause");
//	return 0;
//}

//字符串逆序(递归实现)
//int my_strlen(char* p)
//{
//	int count=0;
//	while(*p!='\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp=arr[0];
//	int len=my_strlen(arr);
//	arr[0]=arr[len-1];
//	arr[len-1]='\0';
//	if(my_strlen(arr+1)>=2)
//	{
//		reverse_string(arr+1);
//	}
//	arr[len-1]=tmp;
//}
//
//
//int main()
//{
//	char arr[]="abcdef";
//	reverse_string(arr);
//	cout<<arr<<endl;
//
//	system("pause");
//	return 0;
//}

//乘法口诀表
//int main()
//{
//	int n=0;
//	cin>>n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout<<j<<"*"<<i<<"="<<i*j<<" ";
//		}
//		cout<<endl;
//	}
//
//	system("pause");
//	return 0;
//}

//用指针打印数组
//void print(int *p,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout<<*(p+i)<<" ";
//	}
//	cout<<endl;
//}
//
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//
//	system("pause");
//	return 0;
//}

//打印二进制序列的奇数位和偶数位
//void print(int m)
//{
//	cout<<"奇数位："<<endl;
//	for (int i = 30; i >= 0; i-=2)
//	{
//		cout<<((m>>i)&1)<<" ";
//	}
//	cout<<endl;
//	cout<<"偶数位："<<endl;
//	for (int i = 31; i >= 1; i-=2)
//	{
//		cout<<((m>>i)&1)<<" ";
//	}
//	cout<<endl;
//}
//
//int main()
//{
//	int m=0;
//	cin>>m;
//	print(m);
//
//	system("pause");
//	return 0;
//}

//两个数的二进制不同位的个数
//int count_bit_one(int a)
//{
//	int count=0;
//	while(a)
//	{
//		a=a&(a-1);
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int m,int n)
//{
//	int tmp=m^n;
//	return count_bit_one(tmp);
//}
//
//int main()
//{
//	int m=0;
//	int n=0;
//	cin>>m;
//	cin>>n;
//	int count = get_diff_bit(m,n);
//	cout<<count<<endl;
//
//	system("pause");
//	return 0;
//}

//二进制表示中1的个数
//int count_bit_one(unsigned int a)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%2==1)
//		{
//			count++;
//		}
//		a=a/2;
//	}
//	return count;
//}

//int count_bit_one(int a)
//{
//	int count=0;
//	for (int i = 0; i < 32; i++)
//	{
//		if((a>>i)&1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int a)
//{
//	int count=0;
//	while(a)
//	{
//		a=a&(a-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a=0;
//	cin>>a;
//	int count=count_bit_one(a);
//
//	cout<<count<<endl;
//
//	system("pause");
//	return 0;
//}




//void print(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//
//void exchange(int arr1[],int arr2[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		int temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//}
//
////数组交换
//int main()
//{
//
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={2,4,6,8,10};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	print(arr1,sz);
//	print(arr2,sz);
//	exchange(arr1,arr2,sz);
//	print(arr1,sz);
//	print(arr2,sz);
//	
//	system("pause");
//	return 0;
//}

//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1);
//	system("pause");
//	return 0;
//}

//描述第n个斐波那契数
//int Fib(int n)  //递归
//{
//	if(n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1)+Fib(n-2);
//	}
//}

//int Fib(int n)
//{
//	int ret=1;
//	int ret1=1;
//	int ret2=1;
//
//	/*for (int i = 1; i <= n; i++)
//	{
//	if(i<=2)
//	{
//	ret=1;
//	ret1=1;
//	ret2=1;
//	}
//	else
//	{
//	ret=ret1+ret2;
//	ret2=ret1;
//	ret1=ret;
//	}
//	}*/
//
//	while(n>2)
//	{
//		ret=ret1+ret2;
//		ret2=ret1;
//		ret1=ret;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	cin>>n;
//	ret=Fib(n);
//	cout<<ret<<endl;
//	system("pause");
//	return 0;
//}


//递归与迭代,求n的阶乘
//int Fac1(int n)
//{
//	int sum=1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum*=i;
//	}
//	return sum;
//}

//int Fac2(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac2(n-1);
//	}
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	cin>>n;
//	/*ret = Fac1(n);*/
//	ret = Fac2(n);
//	cout<<ret<<endl;
//
//	system("pause");
//	return 0;
//
//}

//求字符串长度
//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if(*str!='\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	cout<<len<<endl;
//
//	system("pause");
//	return 0;
//}


//递归，打印整数1234
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	cout<<n%10<<" ";
//}
//
//int main()
//{
//	int num=0;
//	cin>>num;
//	//递归
//	print(num);
//
//
//	system("pause");
//	return 0;
//}

//递归
//int main()
//{
//	cout<<"hehe"<<endl;
//	main();
//	return 0;
//}

//每调用一次，num加1
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num=0;
//	Add(&num);
//	cout<<num<<endl;
//	system("pause");
//	return 0;
//}

//二分查找法
//int binary_search(int k,int arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int mid = (left+right)/2;
//	while(left<=right)
//	{
//		if(k>arr[mid])
//		{
//			left=mid+1;
//		}
//		else if(k<arr[mid])
//		{
//			right=mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//		mid=(left+right)/2;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=6;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(k,arr,sz);
//	if(ret!=-1)
//	{
//		cout<<"下标为："<<ret<<endl;
//	}
//	else{
//		cout<<"未找到！"<<endl;
//	}
//
//	system("pause");
//	return 0;
//}

//写一个函数，判断是否为闰年
//int is_leap_year(int year)
//{
//	if((year%4==0)&&(year%100!=0)||(year%400==0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if(1==is_leap_year(year))
//		{
//			cout<<year<<" ";
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//方法：找质数
//int is_prime(int s)
//{
//	for (int i = 2; i <= sqrt(s); i++)
//	{
//		if(s%i==0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if(is_prime(i)==1)
//		{
//			cout<<i<<" ";
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//交换两个数
//void Swap(int* a,int* b)
//{
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//
//}
//
//void Swap1(int a,int b)
//{
//	int temp=a;
//	a=b;
//	b=temp;
//
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	cout<<a<<" "<<b<<endl;
//	Swap(&a,&b);
//	cout<<a<<" "<<b<<endl;
//
//	system("pause");
//	return 0;
//}

//写一个函数，找较大值
//int get_max(int a,int b)
//{
//	if(a>b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int max=get_max(a,b);
//	cout<<max<<endl;
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	cout<<arr<<endl;
//
//	system("pause");
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x+y;
//}

//
//int main()
//{
//	char arr1[]="bit";
//	char arr2[20]="#######";
//	strcpy(arr2,arr1);
//	cout<<arr2<<endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a =10;
//	int b=20;
//	int sum=Add(a,b);
//	cout<<sum<<endl;
//
//	system("pause");
//	return 0;
//}