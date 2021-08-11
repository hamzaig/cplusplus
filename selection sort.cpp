#include <iostream>
using namespace std;
int main()
{
	int x[5],min,temp;
	for(int i=0;i<5;i++)
	{
		cin>>x[i];	
	}
	
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		min=i;
		for(int j=i+1;j<5;j++)
		{
			if(x[j]<x[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=x[i];
			x[i]=x[min];
			x[min]=temp;
		}	
	}
	for(int i=0;i<5;i++)
	{
		cout<<x[i]<<" ";	
	}
}
