#include <iostream>
using namespace std;
struct book
{
	int bookid,pages;
	float price;
};
int main()
{
	book b[5];
	int max,m;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Book id: ";cin>>b[i].bookid;
		cout<<"Enter Pages: ";cin>>b[i].pages;
		cout<<"Enter Price: ";cin>>b[i].price;
		cout<<endl;
	}
	max=0;
	m=0;
	for(int i=0;i<5;i++)
	{
		if(b[i].price>max)
		{
			max=b[i].price;
			m=i;
		}
	}
	cout<<"The Record of Most Costly Book: ";
	cout<<"\nBook Id: "<<b[m].bookid<<"\nPages: "<<b[m].pages<<"\nPrice: "<<b[m].price;
}

