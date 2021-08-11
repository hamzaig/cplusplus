#include <iostream>
using namespace std;
int main()
{
	int x[5]={7,2,2,9,4} , temp,min;
	for(int i=0;i<4;i++)
	{
		min=i;
		for(int j=i+1;j<5;j++)
			if(x[j]<x[min])
				min=j;
		if(min!=i)
		{
			temp=x[i];
			x[i]=x[min];
			x[min]=temp;
		}		
	}
	cout<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<x[i]<<" ";
	}
	
	
}
