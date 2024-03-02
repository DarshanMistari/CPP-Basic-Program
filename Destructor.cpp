#include<iostream>
using namespace std;
int count=0;
class A
{
	public:
		A()
		{
			cout<<"Object "<<count++<<" created"<<endl;
		}
		
		~A()
		{
			cout<<endl<<"Object "<<count--<<" deleted";
		}
};
int main()
{
	A obj,obj2,obj3;
	
	return 0;
}
