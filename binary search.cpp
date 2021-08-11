#include <iostream>
using namespace std;
int main()
{
	int x[5],start=0,end=4,temp=-1,n,mid;
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
	}
	cin>>n;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(x[mid]==n)
		{
			temp=mid;
			break;
		}
		else if(n<x[mid])
		end=mid-1;
		else
		start=mid+1;
	}
	if(temp==-1)
	cout<<"The Number is not exsit";
	else
	cout<<"The Number is on the location: "<<temp;
}
