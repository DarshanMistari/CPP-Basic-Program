#include<iostream>
using namespace::std;
int main()
{
	int i, j;
	int n=6;

        for (i =n; i >= 1; i--) {


            for (j = 1; j <= i; j++) {
                cout<<"*";
            }

            cout<<endl;
        }

        for (i = 2; i <= n; i++) {

            
            for (j = 1; j <= i; j++) {
                cout<<"*";
            }
            cout<<endl;
        }
}
