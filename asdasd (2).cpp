#include<iostream>
using namespace std;
struct student
{
	int stu_id;	
};
struct teacher
{
	int teach_id;	
	student s;
};
struct admin
{
	int ad_id;
	teacher t;	
};
int main()
{
	admin a;
	a.t.s.stu_id=123;
	cout<<a.t.s.stu_id<<endl;
}
