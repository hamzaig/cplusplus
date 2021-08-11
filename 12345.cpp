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
