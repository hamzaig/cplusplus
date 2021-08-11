//hamza ali khalid bscs 3rd semester roll no. 4
#include <iostream>
#include <conio.h>
using namespace std;
void forgetusername(void);
void forgetpass(void);
void all(void);
string u,p,e,ph;
string u1,p1,e1,ph1;


int main()
{
	cout<<"\n\t\t\t\t\t\tWelcome To The Sign Up Page\n\n";
	cout<<"Please Enter Your UserName\t:\t";getline(cin,u);
	cout<<"\nPlease Enter Your Password\t:\t";getline(cin,p);
	cout<<"\nPlease Enter Your Email\t\t:\t";getline(cin,e);
	cout<<"\nPlease Enter Your Phone Number\t:\t";getline(cin,ph);
	cout<<"\n\t\t\t\t\t\tPress Enter Any Key To Login";
	getch();
	system("cls");
	do
	{
		all();
		getch();
		system("cls");
	}while(true);
	
}

void all(void)
{
	
	cout<<"\n\t\t\t\t\t\tWelcome To The Sign in Page\n\n";
	try
	{
		try
		{
			cout<<"Please Enter Your User Name\t:\t";cin>>u1;
			if(u1==u)
			{
			cout<<"Please Enter Your Password\t:\t";cin>>p1;
				if(p1!=p)
				{
				throw(p1);
				}
				else
				{
				cout<<"\n\t\t\t\t\t\tYou Are Logined...";
				}
			}
				else
				{
					throw(u1);
				}
		}
		catch(string p1)
		{
			if(u1!=u)
			{
			
				forgetusername();
			}
			else
			{
						throw;
			}
		}
	}
	catch(string u1)
	{
		forgetpass();
	}

}

void forgetusername(void)
{
		cout<<"\n\t\t\tYou Entered Wrong Username To Reset Your Username Please Select Any Option\n\n";
		cout<<"1. Reset By Email.\n2. Reset By Phone Number."<<endl;
		cout<<"\n\t\t\tEnter Any Number ";
	int i;
	cin>>i;
	switch(i)
	{
		case 1:
		{
			cout<<"Please Enter Your Email Address : ";cin>>e1;
			if(e==e1)
			{
				cout<<"Email Matched Please Enter Your New Username : ";cin>>u;
				cout<<"User Name is Changed Go To Home Page Press Any Key";
			}
			else
			{
				cout<<"You Entered Wrong Email Go To Home Page Press Any Key";
			}
			break;
		}
		case 2:
		{
			cout<<"Please Enter Your Phone Number : ";cin>>ph1;
			if(ph==ph1)
			{
				cout<<"Phone Number Is Matched Please Enter Your New Username : ";cin>>u;
				cout<<"User Name is Changed Go To Home Page Press Any Key";
			}
			else
			{
				cout<<"You Entered Wrong Phone Number Go To Home Page Press Any Key";
			}
			break;
		}
	}
}

void forgetpass(void)
{
		cout<<"\n\t\t\tYou Entered Wrong Password To Reset Your Password Please Select Any Option\n\n";
		cout<<"1. Reset By Email.\n2. Reset By Phone Number."<<endl;
		cout<<"\n\t\t\tEnter Any Number ";
	int i;
	cin>>i;

	switch(i)
	{
		case 1:
		{
			cout<<"Please Enter Your Email Address : ";cin>>e1;
			if(e==e1)
			{
				cout<<"Email Matched Please Enter Your New Password : ";cin>>p;
				cout<<"Password is Changed Go To Home Page Press Any Key";
			}
			else
			{
				cout<<"You Entered Wrong Email Go To Home Page Press Any Key";
			}
			break;
		}
		case 2:
		{
			cout<<"Please Enter Your Phone Number : ";cin>>ph1;
			if(ph==ph1)
			{
				cout<<"Phone Number Is Matched Please Enter Your New Password : ";cin>>p;
				cout<<"Password is Changed Go To Home Page Press Any Key";
			}
			else
			{
				cout<<"You Entered Wrong Phone Number Go To Home Page Press Any Key";
			}
			break;
		}
	}
}





