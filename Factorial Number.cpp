#include<iostream>
using namespace std;
int main()
{
	int i, num;
	int fact=1;
	
	cout<<"Enter the Number :";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
    }
    cout<<"Factorial Numbers :"<<fact;
 
	return 0;
}
