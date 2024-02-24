#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	char name[30];
	char dept[30];
	int  mark;
};
int main()
{
	struct student s;
	cout<<"Enetr the student Roll No :";
    cin>>s.roll_no;
    
    cout<<"Enter the student Name :";
    cin>>s.name;
    
    cout<<"Enter the student Department :";
    cin>>s.dept;
    
    cout<<"Enter the student Mark :";
    cin>>s.mark;
    
    cout<<endl<<"Student Information"<<endl;
    cout<<"Student Roll No :"<<s.roll_no<<endl;
	cout<<"Student Name :"<<s.name <<endl;
	cout<<"Student Department :"<<s.dept<<endl;
	cout<<"Student Mark :"<<s.mark;
	
	return 0;
}
