#include <iostream>
using namespace std;
int main()
{
	int age;
	char g,m;
	cout<<"Please Enter Your Martial Status\n";
	cin>>m;
	cout<<"Please Enter Your Gender\n";
	cin>>g;
	cout<<"Please Enter Your Age\n";
	cin>>age;
	
	if (m=='m')
		cout<<"Your Are Insured";
	else
	{
		if(m=='u' && age>30 && g=='m')
			cout<<"Your Are Insured";
		else
		{
			if(m=='u' && age>25 && g=='f')
				cout<<"Your Are Insured";
			else
				cout<<"Your Are Not Insured";
		}
	}
		
		
}
