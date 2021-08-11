#include <iostream>
using namespace std;
int main()
{
	int x,y,l=1;
	cin>>x>>y;
	
	do
	{
		if(l%x==0 && l%y==0)
		{
			cout<<l<<endl;
			break;
		}
		l++;
	}
	while(true);
		
}
