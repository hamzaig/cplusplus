#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string name;
	float price;
	cout<<"Please Enter the Product Name\n";cin>>name;
	cout<<"Please Enter the price of product\n";cin>>price;
	ofstream f("hamzaig.txt");
	f<<name<<price;
	f.close();
	ifstream f1("hamzaig.txt");
	f1>>name>>price;
	cout<<endl<<name<<endl<<price<<endl;
	f1.close();
	
}
