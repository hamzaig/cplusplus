#include<iostream>
using namespace std;
int pn(int);
int main()
{
	int i,num;
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(pn(i))
		cout<<i<<" ";
	}
	cout<<endl;
}


int pn(int n)
{
	int i,prime=1;
	
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			{
				prime=0;
				break;
			}
	}
	return prime;
}

