#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("myfile.txt",ios::out);
	if(!file)
	{
		cout<<"Error in opening File";
		exit(1);
	}
	cout<<"File Created.";
	file<<"Ohh There is a Women"<<endl;
	file.close();
	
	file.open("myfile.txt",ios::in);
	if(!file)
	{
		cout<<"Error in opening File";
		exit(1);
	}
	char ch;
	while(!file.eof())
	{
		file>>noskipws>>ch;
		cout<<ch;
	}
	file.close();
	return 0;
	
}
