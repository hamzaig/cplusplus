#include <iostream>
using namespace std;
int main()
{
	string x[10],tem;
	for(int i=0;i<10;i++)
	{
		getline(cin,x[i]);
	}
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(x[i]>x[j])
			{
				tem=x[i];
				x[i]=x[j];
				x[j]=tem;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<x[i];
	}
}
