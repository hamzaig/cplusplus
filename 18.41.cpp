#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	char city[50];
	ifstream file("city.txt");
	if(!file)
	{
		cout<<"Error in opening in file";
		exit(1);
	}
	cout<<"The List of cities is as follows : \n";
	while(!file.eof())
	{
		file>>city;
		cout<<city<<endl;
	}
	file.close();
	getch();
}
