#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <windows.h>

using namespace std;
int digit_calculation(long long x);
void main_system(void);
void bank_transfer(void);
int mpin_all(int x);
void money_transfer(void);
	void mobile_account(void);
		void easy_paisa(void);
			void easypaisa_account_transfer(void);

void mobile_load_bundles(void);
	void prepaid_load(void);

void store_data_jazz_loads(void);
void store_data_bank_accounts(void);
void store_data_easypaisa_accounts(void);
void get_data_from_file(long long x);
void get_data_from_bank_file(long long n);
int mpin=35202;
int enter_mpin;
int account_balance=10000;
int trxid=3231;
class easypaisa
{
	private:
		long long customer_mobile_number;
		long long cnic;
		int amount;
		char name[50];
		
		int fee;
		long long bank_account_number;
	public:
		void money_transfer_getdata(void);
			
				void invite_a_friend_getdata(void); //for storing easypaisa account detail
				void invite_a_friend_show_data(void); // for showing easypais account detail
		
		void bank_account_getdata(void); //for storing bank account detail
		
		void account_balance_function(void);
		void show_account()  const;
		long long  retacno() const;
		long long retacnobank() const;
		
		void get_data_other_account(string x); //this is for get data all other mobile accounts money transfer
		void cnic_transfer(void);		  //Cnic Transfer in Class
		void bank_transfer(string x);		  //Bank Transfer in Class
		
		void easy_load(string x,int y,int z); //Prepain Load
		
};
	
	void easypaisa::show_account() const
	{
	  cout<<name;
	}
	long long easypaisa::retacno() const
	{
	return customer_mobile_number;
	}
	long long easypaisa::retacnobank() const
	{
	return bank_account_number;
	}
	
//Money Transfer to easy paisa mobile account
	void easypaisa::money_transfer_getdata()
	{
		cout<<"Receiver Mobile Number : ";
		cin>>customer_mobile_number;
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			money_transfer_getdata();
		}
		cout<<"Enter Amount : ";
		cin>>amount;
		cout<<"Please Enter 5 Digit PIN to Transfer Rs "<<amount<<" to ";
		get_data_from_file(customer_mobile_number);
		cout<<". Fee 0.00 Exclusive of FED.\n";
		cin>>enter_mpin;
		mpin_all(enter_mpin);
			if(amount>account_balance)
			{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
			}
			else
			account_balance-=amount;
			cout<<"Trx ID "<<trxid<<". You have successfully transfered Rs "<<amount<<" to\n"<<customer_mobile_number<<" the fee for this trx is 0.00. Balance "<<account_balance<<".";                               
			cout<<endl;
			system("pause");
			main_system();
	}
//Money Transfer to easy paisa mobile account

//Money Transfer > Mobile Account > Other Account..........................
	void easypaisa::get_data_other_account(string x) 
	{
		cout<<"Receiver Mobile Number: ";	
		cin>>customer_mobile_number;
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			get_data_other_account(x);
		}
		cout<<"Please Enter the Receiver's Account Number: ";	
		cin>>customer_mobile_number;	
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			get_data_other_account(x);
		}
		cout<<"Enter Amount: ";
		cin>>amount;
		if(amount<=1000)
		fee=60;
		else if(amount>1000&&amount<=2500)
		fee=120;
		else if(amount>2500&&amount<=4000)
		fee=180;
		else if(amount>4000&&amount<=6000)
		fee=240;
		else if(amount>6000&&amount<=8000)
		fee=300;
		else if(amount>8000&&amount<=10000)
		fee=350;
		amount=amount+fee;
		if(amount>account_balance)
		{
			
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
		}
		account_balance-=amount;
		cout<<"\nDear Customer! You are now\ntransferring Rs. "<<amount<<" to "<<x<<" Account of "<<customer_mobile_number;
		cout<<" Fee - Exclusive of FED.\n";
		cout<<"To conform enter 5-digit PIN: ";
		cin>>enter_mpin;
		mpin_all(enter_mpin);
		cout<<"\nTrx ID "<<trxid<<". You have sent Rs \n"<<amount<<" to "<<x<<" Account of "<<customer_mobile_number<<" . The Fee charged \nis Rs. "<<fee<<". Balance Rs. "<<account_balance;
		cout<<endl<<endl;
		system("pause");
		system("cls");
		main_system();
		
	}
