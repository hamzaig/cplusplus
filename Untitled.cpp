#include <iostream>
using namespace std;
struct result
{
	int marks;
	char grade;
};
struct record
{
	int rollno;
	result x;
};
int main()
{
	record x;
	cout<<"Enter Roll No: ";cin>>x.rollno;
	cout<<"Enter Marks: ";cin>>x.x.marks;
	cout<<"Enter Grade: ";cin>>x.x.grade;
	
	cout<<"Roll No: "<<x.rollno;
	cout<<"\nMarks: "<<x.x.marks;
	cout<<"\nGrade: "<<x.x.grade;
	
	cout<<"Size of Structure of x: "<<sizeof(x);
	
}


