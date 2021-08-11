#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char x[30];
	ofstream out("hamza.txt");
	ifstream in("hamza.txt");
	for(int i=0;i<2;i++)
	{
		cout<<"Enter The String : ";
		gets(x);
		out<<x<<endl;
	}
	out.close();
	cout<<"\nAll The Srings That You Store In File as Follows"<<endl;
	while(!in.eof())
	{
		in.getline(x,30);
		cout<<x<<endl;
	}
	in.close();
}
