#include <iostream>
using namespace std;
int main()
{
	int i=3;
	
	try
	{
		if(i==3)
		throw;
	}
	catch(...)
	{
		cout<<"Exception caught";
	}
}
