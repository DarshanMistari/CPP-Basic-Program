#include<iostream>
using namespace::std;
int main()
{
	int rows=5;
	cout << "Square of Increment Numbers from Right Side\n";

	for (int i = 1; i <=rows; i++)
	{
		for (int j = 1; j <= rows - i; j++)
		{
			cout << "1 ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
}
