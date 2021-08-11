#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x%9==0)
		cout<<"9";
	else 
		cout<<(x%9);
}
// if remainder of any number is zero then the last digit sum is 9 and 
// if the remainder of any number is non zero then the remainder is the last sum number...........
