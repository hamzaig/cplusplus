#include<iostream>
using namespace std;
int s(int *x,int *y,int *z);
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	
	cout<<x<<y<<z;
	s(&x,&y,&z);
	cout<<endl<<x<<y<<z;
}
int s(int *x,int *y,int *z)
{
	int swap;
	swap=*x;
	*x=*z;
	*z=swap;
}
