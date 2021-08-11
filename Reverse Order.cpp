#include <iostream>
using namespace std;
int main()
{
	int x[5];
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
	}
	cout<<"The Actual Array is:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<x[i]<<"\t";
	}
	cout<<"\nThe Reverse Array is:"<<endl;
	for(int i=4;i>-1;i--)
	{
		cout<<x[i]<<"\t";
	}
}
