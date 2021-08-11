#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char x;
	ofstream out("18.9.txt",ios::binary);
	for(int i=0;i<3;i++)
	{
		cout<<"Please Enter Integer : ";
		cin>>x;
		out.write((char*)&x,sizeof(x));
	}
	out.close();
}
//program execution error
