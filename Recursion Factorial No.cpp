#include<iostream>
using namespace std;
int main()
{
int num;
int fact(int);
cout<<"Enter the Number :";
cin>>num;
cout<<"Factorial Number :"<<fact(num)<<endl;
return 0;
}
int fact(int num)
{
	if(num==0)
	return 1;
	else
	return num*fact(num-1);
	
}
