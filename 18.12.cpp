#include <iostream>
#include <fstream>
using namespace std;

struct email
{
	char name[20];
	char id[30];
};

int main()
{
	email user;
	email check;
	cout<<"Please Enter Your Name : ";cin>>user.name;	
	cout<<"Please Enter Your Email : ";cin>>user.id;
	ofstream outp("18.12.txt",ios::out|ios::binary);
	outp.write((char*)&user,sizeof(struct email));
	outp.close();
	ifstream inp("18.12.txt",ios::in|ios::binary);
	inp.read((char*)&check,sizeof(struct email));
	cout<<endl<<"The Name is : "<<check.name<<endl;
	cout<<"The Email is : "<<check.id;
	inp.close();
	
}
