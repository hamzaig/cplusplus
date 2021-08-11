#include <iostream>
using namespace std;
int main()
{
	int x[10],s;
	for(int i=0;i<10;i++)
	{
		cin>>x[i];
	}
	cout<<endl;
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<10;j++)       
		{
			if(x[i]>x[j])
			{
				s=x[i];
				x[i]=x[j];
				x[j]=s;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<x[i]<<endl;
	}
}
