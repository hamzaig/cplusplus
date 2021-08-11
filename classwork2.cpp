s#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	string u,u1,p,p1;
	cout<<"\n\t\t\t\t\tWelcome To The Sign Up Page\n\n";
	cout<<"Please Enter Your UserName : ";getline(cin,u);
	cout<<"\nPlease Enter Your Password : ";getline(cin,p);
	cout<<"\n\t\t\t\t\tPress Enter Any Key To Login";
	getch();
	system("cls");
	cout<<"\n\t\t\t\t\tWelcome To The Sign in Page\n\n";
	cout<<"Please Enter Your UserName : ";getline(cin,u1);
	try
	{
		if(u==u1)
		{
			cout<<"Please Enter Your Password : ";getline(cin,p1);
			if(p1!=p)
			{
				throw(p1);
			}
		}
		else
		{
			cout<<"Your User Name is Wrong";
		}
	}
	catch(string)
	{
		cout<<"Your Password is wrong";
	}
	
}
