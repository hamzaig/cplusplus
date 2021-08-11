#include <iostream>
using namespace std;
int main()
{
	int x[5],n=3,temp=0;
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
	}
	for(int i=0;i<5;i++)
	{
		if(n==x[i])
		temp=i;
	}
	if(temp==0)
	cout<<"The Number is not exsit";
	else
	cout<<"The Number is Found on the Index: "<<temp+1;
	
}
