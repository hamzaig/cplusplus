#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

int digit_calculation(long long x);

void main_system(void);

int mpin_all(int x);

void money_transfer(void);
	void mobile_account(void);
		void easy_paisa(void);
			void easypaisa_account_transfer(void);
			void bank_transfer(void);
		

void store_data_accounts(void);
void get_data_from_file(long long x);


int mpin=35202;
int enter_mpin;
int account_balance=10000;



class easypaisa
{
	private:
		long long customer_mobile_number;
		long long cnic;
		int amount;
		char name[50];
		int trxid;
		int fee;
	public:
		void money_transfer_getdata(void);
			void initilize_data(void);
				void invite_a_friend_getdata(void);
				void invite_a_friend_show_data(void);
		void account_balance_function(void);
		void show_account()  const;
		long long  retacno() const;		
		void get_data_other_account(void); //this is for get data all other mobile accounts money transfer
		void cnic_transfer(void);		  //Cnic Transfer in Class
		
};
	
	void easypaisa::show_account() const
	{
	  cout<<name;
	}
	long long easypaisa::retacno() const
	{
	return customer_mobile_number;
	}
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
//Money Transfer > Mobile Account > Other Account..........................
	void easypaisa::get_data_other_account(void) 
	{
		cout<<"Receiver Mobile Number: ";	
		cin>>customer_mobile_number;
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			get_data_other_account();
		}
		cout<<"Please Enter the Receiver's Account Number: ";	
		cin>>customer_mobile_number;	
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			get_data_other_account();
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
		cout<<"\nDear Customer! You are now\ntransferring Rs. "<<amount<<" to "<<customer_mobile_number;
		cout<<" Fee - Exclusive of FED.\n";
		cout<<"To conform enter 5-digit PIN: ";
		cin>>enter_mpin;
		mpin_all(enter_mpin);
		cout<<"\nTrx ID "<<trxid<<". You have sent Rs \n"<<amount<<" to "<<customer_mobile_number<<" . The Fee charged \nis Rs. "<<fee<<". Balance Rs. "<<account_balance;
		cout<<endl<<endl;
		system("pause");
		
	}
//Money Transfer > Mobile Account > Other Account..........................

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

	
int main()
{
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
			break;
		}
		case 8:
		{
			cout<<"\nAn SMS has been sent to your number with details.\nAccording to your Antena Location All\nNear By Agents Names and\nAdresses are sent.";
			break;
		}
		case 9:
		{
			easypaisa ep;
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
			break;
		}
		case 2:
		{
			system("cls");
			easypaisa ep;
			ep.cnic_transfer();
			main_system();
			break;
		}
		case 3:
		{
			system("cls");
			bank_transfer();
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
				system("cls");
				easypaisa ep;
				ep.get_data_other_account();			
				main_system();
				break;
			}
		case 3:
			{
				system("cls");
				easypaisa ep;
				ep.get_data_other_account();			
				main_system();
				break;
			}	
		case 4:
			{
				system("cls");
				easypaisa ep;
				ep.get_data_other_account();			
				main_system();
				break;
			}
		case 5:
			{
				system("cls");
				easypaisa ep;
				ep.get_data_other_account();			
				main_system();
				break;
			}
		case 6:
			{
				system("cls");
				easypaisa ep;
				ep.get_data_other_account();			
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
		
		default:
				{
					cout<<"\nYou Select Invalid Number\n!";
					system("pause");
					main_system();
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

