#include <iostream>
using namespace std;
int main()
{
	int x,i,sum=0;
	cin>>x;
	for(i=2;i<=x;i=i+2)
	{
	
		cout<<i;
		sum+=i;
	}
	cout<<"\n\t\t"<<sum;
}
