#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int digit_calculation(int x);

void main_system(void);
void money_transfer(void);
void mobile_account(void);
void easy_paisa(void);
void easypaisa_account_transfer(void);
void store_data_accounts(void);
void get_data_from_file(int x);

int account_balance=10000;


class easypaisa
{
	private:
		int customer_mobile_number;
		int amount;
		char name[50];
		int mpin;
		int enter_mpin;
		
	public:
		
		void money_transfer_getdata(void);
		void initilize_data(void);
		void invite_a_friend_getdata(void);
		void invite_a_friend_show_data(void);
		int  mpin_vaildity(int);
		void account_balance_function(void);
		void show_account() ;
		int  retacno() const;
};
	void easypaisa::show_account() 
	{
	cout<<name;
	}
	int easypaisa::retacno() const
	{
	return customer_mobile_number;
	}
	void easypaisa::money_transfer_getdata()
	{
		cout<<"Receiver Mobile Number : ";
		cin>>customer_mobile_number;
		//if(digit_calculation(customer_mobile_number)!=10)
		//{
		//	cout<<"Invalid Mobile Number! ";
		//	system("pause");
		//	system("cls");
		//	money_transfer_getdata();
		//}
		cout<<"Enter Amount : ";
		cin>>amount;
		cout<<"Please Enter 5 Digit PIN to Transfer Rs "<<amount<<": ";
		get_data_from_file(customer_mobile_number);
		cin>>enter_mpin;
			if(enter_mpin!=mpin)
			 mpin_vaildity(enter_mpin);
			if(amount>account_balance)
			{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
			}
			else
			account_balance-=amount;
	}
	void easypaisa::initilize_data(void)
	{
		customer_mobile_number=000;
		strcpy(name,"New Customer");
		amount=0;
	}
	void easypaisa::invite_a_friend_getdata(void)
	{
		cout<<"Enter Invitee Mobile Number : ";
		cin>>customer_mobile_number;
		//if(digit_calculation(customer_mobile_number)!=10)
		//{
		//	cout<<"Invalid Mobile Number! ";
		//	system("pause");
		//	system("cls");
		//	invite_a_friend_getdata();
		//}
		
		cout<<"Please Enter Name: ";
		cin.ignore();
		cin.getline(name,40);
		cout<<"Please Enter Initial Deposit Amount : ";
		cin>>amount;
		cout<<"Please Enter 5 Digit PIN to invite 92"<<customer_mobile_number<<": ";
		cin.ignore();
		cin>>enter_mpin;
			if(enter_mpin!=mpin)
			 mpin_vaildity(enter_mpin);
			if(amount>account_balance)
			{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
			}
			else
			account_balance-=amount;		
	}
	void easypaisa::invite_a_friend_show_data(void)
	{
		cout<<"\n\nYour Invitation is Send and\nAccepted by Your Friend\nNumber : "<<customer_mobile_number<<" and Name is "<<name<<".";
		cout<<"\nYour Remaining Balance is = "<<account_balance;
	}
	
	int easypaisa::mpin_vaildity(int x)
	{
		mpin=12345;
		try
		{
			if(enter_mpin==mpin)
			 return 0;
			else
			throw 1;
		}
		catch(int)
		{
			cout<<"Your Easypaisa Account PIN is Invalid! ";\
			system("pause");
			main_system();
		}
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
	cout<<"\nSelect Number to Perform Operation : ";
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			money_transfer();
			break;
		}
		case 8:
		{
			cout<<"\nAn SMS has been sent to your number with details.\nAccording to your Antena Location All\nNear By Agents Names and\nAdresses are sent.";
			break;
		}
		case 9:
		{
			system("cls");
			store_data_accounts();
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		case 10:
		{
			cout<<"\nAn SMS has been sent to your number with details.\nThe Link has Sent after installing App\nYou Will Have Receive 500MB\n";
			break;
		}
		default:
		{
			cout<<"\nYou Select Invalid Number\n!";
			system("pause");
			main_system();
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
		case 1:
			{
				easypaisa_account_transfer();
			}
	}
}
void easypaisa_account_transfer(void)
{
	easypaisa ep;
	ep.money_transfer_getdata();		
}
void get_data_from_file(int x)
{
	bool found=true;
	easypaisa ep;
	fstream File;
    File.open("accounts.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
		if(ep.retacno()==x)
		{
			ep.show_account();
			int pos=(-1)*static_cast<int>(sizeof(ep));
			File.seekp(pos,ios::cur);//fn1353
			File.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
			found=true;
	       }
         }
    File.close();
	if(found==false)
	cout<<"\n\n\t\t\tRecord Not Found ";
}
void store_data_accounts(void)
	{
		easypaisa ep;
		ofstream outFile;
		outFile.open("accounts.dat",ios::binary|ios::app);
		ep.invite_a_friend_getdata();
		outFile.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
		outFile.close();
	}
int digit_calculation(int x)
{
    int n=x;
    int count = 0;
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    return count;
}

