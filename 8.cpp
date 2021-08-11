#include <iostream>
using namespace std;
int main()
{
	int st,nd,plus,minus,multiply;
	float divide;
	cout<<"Enter Two Integers\n";
	cin>>st>>nd;
	plus=st+nd;
	minus=nd-st;
	multiply=st*nd;
	divide=st/(float)nd;
	cout<<"Sum ="<<plus<<"\n";
	cout<<"Subraction ="<<minus<<"\n";
	cout<<"Multiply ="<<multiply<<"\n";
	cout<<"Divide ="<<divide<<"\n";
	
	return 0;
}
