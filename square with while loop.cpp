#include <iostream>
using namespace std;
int main()
{
	int n,s,r=1;
	cin>>n>>s;
	while(s!=0)
	{
		r=r*n;
		--s;
	}
	cout<<r;
}
