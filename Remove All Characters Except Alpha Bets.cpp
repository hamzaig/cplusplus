#include <iostream>
using namespace std;
int main()
{
	string x;
	cout<<"Please Enter Any String: ";
	getline(cin,x);
	
	for (int i=0;x[i]!='\0';i++)
	{
		if (!(x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z'))
		{
			x[i]='\0';
		}	
	}
	cout<<endl<<x;
}
