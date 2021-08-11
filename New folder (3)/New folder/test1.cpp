#include <iostream>
#include <limits>
using namespace std;
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
void mobile_numbers_getdata()
{
			long long customer_mobile_number;
			char name[50];
			cout<<"Enter Invitee Mobile Number : ";
			cin>>customer_mobile_number;
			cin.clear();
			cin.ignore(10,'\n');
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

int main()
{
	mobile_numbers_getdata();
}
