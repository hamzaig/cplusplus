#include<iostream>
using namespace std;
int main()
{
	int a1[5],temp=0;
	for(int i=0;i<10;i++)
	{
		cin>>x[i];	
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}	
		}
	}
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<x[i]<<endl;	
	}
	
	
}
