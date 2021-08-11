#include <iostream>
using namespace std;
struct stu
{
	int rollno;
	int marks[5];
};
int main()
{
	stu a;
	cout<<"Enter Roll No: ";cin>>a.rollno;
	cout<<"Enter Marks: ";cin>>a.marks[0];
	cout<<"Enter Marks: ";cin>>a.marks[1];
	cout<<"Enter Marks: ";cin>>a.marks[2];
	cout<<"Enter Marks: ";cin>>a.marks[3];
	cout<<"Enter Marks: ";cin>>a.marks[4];
	cout<<"\nStudent Data Is:";
	cout<<"\nRoll No:"<<a.rollno;
	int tm=0;
	for(int i=0;i<5;i++)
	{
		tm+=a.marks[i];
	}
	float avg;
	avg=tm/5;
	cout<<"\nTotal Marks: "<<tm;
	cout<<"\nAverage: "<<avg;
	
}
