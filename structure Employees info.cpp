#include<iostream>
using namespace std;
struct employee
{
	int id_no;
	char name[30];
	char dept[30];
	char postname[40];
	int salary;
};
int main()
{
	struct employee emp;
	
	cout<<"Enter the Employee ID No :";
	cin>>emp.id_no;
	
	cout<<"Enter the Employee Name :";
	cin>>emp.name;
	
	cout<<"Enter the Employee Department :";
	cin>>emp.dept;
	
	cout<<"Enter the Employee Postname :";
	cin>>emp.postname;
	
	cout<<"Enter the Employee Salary :";
	cin>>emp.salary; 
	
	cout<<endl<<"Employee ID No :"<<emp.id_no<<endl;
	
	cout<<"Employee Name :"<<emp.name<<endl;
	
	cout<<"Employee Department :"<<emp.dept<<endl;
	
	cout<<"Employee Postname :"<<emp.postname<<endl;
	
	cout<<"Employee Salary :"<<emp.salary<<endl;
}

