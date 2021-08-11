#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	for(sum=0;n>0;n=n/10)
	{
		sum=sum+(n%10);
	}
	cout<<sum;
}
