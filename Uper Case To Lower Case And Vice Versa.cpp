#include <iostream>
using namespace std;
int main()
{
	char x;
	cin>>x;
	if(( x>='a' && x<='z')||(x>='A'&&x<='Z'))
	{
		if(x>='A'&&x<='Z')
		{
			x=x+32;
		}
		else
		{
			x=x-32;
		}
		cout<<x;
	}
	else
	{
		cout<<"You Entered A Invaild Character";
	}
}
