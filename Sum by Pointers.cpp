#include <iostream>
using namespace std;
int main()
{
	int *a=new int,*b=new int,*add=new int;
	cout<<"Please Enter First Integer: \t";
	cin>>*a;
	cout<<"Please Enter First Integer: \t";
	cin>>*b;
	*add=*a+*b;
	cout<<"\nThe Sum Of Both Integer: \t"<<*add<<endl;
}
