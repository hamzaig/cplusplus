
#include <iostream>
using namespace std;
int main()
{
	int x[5]={7,2,2,9,4} , temp;
	
	
 	for(int i=1;i<5;i++)
 	{
 		int j;
		 temp=x[i];
		j=i-1;
		while(temp<x[j]&&x[j]>=0)
		{
			x[j+1]=x[j];
			j--;	
		}
		x[j+1]=temp;	
	}
	
	
	cout<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<x[i]<<" ";
	}
	
	
}
