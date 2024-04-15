#include<iostream>
using namespace std;
int main()
{
	int num;
	int a[10];
	int x,i;
	
	cout<<"Enter the Array Size :";
	cin>>num;
	
	cout<<"Enter the Array Elements :";
	for(i=0; i<num; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the Search Elements :";
	cin>>x;
	
	for(i=0; i<num; i++)
	{
		if(a[i]==x)
		{
			cout<<"Array Element is Found "<<i;
		}
	}
	if(i==num)
	{
		cout<<"Array Element is Not Found";
	}
}
