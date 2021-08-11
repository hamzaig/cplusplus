#include <iostream>
using namespace std;
int main()
{
	int h,h1,h2,m,m1,m2,s,s1,s2;
	
	cout<<"\t\t\t\tEnter First Time"<<endl;
	cout<<"Enter Hours:\t"; cin>>h1;
	cout<<"Enter Minuts:\t"; cin>>m1;
	cout<<"Enter Seconds:\t"; cin>>s1;
	
	cout<<"\t\t\t\tEnter Second Time"<<endl;
	cout<<"Enter Hours:\t"; cin>>h2;
	cout<<"Enter Minuts:\t"; cin>>m2;
	cout<<"Enter Seconds:\t"; cin>>s2;
	
	s=s1+s2;
	m=m1+m2+(s/60);
	h=h1+h2+(m/60);
	s=s%60;
	m=m%60;
	
	cout<<"The Total Time is:\t"<<h<<" hour(s)\t"<<m<<" minut(s)\t"<<s<<" second(s)";
	
}
