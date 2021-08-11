#include <iostream>
using namespace std;
int main()
{
	int x,y,hfc;
	cin>>x>>y;
	for(int i=0;i<=x&&i<=y;i++)
	{
		if(x%i==0&&y%i==0)
		hfc=i;
	}
	
	cout<<hfc;
}

