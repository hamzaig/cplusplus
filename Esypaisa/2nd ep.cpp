///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Header Files                                                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <cstdlib> 
#include <ctime>
#include <windows.h> 
#include <dos.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Functions Declaration                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mobile_load_bundles(void);
void bank_transfer();
void get_data_from_bank_file(long long n);					// get data from bank file
void show_account_information_from_file(void);
void saving_data_in_file(int x);							// Saving Data in file
int account_conformation_from_file(long long n);			//conformation Account from file
void show_account_information_from_file(long long n);		//show account information of account
int digit_calculation(long long x); 						// calculation of digits
int mpin_all(int x);										//MPIN VERIFICATION
int random_number (void);									//random Number
void password(void);
										//main password
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main_system(void);
	void case_1001(void); 									// Main System 1st Function
		void case_8_of_case_1001(void);
		void case_9_of_case_1001(void);
		void case_10_of_case_1001(void);
			void case_1_of_case_10_of_case_1001(void);
			void case_2_of_case_10_of_case_1001(void);
			void case_3_of_case_10_of_case_1001(void);
			void case_4_of_case_10_of_case_1001(void);
			void case_5_of_case_10_of_case_1001(void);
			void case_6_of_case_10_of_case_1001(void);
			void case_7_of_case_10_of_case_1001(void);
	void money_transfer(void);								//Money Transfer Function
		void mobile_account(void);							// Money transfer to mobile accouns
