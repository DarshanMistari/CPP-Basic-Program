#include<iostream>
using namespace std;
int fibo(int i)
{
	if(i==0)
	{
		 return 0;
	}
	if(i==1)
	{
		return 1;
	}
	return fibo(i-1)+fibo(i-2);
}
int main()
{
	int i;
	cout<<"Fibonacci seris:"<<endl;
	for(i=1;i<10;i++)
	{
		cout<<fibo(i)<<endl;
	}
	return 0;
}
