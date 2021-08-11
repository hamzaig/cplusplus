#include <iostream>
using namespace std;
int main()
{
	int on,n,g,h=0;
	cout<<"Enter The Number Which You Want To Check Is Either Armstrong: ";cin>>on;
	n=on;
	while(n!=0)
	{
		g=n%10;
		h=h+(g*g*g);
		n/=10;
	}
	if(h==on)
	cout<<"armstrong";
	else
	cout<<"Not";
}