void my_account(void);
	void manage_easypaisa_account_pin(void);
		void reset_easypaisa_account_pin(void);
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Global Variables                                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
string myname="Hamza Ali Khalid";
long long myaccountnumber=3327229422;
int mpin=35202;
int nmpin;
int cnmpin;
int account_balance=10000;
long long self_cnic=3520286326063;
long long re_self_cnic;
string pass;
string rpass;
int fee;
int enter_mpin;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Class Declaration                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class easypaisa
{
	private:
		long long customer_mobile_number;
		long long bank_account_number;
		long long cnic;
		char name[50];
		int amount;
		
		int trxid;
	public :
		void show_account(void) const;
		long long retacno(void) const;
		void mobile_numbers_getdata(void); // mobile accounts get data for storing data in file
		void cnic_numbers_getdata(void);	//cnic numbers data
		void bank_accounts_numbers_getdata(void); //bank account numbers get data 
		void for_easyload_numbers_getdata(void);
		void bank_transfer(string x);
		int mobile_account_money_transfer_getdata(int x);//mobile accounts get data for Send Money
		void other_mobile_accounts_money_transfer_getdata(string x); //other mobile accounts get data for Send Money
		void cnic_transfer(void); //for cnic
		long long retacnobank() const;
		void easy_load(string x,int y,int z);
		void invite_a_friend_getdata(void);
		void enter_my_account_information(void);
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Classes Function                                                       
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												My Account All Function                                                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::enter_my_account_information(void)
{
			cout<<"Enter Your New Mobile Number : ";
			cin>>customer_mobile_number;
			cin.clear();
			cout<<"Please Enter Your Name: ";
			cin.ignore();
			cin.getline(name,40);
			if(digit_calculation(customer_mobile_number)!=10)
			{
				cout<<"Invalid Mobile Number! ";
				system("pause");
				system("cls");	
				mobile_numbers_getdata();		
			}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This is for accessing customer moile number and showing the name of account holder during transaction                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Mobile Accounts input data for store Data in file                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::mobile_numbers_getdata()
{
			cout<<"Enter Invitee Mobile Number : ";
			cin>>customer_mobile_number;
			cin.clear();
			cout<<"Please Enter Name: ";
			cin.ignore();
			cin.getline(name,40);
			if(digit_calculation(customer_mobile_number)!=10)
			{
				cout<<"Invalid Mobile Number! ";
				system("pause");
				system("cls");	
				mobile_numbers_getdata();		
			}				
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												CNIC input data for store Data in file                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::cnic_numbers_getdata()
{
			cout<<"Enter CNIC Number : ";
			cin>>cnic;
			cin.clear();
			if(digit_calculation(customer_mobile_number)!=13)
			{
				cout<<"Invalid Cnic Number! ";
				system("pause");
				system("cls");	
				cnic_numbers_getdata();		
			}		
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Bank Accounts input data for store Data in file                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::bank_accounts_numbers_getdata()
{
			cout<<"Enter Account Number : ";
			cin>>bank_account_number;
			cin.clear();
			cout<<"Enter Name : ";
			cin.ignore();
			cin.getline(name,40);
			if(digit_calculation(bank_account_number)!=15&&digit_calculation(bank_account_number)!=13)
			{
				cout<<"Invalid Account Number! ";
				system("pause");
				system("cls");
				bank_accounts_numbers_getdata();
			}		
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Easyload numbers input data for store Data in file                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::for_easyload_numbers_getdata(void)
{
			cout<<"Enter Mobile Number : ";
			cin>>customer_mobile_number;
			cin.clear();
			if(digit_calculation(customer_mobile_number)!=10)
			{
				cout<<"Invalid Mobile Number! ";
				system("pause");
				system("cls");	
				for_easyload_numbers_getdata();
			}		
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											Easypaisa Mobile Account input data for send Money                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int easypaisa::mobile_account_money_transfer_getdata(int x)
{
		cout<<"Receiver Mobile Number : ";
		cin>>customer_mobile_number;
		cin.clear();
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			mobile_account_money_transfer_getdata(x);
		}
		cout<<"Enter Amount : ";
		cin>>amount;
  		if (cin.fail())
  		{
  			cout << "Amount is in Worng Format" << endl;
			cin.clear();//
			system("Pause");
			system("cls");
			mobile_account_money_transfer_getdata(x);
		}
		if(account_conformation_from_file(customer_mobile_number)==1)
		{
			cout<<"Please Enter 5 Digit PIN to Transfer Rs "<<amount<<" to ";
			show_account_information_from_file(customer_mobile_number);
			cout<<".\nFee 0.00 Exclusive of FED.\n";
			cout<<"Enter MPIN : ";
			cin>>enter_mpin;
			cin.clear();
			mpin_all(enter_mpin);
			if(amount>account_balance)
			{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
			}
			else
			account_balance-=amount;
			trxid=random_number();
			cout<<"Trx ID "<<trxid<<". You have successfully transfered Rs "<<amount<<" to\n"<<customer_mobile_number<<" the fee for this trx is 0.00. Balance "<<account_balance<<".";                               
			cout<<endl;
		}
		else if (account_conformation_from_file(customer_mobile_number)==2)
		{
			cout<<"System Problem Please Try Again Later !!"<<endl;	
		}
		else
		{
			cout<<"There is not Account Available For this Number"<<endl;
		}
			
		system("pause");
		main_system();
		
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											Others Mobile Accounts input data for send Money                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::other_mobile_accounts_money_transfer_getdata(string x) 
	{
		cout<<"Receiver Mobile Number: ";	
		cin>>customer_mobile_number;
		cin.clear();
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			other_mobile_accounts_money_transfer_getdata(x);
		}
		cout<<"Please Enter the Receiver's Account Mobile Number: ";	
		cin>>customer_mobile_number;
		cin.clear();
		if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			other_mobile_accounts_money_transfer_getdata(x);
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
		cout<<"\nDear Customer! You are now\ntransferring Rs. "<<amount<<" to "<<x<<"\nAccount of "<<customer_mobile_number;
		cout<<"\nFee - Exclusive of FED.\n";
		cout<<"To conform enter 5-digit PIN: ";
		cin>>enter_mpin;
		mpin_all(enter_mpin);
		cout<<"\nTrx ID "<<trxid<<". You have sent Rs \n"<<amount<<" to "<<x<<" Account of "<<customer_mobile_number<<".\nThe Fee charged \nis Rs. "<<fee<<". Balance Rs. "<<account_balance;
		cout<<endl<<endl;
		system("pause");
		system("cls");
		main_system();
		
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											CNIC input data for send Money                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											Banks Accounts input data for send Money                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												easyload getdata Function                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void easypaisa::easy_load(string x,int y,int z)
{
	cout<<"Please enter the Mobile Number : ";
	cin>>customer_mobile_number;
	cin.clear();
	if(digit_calculation(customer_mobile_number)!=10)
		{
			cout<<"Invalid Mobile Number! ";
			system("pause");
			system("cls");
			easy_load(x,y,z);
		}
	cout<<"Please Enter Amount Range Between "<<y<<" to "<<z<<" : ";
	cin>>amount;
	if(amount<y)
	{
		cout<<"The Amount is Low From Range";
		system("pause");
			system("cls");
			easy_load(x,y,z);	
	}
	if(amount>z)
	{
		cout<<"The Amount is High From Range";
		system("pause");
			system("cls");
			easy_load(x,y,z);	
	}
	cout<<"Enter Mpin to Confirm Load to "<<customer_mobile_number<<" Rs."<<amount<<" :";
	cin>>enter_mpin;
	mpin_all(enter_mpin);
	if(amount>account_balance)
		{
				cout<<"\nYou Have Insufficent Balance.";
				system("pause");
				main_system();		
		}
		account_balance-=amount;
		
		cout<<"\nTrx ID "<<trxid<<". You have Loaded Rs \n"<<amount<<" to "<<customer_mobile_number<<" With Mobile Num\n92"<<customer_mobile_number
		<<" and your new Balance Rs. "<<account_balance;
		cout<<endl<<endl;
		system("pause");
	
	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Main Function                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	
	
	password();
	
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
	
	
/*//system("color 0a");
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
 
 	password();*/
	
	
	main_system();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Main System                                                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main_system(void)
{
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
	cin.clear();
	switch(selection)//Some functions is made but not implement yet.....
	{
		case 1:
		{
			money_transfer();
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
		case 3:
		{
			cout<<"This Menu Is Under Construction Please Wait! Menus Are Created But Functionality is Remaining.";
			system("pause");
			main_system();
			break;
		}
		case 4:
		{
			cout<<"This Menu Is Under Construction Please Wait!";
			system("pause");
			main_system();
			break;
		}
		case 5:
		{
			cout<<"This Menu Is Under Construction Please Wait!";
			system("pause");
			main_system();
			break;
		}
		case 6:
		{
			my_account();
			system("pause");
			main_system();
			break;
		}
		case 7:
		{
			cout<<"This Menu Is Under Construction Please Wait!";
			system("pause");
			main_system();
			break;
		}
		case 8:
		{
			system("cls");
			cout<<"\nAn SMS has been sent to your number with details.\nAccording to your Antena Location All\nNear By Agents Names and\nAdresses are sent.";
			cout<<endl;
			system("pause");
			main_system();
			break;
		}
		case 9:
		{
			easypaisa ep;
			ep.invite_a_friend_getdata();
			system("pause");
			main_system();
			break;
		}
		case 10:
		{
			system("cls");
			cout<<"\nAn SMS has been sent to your number with details.\nThe Link has Sent after installing App\nYou Will Have Receive 500MB\n";
			system("pause");
			main_system();
			break;
		}
		case 1001://this is for hidden input of accounts details
		{
			case_1001();
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											Mobile Load Options underconstruction..........                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mobile_load_bundles(void)
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											invite a friend Options underconstruction..........                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											Case 1001 Hidden for saving data Main System                               
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void case_1001(void)
{
			system("cls");
			cout<<"Saving Data"<<endl<<endl;
			cout<<"1  Easypaisa Account Data"<<endl;
			cout<<"2  Jazzcash Account Data"<<endl;
			cout<<"3  UBL OMNI Account Data"<<endl;
			cout<<"4  HBL EXPRESS Account Data"<<endl;
			cout<<"5  UPAISA Account Data"<<endl;
			cout<<"6  PAYMAX Account Data"<<endl;
			cout<<"7  CNIC Numbers Data"<<endl;
			cout<<"8  Bank Account Data"<<endl;
			cout<<"9  Mobile Load Data"<<endl;
			int selection;
			cout<<"\nSelect Number to Perform Operation : ";
			cin>>selection;
			switch(selection)
			{
				case 1:
					{
						saving_data_in_file(1);//easypaisa account data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 2:
					{
						saving_data_in_file(2);//Jazzcash account data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 3:
					{
						saving_data_in_file(3);//UBL OMNI account data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 4:
					{
						saving_data_in_file(4);//HBL EXPRESS account data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 5:
					{
						saving_data_in_file(5);//UPAISA account data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 6:
					{
						saving_data_in_file(6);//PAYMAX account data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 7:
					{
						saving_data_in_file(7);//CNIC number data saving in file the 1 arrgument is send for easypaisa
						system("Pause");
						system("cls");
						main_system();
						break;
					}
				case 8:
					{
						case_8_of_case_1001();
					}
				case 9:
					{
						case_9_of_case_1001();
					}
				case 10:
					{
						case_10_of_case_1001();
					}
			}
		}	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void case_8_of_case_1001(void)
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
									saving_data_in_file(8);//these are all paramete send 8 but i will cahnge for futurter functionality
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 2:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 3:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 4:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 5:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 6:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 7:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 8:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 9:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 10:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 11:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 12:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 13:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 14:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 15:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 16:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 17:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 18:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 19:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 20:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 21:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 22:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 23:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 24:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 25:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 26:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}	
								case 27:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 28:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 29:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 30:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
								case 31:
								{
									saving_data_in_file(8);
									system("Pause");
									system("cls");
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void case_9_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  Prepaid Telenor Numbers"<<endl;
						cout<<"2  Prepaid Jazz Numbers"<<endl;
						cout<<"3  Prepaid Zong Numbers"<<endl;
						cout<<"4  Prepaid Ufone Numbers"<<endl;
						cout<<"5  Prepaid Warid Numbers"<<endl;
						cout<<"6  Postpaid Telenor Numbers"<<endl;
						cout<<"7  Postpaid Jazz Numbers"<<endl;
						cout<<"8  Postpaid Zong Numbers"<<endl;
						cout<<"9  Postpaid Ufone Numbers"<<endl;
						cout<<"10 Postpaid Warid Numbers"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
							{
								saving_data_in_file(91);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 2:
							{
								saving_data_in_file(92);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 3:
							{
								saving_data_in_file(93);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 4:
							{
								saving_data_in_file(94);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 5:
							{
								saving_data_in_file(95);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 6:
							{
								saving_data_in_file(96);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 7:
							{
								saving_data_in_file(97);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 8:
							{
								saving_data_in_file(98);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 9:
							{
								saving_data_in_file(99);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
							case 10:
							{
								saving_data_in_file(910);
								system("Pause");
								system("cls");
								main_system();
								break;
							}
						}	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  Electricity"<<endl;
						cout<<"2  Telephone"<<endl;
						cout<<"3  Gas"<<endl;
						cout<<"4  Internet"<<endl;
						cout<<"5  Water"<<endl;
						cout<<"6  Solar"<<endl;
						cout<<"7  Govt Fees/CreditCard Payment"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
							{
								case_1_of_case_10_of_case_1001();
							}
							case 2:
							{
								case_2_of_case_10_of_case_1001();
							}
							case 3:
							{
								case_3_of_case_10_of_case_1001();
							}
							case 4:
							{
								case_4_of_case_10_of_case_1001();
							}
							case 5:
							{
								case_5_of_case_10_of_case_1001();
							}
							case 6:
							{
								case_6_of_case_10_of_case_1001();
							}
							case 7:
							{
								case_7_of_case_10_of_case_1001();
							}
						}
}
void case_1_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  GEPCO"<<endl;
						cout<<"2  HESCO"<<endl;
						cout<<"3  IESCO"<<endl;
						cout<<"4  K-ELECTRIC"<<endl;
						cout<<"5  LESCO"<<endl;
						cout<<"6  MEPCO"<<endl;
						cout<<"7  FESCO"<<endl;
						cout<<"8  PESCO"<<endl;
						cout<<"9  QESCO"<<endl;
						cout<<"10  AJK-BARKIYAT"<<endl;
						cout<<"11  K-E NEW METER BILL"<<endl;
						cout<<"12  BARKIYAT - GILGIT"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(101);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(102);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 3:
								{
									saving_data_in_file(103);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 4:
								{
									saving_data_in_file(104);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 5:
								{
									saving_data_in_file(105);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 6:
								{
									saving_data_in_file(106);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 7:
								{
									saving_data_in_file(107);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 8:
								{
									saving_data_in_file(108);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 9:
								{
									saving_data_in_file(109);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 10:
								{
									saving_data_in_file(1010);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 11:
								{
									saving_data_in_file(1011);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
						}
}
void case_2_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  PTCL"<<endl;
						cout<<"2  SCO"<<endl;
						cout<<"3  SCO Prepaid Load"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(1012);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(1013);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 3:
								{
									saving_data_in_file(1014);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
						}
}
void case_3_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  SNGPL"<<endl;
						cout<<"2  SSGC"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(1015);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(1016);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
						}
}
void case_4_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  WATEEN"<<endl;
						cout<<"2  WI-TRIBE"<<endl;
						cout<<"3  QUBEE"<<endl;
						cout<<"4  PTCL EVO"<<endl;
						cout<<"5  WORLD CALL"<<endl;
						cout<<"6  NAYA TEL"<<endl;
						cout<<"7  TRANSWORLD"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(1017);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(1018);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 3:
								{
									saving_data_in_file(1019);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 4:
								{
									saving_data_in_file(1020);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 5:
								{
									saving_data_in_file(1021);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 6:
								{
									saving_data_in_file(1022);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 7:
								{
									saving_data_in_file(1023);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
						}
}
void case_5_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  KWSB"<<endl;
						cout<<"2  LWASA"<<endl;
						cout<<"3  FWASA"<<endl;
						cout<<"4  RWASA"<<endl;
						cout<<"5  HWASA"<<endl;
						cout<<"6  QWASA"<<endl;
						cout<<"7  GWASA"<<endl;
						cout<<"8  PUBLIC HEALTH ENGINEERING DEPARTMENT (WATER DEPARTMENT) "<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(1024);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(1025);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 3:
								{
									saving_data_in_file(1026);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 4:
								{
									saving_data_in_file(1027);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 5:
								{
									saving_data_in_file(1028);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 6:
								{
									saving_data_in_file(1029);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 7:
								{
									saving_data_in_file(1030);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 8:
								{
									saving_data_in_file(1031);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
						}
}
void case_6_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  BRIGHTER LIGHT"<<endl;
						cout<<"2  ECO ENERGY"<<endl;
						cout<<"3  NIZAM BIJLI"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(1032);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(1033);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 3:
								{
									saving_data_in_file(1034);
									system("Pause");
									system("cls");
									main_system();
									break;
								}		
						}
}
void case_7_of_case_10_of_case_1001(void)
{
						system("cls");
						cout<<"Saving Data"<<endl<<endl;
						cout<<"1  FBR"<<endl;
						cout<<"2  SECP"<<endl;
						cout<<"3  CREDITCARD PAYMENT"<<endl;
						int selection;
						cout<<"\nSelect Number to Perform Operation : ";
						cin>>selection;
						switch(selection)
						{
							case 1:
								{
									saving_data_in_file(1035);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 2:
								{
									saving_data_in_file(1036);
									system("Pause");
									system("cls");
									main_system();
									break;
								}
							case 3:
								{
									saving_data_in_file(1037);
									system("Pause");
									system("cls");
									main_system();
									break;
								}		
						}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    Money Transfer Function                                                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Mobile Account Money transfer Function                                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
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
				ep.mobile_account_money_transfer_getdata(1);
				main_system();
				break;
			}
		case 2:
			{
				string x="Jazzcash";
				system("cls");
				easypaisa ep;
				ep.other_mobile_accounts_money_transfer_getdata(x);
				main_system();
				break;
			}
		case 3:
			{
				string x="UBL OMNI";			
				system("cls");
				easypaisa ep;
				ep.other_mobile_accounts_money_transfer_getdata(x);			
				main_system();
				break;
			}	
		case 4:
			{
				string x="HBL EXPRESS";
				system("cls");
				easypaisa ep;
				ep.other_mobile_accounts_money_transfer_getdata(x);			
				main_system();
				break;
			}
		case 5:
			{
				string x="Upaisa";
				system("cls");
				easypaisa ep;
				ep.other_mobile_accounts_money_transfer_getdata(x);			
				main_system();
				break;
			}
		case 6:
			{
				string x="Paymax";
				system("cls");
				easypaisa ep;
				ep.other_mobile_accounts_money_transfer_getdata(x);			
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Bank Account Money transfer Function                                 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												My Account                                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void my_account(void)
	{
	system("cls");
	cout<<" My Account"<<endl;
	cout<<" 1  Manage PIN"<<endl;
	cout<<" 2  Check Balance"<<endl;
	cout<<" 3  View Account Detail"<<endl;
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
			main_system();
			break;
		}
		case 2:
		{
			system("cls");
			cout<<"Your Account Balance is "<<account_balance<<".00"<<endl;
			system("pause");
			system("cls");
			main_system();
			break;
		}
		case 3:
		{
		
			system("cls");
			cout<<"Your Account Title is "<<myname;
			cout<<",\n'Account Number' is +92"<<myaccountnumber;
			cout<<",\n'Account Status' is ACTIVE.";
			cout<<endl;			
		}
	}
}
void manage_easypaisa_account_pin(void)
{
	system("cls");
	cout<<" Manage Easypaisa Account"<<endl;
	cout<<" 1  Reset Easypaisa Account PIN"<<endl;
	cout<<" 2  Change Easypaisa Account PIN"<<endl;
	cout<<" 00 Back"<<endl;
	int selection;
	cin>>selection;
	switch(selection)
	{
		case 1:
		{
			system("cls");
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
				system("cls");
				main_system();
				break;
		}
		case 2:
		{
			cout<<"Enter 5-digit Old PIN: ";
			cin>>enter_mpin;
			mpin_all(enter_mpin);
			cout<<"Enter 5-Digit New PIN:";cin>>nmpin;
			cout<<"Confirm 5-Digit New PIN:";cin>>cnmpin;
			if(cnmpin==nmpin)
			{
				mpin=cnmpin;
				cout<<"MPIN Change Kar Diya\nGya Hai.\n";
				system("pause");
			}
			else
			{
				cout<<"The Confirm Pin You Entered Wrong.";
				system("pause");
			}	
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  Account Conformation From File                                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int account_conformation_from_file(long long n)
{
	bool found=false;
	easypaisa ep;
	fstream File;
    File.open("easypaisa_account_numbers_data.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		return 2;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
		if(ep.retacno()==n)
		{
			return 1;
			long long pos=(-1)*static_cast<long long>(sizeof(ep));
			File.seekp(pos,ios::cur);//fn1353
			File.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
			found=true;
	    }
    }
    File.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  Account Name Show From File                                                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void show_account_information_from_file(long long n)
{
	bool found=false;
	easypaisa ep;
	fstream File;
    File.open("easypaisa_account_numbers_data.dat", ios::binary|ios::in|ios::out);
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
}

	


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  Get Data From Bank File                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void get_data_from_bank_file(long long n)
{
	bool found=false;
	easypaisa ep;
	fstream File;
    File.open("bank.dat", ios::binary|ios::in|ios::out);
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  Data Saving in Files Function                                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void saving_data_in_file(int x)
{
	easypaisa ep;
	ofstream outFile;
	if(x==1)//easypaisa account
	{
		outFile.open("easypaisa_account_numbers_data.dat",ios::binary|ios::app);
		ep.mobile_numbers_getdata();
	}
	if(x==2||x==3||x==4||x==5||x==6)//other accounts
	{
		outFile.open("other_account_numbers_data.dat",ios::binary|ios::app);
		ep.mobile_numbers_getdata();
	}
	if(x==7)//cnic file
	{
		outFile.open("cnic_numbers_data.dat",ios::binary|ios::app);
		ep.cnic_numbers_getdata();
	}
//bank accounts saving.................................................................................................
	if(x==8)//bank account data
	{
		outFile.open("bank.dat",ios::binary|ios::app);
		ep.bank_accounts_numbers_getdata();
	}
	if(x==63)//My Account Information saving in file
	{
		outFile.open("my_account.dat",ios::binary|ios::app);
		ep.enter_my_account_information();
	}
//.....................................................................................................................
	outFile.write(reinterpret_cast<char *> (&ep), sizeof(easypaisa));
	outFile.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Digit Calculation                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Digit Calculation                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int mpin_all(int x)
{
	try 
	{
		if(x==mpin)
		return 0;
		else
		throw 1;
	}
	catch(int x)
	{
		cout<<"\nYour Easypaisa Account PIN is Invalid! ";
			system("pause");
			system("cls");
			main_system();
			return 0;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Random Number                                                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int random_number (void)
{
	srand((unsigned)time(0)); 
    int random_integer = rand(); 
    return random_integer; 
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												The End....                                                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void password(void)
{
	cout<<"Welcome To Login Screen";
}
