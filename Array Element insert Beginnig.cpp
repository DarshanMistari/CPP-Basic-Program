#include<iostream>
using namespace std;
int main()
{
	int a[5] ;
	int n , x, i;
	
	cout<<"Enter the Size of Array :";
	cin>>n;
	
	cout<<"Enter the Array Element :";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"insert Element in Array :";
	cin>>x;
	
	for(i=n; i>0; i++)
	{
		a[i] = a[i-1];
	}
	a[0] = x;
	n++;
	
	cout<<"Array Element is Insert At Beginnig :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i];
	}
	
}
