#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Size of Array :";
	cin>>n;
	
	int a[n];
	cout<<"Enter the Arraty Elements :";
	for(int i=0; i<=n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<=n-1; i++)
	{
		for(int j=0; j <=n-i-1; j++)
		{
			if(a[j+1] <= a[j])
			{
				int temp = a[j+1];
				a[j+1] = a[j]; 
				a[j] = temp;
			}
		}
	}
	cout<<"Sorted Array Elements :\n";
	for(int i=0; i<=n; i++)
	{
		cout<<a[i]<<endl;
	}
}
