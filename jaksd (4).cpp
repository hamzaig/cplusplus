#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream of;
	of.open("1.txt",ios::out);
	for(int i=1;i<=100;i++)
	{
		of<<i<<endl;
	}
	of.close();
}
