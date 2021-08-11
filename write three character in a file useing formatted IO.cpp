#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n=10;
	char ch='*';
	double d=38.125;
	ofstream file("text.txt");
	if(!file)
	{
		cout<<"File Opening Error";
		exit(1);
	}
	file<<n<<" "<<ch<<" "<<d;
	file.close();
	
}
