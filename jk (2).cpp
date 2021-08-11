#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char a[1000]="Time is a great teacher but unfortunately it kills all its pupils Berlioz";
	ofstream fout;
	fout.open("2.txt");
	fout<<a;
	fout.close();
}

