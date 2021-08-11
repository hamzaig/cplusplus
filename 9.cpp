#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"Please Enter Your Grade\n";
	cin>>grade;
	
	switch (grade)
	{
		case'a':
			cout<<"Your Excellent!"<<endl;
			break;
		
		case'b':
			cout<<"Well Done"<<endl;
			break;
		
		case'c':
			cout<<"Average"<<endl;		
			break;
		
		case'd':
			cout<<"You Passed"<<endl;
			break;
		
		case'e':
			cout<<"Better Try Again"<<endl;
			break;
		
		default:
			cout<<"Invalid Grade"<<endl;
	}
	
	cout<<"Obtained Grade: "<<grade<<endl;
	
	return 0;
}
