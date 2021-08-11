#include <iostream>
#include <cmath>
using namespace std;
int n;
float sd(float d[]);
int main()
{
	float d[100];
	cout<<"Please enter the Range which required Standard Deviation:\t";cin>>n;
	cout<<"\t\t\tPlease enter the Data"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<". Please Enter Value:\t";
		cin>>d[i];
	}
	cout<<endl<<"The Standard Deviation is:\t\t"<<sd(d);
}

float sd(float d[])
{
	int mean,x,sx;
	float sum;
	for(int i=0; i<n;i++)
	{
		sum+=d[i];
	}
	mean=sum/n;
	
	for(int i=0;i<n;i++)
	{
		sx+=pow((d[i]-mean),2);
	}
	
	return sqrt(sx/n);
	
}
















