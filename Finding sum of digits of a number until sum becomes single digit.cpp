#include<iostream>
using namespace std;
int main()
{
	int x,i,n=0,j;
	cin>>x;
	while(x>9)
	{
		n=0;
		for(i=1;x>0;x=x/10)
		{
		n=n+(x%10);
		}
		x=n;
	}
	cout<<n;
}
