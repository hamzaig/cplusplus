#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream of;
	of.open("2.txt");
	char ch;int count=0;
	while(!of.eof())
	{
		of.get(ch);
		if(ch==' ')
		{
			count++;
		}
	}
	cout<<count;
}
