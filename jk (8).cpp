#include <iostream>
using namespace std;
struct student
{
	int day,month,year;

};
int main()
{
	student a;
	cout<<"Enter Day of Birth : ";cin>>a.day;
	cout<<"Enter Month of Birth : ";cin>>a.month;
	cout<<"Enter Year of Birth : ";cin>>a.year;
	cout<<endl;
	cout<<"Your Date of Birth is "<<a.day<<"/"<<a.month<<"/"<<a.year;
	
}
