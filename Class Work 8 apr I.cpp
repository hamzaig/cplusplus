#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main()
{
	ofstream file("myfile.txt");
	file<<"i love pakistan and i love muslims poeple";
	if(!file)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	cout<<"File Is Created.";
	file.close();
	char a;
	
	ifstream file1("myfile.txt");
	if(!file)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	while(cin>a;)
	{
		file1>>noskipws>>a;
		cout<<a;
		}	
	file1.close();
}
