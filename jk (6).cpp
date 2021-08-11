#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
	ifstream of;
	of.open("2.txt");
	char ch[30];int count=0;
	while(!of.eof())
	{
		of>>ch;
		if(strcmpi(ch,"time")==0)
		count++;
	}
	cout<<count;
}
