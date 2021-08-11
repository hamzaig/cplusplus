#include <iostream>
using namespace std;
int main()
{
	int x,z=0;
	
	for(int j=1;j<100;j++)
	{
		for (int i=j/2;i>1;i--)
		{
		if(j%i==0)
		
		continue;
		for(int k=0;k<100;k++)
		{
			if(k!=j)
			cout<<k<<endl;
			continue;
		}
		}
	}
	
	
}
