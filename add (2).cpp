#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	cout<<endl;
	if(x>y&&x>z)
	cout<<x<<" is The Greatest Number";
	else if(y>z&&y>x)
	cout<<y<<" is The Greatest Number";
	else if(z>x&&z>y)
	cout<<z<<" is The Greatest Number";
	
}
