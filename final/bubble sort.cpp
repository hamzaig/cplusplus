#include <iostream>
using namespace std;
int main()
{
	int x[5]={7,2,2,9,4} , temp;
	
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	
	
	cout<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<x[i]<<" ";
	}
	
	
}
