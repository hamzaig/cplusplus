#include <iostream>
using namespace std;
int main ()
{
	int n,sum=0,c,value;
	cout<<"Enter The Number of Integer You Want to Add\n";
	cin>>n;
	cout<<"Enter "<<n<<" Integers"<<"\n";
	for(c=1;c<=10;c++)
	{
		cin>>value;
		sum=sum+value;
	}
	cout<<"Sum of Entered Integers = "<<sum<<"\n";
	
	return 0;
}
