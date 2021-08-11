#include <iostream>
using namespace std;
int main()
{
	int a[3],n;
	
	for(int i=0;i<3;i++)
	{
		cout<<i+1<<". Enter The Number:\t";cin>>a[i];
	}
	
	for(int i=0;i<3;i++)
	{
		if(a[0]<a[i])  
			a[0]=a[i];
	}
	
	cout<<"\nThe Largest Number is:\t"<<a[0];
	
}
