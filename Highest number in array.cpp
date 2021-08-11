#include <iostream>
using namespace std;
int main()
{
	int x[10],max;
	for(int i=0;i<10;i++)
	{
		cin>>x[i];
	}
	max=x[0];
	for(int i=0;i<10;i++)
	{
		if(max<x[i])
		max=x[i];
	}
	cout<<endl<<max;
	
}
