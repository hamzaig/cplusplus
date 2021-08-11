#include<iostream>
using namespace std;
int main()
{
	int rows,i,tabs,j,k=1;
	cin>>rows;
	
	for(i=1;i<=rows;i++)
	{
		for(tabs=rows;tabs>i;tabs--)
		{
			cout<<"\t";
		}
		for(j=1;j<=i;j++)
		{
			cout<<k<<"\t";
			k++;
		}
		cout<<endl;
	}
}
