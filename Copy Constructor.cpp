#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a,int b)
	{
		x=a; y=b;
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
	A(A&ref)
	{
	x=ref.x;
	y=ref.y	;
	cout<<endl<<"x="<<x<<endl<<"y="<<y;
	}	
};
int main()
{
	A obj(10,20);
	A obj2=obj;
	
	return 0;
}
