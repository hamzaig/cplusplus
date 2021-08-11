
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		case : {
			break;
		}
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Header Files                                                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <cstdlib> 
#include <ctime> 
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Functions Declaration                                                  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void saving_data_in_file(int x);							// Saving Data in file
int account_conformation_from_file(long long n);			//conformation Account from file
void show_account_information_from_file(long long n);		//show account information of account
int digit_calculation(long long x); 						// calculation of digits
int mpin_all(int x);										//MPIN VERIFICATION
int random_number (void);									//random Number
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main_system(void); 									// Main System 1st Function
	void money_transfer(void);								//Money Transfer Function
		void mobile_account(void);							// Money transfer to mobile accouns
void my_account(void);
	void manage_easypaisa_account_pin(void);
		void reset_easypaisa_account_pin(void);
void no_6(void);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Global Variables                                                     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int mpin=35202;
int nmpin;
int cnmpin;
int account_balance=10000;
long long self_cnic=3520286326063;
long long re_self_cnic;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Class Declaration                                                      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class easypaisa
{
	private:
		long long customer_mobile_number;
		char name[50];
		int amount;
		int enter_mpin;
		int trxid;
	public :
		void show_account(void) const;
		long long retacno(void) const;
		void mobile_numbers_getdata(); // mobile accounts get data for storing data in file
		int mobile_account_money_transfer_getdata(int x);//mobile accounts get data for Send Money
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Classes Function                                                       
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Mobile Accounts input data for store Data in file                   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void easypaisa::mobile_numbers_getdata()
{
			cout<<"Enter Invitee Mobile Number : ";
			cin>>customer_mobile_number;
			if(digit_calculation(customer_mobile_number)!=10)
			{
				cout<<"Invalid Mobile Number! ";
				system("pause");
				system("cls");
				mobile_numbers_getdata();		
			}
			cout<<"Please Enter Name: ";
			cin.ignore();
			cin.getline(name,40);		
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												Mobile Accounts input data for send Money                           
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int easypaisa::mobile_account_money_transfer_getdata(int x)
{
		cout<<"Receiver Mobile Number : ";
		cin>>customer_mobile_number;
		cin.clear();
		cin.ignore(10,'\n');
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
				cin.ignore(10,'\n');
				system("Pause");
				system("cls");
				mobile_account_money_transfer_getdata(x);
		}
    	
		if(account_conformation_from_file(customer_mobile_number)==1)
		{
			cout<<"Please Enter 5 Digit PIN to Transfer Rs "<<amount<<" to ";
			show_account_information_from_file(customer_mobile_number);
			cout<<". Fee 0.00 Exclusive of FED.\n";
			cin>>enter_mpin;
			cin.clear();
			cin.ignore(10,'\n');
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
//												Main Function                                                          
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
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
	cin.clear();//
	cin.ignore(10,'\n');	
	switch(selection)
	{
		case 1:
		{
			money_transfer();
			system("pause");
			break;
			main_system();
		}
		case 6:
		{
			my_account();
			system("pause");
			break;
			main_system();
		}
		case 1001:
		{
			system("cls");
			cout<<"Saving Data"<<endl<<endl;
			cout<<"1  Easypaisa Account Data"<<endl;
			int selection;
			cout<<"\nSelect Number to Perform Operation : ";
			cin>>selection;
			switch(selection)
			{
				case 1:
					{
						saving_data_in_file(1);//easypaisa account data saving in file the 1 arrgument is send for easypaisa
					}
			}
			default:
			{
				cout << "\nYour Input Is Worng" << endl;
				system("Pause");
				system("cls");
				main_system();
				}	
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
		//	ep.cnic_transfer();
			system("cls");
			main_system();
			break;
		}
		case 3:
		{
			system("cls");
		//	bank_transfer();
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
			//	ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 3:
			{
				string x="UBL OMNI";			
				system("cls");
				easypaisa ep;
			//	ep.get_data_other_account(x);			
				main_system();
				break;
			}	
		case 4:
			{
				string x="HBL EXPRESS";
				system("cls");
				easypaisa ep;
			//	ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 5:
			{
				string x="Upaisa";
				system("cls");
				easypaisa ep;
			//	ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 6:
			{
				string x="Paymax";
				system("cls");
				easypaisa ep;
			//	ep.get_data_other_account(x);			
				main_system();
				break;
			}
		case 00:
			{
			//	money_transfer();			
				break;
			}
		default:
			{
				cout<<"\nYou Select Invalid Number\n!";
				system("pause");
			//	main_system();
				break;
			}
		
		}
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												My Account                                
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void no_6(void)
{
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
			main_system();
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
			reset_easypaisa_account_pin();
			system("cls");
			main_system();
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
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
//											  Data Saving in Files Function                                            
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void saving_data_in_file(int x)
{
	easypaisa ep;
	ofstream outFile;
	if(x==1)
	{
		outFile.open("easypaisa_account_numbers_data.dat",ios::binary|ios::app);
		ep.mobile_numbers_getdata();
	}
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
