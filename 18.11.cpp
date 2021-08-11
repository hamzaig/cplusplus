#include <iostream>
#include <fstream>
using namespace std;
struct student
{
	int rollno;
	int marls;
	char name[100];	
};
int main()
{
	student s;
	ifstream in("18.10.txt",ios::binary);
	for(int i=0;i<3;i++)
	{
		in.read((char*)&s,sizeof(s));
		
		cout<<"The Marks : "<<s.marls<<endl;
		cout<<"The Name : "<<s.name<<endl;
		cout<<"The Roll No. : "<<s.rollno<<endl;
		
		cout<<endl;
	}
	in.close();
}
