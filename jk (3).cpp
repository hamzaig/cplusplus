#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ch;int count;
	ifstream io;
	io.open("2.txt");
	while(!io.eof())
	{
		io.get(ch);
		if(isalpha(ch))
		count++;
	}
	cout<<endl<<count;
	io.close();
}
