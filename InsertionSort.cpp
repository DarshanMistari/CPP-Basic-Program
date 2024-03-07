#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the size of Array :";
	cin>>num;
	
	int a[num];
	for(int i=0; i<num; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<num; i++)
	{
		int current = a[i];
		int j=i-1;
		while(a[j] > current && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
	
	cout<<"Insertion sorted Array:\n";
	for(int i=0; i<num; i++)
	{
		cout<<a[i]<<endl;
	}
}
