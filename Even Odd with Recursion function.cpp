#include <iostream>
using namespace std;
int eo(int);
int main()
{
	int n;
	cin>>n;
	(eo(n))? cout<<"it is a odd number": cout<<"it is a even number";
}

int eo(int n)
{
	if(n==1)
	 return 1;
	else if(n==0)
	 return 0;
	else if(n<0)
		return eo(-n);//maza a gya kiya baat kiya logic create ki ha
	else 
		return eo(n-2);
}
