#include <iostream>
using namespace std;
int add();
int main()
{
	int sum;
	sum=add();
	cout<<sum;
}

inline int add(void)
{
	int a,b;
	cin>>a>>b;
	return(a+b);
}