//Money Transfer > Mobile Account > Other Account..........................

// Cnic Transfer Get Data
	void easypaisa::cnic_transfer(void)
	{
		cout<<"Receiver Mobile No: ";
		cin>>customer_mobile_number;
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			cnic_transfer();
		}
		cout<<"Receiver CNIC : ";
		cin>>cnic;
		if(digit_calculation(cnic)!=13)
		{
			cout<<"Invalid CNIC Number! ";
			system("pause");
			system("cls");
			cnic_transfer();
		}
		cout<<"Enter Amount : ";
		cin>>amount;
		if(amount<=1000)
		fee=60;
		else if(amount>1000&&amount<=2500)
		fee=120;
		else if(amount>2500&&amount<=4000)
		fee=180;
		else if(amount>4000&&amount<=6000)
		fee=240;
		else if(amount>6000&&amount<=8000)
		fee=300;
		else if(amount>8000&&amount<=10000)
		fee=350;
		amount=amount+fee;
		if(amount>account_balance)
		{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
		}
		account_balance-=amount;
		cout<<"Please enter 5-digit PIN: Fee - Exclusive of FED. : ";
		cin>>enter_mpin;
		mpin_all(enter_mpin);
		cout<<"\nTrx ID "<<trxid<<". You have sent Rs \n"<<amount-fee<<" to "<<cnic<<" With Mobile Num\n92"<<customer_mobile_number<<" The Fee is "<<fee<<" and your new Balance Rs. "<<account_balance;
		cout<<endl<<endl;
		system("pause");
	}
// Cnic Transfer Get Data

//for storing bank account detail
void easypaisa::bank_account_getdata()
{
	cin>>bank_account_number;
	cin.ignore();
	cin.getline(name,49);
}
//for storing bank account detail


// bank Transfer Get Data for sending
	void easypaisa::bank_transfer(string x)
	{
		cout<<"Please Enter Complete 14 or 16 digits Account Number in this format:\nBBBBSSSAAAAAAA : ";
		cin>>bank_account_number;
		if(digit_calculation(bank_account_number)!=15&&digit_calculation(bank_account_number)!=13)
		{
			cout<<"Invalid Account Number! ";
			system("pause");
			system("cls");
			bank_transfer(x);
		}
		cout<<"Receiver Mobile No: ";
		cin>>customer_mobile_number;
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			bank_transfer(x);
		}
		cout<<"Enter Amount : ";
		cin>>amount;
		if(amount<=1000)
		fee=60;
		else if(amount>1000&&amount<=2500)//0186007000003823
		fee=120;
		else if(amount>2500&&amount<=4000)
		fee=180;
		else if(amount>4000&&amount<=6000)
		fee=240;
		else if(amount>6000&&amount<=8000)
		fee=300;
		else if(amount>8000&&amount<=10000)
		fee=350;
		amount=amount+fee;
		if(amount>account_balance)
		{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
		}
		account_balance-=amount;
		cout<<"\nDear Customer! You are now\ntransferring Rs. "<<amount-fee<<" to "<<x<<" account\nwith title ";
		get_data_from_bank_file(bank_account_number);
		cout<<" Please\nenter 5-digit PIN. Fee "<<fee<<" Exclusive\nof FED : ";
		cin>>enter_mpin;
		mpin_all(enter_mpin);
		cout<<"\nTrx ID "<<trxid<<". You have sent Rs \n"<<amount-fee<<" to ";
		get_data_from_bank_file(bank_account_number);
		cout<<" in "<<x<<"\nAccount "<<bank_account_number<<". The Fee for this transaction \nis Rs. "<<fee<<". and your new Balance is Rs. "<<account_balance;
		cout<<endl<<endl;
		system("pause");
	}
