#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int count;
	char ch;
	ifstream iff;
	iff.open("2.txt");
	while(!iff.eof())
	{
		iff.get(ch);
		if(ch==' ')
		count++;
	}
	cout<<endl<<count;
	
}
