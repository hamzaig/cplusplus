#include <iostream>
#include <fstream>
using namespace std;

class country
{
	private:
		int id;
		char name[50];
	public:
		void get(void)
		{
			cout<<"Please Enter The Id of Country : ";cin>>id;
			cout<<"Please Enter The Name of The Country : ";cin>>name;
		}
		void show(void)
		{
			cout<<"Id : "<<id;
			cout<<"Country Name : "<<name;
		}
};

int main()
{
	country cc,cr;
	ofstream out("18.13",ios::binary);
	cc.get();
	out.write((char*)&cc,sizeof(cc));
	out.close();
	cout<<"The Data is That."<<endl;
	ifstream in("18.13",ios::binary);
	in.read((char*)&cc,sizeof(cc));
	cc.show();
	out.close();
}














