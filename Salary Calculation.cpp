#include <iostream>
using namespace std;
int main()
{
	int yos,sal;
	char qual,gender;
	cout<<"Please Enter Your Gender\n";
	cin>>gender;
	cout<<"Please Enter Your Year of Service\n";
	cin>>yos;
	cout<<"Please Enter Your Qualification\n";
	cin>>qual;
		if (gender=='m' && yos>=10 && qual=='p')
			cout<<"Your Salary Is 15000";
		else
	{
		if ((gender=='m' && yos>=10 && qual=='g')||(gender=='m' && yos<10 && qual=='p')||(gender=='f' && yos<10 && qual=='p'))
			cout<<"Your Salary Is 10000";
		else
		{
		if (gender=='m' && yos<10 && qual=='g')
			cout<<"Your Salary Is 7000";
		else
		{
		if (gender=='f' && yos>=10 && qual=='p')
			cout<<"Your Salary Is 12000";
		else
		{
		if (gender=='f' && yos>=10 && qual=='g')
			cout<<"Your Salary Is 9000";
		else
		{
		if (gender=='f' && yos<10 && qual=='g')
			cout<<"Your Salary Is 6000";
		}
		}
		}
			
		}
	}
	
		
		
}
