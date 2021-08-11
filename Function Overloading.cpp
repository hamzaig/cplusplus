#include<iostream>
using namespace std;
int calc(int a)
{
	return(a*a);
}
int calc(int a,int b)
{
	return(a+b);
}
int main()
{
	int a;
	int &b=a;
	cin>>a;
	cin>>b;
	cout<<calc(a)<<endl;
	cout<<calc(a,b);
}


