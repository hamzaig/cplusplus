#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("1.txt");
	for(int i=1;i<=100;i++)
	{
		fout<<i<<endl;
	}
	fout.close();
}
