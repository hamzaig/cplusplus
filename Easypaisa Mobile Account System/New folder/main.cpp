
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

