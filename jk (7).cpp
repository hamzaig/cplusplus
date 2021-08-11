#include <iostream>
using namespace std;
struct student
{
	int rollno,marks;
	float avg;
	char grade;
};
int main()
{
	student a;
	cout<<"Enter Roll No : ";cin>>a.rollno;
	cout<<"Enter Marks : ";cin>>a.marks;
	cout<<"Enter Average : ";cin>>a.avg;
	cout<<"Enter Grade : ";cin>>a.grade;cout<<endl;
	cout<<"You Entered The Following Details";cout<<endl;cout<<endl;
	cout<<"Roll No : "<<a.rollno;cout<<endl;
	cout<<"Marks : "<<a.marks;cout<<endl;
	cout<<"Average : "<<a.avg;cout<<endl;
	cout<<"Grade : "<<a.grade;cout<<endl;
}
