#include<iostream>
using namespace std;
class Base
{
	public:
		
		virtual void show()=0;
		
		void display()
		{
			cout<<"\n Display Base Class";
		}
};

class Derived : public Base
{
	void show()
	{
		cout<<"\n Show Derived Class";
	}
	void display()
	{
		cout<<"\n Display Derived Class";
	}
};

int main()
{
	Base *objB;
	Derived objD;
	objB = &objD;
	objB -> show();
	objB -> display();
}
