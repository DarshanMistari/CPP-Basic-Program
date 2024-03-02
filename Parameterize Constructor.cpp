#include<iostream>
using namespace std;
class A
{
	public:
		A(int a,int b)
		{
			cout<<"A="<<a<<endl<<"B="<<b;
		}		
};
int main()
{
	A obj(100,200);
	
	return 0;
}
