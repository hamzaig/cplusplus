#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
	char x;
	int v=0;
	ifstream in("hamza18.6.txt");
	while(!in.eof())
	{
		in.get(x);
		if(x>='a'&&x<='z'||x>='A'&&x<='Z')
		v++;
		cout<<x<<endl;
	}
	cout<<"Total Character Are :"<<v<<endl;
	in.close();
}
