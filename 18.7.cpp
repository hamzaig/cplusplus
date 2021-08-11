#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char x;
	ifstream in("hamza18.6.txt");
	while(!in.eof())
	{
		in.get(x);
		cout<<x<<endl;
	}
	in.close();
}
