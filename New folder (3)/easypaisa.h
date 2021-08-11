#pragma once

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


