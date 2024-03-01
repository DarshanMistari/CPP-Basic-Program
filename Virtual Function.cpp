#include<iostream>
using namespace std;
class Base
{
	public :
		virtual void show()
		{
			cout<<"\n Show Base Class";
		}
		void display()
		{
			cout<<"\n Display Base Class";
		}
};
class Derived : public Base
{
	public:
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
	
	return 0;
}
