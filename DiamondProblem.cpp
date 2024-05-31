#include<iostream>
using namespace std;
class A
{
	public:
	void fun1()
	{
		cout<<"Function 1 is A class.\n";
	}
};
class B : public A
{
	public:
	void fun2()
	{
		cout<<"Function 2 is B class.\n";
	}
};
class C : public B
{
	public:
	void fun3()
	{
		cout<<"Function 3 is C class.\n";
	}
};
class D : public C
{
	public:
	void fun4()
	{
		cout<<"Function 4 is D class.\n";
	}
};
int main()
{
	D d;
    A *a;
	a = &d;
	a ->fun1();
	d.fun2();
	d.fun3();
	d.fun4();
		
}
