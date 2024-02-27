#include<iostream>
using namespace std;
int main()
{
	float area,height,breath;
	
	cout<<"Enter the triangle of the height:";
	cin>>height;
	
	cout<<endl<<"Enter the tringle of the breath:";
	cin>>breath;
	
	area=0.5*height*breath;
	cout<<endl<<"Area of the Triangle is:"<<area;
	
	return 0;
}
