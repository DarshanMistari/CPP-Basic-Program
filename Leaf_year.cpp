#include<iostream>
using namespace std;
int main()
{
	int year;
	
   cout<<"Enter the year:";
   cin>>year;
   
   if(year%4==0)
   {
   	cout<<"It is the leaf_Year";
   }
   else
   {
   	cout<<"It is not leaf_ Year";
   }
   return 0; 
}