#include<iostream>
using namespace std;
int main()
{
	int x,i,j,k=1;
	cin>>x;couts<<endl;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
}
