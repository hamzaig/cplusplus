#include <iostream>
using namespace std;
int main()
{
	int x[10],minimum=0;
	
	for(int i=0;i<10;i++)
	{
		cin>>x[i];
	}
	minimum=x[0];
	
	for(int i=0;i<10;i++)
	{
		if(minimum>x[i])
		minimum=x[i];
	}	
	cout<<endl<<minimum;
}
