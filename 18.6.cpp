#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char x;
	ofstream out("hamza18.6.txt");
	for(int i=0;i<6;i++)
	{
		cout<<"Plz Enter A Character : ";
		cin>>x;
		out.put(x);
	}
	out.close();
}
