#include<iostream>
using namespace std;
int main()
{
	char string[15];
	cout<<"Please Enter Any Characters Limit to 14: ";
	cin.getline(string,15);
	cout<<"You Enter That String that show to limit 10 with write function: ";
	cout.write(string,10);
	cout<<"\nStrings are show with simple cout function with no limit: "<<string;
	
	return 0;
	
}
