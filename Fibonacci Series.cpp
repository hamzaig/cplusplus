#include <iostream>
using namespace std;
int main()
{
	int n,n1=0,n2=1,fn;
	cout<<"Please Enter The Number of Terms Which You Want To Prints : ";cin>>n;
	cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<" "<<n1<<"";
			continue;
		}
		if(i==2)
		{
			cout<<" "<<n2<<" ";
			continue;
		}
		fn=n1+n2;
		n1=n2;
		n2=fn;
		cout<<fn<<" ";
		
		
	}// 0 1 1 1 1 1 1
	
}
