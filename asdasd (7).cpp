#include<iostream>
using namespace std;
int main()
{
	int x,s,z=0;
	cin>>x;
	for(int i=0;;x/10)
	{
			s=x%10;
			z=s+z;
	}	
	cout<<endl<<z;
}
