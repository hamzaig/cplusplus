#include <iostream>
using namespace std;
int main()
{
	int x[5];
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
	}
	
	for(int i=0;i<5;i++)
	
	{
		
		sum+=x[i];
	}
	
	cout<<sum;
}
