#include <iostream>
using namespace std;
int main()
{
	int x,r,rn=0;
	cin>>x;
	while(x!=0)
	{
		r=x%10;
		rn=rn*10+r;
		x/=10;
	}
	cout<<endl<<rn;
}
