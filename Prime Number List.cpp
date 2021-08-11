#include <iostream>
using namespace std;
int main()
{
	int low,h,n;
	cout<<"Please Enter The Starting Point: ";cin>>low;
	cout<<"Please Enter The Ending Point: ";cin>>h;
	
	while(low<h)
	{
		n=0;
		for(int i=2;i<=low/2;i++)
		{
			if(low%i==0)
			{
				n=1;
				break;
			}
			
		}
		if(n==0)
		cout<<low<<endl;
		low++;
	}
	
}
