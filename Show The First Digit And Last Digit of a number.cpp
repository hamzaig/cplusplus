#include <iostream>
using namespace std;
int main()
{
	int x,l,f;
	cin>>x;
	l=x%10;
	for(;x>=10;)
	{
		x=x/10;
	}
	f=x;
	cout<<"The First Digit Is: "<<f<<endl;
	cout<<"The Last Digit Is: "<<l<<endl;
	cout<<"The Product of 1st and Last Digit Is: "<<(f*l)<<endl;
	
}
