//without 3rd variable
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter Value of 1st and Second Variable\n";
	cin>>x;
	cin>>y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"After Swaping The Value of A And B\n";
	cout<<"A="<<x<<endl;
	cout<<"B="<<y;
}
