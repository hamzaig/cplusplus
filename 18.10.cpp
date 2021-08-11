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
	ofstream out("18.10.txt",ios::binary);
	for(int i=0;i<3;i++)
	{
		cout<<"Enter The Roll No. : ";cin>>s.rollno;
		cout<<"Enter The Marks : ";cin>>s.marls;
		cout<<"Enter The Name : ";cin>>s.name;
		cout<<endl;
		out.write((char*)&s,sizeof(s));
	}
	out.close();
}
