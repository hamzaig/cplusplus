#include <iostream>
using namespace std;
int main()
{
	int n,i,c=1;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
		continue;
		else
		c=0;
	}
	if(c==0)
	cout<<"number is not a prime";
	else
	cout<<"number is a prime";
	
	
}
