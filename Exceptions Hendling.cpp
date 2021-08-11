#include <iostream>
using namespace std;

int div(int x,int y)
{
	if(y==0)
	throw "Second Value is 0 So Division is Infinity";
	else
	return (x/y);
}

int main()
{
	int x,y,z;
	cout<<"Please Enter 1st Value : ";cin>>x;
	cout<<"Please Enter 2nd Value : ";cin>>y;
	div(x,y);
}
