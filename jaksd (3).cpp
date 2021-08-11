#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char x[50];
	ofstream of("4.txt");
	for(int i=0;i<50;i++)
	{
		cin>>x;
		of<<x<<endl;
		
	}
}
