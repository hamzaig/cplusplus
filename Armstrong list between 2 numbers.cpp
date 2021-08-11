#include <iostream>
using namespace std;
int main()
{
	int x1,x2,sum,num,digit;
	cout<<"Please Enter The Starting Point: ";cin>>x1;
	cout<<"Please Enter The Ending Point: ";cin>>x2;
	
	for(int i=x1;i<=x2;i++)
	{
		num=i;
		sum=0;
		for(;num>0;num/=10)
		{
			digit=num%10;
			sum=sum+(digit*digit*digit);
		}
		if(i==sum)
		{
			cout<<i<<endl;
		}
	}
	
}	
