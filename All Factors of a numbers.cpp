#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Please Enter The Value: ";
	cin>>x;
	
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			cout<<i<<endl;
		}
	}
	
}
