#include <iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Please Enter Any Chracter\n";
	cin>>x;
	((x>=65 && x<=90)?cout<<"Uppercase":
	(x>=97 && x<=122)?cout<<"Lowercase":
	(x>=48 && x<=57)?cout<<"A Digit":
	((x>=0 && x<=47)||(x>=58 && x<=64)||(x>=91 && x<=96)||(x>=123 && x<=127))?cout<<"Special Chracter":	
	cout<<"Lowercase");
}
