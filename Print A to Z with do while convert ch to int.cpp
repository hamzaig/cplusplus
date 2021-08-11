#include <iostream>
using namespace std;
int main()
{
	char ch='A';
	int c=0;
	
	do
	{
		c=int(ch);
		cout<<ch<<" ";
		c++;
		ch=char(c);
	}
	while(ch<='Z');
}
