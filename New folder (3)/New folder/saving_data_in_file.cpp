#pragma once
#include "2nd ep.cpp"
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
