#include <iostream>
using namespace std;
long fact(int);
int main()
{
	int a;
	cin>>a;
	cout<<fact(a);
}

long fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	return (n*fact(n-1));
}
