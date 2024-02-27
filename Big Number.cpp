#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter the three Number:";
	cin>>a>>b>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"A is the Big Number";
		}
		else
		{
			cout<<"C is the Big Number";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"B is the Big Number";
		}
		else
		{
			cout<<"C is the Big Number";
		}
	}
	 return 0;
}
