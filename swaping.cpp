//with 3rd variable
#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter Value of 1st and Second Variable\n";
	cin>>x;
	cin>>y;
	z=x;
	x=y;
	y=z;
	cout<<"After Swaping The Value of A And B\n";
	cout<<"A="<<x<<endl;
	cout<<"B="<<y;
}