// bank Transfer Get Data for sending

//invite a friend......................................................
	void easypaisa::invite_a_friend_getdata(void)
	{
		cout<<"Enter Invitee Mobile Number : ";
		cin>>customer_mobile_number;
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			invite_a_friend_getdata();		
		}
		cout<<"Please Enter Name: ";
		cin.ignore();
		cin.getline(name,40);
		cout<<"Please Enter Initial Deposit Amount : ";
		cin>>amount;
		cout<<"Please Enter 5 Digit PIN to invite 92"<<customer_mobile_number<<": ";
		cin.ignore();
		cin>>enter_mpin;
		mpin_all(enter_mpin);
			if(amount>account_balance)
			{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
			}
			else
			account_balance-=amount;
			cout<<"\n\nYour Invitation is Send and\nAccepted by Your Friend\nNumber : "<<customer_mobile_number<<" and Name is "<<name<<".";
			cout<<"\nYour Remaining Balance is = "<<account_balance;		
	}
	void easypaisa::invite_a_friend_show_data(void)
	{
		cout<<"\n\nYour Invitation is Send and\nAccepted by Your Friend\nNumber : "<<customer_mobile_number<<" and Name is "<<name<<".";
		cout<<"\nYour Remaining Balance is = "<<account_balance;
	}
//invite a friend........................................................	

void easypaisa::easy_load(string x,int y,int z)
{
	cout<<"Please enter the Mobile Number : ";
	cin>>customer_mobile_number;
	if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			easy_load(x,y,z);
		}
	
}

