#include <iostream>
using namespace std;
struct book
{
	int id,pages;
	float price;
};
int main()
{
	book b1,b2;
	cout<<"Enter Id, Pages and Price of First Book : \n";cin>>b1.id>>b1.pages>>b1.price;
	cout<<"Enter Id, Pages and Price of First Book : \n";cin>>b2.id>>b2.pages>>b2.price;
	
	cout<<"The Most Costly Book is as Follows:\n";
	
	if (b1.price>b2.price)
	{
		cout<<"Book Id : "<<b1.id<<endl;
		cout<<"Book Pages : "<<b1.pages<<endl;
		cout<<"Book Price : "<<b1.price<<endl;
	}
	else
	{
		cout<<"Book Id : "<<b2.id<<endl;
		cout<<"Book Pages : "<<b2.pages<<endl;
		cout<<"Book Price : "<<b2.price<<endl;
	}
	
}

