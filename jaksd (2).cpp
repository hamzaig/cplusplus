#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int x=10;
	char y='*';
	double z=38.242;
	ofstream of("3.txt");
	of<<x<<' '<<y<<' '<<z;
	of.close();
}