int main()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 45;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	
	keybd_event(VK_MENU,0x36,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
	
	
//system("color 0a");
 cout<<"\n\n\n\t\t   Please Wait While Loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
 }

 system("cls");
	main_system();	
}
void main_system(void)
{
	easypaisa ep;
	system("cls");
	cout<<" Easypaisa"<<endl<<endl;
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
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		case 2:
		{
			mobile_load_bundles();
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		case 8:
		{
			cout<<"\nAn SMS has been sent to your number with details.\nAccording to your Antena Location All\nNear By Agents Names and\nAdresses are sent.";
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		case 9:
		{
			system("cls");
			store_data_easypaisa_accounts();
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		case 10:
		{
			cout<<"\nAn SMS has been sent to your number with details.\nThe Link has Sent after installing App\nYou Will Have Receive 500MB\n";
			system("pause");
			main_system();
			break;
		}
		case 101:
		{
			system("cls");
			store_data_bank_accounts();
			cout<<endl;
			system("pause");
			main_system();
			break;
			
			int selc;
			cin>>selc;
			switch(selc)
			{
				
			}
		}
		case 102:
		{
			system("cls");
			store_data_bank_accounts();
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		default:
		{
			cout<<"\nYou Select Invalid Number\n!";
			system("pause");
			main_system();
			break;
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
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			system("cls");
			mobile_account();
			system("cls");
			main_system();
			break;
		}
		case 2:
		{
			system("cls");
			easypaisa ep;
			ep.cnic_transfer();
			system("cls");
			main_system();
			break;
		}
		case 3:
		{
			system("cls");
			bank_transfer();
			system("cls");
			main_system();
			break;
		}
		case 00:
		{
				main_system();
				system("cls");
				break;
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
				system("cls");
				easypaisa ep;
				ep.money_transfer_getdata();
				main_system();
				break;
			}
		case 2:
			{
				string x="Jazzcash";
				system("cls");
				easypaisa ep;
				ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 3:
			{
				string x="UBL OMNI";			
				system("cls");
				easypaisa ep;
				ep.get_data_other_account(x);			
				main_system();
				break;
			}	
		case 4:
			{
				string x="HBL EXPRESS";
				system("cls");
				easypaisa ep;
				ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 5:
			{
				string x="Upaisa";
				system("cls");
				easypaisa ep;
				ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 6:
			{
				string x="Paymax";
				system("cls");
				easypaisa ep;
				ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 00:
			{
				money_transfer();			
				break;
			}
		default:
			{
				cout<<"\nYou Select Invalid Number\n!";
				system("pause");
				main_system();
				break;
			}
		
		}
	}
	void bank_transfer()
	{
			system("cls");
			cout<<" 1  Allied Bank Limited"<<endl;
			cout<<" 2  Askari Commercial Bank Limited"<<endl;
			cout<<" 3  Apna Microfinance Bank"<<endl;
			cout<<" 4  Al Baraka Islamic Bank Limited"<<endl;
			cout<<" 5  Bank AlFalah Limited"<<endl;
			cout<<" 6  Bank Al Habib Limited"<<endl;
			cout<<" 7  Burj Bank Limited"<<endl;
			cout<<" 8  Bank Islami Pakistan Limited"<<endl;
			cout<<" 9  Bank of Punjab"<<endl;
			cout<<" 10 Citi Bank"<<endl;
			cout<<" 11 Dubai Islamic Bank"<<endl;
			cout<<" 12 Faysal Bank Limited"<<endl;
			cout<<" 13 FINCA"<<endl;
			cout<<" 14 Habib Bank Limited"<<endl;
			cout<<" 15 Habib Metropolitan Bank"<<endl;
			cout<<" 16 Js Bank"<<endl;
			cout<<" 17 KASB Bank"<<endl;
			cout<<" 18 Muslim Commercial Bank"<<endl;
			cout<<" 19 Meezan Bank"<<endl;
			cout<<" 20 Mobilink Microfinance Bank"<<endl;
			cout<<" 21 NIB Bank "<<endl;
			cout<<" 22 NRSP Bank"<<endl;
			cout<<" 23 Samba Bank"<<endl;
			cout<<" 24 Soneri Bank Limited"<<endl;
			cout<<" 25 Standard Chartered Bank"<<endl;
			cout<<" 26 Silk Bank"<<endl;
			cout<<" 27 Sindh Bank"<<endl;
			cout<<" 28 Summit Bank"<<endl;
			cout<<" 29 Telenor Microfinance Bank"<<endl;
			cout<<" 30 U Microfinance Bank"<<endl;
			cout<<" 31 United Bank Limited"<<endl;
			cout<<" 00 Back"<<endl;
			int selection;
			cin>>selection;
			switch(selection)
			{
				case 1:
				{
					string x="ABL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 2:
				{
					string x="ACBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 3:
				{
					string x="AMB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 4:
				{
					string x="ABIBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 5:
				{
					string x="BAFL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 6:
				{
					string x="BAHL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 7:
				{
					string x="BBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 8:
				{
					string x="BIPL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 9:
				{
					string x="BOP";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 10:
				{
					string x="CB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 11:
				{
					string x="DIB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 12:
				{
					string x="FBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 13:
				{
					string x="FINCA";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 14:
				{
					string x="HBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 15:
				{
					string x="HMB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 16:
				{
					string x="JSB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 17:
				{
					string x="KASBB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 18:
				{
					string x="MCB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 19:
				{
					string x="MB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 20:
				{
					string x="MFB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 21:
				{
					string x="NIB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 22:
				{
					string x="NRSP";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 23:
				{
					string x="SAMBA";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 24:
				{
					string x="SBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 25:
				{
					string x="SCB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 26:
				{
					string x="SILK BANK";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 27:
				{
					string x="SINDH BANK";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 28:
				{
					string x="SUMMIT BANK";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 29:
				{
					string x="TMB";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 30:
				{
					string x="U MICRO BANK";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 31:
				{
					string x="UBL";
					system("cls");
					easypaisa ep;
					ep.bank_transfer(x);
					main_system();
					break;
				}
				case 00:
				{
					system("cls");
					money_transfer();
					break;
				}
				default:
				{
					cout<<"\nYou Select Invalid Number\n!";
					system("pause");
					main_system();
					break;
				}
		
			}
	}	
void mobile_load_bundles(void)
{
	system("cls");
	cout<<" Mobile Load & Bundles:"<<endl;
	cout<<" 1  Prepaid"<<endl;
	cout<<" 2  Postpaid"<<endl;
	cout<<" 3  Telenor Bundles"<<endl;
	cout<<" 4  Zong Bundles"<<endl;
	cout<<" 5  Ufone Bundles"<<endl;
	cout<<" 6  Telenor Mobile Broadband"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			system("cls");
			prepaid_load();
			system("cls");
			main_system();
			break;
		}
		case 2:
		{
			system("cls");
			main_system();
			break;
		}
		case 3:
		{
			system("cls");
			main_system();
			break;
		}
		case 4:
		{
			system("cls");
			main_system();
			break;
		}
		case 5:
		{
			system("cls");
			main_system();
			break;
		}
		case 6:
		{
			system("cls");
			main_system();
			break;
		}
		case 00:
		{
				main_system();
				system("cls");
				break;
		}
	}	
}
	void prepaid_load(void)
	{
	system("cls");
	cout<<" 1  Telenor"<<endl;
	cout<<" 2  Jazz"<<endl;
	cout<<" 4  Zong"<<endl;
	cout<<" 5  Ufone"<<endl;
	cout<<" 6  Warid"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			system("cls");
			easypaisa ep;
			ep.easy_load("Telenor",30,10000);
			system("cls");
			main_system();
			break;
		}
		case 2:
		{
			system("cls");
			easypaisa ep;
			ep.easy_load("Jazz",20,5000);
			system("cls");
			main_system();
			break;
		}
		case 3:
		{
			system("cls");
			easypaisa ep;
			ep.easy_load("Zong",50,10000);
			system("cls");
			main_system();
			break;
		}
		case 4:
		{
			system("cls");
			easypaisa ep;
			ep.easy_load("Ufone",200,5000);
			system("cls");
			main_system();
			break;
		}
		case 5:
		{
			system("cls");
			easypaisa ep;
			ep.easy_load("Warid",100,2000);
			system("cls");
			main_system();
			break;
		}
		case 00:
		{
				main_system();
				system("cls");
				break;
		}
	}	
	}
void get_data_from_file(long long n)
{
	bool found=false;
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
		if(ep.retacno()==n)
		{
			ep.show_account();
			long long pos=(-1)*static_cast<long long>(sizeof(ep));
			File.seekp(pos,ios::cur);//fn1353
			File.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
			found=true;
	       }
         }
    File.close();
	if(found==false)
		{
			system("cls");
			cout<<"Record Not Found:";
			system("pause");
			main_system();
	}
}
void get_data_from_bank_file(long long n)
{
	bool found=false;
	easypaisa ep;
	fstream File;
    File.open("bank_accounts.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
		if(ep.retacnobank()==n)
		{
			ep.show_account();
			long long pos=(-1)*static_cast<long long>(sizeof(ep));
			File.seekp(pos,ios::cur);//fn1353
			File.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
			found=true;
	       }
         }
    File.close();
	if(found==false)
	{
			system("cls");
			cout<<"Record Not Found:";
			system("pause");
			main_system();
	}
}

void store_data_easypaisa_accounts(void)
{
		easypaisa ep;
		ofstream outFile;
		outFile.open("accounts.dat",ios::binary|ios::app);
		ep.invite_a_friend_getdata();
		outFile.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
		outFile.close();
}
void store_data_bank_accounts(void)
{
		easypaisa ep;
		ofstream outFile;
		outFile.open("bank_accounts.dat",ios::binary|ios::app);
		ep.bank_account_getdata();
		outFile.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
		outFile.close();
}	



int digit_calculation(long long x)
{
    long long n=x;
    int count = 0;
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    return count;
}
int mpin_all(int x)
{
	
	if(x==mpin)   
    {
    	return 0;
	}           
	else 
	{        
    	cout<<"\nYour Easypaisa Account PIN is Invalid! ";
			system("pause");
			main_system();      
	}
}

