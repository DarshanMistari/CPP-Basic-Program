#include<iostream>
using namespace std;
int main()
{
	int size, arr[5],i,j,temp;
	cout<<"Enter the Array Size :";
	cin>>size;
	
	cout<<"Enter the Array Elements :";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Sorting array using Selection sort...\n";
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"Now the Array after Sorting is :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
}
