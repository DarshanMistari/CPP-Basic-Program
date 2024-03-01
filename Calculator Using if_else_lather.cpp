#include<iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int operation;
	int add, sub, multi, div;
	
	cout<<"*** Calculator ***"<<endl;
	cout<<endl<<" 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division "<<endl;

    cout<<endl<<"Enter the Operation :";
	cin>>operation;
	
	cout<<"Enter the First Number:";
	cin>>num1;
	cout<<"Enter the Second Number:";
	cin>>num2;

	if(operation==1)
	{
		add = num1 + num2;
		cout<<endl<<"Addition :"<<add;
	}
	else if(operation==2)
	{
		sub = num1 - num2;
		cout<<endl<<"Substraction :"<<sub;
	}
	else if(operation==3)
	{
		multi = num1 * num2;
		cout<<endl<<"Multiplication :"<<multi;
	}
	else if(operation==4)
	{
		div = num1 / num2;
		cout<<endl<<"Division :"<<div;
	}
	return 0;
}
