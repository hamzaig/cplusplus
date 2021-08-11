#include <iostream>
using namespace std;
int main()
{
	int a,x,y=0,z=0;
	cout<<"Please Enter A Number : ";cin>>a;
	x=a;
	for(;x%10>0;)
	{
			y=x%10;
			z=z*10+y;
			x=x/10;
	}	
	if(a==z)
	cout<<"\n It is a Palindrome Number";
	else
	cout<<"\n It is not a Palindrome Number";
}
