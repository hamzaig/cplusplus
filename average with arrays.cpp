#include<iostream>
using namespace std;
int main()
{
	int a[100],sum,n;
	float avg;
	cout<<"Enter The Numbers of Data:\t";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" Enter The Number:\t\t";cin>>a[i];
		sum+=a[i];
	}
	avg=sum/(float)n;
	
	cout<<"The Sum of the Numbers:\t\t"<<sum<<endl<<"The Average of the Numbers:\t"<<avg;
}
