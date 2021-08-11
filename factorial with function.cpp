#include <iostream>
using namespace std;
int z(int);
int main()
{
	int num,fact=1,i;
	cin>>num;
	
	cout<<z(num);
}
int z(int x)
{
	int fact=1,i;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
