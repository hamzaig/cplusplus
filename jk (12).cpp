#include <iostream>
using namespace std;
struct payment
{
	int en;
	char efn[100],esn[100];
	float nohw;
	float hpr;
}; 
int main()
{
	payment a;
	cout<<"Enter The Employee's No : ";cin>>a.en;
	cout<<"Enter The Employee's First Name : ";cin>>a.efn;
	cout<<"Enter The Employee's Second Name : ";cin>>a.esn;
	cout<<"Enter The Number of Hours Worked : ";cin>>a.nohw;
	cout<<"Enter Hourly Payrate : ";cin>>a.hpr;
	cout<<endl;
	cout<<"Employee's Payroll Data\n";
	cout<<"Name : "<<a.efn<<" "<<a.esn<<endl;
	cout<<"No : "<<a.en<<endl;
	cout<<"Hours Worked : "<<a.nohw<<endl;
	cout<<"Hourly Pay Rate : "<<a.hpr<<endl;
	cout<<"Gross Pay : "<<(a.nohw*a.hpr);
}
