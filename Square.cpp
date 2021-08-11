#include <iostream>
using namespace std;
int main()
{
	int x,s,z=1,y=1;
	cin>>x>>s;
	
	for(int i=0;i<s;i++)
	{
		z*=x;
	}
	cout<<z;
}
