#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int c;
	char ch;
	double d;
	ifstream file("text.txt");
	if(!file)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	file>>c>>ch>>d;
	cout<<"The Contents are as follows:\n";
	cout<<c<<endl<<ch<<endl<<d<<endl;
	file.close();
	
}
