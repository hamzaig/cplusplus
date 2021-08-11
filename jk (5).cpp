#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream of;
	of.open("2.txt");
	char ch[30];int count=0;
	while(!of.eof())
	{
		of>>ch;
		count++;
	}
	cout<<count;
}
