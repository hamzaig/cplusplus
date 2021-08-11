#include <iostream>
using namespace std;
int main()
{
	struct student
	{
	int roll;
	float cgpa;
	char grade;
	string name;
	};
	student s1={06,4.0,'A',"Hamzaig"};
	student s2={07,3.0,'B',"Azzy Shah"};
	student s3={05,2.0,'C',"Waleed"};
	cout<<"Student 1"<<endl;
	cout<<"Name : ";
	cout<<s1.name<<endl;	
	cout<<"ROLL NO : ";
	cout<<s1.roll<<endl;	
	cout<<"GRADE : ";
	cout<<s1.grade<<endl;	
	cout<<"CGPA : ";
	cout<<s1.cgpa<<endl;
	cout<<endl;	
	cout<<"Student 2"<<endl;
	cout<<"Name : ";
	cout<<s2.name<<endl;	
	cout<<"ROLL NO : ";
	cout<<s2.roll<<endl;	
	cout<<"GRADE : ";
	cout<<s2.grade<<endl;	
	cout<<"CGPA : ";
	cout<<s3.cgpa<<endl;
	cout<<endl;
	cout<<"Student 3"<<endl;
	cout<<"Name : ";
	cout<<s3.name<<endl;	
	cout<<"ROLL NO : ";
	cout<<s3.roll<<endl;	
	cout<<"GRADE : ";
	cout<<s3.grade<<endl;	
	cout<<"CGPA : ";
	cout<<s3.cgpa<<endl;
	cout<<endl;
}
