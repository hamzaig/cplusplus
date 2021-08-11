#include <iostream>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"Enter The Length of list:";cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<". Enter The Number:\t";cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[0]>a[i])  
			a[0]=a[i];
	}
	
	cout<<"\nThe Smallest Number is:\t"<<a[0];
	
	for(int i=0;i<n;i++)
	{
		if(a[0]<a[i])  
			a[0]=a[i];
	}
	
	cout<<"\nThe Largest Number is:\t"<<a[0];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]=a[j])  
			a[0]=a[i];
		}
	}
	
	int max_count = 0;

for (int i=0;i<5;i++)
{
   int count=1;
   for (int j=i+1;j<5;j++)
       if (a[i]==a[j])
           count++;
   if (count>max_count)
      max_count = count;
}

for (int i=0;i<n;i++)
{
   int count=1;
   for (int j=i+1;j<n;j++)
       if (a[i]==a[j])
           count++;
   if (count==max_count)
       cout <<endl<<"The Value That Occurs the most: "<<a[i] << endl;
}	
}
