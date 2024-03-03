#include<iostream>
using namespace std;
int main()
{
	int result;
	cout<<"Enter the Marks:";
	cin>>result;
	
	switch(result)
	{
		case 95:
		cout<<"Student is Pass A+ Gread";
		break;
		
		case 90:
		cout<<"student is Pass A Gread";	
		break;
		
		case 80:
		cout<<"student is Pass B+ Gread";	
		break;
		
		case 70:
		cout<<"student is Pass B Gread";	
		break;
		
		case 40:
		cout<<"student is Pass C Gread";	
		break;
		
		case 34:
		cout<<"student is the Fail";	
		break;
		
		default:
		cout<<"Invalid Number";	
		break;
	}
	return 0;
}
