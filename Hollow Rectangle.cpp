#include<iostream>
using namespace::std;
int main()
{
	int i,j;
		int n=9;
		int m=10;

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(i==1 || j==1 || i==n || j==m)
				{
					cout<<" * ";
				}
				else
				{
					cout<<"   ";
				}
			}
		   cout<<endl;
	    }
}
