#include <iostream>
using namespace std;
int main()
{
	int x=5,num[x],sqr[x],cube[x],sum[x],gtotal=0;
	for(int i=0;i<x;i++)
	{
		num[i]=i;
		sqr[i]=i*i;
		cube[i]=i*i*i;
		sum[i]=num[i]+sqr[i]+cube[i];
	}
	for(int i=0;i<x;i++)
	{
		gtotal+=sum[i];
	}
	//print this all
	cout<<"Numbers:\t";
	for(int i=0;i<x;i++)
	{
		cout<<num[i]<<"\t";
	}
	cout<<"\nSquare:\t\t";
	for(int i=0;i<x;i++)
	{
		cout<<sqr[i]<<"\t";
	}
	cout<<"\nCube:\t\t";
	for(int i=0;i<x;i++)
	{
		cout<<cube[i]<<"\t";
	}
	cout<<"\nSum:\t\t";
	for(int i=0;i<x;i++)
	{
		cout<<sum[i]<<"\t";
	}
	cout<<"\nThe Grand Total Is: "<<gtotal;
}
