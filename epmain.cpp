#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void main_system(void);
void money_transfer(void);
void mobile_account(void);
void easy_paisa(void);




class easypaisa
{
	private:
		long customer_mobile_number;
		int amount;
		char name[50];
	public:
		void initilize_data(void);
		void invite_a_friend_getdata(void);
		void invite_a_friend_show_data(void);
};
	void easypaisa::initilize_data(void)
	{
		customer_mobile_number=000;
		strcpy(name,"New Customer");
		amount=0;
	}
	
	void easypaisa::invite_a_friend_getdata(void)
	{
		cout<<"Please Enter Number : ";
		cin>>customer_mobile_number;
		cout<<"Please Enter Name";
		cin.ignore();
		cin.getline(name,40);
		cout<<"Please Enter Initial Deposit Amount";
		cin>>amount;
	}
	
	void easypaisa::invite_a_friend_show_data(void)
	{
		cout<<"\n\nYour Invitation is Send and Accepted by Your Friend\n Number : "<<customer_mobile_number<<" and Name is "<<name;
		
	}



int main()
{
	main_system();
	
}
void main_system(void)
{
	easypaisa ep;
	system("cls");
	cout<<" Easypaisa"<<endl;
	cout<<" 1  Money Transfer"<<endl;
	cout<<" 2  Mobile Load & Bundle"<<endl;
	cout<<" 3  Bill Payments"<<endl;
	cout<<" 4  Payments"<<endl;
	cout<<" 5  Till Payments"<<endl;
	cout<<" 6  My Account"<<endl;
	cout<<" 7  Loans"<<endl;
	cout<<" 8  Nearby Agent"<<endl;
	cout<<" 9  Invite a Friend"<<endl;
	cout<<" 10 500MB Gift On Easypaisa App"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			money_transfer();
			break;
		}
			case 9:
		{
			easypaisa ep;
			ep.initilize_data();
			ep.invite_a_friend_getdata();
			ep.invite_a_friend_show_data();	
		}
	}
}
void money_transfer(void)
{
	system("cls");
	cout<<" Select Transfer Type"<<endl;
	cout<<" 1  Mobile Account"<<endl;
	cout<<" 2  CNIC"<<endl;
	cout<<" 3  Bank Transfer"<<endl;
	cout<<" 4  Telenor Bank"<<endl;
	cout<<" 5  Kissan"<<endl;
	cout<<" 6  International Remittance"<<endl;
	cout<<" 7  Favorite"<<endl;
	cout<<" 8  Free Money Transfer on App"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			mobile_account();
		}
	
	}
}
void mobile_account(void)
{
	system("cls");
	cout<<" 1  Easypaisa"<<endl;
	cout<<" 2  Jazzcash"<<endl;
	cout<<" 3  UBL OMNI"<<endl;
	cout<<" 4  HBL Express"<<endl;
	cout<<" 5  Upaisa"<<endl;
	cout<<" 6  Paymax"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		
	}
}


