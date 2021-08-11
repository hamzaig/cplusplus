#include <iostream>
using namespace std;
void sum1(int);
int main()
{
	int x;
	cout<<"Enter The Nth Number : ";
	cin>>x;
	cout<<endl;
	sum1(x);
	
}

void sum1(int x)
{
	static int sum=0;
	if(x==0)
		cout<<endl<<sum;
	else
	{
		sum=sum+x;
		sum1(x-1);
	}
}


