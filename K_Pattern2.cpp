#include<iostream>
using namespace::std;
int main()
{
	for(int i=1; i<=7; i++)
        {
            for(int j=1; j<=7; j++)
            {
                if(j==1 || (j==6-i) || (i==2+j))
                {
                    cout<<"+";
                }
                else
                {
                    cout<<" ";
                }
            }
           cout<<endl;
        }
}