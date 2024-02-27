#include<iostream>
using namespace std;
int main()
{
	int a[2][2],i,j;
	
	cout<<"Enter Array elements:"<<endl;
	
	for(i=0;i<=1;i++)
    {
		for(j=0;j<=1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<endl<<"Array of Elements"<<endl;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cout<<ends<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
