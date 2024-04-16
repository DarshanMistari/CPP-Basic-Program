#include<iostream>
using namespace std;
int a[10];
int num,x,i;
BinarySearch(int low,int high)
{
	while(low<=high)
	{
		int mid = (low+high)/2;
		
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid]>x)
		{
			high = mid-1;
		}
		else
		{
			low=mid-1;
		}
		return -1;
	}
}
int main()
{
	
	cout<<"Enter the  Array Size :";
	cin>>num;
	
	cout<<"Enter the Array Element :";
	for(i=0; i<num; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the Array Search Element :";
	cin>>x;
	
	int result = BinarySearch(0,num-1);
	if(result == -1)
	{
		cout<<"Array Element is Not Found";
	}	
	else
	{
		cout<<"Array Element is Found";
	}
}
