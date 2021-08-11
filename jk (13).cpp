#include <iostream>
using namespace std;
int main()
{
	float x=0,r=0;
	cout<<"Enter You Want Amount of Balance : ";cin>>x;
	r=(100*x)/76.9;
	cout<<"Requiered Amount is : "<<r;	
	cout<<"\nPlease Select Your Sim If You Take Advance\n1. Jazz\n2. Warid\n3. Ufone\n4. Zong\n5. Telenor";
	int h;
	cout<<"\nSelect A Number From 1 to 5 to Select Sim : ";cin>>h;
	switch(h)
	{
		case 1:
			{
				cout<<"Jazz Advance is Rs.20 and Tax is 4.40 After Advance Deduction Remaing Balance is "<<r+24.729;
				break;
			}
		case 2:
			{
				cout<<"Ufone Advance is Rs.20 and Tax is 4.40 After Advance Deduction Remaing Balance is "<<r+31.729;
				break;
			}
		case 3:
			{
				cout<<"Ufone Advance is Rs.20 and Tax is 4.40 After Advance Deduction Remaing Balance is "<<r+31.729;
				break;
			}
		case 4:
			{
				cout<<"Ufone Advance is Rs.20 and Tax is 4.40 After Advance Deduction Remaing Balance is "<<r+31.729;
				break;
			}
		case 5:
			{
				cout<<"Ufone Advance is Rs.20 and Tax is 4.40 After Advance Deduction Remaing Balance is "<<r+31.729;
				break;
			}	
	};
}

