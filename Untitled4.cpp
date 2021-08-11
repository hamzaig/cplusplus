///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <cstdlib> 
#include <ctime> 
using namespace std;

	void manage_easypaisa_account_pin(void);

void my_account(void)
{
	system("cls");
	cout<<" My Account"<<endl;
	cout<<" 1  Manage PIN"<<endl;
	cout<<" 2  CNIC"<<endl;
	cout<<" 3  Bank Transfer"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			system("cls");
			manage_easypaisa_account_pin();
			system("cls");
			//main_system();
			break;
		}
	}
}


void manage_easypaisa_account_pin(void)
{
	system("cls");
	cout<<" Manage Easypaisa Account"<<endl;
	cout<<" 1  Reset Easypaisa Account PIN"<<endl;
	cout<<" 2  CNIC"<<endl;
	cout<<" 3  Bank Transfer"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			system("cls");
			//reset_easypaisa_account_pin();
			system("cls");
			//main_system();
			break;
		}
	}
}
void reset_easypaisa_account_pin(void)//3520286326063
{
	cout<<"Please Enter your 13 Digit CNIC for Verification :";
	cin>>re_self_cnic;
	if(re_self_cnic!=self_cnic)
	{
		cout<<"\nWe Cannot Verify\nYour CNIC. Please\nCall 3737 for\nVerification\n\n";
		system("pause");
		system("cls");
		main_system();
	}
	cout<<"Enter 5-Digit New PIN:";cin>>nmpin;
	cout<<"Confirm 5-Digit New PIN:";cin>>cnmpin;
	if(cnmpin==nmpin)
	{
		mpin=cnmpin;
		cout<<"PIN Reset Kar Diya\nGya Hai.\n";
		system("pause");
	}
	else
	{
		cout<<"The Confirm Pin You Entered Wrong.";
		system("pause");
	}
}
