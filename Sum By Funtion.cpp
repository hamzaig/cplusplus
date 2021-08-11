#include <iostream>
using namespace std;
int sum(int,int);
int main()
{
	int a,b,add;
	cout<<"Please Enter First Integer: \t";
	cin>>a;
	cout<<"Please Enter First Integer: \t";
	cin>>b;
	add=sum(a,b);
	cout<<"\nThe Sum Of Both Integer: \t"<<add<<endl;
}

int sum(int x,int y)
{
	return(x+y);
}
