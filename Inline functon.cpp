#include<iostream>
using namespace std;
inline float mul(float a,float b)
{
	return (a*b);
}
inline double div(double x,double y)
{
	return (x/y);
}
int main()
{
	float a=12.34;
	float b=9.34;
	
	cout<<mul(a,b)<<endl;
	cout<<div(a,b)<<endl;
	return 0;
}