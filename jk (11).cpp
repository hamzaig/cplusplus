#include <iostream>
using namespace std;
struct phoneno
{
	int nc,ac;
	long num;
};
int main()
{
	phoneno a2,a1={92,332,7229422};
	cout<<"Enter National Code : ";cin>>a2.nc;
	cout<<"Enter Area Code : ";cin>>a2.ac;
	cout<<"Enter Phone Number : ";cin>>a2.num;
	cout<<"Phone Number 1 : 00"<<a1.nc<<a1.ac<<a1.num<<endl;
	cout<<"Phone Number 2 : 00"<<a2.nc<<a2.ac<<a2.num;
	
}

