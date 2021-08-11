#include <iostream>
using namespace std;
struct student
{
	int marks[3];	
};
void avg(student);
int main()
{
	student s1;
	s1.marks[0]=56;
	s1.marks[1]=46;
	s1.marks[2]=26;
	avg(s1);
}
void avg(student s1)
{
	int total=0;
	int avg;
	for(int i=0;i<3;i++)
	{
		total+=s1.marks[i];
	}
	cout<<"The Total is = "<<total<<endl;
	cout<<"The Average is ="<<total/3;
}
