
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	
	cout<<"Enter the Value of A=";
	cin>>a;
	cout<<"Enter the Value of B=";
	cin>>b;
	cout<<"Enter the Value of C=";
	cin>>c;
	
	if( a > b )
	{
		if( a > c )
		{
			cout<<"A is Big\n";
		}else{
			cout<<"C is Big\n";
		}
	}
	else{
		if( b > c)
		{
			cout<<"B is Big\n";
		}else{
			cout<<"C is Big\n";
		}
	}
	return 0;
}

