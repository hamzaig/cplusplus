

#include <iostream>
using namespace std;

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

